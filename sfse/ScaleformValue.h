#pragma once

#include <cstring>

namespace Scaleform
{
namespace GFx
{
class MovieImpl;
class Value
{
public:
	enum ValueType
	{
		VT_Undefined = 0,
		VT_Null,
		VT_Boolean,
		VT_Int,
		VT_UInt,
		VT_Number,
		VT_String,
		VT_StringW,
		VT_Object,
		VT_Array,
		VT_DisplayObject,
		VT_Function,
	};
    enum ValueTypeControl
    {
        VTC_ConvertBit = 0x80,
        VTC_ManagedBit = 0x40,
        VTC_TypeMask = VTC_ConvertBit | 0x0F,
    };
    union ValueUnion
    {
        int IValue;
        unsigned int UIValue;
        long double NValue;
        bool BValue;
        const char* pString;
        const char** pStringManaged;
        const wchar_t* pStringW;
        void* pData;
    };

    class ObjectInterface
    {
    public:
        class ArrVisitor
        {
        public:
            virtual ~ArrVisitor() {}
            virtual void Visit(unsigned int idx, Value* val) = 0;
        };
        class ObjVisitor
        {
        public:
            virtual ~ObjVisitor() { }
            virtual bool ShowDisplayMembers() { return false; }
            virtual void Visit(const char* member, Value* value) = 0;
        };

		virtual ~ObjectInterface();

        DEFINE_MEMBER_FN_3(HasMember, bool, 0x00E34FE0, void* pData, const char* name, bool isDisplayObj);
        DEFINE_MEMBER_FN_4(GetMember, bool, 0x00E35320, void* pData, const char* name, Value* pValue, bool isDisplayObj);
        DEFINE_MEMBER_FN_4(SetMember, bool, 0x00E35710, void* pData, const char* name, const Value& pValue, bool isDisplayObj);
        DEFINE_MEMBER_FN_6(Invoke, bool, 0x00E35B30, void* pData, Value* result, const char* name, const Value* args, unsigned long long numArgs, bool isDisplayObj);
        DEFINE_MEMBER_FN_4(CreateEmptyMovieClip, bool, 0x00E39250, void* pData, Value* pValue, const char* instanceName, int depth);
        DEFINE_MEMBER_FN_6(AttachMovie, bool, 0x00E39510, void* pData, Value* pValue, const char* symbolName, const char* instanceName, int depth, const void* initArgs);
        DEFINE_MEMBER_FN_1(GetArraySize, unsigned int, 0x00E36E10, void* pData);
        DEFINE_MEMBER_FN_2(SetArraySize, bool, 0x00E36E20, void* pData, unsigned int size);
        DEFINE_MEMBER_FN_3(GetElement, bool, 0x00E36E40, void* pData, unsigned int index, Value* value);
        DEFINE_MEMBER_FN_3(SetElement, bool, 0x00E36ED0, void* pData, unsigned int index, const Value& value);
        DEFINE_MEMBER_FN_2(PushBack, bool, 0x00E37110, void* pData, const Value& value);
        DEFINE_MEMBER_FN_2(PopBack, bool, 0x00E37170, void* pData, Value* value);
        DEFINE_MEMBER_FN_3(RemoveElements, bool, 0x00E37220, void* pData, unsigned idx, int count);
        DEFINE_MEMBER_FN_4(VisitElements, void, 0x00E36F30, void* pData, ArrVisitor* visitor, unsigned long idx, int count);
        DEFINE_MEMBER_FN_3(VisitMembers, void, 0x00E366D0, void* pData, ObjVisitor* visitor, bool isDisplayObj);
        // DeleteMember TBD
        DEFINE_MEMBER_FN_3(GetText, bool, 0x00E38EE0, void* pData, Value* value, bool html);
        DEFINE_MEMBER_FN_3(SetText, bool, 0x00E39040, void* pData, const char* text, bool html);
        DEFINE_MEMBER_FN_3(SetTextW, bool, 0x00E39160, void* pData, const wchar_t* text, bool html);
        DEFINE_MEMBER_FN_3(GotoAndPlayL, bool, 0x00E399C0, void* pData, const char* frame, bool stop);
        DEFINE_MEMBER_FN_3(GotoAndPlay, bool, 0x00E39AC0, void* pData, unsigned frame, bool stop);
        DEFINE_MEMBER_FN_2(GetParent, bool, 0x00E37740, void* pData, Value* value);
        // GetDisplayInfo TBD
        // SetDisplayInfo TBD
        // GetDisplayMatrix TBD
        // SetDisplayMatrix TBD
        // GetColorTransform TBD
        // SetColorTransform TBD

