#include "SigCheck.h"
#include "sfse_common/Utilities.h"
#include "sfse_common/Log.h"
#include "sfse_common/Errors.h"
#include <Windows.h>
#include <cstring>
#include <vector>

// no, plugins will not need signature checks ever
// this exists to prevent misuse (by malware) of one of the loaders
// locally built loaders will not be signed and will pass this check on everything

// use wintrust for authenticode validation
// use wincrypt for examining the cert

#include <WinTrust.h>
#include <SoftPub.h>
#include <wincrypt.h>

class FileCertVerifier
{
public:
	bool verify(const WCHAR * path);

	bool noSignature() const;
	bool trusted() const;

	const std::vector <u8> & serial() const { return m_serial; }

private:
	bool getLeafCertSerial(const WCHAR * path, std::vector <u8> * outSerial) const;

	LONG m_trustResult;
	DWORD m_trustError;

	std::vector <u8> m_serial;
};

bool FileCertVerifier::verify(const WCHAR * path)
{
	WINTRUST_FILE_INFO fileInfo = {};
	fileInfo.cbStruct = sizeof(fileInfo);
	fileInfo.pcwszFilePath = path;

	// authenticode verify, save data in hWVTStateData
	WINTRUST_DATA winTrustData = {};
	winTrustData.cbStruct = sizeof(winTrustData);
	winTrustData.dwUIChoice = WTD_UI_NONE;
	winTrustData.fdwRevocationChecks = WTD_REVOKE_NONE;
	winTrustData.dwUnionChoice = WTD_CHOICE_FILE;
	winTrustData.pFile = &fileInfo;
	winTrustData.dwStateAction = WTD_STATEACTION_VERIFY;
	winTrustData.dwProvFlags = 0;

	GUID authenticodeVerify = WINTRUST_ACTION_GENERIC_VERIFY_V2;

	// validation status is stored in these result codes
	m_trustResult = WinVerifyTrust(nullptr, &authenticodeVerify, &winTrustData);
	m_trustError = GetLastError();

	_MESSAGE("WinVerifyTrust: %08X %08X %S", m_trustResult, m_trustError, path);

	// dispose hWVTStateData
	winTrustData.dwStateAction = WTD_STATEACTION_CLOSE;
	WinVerifyTrust(nullptr, &authenticodeVerify, &winTrustData);

	// anything else is an error
	if(!noSignature() && !trusted())
	{
		_ERROR("WinVerifyTrust failed: %08X %08X", m_trustResult, m_trustError);
		return false;
	}

	if(trusted())
	{
		// fetch cert info if the chain validates
		if(!getLeafCertSerial(path, &m_serial))
			return false;
	}

	return true;
}

bool FileCertVerifier::noSignature() const
{
	return (m_trustResult == TRUST_E_NOSIGNATURE) && (m_trustError == TRUST_E_NOSIGNATURE);
}

bool FileCertVerifier::trusted() const
{
	return m_trustResult == ERROR_SUCCESS;
}

#if 0

// unsupported function version (WTHelperProvDataFromStateData)

std::vector <u8> FileCertVerifier::getLeafCertSerial(const WINTRUST_DATA & src) const
{
	std::vector <u8> result;

	const CRYPT_PROVIDER_DATA * providerData = WTHelperProvDataFromStateData(src.hWVTStateData);
	ASSERT(providerData && providerData->csSigners && providerData->pasSigners && providerData->pasSigners->csCertChain);

	const CRYPT_PROVIDER_CERT * leafCert = providerData->pasSigners->pasCertChain;
	if(leafCert->fTrustedRoot || leafCert->fSelfSigned || leafCert->fTestCert)
	{
		// what
		return result;
	}

	if(leafCert->pCert && leafCert->pCert->pCertInfo)
	{
		const CERT_INFO * info = leafCert->pCert->pCertInfo;
		ASSERT(info->SerialNumber.pbData && info->SerialNumber.cbData > 0);

		result.resize(info->SerialNumber.cbData);
		memcpy(result.data(), info->SerialNumber.pbData, info->SerialNumber.cbData);
	}

	return result;
}

