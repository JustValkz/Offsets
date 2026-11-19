#pragma once
#include <cstdint>
#include <Windows.h>

// Credoxy 0.747.0.7471481 (4ea8e85481e34f46)
// Live client: version-2c6fd5e09aaf4cfa
// Original Credoxy names and namespaces, kept verbatim.

#ifndef REBASE
#define REBASE(x) (reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)) + (x))
#endif

namespace Offsets
{
    inline const uintptr_t GetLuaState = REBASE(0x42D3B20);
    inline const uintptr_t LuaVM_Load = REBASE(0x42C8020);
    inline const uintptr_t OpCodeLookupTable = REBASE(0x7419400);
    inline const uintptr_t Print = REBASE(0x1CD77F0);
    inline const uintptr_t ScriptContextResume = REBASE(0x4379900);
    inline const uintptr_t TaskDefer = REBASE(0x43BAAD0);
    inline const uintptr_t luaD_throw = REBASE(0x266A470);

namespace Bytecode
{
    inline constexpr uintptr_t LocalScriptByteCode = 0x178;
    inline constexpr uintptr_t ModuleScriptByteCode = 0x120;
    inline constexpr uintptr_t Pointer = 0x18;
    inline constexpr uintptr_t Size = 0x28;

} // namespace Bytecode
namespace Capabilities
{
    inline constexpr uintptr_t Capabilities = 0x28;
    inline const uintptr_t GetCapabilities = REBASE(0x1D18C30);

} // namespace Capabilities
namespace ClassDescriptor
{
    inline const uintptr_t GetProperty = REBASE(0x1D16EE0);
    inline const uintptr_t GetPropertyData = REBASE(0x1D1A730);

} // namespace ClassDescriptor
namespace DataModel
{
    inline constexpr uintptr_t Children = 0x70;
    inline constexpr uintptr_t GameId = 0x198;
    inline constexpr uintptr_t GameLoaded = 0x5B8;
    inline constexpr uintptr_t JobId = 0x108;
    inline constexpr uintptr_t PlaceId = 0x1A0;
    inline const uintptr_t Pointer = REBASE(0x8F8E968);
    inline constexpr uintptr_t RealDataModel = 0x1F8;
    inline constexpr uintptr_t ScriptContext = 0x440;

} // namespace DataModel
namespace ExtraSpace
{
    inline constexpr uintptr_t RequireBypass = 0xC30;
    inline constexpr uintptr_t ScriptContextToResume = 0xA28;

} // namespace ExtraSpace
namespace Extras
{
    inline const uintptr_t KTable = REBASE(0x85FEA80);

} // namespace Extras
namespace FFlags
{
    inline const uintptr_t BooleanType = REBASE(0x7297CD0);
    inline const uintptr_t BooleanValueType = REBASE(0x7298130);
    inline const uintptr_t FFlagListPointer = REBASE(0x865E868);
    inline const uintptr_t GetFFlag = REBASE(0x4B69FB0);
    inline const uintptr_t IntegerType = REBASE(0x7298248);
    inline const uintptr_t IntegerValueType = REBASE(0x7298018);
    inline const uintptr_t SetFFlag = REBASE(0x4B694B0);

} // namespace FFlags
namespace Flags
{
    inline const uintptr_t FireMouseClick = REBASE(0x3CC86D0);
    inline const uintptr_t FireMouseHoverEnter = REBASE(0x3CC9C40);
    inline const uintptr_t FireMouseHoverLeave = REBASE(0x3CC9DE0);
    inline const uintptr_t FireProximityPrompt = REBASE(0x312A6F0);
    inline const uintptr_t FireRightMouseClick = REBASE(0x3CC8870);

} // namespace Flags
namespace Instance
{
    inline constexpr uintptr_t ChildrenEnd = 0x8;
    inline constexpr uintptr_t ChildrenStart = 0x70;
    inline constexpr uintptr_t ClassBase = 0x1B0;
    inline constexpr uintptr_t ClassDescriptor = 0x18;
    inline constexpr uintptr_t ClassName = 0x8;
    inline constexpr uintptr_t ComponentMap = 0x38;
    inline constexpr uintptr_t Name = 0x0;
    inline constexpr uintptr_t NameContainer = 0x68;
    inline constexpr uintptr_t Parent = 0x60;
    inline constexpr uintptr_t This = 0x8;

} // namespace Instance
namespace InstanceBridge
{
    inline const uintptr_t PushInstance = REBASE(0x42B6E70);

} // namespace InstanceBridge
namespace Luau
{
    inline const uintptr_t LuaH_dummynode = REBASE(0x69767A8);
    inline const uintptr_t LuaO_nilobject = REBASE(0x69919C8);
    inline const uintptr_t Luau_Execute = REBASE(0x26A91B0);
    inline constexpr uintptr_t ScriptContextToLuaState = 0x220;
    inline const uintptr_t dumpgco = REBASE(0x26A5300);
    inline const uintptr_t loadsafe = REBASE(0x2691BD0);
    inline const uintptr_t luaB_assert = REBASE(0x5AAE900);
    inline const uintptr_t luaB_error = REBASE(0x5AA9350);
    inline const uintptr_t luaB_gcinfo = REBASE(0x5AAC780);
    inline const uintptr_t luaB_getfenv = REBASE(0x5AAAE00);
    inline const uintptr_t luaB_getmetatable = REBASE(0x5AAA290);
    inline const uintptr_t luaB_newproxy = REBASE(0x5AAF4F0);
    inline const uintptr_t luaB_next = REBASE(0x5AADE60);
    inline const uintptr_t luaB_print = REBASE(0x5AA8F00);
    inline const uintptr_t luaB_rawequal = REBASE(0x5AAB0F0);
    inline const uintptr_t luaB_rawget = REBASE(0x5AAB200);
    inline const uintptr_t luaB_rawlen = REBASE(0x5AAC6E0);
    inline const uintptr_t luaB_rawset = REBASE(0x5AABB70);
    inline const uintptr_t luaB_select = REBASE(0x5AAE9B0);
    inline const uintptr_t luaB_setfenv = REBASE(0x5AAAEC0);
    inline const uintptr_t luaB_setmetatable = REBASE(0x5AAA420);
    inline const uintptr_t luaB_tonumber = REBASE(0x5AA8FC0);
    inline const uintptr_t luaB_tostring = REBASE(0x5AAF490);
    inline const uintptr_t luaB_type = REBASE(0x5AAC7A0);
    inline const uintptr_t luaB_typeof = REBASE(0x5AAD300);
    inline const uintptr_t luaC_dump = REBASE(0x43E4C70);
    inline const uintptr_t luaC_init = REBASE(0x26C41A0);
    inline const uintptr_t luaC_step = REBASE(0x268F7F0);
    inline const uintptr_t luaF_freeproto = REBASE(0x26A2FC0);
    inline const uintptr_t luaG_runerror = REBASE(0x26A17A0);
    inline const uintptr_t luaH_clone = REBASE(0x269D780);
    inline const uintptr_t luaL_argerror = REBASE(0x2673020);
    inline const uintptr_t luaL_error = REBASE(0x2674070);
    inline const uintptr_t luaL_getmetafield = REBASE(0x2676B50);
    inline const uintptr_t luaM_visitgco = REBASE(0x26C3600);
    inline const uintptr_t luaO_pushfstring = REBASE(0x26A0320);
    inline const uintptr_t luaV_gettable = REBASE(0x2685A40);
    inline const uintptr_t lua_checkstack = REBASE(0x26642E0);
    inline const uintptr_t lua_error = REBASE(0x2668580);
    inline const uintptr_t lua_newstate = REBASE(0x2672AA0);
    inline const uintptr_t lua_pushfstring = REBASE(0x2665690);
    inline const uintptr_t lua_resume = REBASE(0x266FF70);
    inline const uintptr_t newpage = REBASE(0x26C3910);
    inline const uintptr_t pseudo2addr = REBASE(0x2664140);
    inline const uintptr_t require_bypass_fn = REBASE(0x4389CA0);
    inline const uintptr_t tclone = REBASE(0x26D2890);

} // namespace Luau
namespace Properties
{
    inline constexpr uintptr_t CallbackFunctionOffset = 0x10;
    inline constexpr uintptr_t CallbackOffsetInDescriptor = 0x88;
    inline constexpr uintptr_t CallbackOwnerOffset = 0x0;
    inline constexpr uintptr_t CallbackThreadOffset = 0x28;
    inline constexpr uintptr_t FunctionRefIdOffset = 0x34;
    inline constexpr uintptr_t LiveThreadRefOffset = 0x10;
    inline constexpr uintptr_t LuaStateGlobalOffset = 0x60;

} // namespace Properties
namespace PropertyDescriptor
{
    inline constexpr uintptr_t GetSet = 0xB0;
    inline constexpr uintptr_t ReadCapabilities = 0x38;
    inline constexpr uintptr_t TypeInfo = 0x70;

} // namespace PropertyDescriptor
namespace PropertyValue
{
    inline const uintptr_t AssetContentMapDtor = REBASE(0xA98610);
    inline const uintptr_t NetAssetRefDtor = REBASE(0x1D0AB80);
    inline const uintptr_t OperatorDelete = REBASE(0x4B33EF0);

} // namespace PropertyValue
namespace Raknet
{
    inline const uintptr_t ConvertItemEnumToString = REBASE(0x496D630);
    inline const uintptr_t Encrypt = REBASE(0x28C0C3C);
    inline const uintptr_t HandleConnectionState = REBASE(0x4A0C8C0);
    inline const uintptr_t ProcessNetworkPacket = REBASE(0x28A3140);
    inline const uintptr_t RakPeerReceive = REBASE(0x288E180);
    inline const uintptr_t RakPeerVTable = REBASE(0x71A0638);
    inline const uintptr_t Receive = REBASE(0x28BA830);
    inline const uintptr_t ReliabilityLayerSend = REBASE(0x28BD2A0);
    inline const uintptr_t ReportNetworkError = REBASE(0x4A09B00);
    inline const uintptr_t Send = REBASE(0x2896C80);
    inline const uintptr_t SendPacketsToSelf = REBASE(0x288C670);
    inline const uintptr_t UpdateNetworkLoop = REBASE(0x28885A0);

} // namespace Raknet
namespace RbxTransport
{
    inline const uintptr_t AppDestructor = REBASE(0x2187C80);
    inline const uintptr_t AppReceive = REBASE(0x2182840);
    inline const uintptr_t AppReceiveMaxBytes = REBASE(0x2183180);
    inline const uintptr_t AppRtti = REBASE(0x78C98E0);
    inline const uintptr_t AppSend = REBASE(0x2182470);
    inline const uintptr_t AppVTable = REBASE(0x7193940);
    inline const uintptr_t ClientChannelConfig = REBASE(0x3B526E0);
    inline const uintptr_t ClientDestructor = REBASE(0x3B528E0);
    inline const uintptr_t ClientReceive = REBASE(0x3B53110);
    inline const uintptr_t ClientRtti = REBASE(0x7940758);
    inline const uintptr_t ClientSend = REBASE(0x3B52A00);
    inline const uintptr_t ClientVTable = REBASE(0x7206440);
    inline const uintptr_t Decrypt = REBASE(0x226A180);
    inline const uintptr_t Encrypt = REBASE(0x2269FD0);
    inline const uintptr_t FailureFallbackToRbxTransport = REBASE(0x8274A50);
    inline const uintptr_t StreamAppend = REBASE(0x218B7E0);
    inline const uintptr_t StreamCreate = REBASE(0x5459D50);
    inline const uintptr_t StreamDestroy = REBASE(0x214A680);
    inline const uintptr_t UseRbxTransportClient = REBASE(0x825C600);

} // namespace RbxTransport
namespace Render
{
    inline constexpr uintptr_t RenderJobToView = 0x1E0;
    inline constexpr uintptr_t RenderViewToDevice = 0x10;
    inline constexpr uintptr_t RobloxDeviceToSwapChain = 0x88;

} // namespace Render
namespace RobloxThread
{
    inline const uintptr_t GetTlsPointer = REBASE(0xC700);
    inline const uintptr_t IdentityPtr = REBASE(0x862AC48);

} // namespace RobloxThread
namespace Scheduler
{
    inline constexpr uintptr_t Fps = 0xB0;
    inline constexpr uintptr_t JobEnd = 0xD0;
    inline constexpr uintptr_t JobStart = 0xC8;
    inline constexpr uintptr_t JobTypeName = 0x18;
    inline const uintptr_t Pointer = REBASE(0x8F1E408);

} // namespace Scheduler
namespace Scripts
{
    inline constexpr uintptr_t weak_thread_live_thread = 0x28;

} // namespace Scripts
namespace Signals
{
    inline const uintptr_t DisconnectConnection = REBASE(0x4297720);
    inline const uintptr_t FireTouchInterest = REBASE(0x1597020);

} // namespace Signals
namespace VisualEngine
{
    inline constexpr uintptr_t DeviceToSwapChain = 0x88;
    inline constexpr uintptr_t Dimensions = 0xB10;
    inline constexpr uintptr_t FakeDataModel = 0xAF0;
    inline const uintptr_t Pointer = REBASE(0x8A11808);
    inline constexpr uintptr_t RenderJobToView = 0x1E0;
    inline constexpr uintptr_t RenderView = 0xC50;
    inline constexpr uintptr_t ViewMatrix = 0x1B0;
    inline constexpr uintptr_t ViewToDevice = 0x10;

} // namespace VisualEngine
namespace reflections
{
    inline const uintptr_t CastArgs = REBASE(0x422A710);

} // namespace reflections
namespace signal_offsets
{
    inline constexpr uintptr_t Signature = 0x60;

namespace connection
{
    inline constexpr uintptr_t Enabled = 0x20;
    inline constexpr uintptr_t Next = 0x10;
    inline constexpr uintptr_t SlotWrapper = 0x30;
    inline constexpr uintptr_t SlotWrapperSelf = 0x38;

} // namespace connection
namespace getter
{
    inline constexpr uintptr_t Self = 0x18;
    inline constexpr uintptr_t Thread = 0x28;
    inline constexpr uintptr_t WaitContainer = 0x50;
    inline constexpr uintptr_t WeakChain = 0x68;

} // namespace getter
namespace slot_wrapper
{
    inline constexpr uintptr_t SlotWrapperFunctionId = 0x30;
    inline constexpr uintptr_t SlotWrapperFunctionIdFallback = 0x34;
    inline constexpr uintptr_t SlotWrapperThread = 0x28;
    inline constexpr uintptr_t SlotWrapperWeakObjectRef = 0xA0;
    inline constexpr uintptr_t SlotWrapperWeakObjectRefFallback = 0x90;
    inline constexpr uintptr_t SlotWrapperWeakObjectRefLegacy = 0x68;

} // namespace slot_wrapper
} // namespace signal_offsets
namespace signal_slot
{
    inline constexpr uintptr_t IsOnce = 0xB5;

} // namespace signal_slot
} // namespace Offsets
