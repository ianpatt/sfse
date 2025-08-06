#pragma once

#include "sfse/ScaleformLoader.h"

class BSScaleformManager
{
public:
    void* unk00;                        // 00
    void* unk08;                        // 08
    Scaleform::GFx::Loader* pLoader;    // 10
    void* unk18;                        // 18
    void* unk20;                        // 20
    void* unk28;                        // 28

    static BSScaleformManager* GetSingleton()
    {
        RelocPtr<BSScaleformManager*> singleton(0x060C01A0);
        return *singleton;
    }
};