#else

bool FileCertVerifier::getLeafCertSerial(const WCHAR * path, std::vector <u8> * outSerial) const
{
	HCRYPTMSG cryptMsg = nullptr;

	// authenticode is a PKCS #7 signed embedded message
	// extract it from the PE file
	BOOL status = CryptQueryObject(
		CERT_QUERY_OBJECT_FILE, path,
		CERT_QUERY_CONTENT_FLAG_PKCS7_SIGNED_EMBED, CERT_QUERY_FORMAT_FLAG_BINARY, 0,
		nullptr, nullptr, nullptr, nullptr, &cryptMsg, nullptr);
	if(!status)
	{
		_ERROR("CryptQueryObject failed %08X", GetLastError());
		return false;
	}

	// get the cert signing the message (leaf cert)
	DWORD signerInfoLen = 0;
	if(!CryptMsgGetParam(cryptMsg, CMSG_SIGNER_INFO_PARAM, 0, nullptr, &signerInfoLen))
	{
		_ERROR("CryptMsgGetParam signer info length failed %08X", GetLastError());
		return false;
	}

	std::vector <u8> signerInfoBuf(signerInfoLen);
	if(!CryptMsgGetParam(cryptMsg, CMSG_SIGNER_INFO_PARAM, 0, signerInfoBuf.data(), &signerInfoLen))
	{
		_ERROR("CryptMsgGetParam signer info fetch failed %08X", GetLastError());
		return false;
	}

	// signing cert info contains a serial number and issuer (and some other data)
	auto * signerInfo = (CMSG_SIGNER_INFO *)signerInfoBuf.data();

	if(signerInfo->SerialNumber.cbData <= 0)
	{
		_ERROR("no cert serial");
		return false;
	}

	outSerial->resize(signerInfo->SerialNumber.cbData);
	memcpy(outSerial->data(), signerInfo->SerialNumber.pbData, signerInfo->SerialNumber.cbData);

	CryptMsgClose(cryptMsg);

	return true;
}

#endif

bool CheckDLLSignature(const std::string & dllPath)
{
	// verify ourselves, get the signature
	WCHAR exePath[2048];
	GetModuleFileNameW(GetModuleHandle(NULL), exePath, _countof(exePath));

	FileCertVerifier exeVerifier;
	if(!exeVerifier.verify(exePath))
	{
		_ERROR("exe failed validation");
		return false;
	}

	// unsigned exe, don't bother verifying dll
	if(exeVerifier.noSignature())
	{
		_MESSAGE("unsigned exe, not verifying dll");
		return true;
	}

	// signed but bad signature? what
	if(!exeVerifier.trusted())
	{
		_ERROR("bad exe signature");
		return false;
	}

	int numWideChars = MultiByteToWideChar(CP_ACP, MB_ERR_INVALID_CHARS, dllPath.data(), (int)dllPath.size(), nullptr, 0);
	if(!numWideChars)
	{
		DWORD error = GetLastError();

		_ERROR("error converting DLL path to wide characters (count) (%08X)", error);
		return false;
	}

	std::vector <WCHAR> dllPathWide;
	dllPathWide.resize(numWideChars);

	numWideChars = MultiByteToWideChar(CP_ACP, MB_ERR_INVALID_CHARS, dllPath.data(), (int)dllPath.size(), dllPathWide.data(), (int)dllPathWide.size());
	if(!numWideChars)
	{
		DWORD error = GetLastError();

		_ERROR("error converting DLL path to wide characters (convert) (%08X)", error);
		return false;
	}

	// null terminator
	dllPathWide.push_back(0);

	FileCertVerifier dllVerifier;
	if(!dllVerifier.verify(dllPathWide.data()))
	{
		_ERROR("dll failed validation");
		return false;
	}

	if(!dllVerifier.trusted())
	{
		_ERROR("dll untrusted");
		return false;
	}

	if(exeVerifier.serial() != dllVerifier.serial())
	{
		_ERROR("serials don't match");
		return false;
	}

	_MESSAGE("DLL and EXE signature/serial match");

	return true;
}
