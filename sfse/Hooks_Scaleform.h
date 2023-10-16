#pragma once

#include "sfse/PluginAPI.h"

void RegisterMenuPlugin(SFSEMenuInterface::MenuMovieCreatedCallback callback);
void RegisterManagerPlugin(SFSEMenuInterface::ScaleformManagerCreatedCallback callback);

void Hooks_Scaleform_Apply();
