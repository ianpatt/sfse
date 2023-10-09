#pragma once

#include "sfse_common/Relocation.h"
#include "sfse/ScaleformState.h"

namespace Scaleform
{
enum LogMessageType
{
    LogMessage_Text = 0x00000,
    LogMessage_Warning = 0x20000,
    LogMessage_Error = 0x30000,
    LogMessage_Assert = 0x40000,
    LogMessage_Mask = 0xF0000
};

enum LogChannel
{
    LogChannel_General = 0x1000,
    LogChannel_Debug = 0x2000,
    LogChannel_Script = 0x3000,
    LogChannel_Parse = 0x4000,
    LogChannel_Action = 0x5000,
    LogChannel_Mask = 0xF000,
};

class LogMessageId
{
    int Id;
public:

    LogMessageId(int id = 0) : Id(id) { }
    LogMessageId(const LogMessageId& other) : Id(other.Id) { }

    LogMessageId& operator = (int id) { Id = id; return *this; }
    LogMessageId& operator = (LogMessageId& other) { Id = other.Id; return *this; }

    operator int() const { return Id; }

    LogMessageType  GetMessageType() const { return (LogMessageType)(Id & LogMessage_Mask); }
    LogChannel      GetChannel() const { return (LogChannel)(Id & LogChannel_Mask); }
};

enum LogConstants
{
    Log_Message = LogChannel_General | LogMessage_Text,
    Log_Warning = LogChannel_General | LogMessage_Warning,
    Log_Error = LogChannel_General | LogMessage_Error,
    Log_DebugMessage = LogChannel_Debug | LogMessage_Text,
    Log_DebugWarning = LogChannel_Debug | LogMessage_Warning,
    Log_DebugError = LogChannel_Debug | LogMessage_Error,
    Log_DebugAssert = LogChannel_Debug | LogMessage_Assert
};
class Log : public RefCountBase<Log>
{
public:
    Log() { }
    virtual ~Log() { };

    virtual void LogMessageVarg(LogMessageId messageId, const char* fmt, va_list argList) { };
};

namespace GFx
{
template<class Derived>
class LogBase
{
public:
    virtual ~LogBase() { }
    virtual bool    IsVerboseActionErrors() const { return true; }
};

class LogState : public State, public LogBase<LogState>
{
    Ptr<Log> pLog;
public:
    LogState(Log* log) : State(State_Log), pLog(log) { }
    virtual ~LogState() { }

    virtual void LogMessageVarg(LogMessageId messageType, const char* pfmt, va_list argList)
    {
        Log* log = GetLog();
        if (log)
        {
            log->LogMessageVarg(messageType, pfmt, argList);
        }
    }

    Log* GetLog() const { return pLog ? pLog.GetPtr() : nullptr; }
};
}
}