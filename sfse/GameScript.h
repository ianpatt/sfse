#pragma once

#include "sfse_common/Relocation.h"
#include "sfse_common/Utilities.h"
#include "sfse/GameTypes.h"

class TESObjectREFR;
class TESForm;
class TESQuest;

struct ACTION_OBJECT
{
	TESForm*	pForm;	// 00
	u32			iFlags;	// 08
};

struct alignas(4) SCRIPT_LOCAL
{
	u32 uiID;
	float fValue;
	bool bIsInteger;
};

struct ScriptVariable
{
	SCRIPT_LOCAL				data;
	void*/*BSStringT<char>*/	cName;
};

struct alignas(4) SCRIPT_HEADER
{
	u32 variableCount;
	u32 refObjectCount;
	u32 dataSize;
	u32 m_uiLastID;
	bool bIsQuestScript;
	bool bIsMagicEffectScript;
	bool bIsCompiled;
};

struct SCRIPT_REFERENCED_OBJECT
{
	void*/*BSStringT<char>*/	cEditorID;
	TESForm*					pForm;
	u32							uiVariableID;
};

struct SCRIPT_EFFECT_DATA
{
	bool m_bScriptEffectStart;
	bool m_bScriptEffectFinish;
	float m_fSecondsElapsed;
};

struct SCRIPT_PARAMETER_DEF
{
	u32 eParamType;			// 00
	u8	bCanBeVariable;		// 04
	u8	bReferencedObject;	// 05
};

// 0C
struct SCRIPT_PARAMETER
{
	const char* pParamName;	// 00
	u32			eParamType;	// 04
	u32			bOptional;	// 08
};

struct SCRIPT_OPERATOR
{
	u32 eCode;			// 00
	u8	cPrecedence;	// 04
	u8	pOperator;		// 05
};

class Script;
struct ScriptLocals
{
	Script*							m_pMasterScript;		// 00
	u8								m_cFlags;				// 08
	u8								pad09[7];				// 09
	BSSimpleList<ACTION_OBJECT*>*	m_pActionList;			// 10
	BSSimpleList<SCRIPT_LOCAL*>*	m_pLocalList;			// 20
	SCRIPT_EFFECT_DATA*				m_pScriptEffectData;	// 38
};

typedef bool (*ExecuteFunction)(const SCRIPT_PARAMETER* paramInfo, const char*, TESObjectREFR* thisObj, TESObjectREFR* containingObj, Script* script, ScriptLocals* locals, float* result, u32* opcodeOffsetPtr);

class Script
{
public:
	// 58
	struct SCRIPT_FUNCTION
	{
		const char*			pFunctionName;			// 00
		const char*			pShortName;				// 08
		u32					eOutput;				// 10
		u32					pad14;					// 14
		const char*			pHelpString;			// 18
		u8					bReferenceFunction;		// 20
		u8					pad21;					// 21
		u16					sParamCount;			// 22
		u32					pad24;					// 24
		SCRIPT_PARAMETER*	pParameters;			// 28
		ExecuteFunction		pExecuteFunction;		// 30
		void*				pCompileFunction;		// 38
		void*				pConditionFunction;		// 40
		u8					bEditorFilter;			// 48
		u8					bInvalidatesCellList;	// 49
		u8					unk4A;					// 4A
		u8					unk4B;					// 4B
		u8					unk4C;					// 4C
		u8					unk4E;					// 4D
		u8					unk4F;					// 4F
		u8					unk50;					// 50
		u8					unk51;					// 51
	};

	enum
	{
		kScript_NumScriptCommands = 0x03C0,
		kScript_NumConsoleCommands = 0x0245,

		kScript_ScriptOpBase = 0x1000,
		kScript_ConsoleOpBase = 0x0100,
	};

	SCRIPT_HEADER m_header;
	char*									m_text;
	char*									m_data;
	float									fProfilerTimer;
	float									fQuestScriptDelay;
	float									fQuestScriptGetSecondsBuffer;
	TESQuest*								pParentQuest;
	BSSimpleList<SCRIPT_REFERENCED_OBJECT*>	listRefObjects;
	BSSimpleList<ScriptVariable*>			listVariables;
};

extern RelocPtr<Script::SCRIPT_FUNCTION>	g_firstScriptCommand;
extern RelocPtr<Script::SCRIPT_FUNCTION>	g_firstConsoleCommand;
