#pragma once

#include "sfse/ScaleformLoader.h"

class BSScaleformManager
{
public:
    void* unk00;                        // 00
    Scaleform::GFx::Loader* pLoader;    // 08
    void* unk10;                        // 10
    void* unk18;                        // 18
    void* unk20;                        // 20

    static BSScaleformManager* GetSingleton()
    {
        RelocPtr<BSScaleformManager*> singleton(0x06A2F318);
        return *singleton;
    }
};
