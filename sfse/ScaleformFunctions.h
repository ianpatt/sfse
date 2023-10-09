#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Utilities.h"
#include "sfse/ScaleformTypes.h"
#include "sfse/ScaleformMemory.h"

namespace Scaleform
{
namespace GFx
{
class Value;
class Movie;
class FunctionHandler : public RefCountBase<FunctionHandler>
{
public:
    virtual ~FunctionHandler() { };

    struct Params
    {
        Value* pRetVal;
        Movie* pMovie;
        Value* pThis;
        Value* pArgsWithThisRef;
        Value* pArgs;
        u32 ArgCount;
        void* pUserData;
    };

    virtual void Call(const Params*) = 0;

    DEFINE_STATIC_HEAP(ScaleformHeap_Allocate, ScaleformHeap_Free);
};
}
}

class SWFToCodeFunctionHandler : public Scaleform::GFx::FunctionHandler
{
public:
    virtual void MapCodeObjectFunctions() { };
};
