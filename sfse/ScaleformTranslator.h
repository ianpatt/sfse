#pragma once

#include "sfse/ScaleformState.h"
#include "sfse/GameTypes.h"

namespace Scaleform
{
class WStringBuffer;
namespace GFx
{
class Translator : public State
{
public:
    unsigned WWMode;

    class TranslateInfo
    {
    protected:
        const wchar_t* pKey;
        WStringBuffer* pResult;
        const char* pInstanceName;
        enum
        {
            Flag_Translated = 0x01,
            Flag_ResultHtml = 0x02,
            Flag_SourceHtml = 0x04
        };
        u8               Flags;
    public:
        TranslateInfo() :pKey(NULL), pResult(NULL), pInstanceName(NULL), Flags(0) {}
    };

    struct LineFormatDesc
    {
        const wchar_t* pParaText;
        UPInt ParaTextLen;
        const float* pWidths;
        UPInt LineStartPos;
        UPInt NumCharsInLine;
        float VisibleRectWidth;
        float CurrentLineWidth;
        float LineWidthBeforeWordWrap;
        float DashSymbolWidth;
        enum
        {
            Align_Left = 0,
            Align_Right = 1,
            Align_Center = 2,
            Align_Justify = 3
        };
        u8 Alignment;
        UPInt ProposedWordWrapPoint;
        bool UseHyphenation;
    };

    virtual unsigned GetCaps() const { return 0; }
    virtual void Translate(TranslateInfo* ptranslateInfo) { }
    virtual bool OnWordWrapping(LineFormatDesc* pdesc) { }
    virtual s64 OnBidirectionalText(const wchar_t* text, unsigned __int64 textLen, wchar_t* newText, uint* indexMap, bool* mirrorBits) { }
};
}
}

namespace BSScaleformTranslator
{
class ScaleformImpl : public Scaleform::GFx::Translator
{
public:
    // Dont know why this uses the trash XOR hash function
    BSTHashMap<BSFixedStringWCS, BSFixedStringWCS>* translationMap;
};
}