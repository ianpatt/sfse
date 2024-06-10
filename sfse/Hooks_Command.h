#pragma once

#include "PluginAPI.h"

namespace TaskInterface
{
    void addTask(SFSETaskInterface::ITaskDelegate* task);
    void addTaskPermanent(SFSETaskInterface::ITaskDelegate* task);
}

void Hooks_Command_Apply();
