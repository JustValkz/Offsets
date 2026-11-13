// Executor internal RVAs — Valkz Dumper
// Roblox: version-4ea8e85481e34f46
// Resolved: 130

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
    inline const uintptr_t GetLuaState = REBASE_RBX(0x71BB40);
    inline const uintptr_t GetProperty = REBASE_RBX(0x1CA2B00);
    inline const uintptr_t GetPropertyData = REBASE_RBX(0x1D1A730);
    inline const uintptr_t GetTlsPointer = REBASE_RBX(0xC700);
    inline const uintptr_t Impersonator = REBASE_RBX(0x2C608B0);
    inline const uintptr_t KTable = REBASE_RBX(0x7FAF260);
    inline const uintptr_t LuaVM_Load = REBASE_RBX(0x4021B10);
    inline const uintptr_t Luau_Execute = REBASE_RBX(0x26BDA30);
    inline const uintptr_t NewInstance = REBASE_RBX(0x49506E0);
    inline const uintptr_t OpCodeLookupTable = REBASE_RBX(0x6D45820);
    inline const uintptr_t Print = REBASE_RBX(0x1C68FE0);
    inline const uintptr_t PushInstance = REBASE_RBX(0x4013BA0);
    inline const uintptr_t ScriptContextResume = REBASE_RBX(0x40CBD40);
    inline const uintptr_t epochTime = REBASE_RBX(0x4781D40);
    inline const uintptr_t get_tss_data = REBASE_RBX(0x4170);
    inline const uintptr_t luavm__load = REBASE_RBX(0x40D2498);

    // [TaskScheduler]
    inline const uintptr_t Pointer = REBASE_RBX(0x8F1E408);
    inline const uintptr_t RawScheduler = REBASE_RBX(0x8F1E408);
    inline const uintptr_t TaskCancel = REBASE_RBX(0x41876F0);
    inline const uintptr_t TaskDefer = REBASE_RBX(0x4186980);
    inline const uintptr_t TaskDelay = REBASE_RBX(0x4187180);
    inline const uintptr_t TaskDesynchronize = REBASE_RBX(0x4185DB0);
    inline const uintptr_t TaskSchedulerTargetFps = REBASE_RBX(0x80993C8);
    inline const uintptr_t TaskSpawn = REBASE_RBX(0x4186E10);
    inline const uintptr_t TaskSynchronize = REBASE_RBX(0x41859A0);
    inline const uintptr_t TaskWait = REBASE_RBX(0x4187480);

    // [Input]
    inline const uintptr_t FireMouseClick = REBASE_RBX(0x3AC4300);
    inline const uintptr_t FireMouseHoverEnter = REBASE_RBX(0x3AC58F0);
    inline const uintptr_t FireMouseHoverLeave = REBASE_RBX(0x3AC5A90);
    inline const uintptr_t FireProximityPrompt = REBASE_RBX(0x309BD00);
    inline const uintptr_t FireRightMouseClick = REBASE_RBX(0x3AC44A0);

    // [Luau]
    inline const uintptr_t LuaH_dummynode = REBASE_RBX(0x62F6EC8);
    inline const uintptr_t LuaO_nilobject = REBASE_RBX(0x62F7418);
    inline const uintptr_t dumpgco = REBASE_RBX(0x26A5300);
    inline const uintptr_t loadsafe = REBASE_RBX(0x2691BD0);
    inline const uintptr_t luaB_assert = REBASE_RBX(0x5AAE900);
    inline const uintptr_t luaB_error = REBASE_RBX(0x26E6810);
    inline const uintptr_t luaB_gcinfo = REBASE_RBX(0x26EA470);
    inline const uintptr_t luaB_getfenv = REBASE_RBX(0x26E7E70);
    inline const uintptr_t luaB_getmetatable = REBASE_RBX(0x26E7250);
    inline const uintptr_t luaB_newproxy = REBASE_RBX(0x5AAF4F0);
    inline const uintptr_t luaB_next = REBASE_RBX(0x5AADE60);
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
    inline const uintptr_t luaC_dump = REBASE_RBX(0x43E4C70);
    inline const uintptr_t luaC_init = REBASE_RBX(0x26C41A0);
    inline const uintptr_t luaC_step = REBASE_RBX(0x26BC760);
    inline const uintptr_t luaD_throw = REBASE_RBX(0x26ADAD0);
    inline const uintptr_t luaF_freeproto = REBASE_RBX(0x26A2FC0);
    inline const uintptr_t luaG_runerror = REBASE_RBX(0x26A17A0);
    inline const uintptr_t luaH_clone = REBASE_RBX(0x269D780);
    inline const uintptr_t luaL_argerror = REBASE_RBX(0x2673020);
    inline const uintptr_t luaL_error = REBASE_RBX(0x2674070);
    inline const uintptr_t luaL_getmetafield = REBASE_RBX(0x2676B50);
    inline const uintptr_t luaM_visitgco = REBASE_RBX(0x26C3600);
    inline const uintptr_t luaO_pushfstring = REBASE_RBX(0x26A0320);
    inline const uintptr_t luaV_gettable = REBASE_RBX(0x2685A40);
    inline const uintptr_t lua_checkstack = REBASE_RBX(0x26642E0);
    inline const uintptr_t lua_error = REBASE_RBX(0x2668580);
    inline const uintptr_t lua_newstate = REBASE_RBX(0x2672AA0);
    inline const uintptr_t lua_pcall = REBASE_RBX(0x26B8F80);
    inline const uintptr_t lua_pushfstring = REBASE_RBX(0x2665690);
    inline const uintptr_t lua_resume = REBASE_RBX(0x266FF70);
    inline const uintptr_t newpage = REBASE_RBX(0x26C3910);
    inline const uintptr_t pseudo2addr = REBASE_RBX(0x2664140);
    inline const uintptr_t require_bypass_fn = REBASE_RBX(0x4389CA0);
    inline const uintptr_t tclone = REBASE_RBX(0x26D2890);

    // [Connection]
    inline const uintptr_t DisconnectConnection = REBASE_RBX(0x337D430);

    // [Globals]
    inline const uintptr_t BytecodeSignSeedPtr = REBASE_RBX(0x7981C58);
    inline const uintptr_t FFlagListPointer = REBASE_RBX(0x876CCC8);
    inline const uintptr_t FakeDataModelPointer = REBASE_RBX(0x8F8E968);
    inline const uintptr_t IdentityPtr = REBASE_RBX(0x8051178);
    inline const uintptr_t VisualEnginePointer = REBASE_RBX(0x8A11808);
    inline const uintptr_t VmLoadTimerTls = REBASE_RBX(0x8386220);

    // [Crash]
    inline const uintptr_t FLogHook = REBASE_RBX(0x876CDA0);
    inline const uintptr_t RBXCrash = REBASE_RBX(0x876CD90);

    // [FFlags]
    inline const uintptr_t BooleanType = REBASE_RBX(0x7297CD0);
    inline const uintptr_t BooleanValueType = REBASE_RBX(0x7298130);
    inline const uintptr_t GetFFlag = REBASE_RBX(0x4B69FB0);
    inline const uintptr_t IntegerType = REBASE_RBX(0x7298248);
    inline const uintptr_t IntegerValueType = REBASE_RBX(0x7298018);
    inline const uintptr_t SetFFlag = REBASE_RBX(0x4B694B0);

    // [PropertyValue]
    inline const uintptr_t AssetContentMapDtor = REBASE_RBX(0xA98610);
    inline const uintptr_t NetAssetRefDtor = REBASE_RBX(0x1D0AB80);
    inline const uintptr_t OperatorDelete = REBASE_RBX(0x4B33EF0);

    // [Raknet]
    inline const uintptr_t ConvertItemEnumToString = REBASE_RBX(0x496D630);
    inline const uintptr_t Encrypt = REBASE_RBX(0x28C0C3C);
    inline const uintptr_t HandleConnectionState = REBASE_RBX(0x4A0C8C0);
    inline const uintptr_t ProcessNetworkPacket = REBASE_RBX(0x28A3140);
    inline const uintptr_t RakPeerReceive = REBASE_RBX(0x288E180);
    inline const uintptr_t RakPeerVTable = REBASE_RBX(0x71A0638);
    inline const uintptr_t Receive = REBASE_RBX(0x28BA830);
    inline const uintptr_t ReliabilityLayerSend = REBASE_RBX(0x28BD2A0);
    inline const uintptr_t ReportNetworkError = REBASE_RBX(0x4A09B00);
    inline const uintptr_t Send = REBASE_RBX(0x2896C80);
    inline const uintptr_t SendPacketsToSelf = REBASE_RBX(0x288C670);
    inline const uintptr_t UpdateNetworkLoop = REBASE_RBX(0x28885A0);

    // [RbxTransport]
    inline const uintptr_t AppDestructor = REBASE_RBX(0x2187C80);
    inline const uintptr_t AppReceive = REBASE_RBX(0x2182840);
    inline const uintptr_t AppReceiveMaxBytes = REBASE_RBX(0x2183180);
    inline const uintptr_t AppRtti = REBASE_RBX(0x78C98E0);
    inline const uintptr_t AppSend = REBASE_RBX(0x2182470);
    inline const uintptr_t AppVTable = REBASE_RBX(0x7193940);
    inline const uintptr_t ClientChannelConfig = REBASE_RBX(0x3B526E0);
    inline const uintptr_t ClientDestructor = REBASE_RBX(0x3B528E0);
    inline const uintptr_t ClientReceive = REBASE_RBX(0x3B53110);
    inline const uintptr_t ClientRtti = REBASE_RBX(0x7940758);
    inline const uintptr_t ClientSend = REBASE_RBX(0x3B52A00);
    inline const uintptr_t ClientVTable = REBASE_RBX(0x7206440);
    inline const uintptr_t Decrypt = REBASE_RBX(0x226A180);
    inline const uintptr_t FailureFallbackToRbxTransport = REBASE_RBX(0x8274A50);
    inline const uintptr_t StreamAppend = REBASE_RBX(0x218B7E0);
    inline const uintptr_t StreamCreate = REBASE_RBX(0x5459D50);
    inline const uintptr_t StreamDestroy = REBASE_RBX(0x214A680);
    inline const uintptr_t UseRbxTransportClient = REBASE_RBX(0x825C600);

} // namespace RBX
