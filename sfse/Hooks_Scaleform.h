#pragma once

#include "sfse/PluginAPI.h"

void RegisterMenuPlugin(SFSEMenuInterface::RegisterCallback callback);

void Hooks_Scaleform_Apply();