        DEFINE_MEMBER_FN_2(ObjectAddRef, void, 0x00E34E80, Value* value, void* pData);
        DEFINE_MEMBER_FN_2(ObjectRelease, void, 0x00E34F20, Value* value, void* pData);

		MovieImpl* pMovieRoot;
    };

    using ObjectVisitor = ObjectInterface::ObjVisitor;
    using ArrayVisitor = ObjectInterface::ArrVisitor;

    Value() : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(VT_Undefined), DataAux(0) { mValue.pData = nullptr; }
    Value(ValueType type) : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(type), DataAux(0) { mValue.pString = 0; }
    Value(u32 v) : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(VT_UInt), DataAux(0) { mValue.UIValue = v; }
    Value(s32 v) : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(VT_Int), DataAux(0) { mValue.IValue = v; }
    Value(double v) : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(VT_Number), DataAux(0) { mValue.NValue = v; }
    Value(bool v) : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(VT_Boolean), DataAux(0) { mValue.BValue = v; }
    Value(const char* ps) : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(VT_String), DataAux(0) { mValue.pString = ps; }
    Value(const wchar_t* ps) : unk00(nullptr), unk08(nullptr), pObjectInterface(nullptr), Type(VT_StringW), DataAux(0) { mValue.pStringW = ps; }
    Value(const Value& src) : unk00(src.unk00), unk08(src.unk08), pObjectInterface(nullptr), Type(src.Type), DataAux(src.DataAux)
    {
        mValue = src.mValue;
        if (src.IsManagedValue()) AcquireManagedValue(src);
    }
    ~Value() { if (IsManagedValue()) ReleaseManagedValue(); }

    const Value& operator=(const Value& src)
    {
        if (this != &src)
        {
            if (IsManagedValue()) ReleaseManagedValue();
            Type = src.Type;
            mValue = src.mValue;
            if (src.IsManagedValue()) AcquireManagedValue(src);
        }
        return *this;
    }

    bool operator==(const Value& other) const
    {
        if (Type != other.Type) return false;
        switch (Type & 0x0F)
        {
        case VT_Boolean:	return mValue.BValue == other.mValue.BValue;
        case VT_Number:		return mValue.NValue == other.mValue.NValue;
        case VT_String:		return !strcmp(GetString(), other.GetString());
        case VT_StringW:	return !wcscmp(GetStringW(), other.GetStringW());
        default:			return mValue.pData == other.mValue.pData;
        }
    }

    bool IsManagedValue() const { return (Type & VTC_ManagedBit) != 0; }
    ValueType   GetType() const { return ValueType(Type & VTC_TypeMask); }
    bool        IsUndefined() const { return GetType() == VT_Undefined; }
    bool        IsNull() const { return GetType() == VT_Null; }
    bool        IsBool() const { return GetType() == VT_Boolean; }
    bool        IsNumber() const { return GetType() == VT_Number; }
    bool        IsString() const { return GetType() == VT_String; }
    bool        IsStringW() const { return GetType() == VT_StringW; }
    bool        IsObject() const { return (GetType() == VT_Object) || GetType() == VT_Array || GetType() == VT_DisplayObject; }
    bool        IsArray() const { return GetType() == VT_Array; }
    bool        IsDisplayObject() const { return GetType() == VT_DisplayObject; }
    bool        GetBool() const { return mValue.BValue; }
    long double GetNumber() const { return mValue.NValue; }
    u32         GetUInt() const { return mValue.UIValue; }
    s32         GetInt() const { return mValue.IValue; }
    const char* GetString() const { return IsManagedValue() ? *mValue.pStringManaged : mValue.pString; }
    const wchar_t* GetStringW() const { return mValue.pStringW; }

    void SetUndefined() { ChangeType(VT_Undefined); }
    void SetNull() { ChangeType(VT_Null); }
    void SetBoolean(bool v) { ChangeType(VT_Boolean); mValue.BValue = v; }
    void SetNumber(double v) { ChangeType(VT_Number); mValue.NValue = v; }
    void SetUInt(u32 v) { ChangeType(VT_UInt); mValue.UIValue = v; }
    void SetInt(s32 v) { ChangeType(VT_Int); mValue.IValue = v; }

    // You probably want to a Managed String via CreateString from the owning Movie
    void SetString(const char* p) { ChangeType(VT_String); mValue.pString = p; }
    void SetStringW(const wchar_t* p) { ChangeType(VT_StringW); mValue.pStringW = p; }

