#pragma once

#include "sfse/ScaleformState.h"

namespace Scaleform
{
namespace GFx
{
class ResourceLib;
class Loader : public StateBag
{
    class LoaderImpl* pImpl;
    ResourceLib* pStrongResourceLib;
    unsigned            DefLoadFlags;
protected:
    virtual StateBag* GetStateBagImpl() const;
    virtual bool CheckTagLoader(int tagType) const;
public:
    virtual ~Loader();

    class LoaderImpl* GetLoaderImpl() const { return pImpl; }
};
}
}