#pragma once

#include "sfse_common/Types.h"
#include "sfse/ScaleformTypes.h"

namespace Scaleform
{
namespace GFx
{
class Value;
class Movie;
class FunctionHandler : public RefCountBase<FunctionHandler>
{
public:
    virtual ~FunctionHandler();

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

    virtual void Call(const Params*);
};
}
}

class SWFToCodeFunctionHandler : public Scaleform::GFx::FunctionHandler
{
public:
    virtual void MapCodeObjectFunctions();
};