    void ChangeType(ValueType type)
    {
        if (IsManagedValue()) ReleaseManagedValue();
        Type = type;
    }
    void AcquireManagedValue(const Value& src)
    {
        pObjectInterface = src.pObjectInterface;
        pObjectInterface->ObjectAddRef(this, mValue.pData);
    }
    void ReleaseManagedValue()
    {
        pObjectInterface->ObjectRelease(this, mValue.pData);
        pObjectInterface = nullptr;
    }

    bool HasMember(const char* name) const { return pObjectInterface->HasMember(mValue.pData, name, IsDisplayObject()); }
    bool GetMember(const char* name, Value* pval) const { return pObjectInterface->GetMember(mValue.pData, name, pval, IsDisplayObject()); }
    bool SetMember(const char* name, const Value& val) { return pObjectInterface->SetMember(mValue.pData, name, val, IsDisplayObject()); }
    bool Invoke(const char* name, Value* presult, const Value* pargs, unsigned long long nargs) { return pObjectInterface->Invoke(mValue.pData, presult, name, pargs, nargs, IsDisplayObject()); }
    bool Invoke(const char* name, Value* presult = nullptr) { return Invoke(name, presult, nullptr, 0); }
    void VisitMembers(ObjectVisitor* visitor) const { return pObjectInterface->VisitMembers(mValue.pData, visitor, IsDisplayObject()); }
    unsigned int GetArraySize() { return pObjectInterface->GetArraySize(mValue.pData); };
    bool SetArraySize(unsigned sz) { return pObjectInterface->SetArraySize(mValue.pData, sz); }
    bool GetElement(unsigned idx, Value* pval) const { return pObjectInterface->GetElement(mValue.pData, idx, pval); }
    bool SetElement(unsigned idx, const Value& val) { return pObjectInterface->SetElement(mValue.pData, idx, val); }
    void VisitElements(ArrayVisitor* visitor, unsigned idx, int count = -1) const { return pObjectInterface->VisitElements(mValue.pData, visitor, idx, count); }
    void VisitElements(ArrayVisitor* visitor) const { VisitElements(visitor, 0); }
    bool PushBack(const Value& val) { return pObjectInterface->PushBack(mValue.pData, val); }
    bool PopBack(Value* pval = nullptr) { return pObjectInterface->PopBack(mValue.pData, pval); }
    bool RemoveElements(unsigned idx, int count = -1) { return pObjectInterface->RemoveElements(mValue.pData, idx, count); }
    bool RemoveElement(unsigned idx) { return RemoveElements(idx, 1); }
    bool ClearElements() { return RemoveElements(0); }
    bool SetText(const char* ptext) { return pObjectInterface->SetText(mValue.pData, ptext, false); }
    bool SetText(const wchar_t* ptext) { return pObjectInterface->SetTextW(mValue.pData, ptext, false); }
    bool SetTextHTML(const char* phtml) { return pObjectInterface->SetText(mValue.pData, phtml, true); }
    bool SetTextHTML(const wchar_t* phtml) { return pObjectInterface->SetTextW(mValue.pData, phtml, true); }
    bool GetText(Value* pval) const { return pObjectInterface->GetText(mValue.pData, pval, false); }
    bool GetTextHTML(Value* pval) const { return pObjectInterface->GetText(mValue.pData, pval, true); }
    bool CreateEmptyMovieClip(Value* pmc, const char* instanceName, int depth = -1) { return pObjectInterface->CreateEmptyMovieClip(mValue.pData, pmc, instanceName, depth); }
    bool AttachMovie(Value* pmc, const char* symbolName, const char* instanceName, int depth = -1, const void* initArgs = nullptr){ return pObjectInterface->AttachMovie(mValue.pData, pmc, symbolName, instanceName, depth, initArgs); }
    bool GotoAndPlay(const char* frame) { return pObjectInterface->GotoAndPlayL(mValue.pData, frame, false); }
    bool GotoAndStop(const char* frame) { return pObjectInterface->GotoAndPlayL(mValue.pData, frame, true); }
    bool GotoAndPlay(unsigned frame) { return pObjectInterface->GotoAndPlay(mValue.pData, frame, false); }
    bool GotoAndStop(unsigned frame) { return pObjectInterface->GotoAndPlay(mValue.pData, frame, true); }
    bool GetParent(Value* val) { return pObjectInterface->GetParent(mValue.pData, val); }

    void*               unk00;              // 00
    void*               unk08;              // 08
    ObjectInterface*    pObjectInterface;   // 10
	ValueType           Type;               // 18
	ValueUnion          mValue;             // 20
	u64	                DataAux;            // 28
};
}
}
