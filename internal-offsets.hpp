// Executor internal RVAs — Valkz Dumper
// Roblox: version-2c6fd5e09aaf4cfa
// Resolved: 64

#pragma once
#define NOMINMAX
#include <Windows.h>
#include <cstdint>

#define REBASE_RBX(x) (reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)) + (x))

struct lua_State;

namespace RBX
{
    // [Core]
    inline const uintptr_t CastArgs = REBASE_RBX(0x3F93510);
    inline const uintptr_t FireTouchInterest = REBASE_RBX(0xA566E0);
    inline const uintptr_t GetCapabilities = REBASE_RBX(0x1CA46D0);
    inline const uintptr_t GetCurrentThreadIdentity = REBASE_RBX(0x40D2A40);
    inline const uintptr_t GetIdentityStruct = REBASE_RBX(0x4170);
    inline const uintptr_t GetLuaState = REBASE_RBX(0x787CF0);
    inline const uintptr_t GetProperty = REBASE_RBX(0x1CA2B00);
    inline const uintptr_t Impersonator = REBASE_RBX(0x2C608B0);
    inline const uintptr_t KTable = REBASE_RBX(0x7FAF260);
    inline const uintptr_t LuaVM_Load = REBASE_RBX(0x4021B10);
    inline const uintptr_t Luau_Execute = REBASE_RBX(0x26BDA30);
    inline const uintptr_t NewInstance = REBASE_RBX(0x47877F0);
    inline const uintptr_t OpCodeLookupTable = REBASE_RBX(0x6D45820);
    inline const uintptr_t Print = REBASE_RBX(0x1C68FE0);
    inline const uintptr_t PushInstance = REBASE_RBX(0x4013BA0);
    inline const uintptr_t ScriptContextResume = REBASE_RBX(0x40CBD40);
    inline const uintptr_t epochTime = REBASE_RBX(0x4781D40);
    inline const uintptr_t get_tss_data = REBASE_RBX(0x4170);
    inline const uintptr_t loadsafe = REBASE_RBX(0x41DCFC0);
    inline const uintptr_t luavm__load = REBASE_RBX(0x40D2498);

    // [TaskScheduler]
    inline const uintptr_t RawScheduler = REBASE_RBX(0x8DA5D98);
    inline const uintptr_t TaskCancel = REBASE_RBX(0x41876F0);
    inline const uintptr_t TaskDefer = REBASE_RBX(0x4186980);
    inline const uintptr_t TaskDelay = REBASE_RBX(0x4187180);
    inline const uintptr_t TaskDesynchronize = REBASE_RBX(0x4185DB0);
    inline const uintptr_t TaskSchedulerTargetFps = REBASE_RBX(0x80993C8);
    inline const uintptr_t TaskSpawn = REBASE_RBX(0x4186E10);
    inline const uintptr_t TaskSynchronize = REBASE_RBX(0x41859A0);
    inline const uintptr_t TaskWait = REBASE_RBX(0x4187480);

    // [Input]
    inline const uintptr_t FireMouseClick = REBASE_RBX(0x24C5B0);
    inline const uintptr_t FireMouseHoverEnter = REBASE_RBX(0x3AC58F0);
    inline const uintptr_t FireMouseHoverLeave = REBASE_RBX(0x3AC5A90);
    inline const uintptr_t FireProximityPrompt = REBASE_RBX(0x309BD00);
    inline const uintptr_t FireRightMouseClick = REBASE_RBX(0x24C730);

    // [Luau]
    inline const uintptr_t LuaH_dummynode = REBASE_RBX(0x62F6EC8);
    inline const uintptr_t LuaO_nilobject = REBASE_RBX(0x62F7418);
    inline const uintptr_t luaB_error = REBASE_RBX(0x26E6810);
    inline const uintptr_t luaB_gcinfo = REBASE_RBX(0x26EA470);
    inline const uintptr_t luaB_getfenv = REBASE_RBX(0x26E7E70);
    inline const uintptr_t luaB_getmetatable = REBASE_RBX(0x26E7250);
    inline const uintptr_t luaB_print = REBASE_RBX(0x26E63C0);
    inline const uintptr_t luaB_rawequal = REBASE_RBX(0x26E8160);
    inline const uintptr_t luaB_rawget = REBASE_RBX(0x26E8270);
    inline const uintptr_t luaB_rawlen = REBASE_RBX(0x26EA3D0);
    inline const uintptr_t luaB_rawset = REBASE_RBX(0x26E87C0);
    inline const uintptr_t luaB_select = REBASE_RBX(0x26EBBF0);
    inline const uintptr_t luaB_setfenv = REBASE_RBX(0x26E7F30);
    inline const uintptr_t luaB_setmetatable = REBASE_RBX(0x26E73D0);
    inline const uintptr_t luaB_tonumber = REBASE_RBX(0x26E6490);
    inline const uintptr_t luaB_tostring = REBASE_RBX(0x26ECA00);
    inline const uintptr_t luaB_type = REBASE_RBX(0x26EA490);
    inline const uintptr_t luaB_typeof = REBASE_RBX(0x26EAA90);
    inline const uintptr_t luaC_step = REBASE_RBX(0x26BC760);
    inline const uintptr_t luaD_throw = REBASE_RBX(0x26ADAD0);
    inline const uintptr_t lua_pcall = REBASE_RBX(0x26B8F80);

    // [Connection]
    inline const uintptr_t DisconnectConnection = REBASE_RBX(0x337D430);

    // [Globals]
    inline const uintptr_t BytecodeSignSeedPtr = REBASE_RBX(0x7981C58);
    inline const uintptr_t FFlagListPointer = REBASE_RBX(0x876CCC8);
    inline const uintptr_t FakeDataModelPointer = REBASE_RBX(0x8E16368);
    inline const uintptr_t IdentityPtr = REBASE_RBX(0x8051178);
    inline const uintptr_t VisualEnginePointer = REBASE_RBX(0x8896B98);
    inline const uintptr_t VmLoadTimerTls = REBASE_RBX(0x8386220);

    // [Crash]
    inline const uintptr_t FLogHook = REBASE_RBX(0x876CDA0);
    inline const uintptr_t RBXCrash = REBASE_RBX(0x876CD90);

} // namespace RBX
