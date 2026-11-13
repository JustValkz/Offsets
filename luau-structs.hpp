#pragma once
#include <cstdint>
#include "encryptions.hpp"

#define CLOSURE_CONT_ENC vmval4
#define LSTATE_STACKSIZE_ENC vmval2
#define PROTO_ABSLINEINFO_ENC vmval1
#define PROTO_DEBUGINSN_ENC vmval1
#define PROTO_DEBUGNAME_ENC vmval4
#define PROTO_LINEINFO_ENC vmval3
#define PROTO_LOCVARS_ENC vmval3
#define PROTO_SOURCE_ENC vmval1
#define PROTO_TYPEINFO_ENC vmval2
#define PROTO_UPVALUES_ENC vmval4
#define PROTO_USERDATA_ENC vmval2
#define TSTRING_HASH_ENC vmval4
#define UDATA_META_ENC vmval4
#define CLOSURE_DEBUGNAME_DEPRECATED_ENC vmval2


// Luau VM struct layouts generated from the Credoxy reference dump.
// Regenerate with: node scripts/gen-credoxy-reference.mjs
//
// The VMValue *_ENC macros are emitted by executor_writer before this body.

#include <cstddef>
#include <cstdint>
#include <memory>

struct Proto; struct lua_State; struct global_State;
struct CallInfo; struct LuaTable; struct LuaNode;
struct TString; struct LocVar; struct TValue;
struct Instruction; struct GCObject; struct UpVal;
struct Udata; struct Closure; struct RobloxExtraSpace;
struct Shared; struct SharedExtraSpace; struct Identity;
struct FeedbackVectorSlot; struct GCStats; struct GCMetrics;
struct lua_Callbacks; struct lua_Debug; struct lua_Page;
struct stringtable; struct lua_ExecutionCallbacks;
struct lua_UdataDirectAccessData;
struct lua_EmbedderGc; struct RegistryFree;

typedef TValue* StkId;
typedef void* (*lua_Alloc)(void* ud, void* ptr, size_t osize, size_t nsize);
typedef int (*lua_CFunction)(lua_State* L);
typedef int (*lua_Continuation)(lua_State* L, int status);

// Opaque value types whose internal representation is not part of the dump.
// Sizes are fixed by the surrounding static_asserts.
struct Value { uint64_t bits; };            // 8  (TValue payload)
struct TKey { uint64_t a; uint64_t b; };    // 16 (LuaNode key)
struct Identity { uint64_t a; uint64_t b; };// 16 (RobloxExtraSpace::identity)
struct registryfree_t { uint32_t v; };      // 4
struct lua_UserdataMark { uint64_t v; };    // 8
struct lua_EmbedderGc { uint64_t v; };      // 8
#define CommonHeader \
    uint8_t tt; \
    uint8_t memcat; \
    uint8_t marked

// array bounds, from the span each table occupies
#define LUA_EXECUTION_CALLBACK_STORAGE 512
#define LUA_LUTAG_LIMIT            128
#define LUA_MEMORY_CATEGORIES      256
#define LUA_SIZECLASSES            40
#define LUA_T_COUNT                13
#define LUA_UTAG_LIMIT             128
#define TAGGED_PAGESET_SIZE        8
#define TM_N                       21
#define UTAG_INTERNAL_LIMIT        130

// gcobject: 3/3 members
struct GCObject {
    CommonHeader; /* (0) (0x0) */
};

// proto: 43/43 members; 1 unnamed observed storage range(s)
struct Proto {
    CommonHeader; /* (0) (0x0) */
    uint8_t is_vararg; /* (3) (0x3) */
    uint8_t flags; /* (4) (0x4) */
    uint8_t maxstacksize; /* (5) (0x5) */
    uint8_t nups; /* (6) (0x6) */
    uint8_t numparams; /* (7) (0x7) */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* (8) (0x8) */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* (16) (0x10) */
    const Instruction* codeentry; /* (24) (0x18) */
    GCObject* gclist; /* (32) (0x20) */
    TValue* k; /* (40) (0x28) */
    Instruction* code; /* (48) (0x30) */
    struct Proto** p; /* (56) (0x38) */
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; /* (64) (0x40) */
    uint32_t execcount; /* (72) (0x48) */
    char gap_0[0x4]; /* (76) (0x4C) */
    void* execdata; /* (80) (0x50) */
    uintptr_t exectarget; /* (88) (0x58) */
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; /* (96) (0x60) */
    PROTO_USERDATA_ENC<void*> userdata; /* (104) (0x68) */
    PROTO_SOURCE_ENC<TString*> source; /* (112) (0x70) */
    uint8_t execflags; /* (120) (0x78) */
    uint8_t field_0x79[7]; /* (121) (0x79) */ // observed storage
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* (128) (0x80) */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* (136) (0x88) */
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; /* (144) (0x90) */
    int bytecodeid; /* (152) (0x98) */
    int sizek; /* (156) (0x9C) */
    int linedefined; /* (160) (0xA0) */
    int sizelocvars; /* (164) (0xA4) */
    int linegaplog2; /* (168) (0xA8) */
    int sizep; /* (172) (0xAC) */
    int sizelineinfo; /* (176) (0xB0) */
    int sizeupvalues; /* (180) (0xB4) */
    int sizecode; /* (184) (0xB8) */
    int sizetypeinfo; /* (188) (0xBC) */
    FeedbackVectorSlot* feedbackvec; /* (192) (0xC0) */
    uint32_t feedbackvecsize; /* (200) (0xC8) */
    uint32_t funid; /* (204) (0xCC) */
    Proto* optimized; /* (208) (0xD0) */
    Proto* deoptimized; /* (216) (0xD8) */
    uint64_t cost; /* (224) (0xE0) */
    void* sharedcode; /* (232) (0xE8) */
};
static_assert(sizeof(Proto) == 240, "sizeof(Proto) == 240");

// tstring: 9/9 members; 7 unnamed observed storage range(s)
struct TString {
    CommonHeader; /* (0) (0x0) */
    char gap_0[0x1]; /* (3) (0x3) */
    uint16_t atomflag; /* (4) (0x4) */
    int16_t atom; /* (6) (0x6) */
    TString* next; /* (8) (0x8) */
    TSTRING_HASH_ENC<unsigned int> hash; /* (16) (0x10) */
    unsigned int len; /* (20) (0x14) */
    char data[1]; /* (24) (0x18) */
    uint8_t field_0x19; /* (25) (0x19) */ // observed storage
    uint8_t field_0x1a; /* (26) (0x1A) */ // observed storage; zero initialization observed
    uint8_t field_0x1b; /* (27) (0x1B) */ // observed storage; zero initialization observed
    uint8_t field_0x1c; /* (28) (0x1C) */ // observed storage
    uint8_t field_0x1d; /* (29) (0x1D) */ // observed storage; zero initialization observed
    uint8_t field_0x1e; /* (30) (0x1E) */ // observed storage; zero initialization observed
    uint8_t field_0x1f; /* (31) (0x1F) */ // observed storage; zero initialization observed
};
static_assert(sizeof(TString) == 32, "sizeof(TString) == 32");

// udata: 7/7 members; 1 unnamed observed storage range(s)
struct Udata {
    CommonHeader; /* (0) (0x0) */
    uint8_t tag; /* (3) (0x3) */
    int len; /* (4) (0x4) */
    UDATA_META_ENC<struct LuaTable*> metatable; /* (8) (0x8) */
    char data[1]; /* (16) (0x10) */
    uint8_t field_0x11[7]; /* (17) (0x11) */ // observed storage
};
static_assert(sizeof(Udata) == 24, "sizeof(Udata) == 24");

// stringtable: 6/6 members
struct stringtable {
    uint32_t saltmult; /* (0) (0x0) */
    int size; /* (4) (0x4) */
    uint32_t saltadd; /* (8) (0x8) */
    char gap_0[0x4]; /* (12) (0xC) */
    TString** hash; /* (16) (0x10) */
    uint32_t nuse; /* (24) (0x18) */
    uint8_t hashshift; /* (28) (0x1C) */
    char gap_1[0x3]; /* (29) (0x1D) */
};
static_assert(sizeof(stringtable) == 32, "sizeof(stringtable) == 32");

// TValue: 3/3 members
struct TValue {
    Value value; /* (0) (0x0) */
    int extra; /* (8) (0x8) */
    int tt; /* (12) (0xC) */
};
static_assert(sizeof(TValue) == 16, "sizeof(TValue) == 16");

// Closure: 15/15 members
struct Closure {
    CommonHeader; /* (0) (0x0) */
    uint8_t preload; /* (3) (0x3) */
    uint8_t stacksize; /* (4) (0x4) */
    uint8_t nupvalues; /* (5) (0x5) */
    uint8_t isC; /* (6) (0x6) */
    char gap_0[0x1]; /* (7) (0x7) */
    GCObject* gclist; /* (8) (0x8) */
    struct LuaTable* env; /* (16) (0x10) */
    union {
        struct {
            TString* debugname; /* (0) (0x0) */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* (8) (0x8) */
            lua_CFunction f; /* (16) (0x10) */
            TValue upvals[1]; /* (24) (0x18) */
        } c;
        struct {
            struct Proto* p; /* (0) (0x0) */
            TValue uprefs[1]; /* (8) (0x8) */
        } l;
    }; /* (24) (0x18) */
};

// LuaTable: 14/14 members
struct LuaTable {
    CommonHeader; /* (0) (0x0) */
    uint8_t safeenv; /* (3) (0x3) */
    uint8_t nodemask8; /* (4) (0x4) */
    uint8_t lsizenode; /* (5) (0x5) */
    uint8_t tmcache; /* (6) (0x6) */
    uint8_t readonly; /* (7) (0x7) */
    int sizearray; /* (8) (0x8) */
    int lastfree; /* (12) (0xC) */
    struct LuaTable* metatable; /* (16) (0x10) */
    GCObject* gclist; /* (24) (0x18) */
    TValue* array; /* (32) (0x20) */
    LuaNode* node; /* (40) (0x28) */
};
static_assert(sizeof(LuaTable) == 48, "sizeof(LuaTable) == 48");

// LuaNode: 2/2 members
struct LuaNode {
    TValue val; /* (0) (0x0) */
    TKey key; /* (16) (0x10) */
};
static_assert(sizeof(LuaNode) == 32, "sizeof(LuaNode) == 32");

// CallInfo: 7/7 members
struct CallInfo {
    Proto* p; /* (0) (0x0) */
    StkId func; /* (8) (0x8) */
    StkId base; /* (16) (0x10) */
    StkId top; /* (24) (0x18) */
    const Instruction* savedpc; /* (32) (0x20) */
    int nresults; /* (40) (0x28) */
    unsigned int flags; /* (44) (0x2C) */
};
static_assert(sizeof(CallInfo) == 48, "sizeof(CallInfo) == 48");

// lua_State: 26/26 members; 1 unnamed observed storage range(s)
struct lua_State {
    CommonHeader; /* (0) (0x0) */
    uint8_t status; /* (3) (0x3) */
    uint8_t activememcat; /* (4) (0x4) */
    bool singlestep; /* (5) (0x5) */
    bool isactive; /* (6) (0x6) */
    uint8_t field_0x7; /* (7) (0x7) */ // observed storage
    TString* namecall; /* (8) (0x8) */
    RobloxExtraSpace* userdata; /* (16) (0x10) */
    CallInfo* end_ci; /* (24) (0x18) */
    CallInfo* base_ci; /* (32) (0x20) */
    unsigned short nCcalls; /* (40) (0x28) */
    unsigned short baseCcalls; /* (42) (0x2A) */
    int cachedslot; /* (44) (0x2C) */
    UpVal* openupval; /* (48) (0x30) */
    GCObject* gclist; /* (56) (0x38) */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* (64) (0x40) */
    int size_ci; /* (68) (0x44) */
    StkId stack_last; /* (72) (0x48) */
    CallInfo* ci; /* (80) (0x50) */
    StkId stack; /* (88) (0x58) */
    global_State* global; /* (96) (0x60) */
    StkId top; /* (104) (0x68) */
    StkId base; /* (112) (0x70) */
    LuaTable* gt; /* (120) (0x78) */
    LuaTable* finalizers; /* (128) (0x80) */
};
static_assert(sizeof(lua_State) == 136, "sizeof(lua_State) == 136");

// lua_Callbacks: 14/14 members
struct lua_Callbacks {
    void* userdata; /* (0) (0x0) */
    void(*onfree)(lua_State*,void*); /* (8) (0x8) */
    void(*onallocate)(lua_State*,void*,size_t,size_t,uint8_t,int,int); /* (16) (0x10) */
    void(*userthread)(lua_State*,lua_State*); /* (24) (0x18) */
    void(*debugstep)(lua_State*,lua_Debug*); /* (32) (0x20) */
    void(*preresume)(lua_State*); /* (40) (0x28) */
    void(*debugbreak)(lua_State*,lua_Debug*); /* (48) (0x30) */
    void(*postresume)(lua_State*); /* (56) (0x38) */
    void(*debuginterrupt)(lua_State*,lua_Debug*); /* (64) (0x40) */
    void(*userfinalizer)(lua_State*,lua_State*); /* (72) (0x48) */
    void(*debugprotectederror)(lua_State*); /* (80) (0x50) */
    void(*panic)(lua_State*,int); /* (88) (0x58) */
    int16_t(*useratom)(lua_State*,const char*,size_t); /* (96) (0x60) */
    void(*interrupt)(lua_State*,int); /* (104) (0x68) */
};
static_assert(sizeof(lua_Callbacks) == 112, "sizeof(lua_Callbacks) == 112");

// lua_Page: 11/11 members
struct lua_Page {
    lua_Page* listprev; /* (0) (0x0) */
    lua_Page* listnext; /* (8) (0x8) */
    lua_Page* prev; /* (16) (0x10) */
    lua_Page* next; /* (24) (0x18) */
    int pageSize; /* (32) (0x20) */
    int blockSize; /* (36) (0x24) */
    void* freeList; /* (40) (0x28) */
    int freeNext; /* (48) (0x30) */
    char gap_0[0x4]; /* (52) (0x34) */
    int busyBlocks; /* (56) (0x38) */
    char padding[8]; /* (60) (0x3C) */
};

// lua_debug: 13/13 members
struct lua_Debug {
    void* userdata; /* (0) (0x0) */
    uint8_t nupvals; /* (8) (0x8) */
    uint8_t isvararg; /* (9) (0x9) */
    uint8_t nparams; /* (10) (0xA) */
    char gap_0[0x1]; /* (11) (0xB) */
    int bytecodeid; /* (12) (0xC) */
    int currentline; /* (16) (0x10) */
    int protoid; /* (20) (0x14) */
    int linedefined; /* (24) (0x18) */
    char gap_1[0x4]; /* (28) (0x1C) */
    const char* source; /* (32) (0x20) */
    const char* what; /* (40) (0x28) */
    const char* short_src; /* (48) (0x30) */
    const char* name; /* (56) (0x38) */
    char ssbuf; /* (64) (0x40) */
};

// lua_ExecutionCallbacks: 7 recovered slots
struct lua_ExecutionCallbacks {
    uint8_t field_0x0[16]; /* (0) (0x0) */ // observed storage
    void(*destroy)(lua_State*, Proto*); /* (16) (0x10) */
    uint64_t field_0x18; /* (24) (0x18) */ // observed storage
    uint8_t field_0x20[16]; /* (32) (0x20) */ // observed storage
    uint64_t field_0x30; /* (48) (0x30) */ // observed storage
    char gap_0[0x8]; /* (56) (0x38) */
    uint8_t field_0x40[16]; /* (64) (0x40) */ // observed storage
    uint64_t field_0x50; /* (80) (0x50) */ // observed storage
};
static_assert(sizeof(lua_ExecutionCallbacks) == 88, "sizeof(lua_ExecutionCallbacks) == 88");

// UpVal: 8 recovered slots
struct UpVal {
    uint8_t field_0x0; /* (0) (0x0) */ // observed storage
    uint8_t field_0x1; /* (1) (0x1) */ // observed storage
    uint8_t field_0x2; /* (2) (0x2) */ // observed storage
    uint8_t field_0x3; /* (3) (0x3) */ // observed storage; zero initialization observed
    char gap_0[0x4]; /* (4) (0x4) */
    TValue* v; /* (8) (0x8) */
    uint64_t field_0x10; /* (16) (0x10) */ // observed storage
    uint64_t field_0x18; /* (24) (0x18) */ // observed storage
    uint64_t field_0x20; /* (32) (0x20) */ // observed storage
};

// GCStats: 16 recovered slots
struct GCStats {
    uint8_t field_0x0[16]; /* (0) (0x0) */ // observed storage
    uint8_t field_0x10[16]; /* (16) (0x10) */ // observed storage
    uint8_t field_0x20[16]; /* (32) (0x20) */ // observed storage
    uint8_t field_0x30[16]; /* (48) (0x30) */ // observed storage
    uint8_t field_0x40[16]; /* (64) (0x40) */ // observed storage
    uint8_t field_0x50[16]; /* (80) (0x50) */ // observed storage
    uint8_t field_0x60[16]; /* (96) (0x60) */ // observed storage
    uint8_t field_0x70[16]; /* (112) (0x70) */ // observed storage
    uint32_t field_0x80; /* (128) (0x80) */ // observed storage
    uint32_t field_0x84; /* (132) (0x84) */ // observed storage
    uint64_t field_0x88; /* (136) (0x88) */ // observed storage
    uint64_t field_0x90; /* (144) (0x90) */ // observed storage
    uint64_t field_0x98; /* (152) (0x98) */ // observed storage
    uint64_t field_0xa0; /* (160) (0xA0) */ // observed storage
    uint64_t field_0xa8; /* (168) (0xA8) */ // observed storage
    uint64_t field_0xb0; /* (176) (0xB0) */ // observed storage
};
static_assert(sizeof(GCStats) == 184, "sizeof(GCStats) == 184");

// GCMetrics: 30 recovered slots
struct GCMetrics {
    uint8_t field_0x0[16]; /* (0) (0x0) */ // observed storage
    uint8_t field_0x10[16]; /* (16) (0x10) */ // observed storage
    uint8_t field_0x20[16]; /* (32) (0x20) */ // observed storage
    uint8_t field_0x30[16]; /* (48) (0x30) */ // observed storage
    uint8_t field_0x40[16]; /* (64) (0x40) */ // observed storage
    uint8_t field_0x50[16]; /* (80) (0x50) */ // observed storage
    uint8_t field_0x60[16]; /* (96) (0x60) */ // observed storage
    uint8_t field_0x70[16]; /* (112) (0x70) */ // observed storage
    uint8_t field_0x80[16]; /* (128) (0x80) */ // observed storage
    uint8_t field_0x90[16]; /* (144) (0x90) */ // observed storage
    uint8_t field_0xa0[16]; /* (160) (0xA0) */ // observed storage
    uint8_t field_0xb0[16]; /* (176) (0xB0) */ // observed storage
    uint8_t field_0xc0[16]; /* (192) (0xC0) */ // observed storage
    uint64_t field_0xd0; /* (208) (0xD0) */ // observed storage
    char gap_0[0x8]; /* (216) (0xD8) */
    uint8_t field_0xe0[16]; /* (224) (0xE0) */ // observed storage
    uint8_t field_0xf0[16]; /* (240) (0xF0) */ // observed storage
    uint8_t field_0x100[16]; /* (256) (0x100) */ // observed storage
    uint8_t field_0x110[16]; /* (272) (0x110) */ // observed storage
    uint8_t field_0x120[16]; /* (288) (0x120) */ // observed storage
    uint8_t field_0x130[16]; /* (304) (0x130) */ // observed storage
    uint8_t field_0x140[16]; /* (320) (0x140) */ // observed storage
    uint64_t field_0x150; /* (336) (0x150) */ // observed storage
    char gap_1[0x8]; /* (344) (0x158) */
    uint8_t field_0x160[16]; /* (352) (0x160) */ // observed storage
    uint8_t field_0x170[16]; /* (368) (0x170) */ // observed storage
    uint8_t field_0x180[16]; /* (384) (0x180) */ // observed storage
    uint8_t field_0x190[16]; /* (400) (0x190) */ // observed storage
    uint8_t field_0x1a0[16]; /* (416) (0x1A0) */ // observed storage
    uint8_t field_0x1b0[16]; /* (432) (0x1B0) */ // observed storage
    uint8_t field_0x1c0[16]; /* (448) (0x1C0) */ // observed storage
    uint64_t field_0x1d0; /* (464) (0x1D0) */ // observed storage
    char gap_2[0x8]; /* (472) (0x1D8) */
};
static_assert(sizeof(GCMetrics) == 480, "sizeof(GCMetrics) == 480");

// lua_UdataDirectAccessData: 6 recovered slots
struct lua_UdataDirectAccessData {
    uint64_t field_0x0; /* (0) (0x0) */ // observed storage
    char gap_0[0x4]; /* (8) (0x8) */
    uint32_t field_0xc; /* (12) (0xC) */ // observed storage
    uint64_t field_0x10; /* (16) (0x10) */ // observed storage
    char gap_1[0x4]; /* (24) (0x18) */
    uint32_t field_0x1c; /* (28) (0x1C) */ // observed storage
    uint64_t field_0x20; /* (32) (0x20) */ // observed storage
    char gap_2[0x4]; /* (40) (0x28) */
    uint32_t field_0x2c; /* (44) (0x2C) */ // observed storage
    char gap_3[0x18]; /* (48) (0x30) */
};
static_assert(sizeof(lua_UdataDirectAccessData) == 72, "sizeof(lua_UdataDirectAccessData) == 72");

// LuauPageset: 3/3 members
struct LuauPageset {
    lua_Page* freepages[40]; /* (0) (0x0) */
    lua_Page* allpages; /* (320) (0x140) */
    lua_Page* sweepgcopage; /* (328) (0x148) */
};
static_assert(sizeof(LuauPageset) == 336, "sizeof(LuauPageset) == 336");

// global_state: 59/59 members
struct global_State {
    uint8_t gcdisabled; /* (0) (0x0) */
    uint8_t gcstate; /* (1) (0x1) */
    uint8_t currentwhite; /* (2) (0x2) */
    char gap_0[0x5]; /* (3) (0x3) */
    size_t GCthreshold; /* (8) (0x8) */
    size_t totalbytes; /* (16) (0x10) */
    int gcgoal; /* (24) (0x18) */
    int gcstepsize; /* (28) (0x1C) */
    int gcstepmul; /* (32) (0x20) */
    char gap_1[0x4]; /* (36) (0x24) */
    stringtable strt; /* (40) (0x28) */
    lua_Alloc frealloc; /* (72) (0x48) */
    void* ud; /* (80) (0x50) */
    GCObject* gray; /* (88) (0x58) */
    GCObject* grayagain; /* (96) (0x60) */
    GCObject* weak; /* (104) (0x68) */
    struct lua_Page* freepages[40]; /* (112) (0x70) */
    struct lua_Page* allpages; /* (432) (0x1B0) */
    UpVal uvhead; /* (440) (0x1B8) */
    struct lua_State* mainthread; /* (480) (0x1E0) */
    struct lua_Page* sweepgcopage; /* (488) (0x1E8) */
    struct lua_Page* freegcopages[40]; /* (496) (0x1F0) */
    struct lua_Page* allgcopages; /* (816) (0x330) */
    TString* tmname[21]; /* (824) (0x338) */
    TString* ttname[13]; /* (992) (0x3E0) */
    struct LuaTable* mt[13]; /* (1096) (0x448) */
    void* cagealloc; /* (1200) (0x4B0) */
    struct lua_Page* allgcopages_cage; /* (1208) (0x4B8) */
    struct lua_Page* sweepgcopage_cage; /* (1216) (0x4C0) */
    struct lua_Page* freegcopages_cage[40]; /* (1224) (0x4C8) */
    void* cageud; /* (1544) (0x608) */
    TValue pseudotemp; /* (1552) (0x610) */
    TValue registry; /* (1568) (0x620) */
    registryfree_t registryfree; /* (1584) (0x630) */
    char gap_2[0x4]; /* (1588) (0x634) */
    void* errorjmp; /* (1592) (0x638) */
    uint64_t rngstate; /* (1600) (0x640) */
    lua_Callbacks cb; /* (1608) (0x648) */
    uint64_t ptrenckey[4]; /* (1720) (0x6B8) */
    lua_ExecutionCallbacks ecb; /* (1752) (0x6D8) */
    alignas(16) uint8_t ecbdata[512]; /* (1840) (0x730) */
    lua_UdataDirectAccessData udatadirect[130]; /* (2352) (0x930) */
    LuauPageset taggedpageset[8]; /* (11712) (0x2DC0) */
    int sweeppageset; /* (14400) (0x3840) */
    char gap_3[0x4]; /* (14404) (0x3844) */
    size_t memcatbytes[256]; /* (14408) (0x3848) */
    void(*udatagc[128])(lua_State*,void*); /* (16456) (0x4048) */
    lua_UserdataMark udatamark[128]; /* (17480) (0x4448) */
    LuaTable* udatamt[128]; /* (18504) (0x4848) */
    TValue weakregistry; /* (19528) (0x4C48) */
    int weakregistryfree; /* (19544) (0x4C58) */
    int weakregistrytop; /* (19548) (0x4C5C) */
    lua_EmbedderGc embeddergc; /* (19552) (0x4C60) */
    TString* lightuserdataname[128]; /* (19560) (0x4C68) */
    LuaTable* udatadirectfields[130]; /* (20584) (0x5068) */
    struct Closure* builtinPcall; /* (21624) (0x5478) */
    struct Closure* builtinXpcall; /* (21632) (0x5480) */
    uint64_t ptrenckeynew[8]; /* (21640) (0x5488) */
    bool ptrencactive; /* (21704) (0x54C8) */
    char gap_4[0x7]; /* (21705) (0x54C9) */
    GCStats gcstats; /* (21712) (0x54D0) */
    uint32_t lastprotoid; /* (21896) (0x5588) */
    uint32_t lastclassid; /* (21900) (0x558C) */
    GCMetrics gcmetrics; /* (21904) (0x5590) */
};
static_assert(sizeof(global_State) == 22384, "sizeof(global_State) == 22384");

// SharedThreads: 2/2 members
struct SharedThreads {
    uint64_t count; /* (0) (0x0) */
    RobloxExtraSpace* head; /* (8) (0x8) */
};

// Shared: 3/6 members
struct Shared {
    char gap_0[0x8]; /* (0) (0x0) */
    void* scriptContext; /* (8) (0x8) */
    char gap_1[0x10]; /* (16) (0x10) */
    SharedThreads allThreads; /* (32) (0x20) */
    int threadCount; /* (48) (0x30) */
};

// robloxextraspace: 9/21 members; 12 unnamed observed storage range(s)
struct RobloxExtraSpace {
    RobloxExtraSpace* next; /* (0) (0x0) */
    SharedThreads* _container; /* (8) (0x8) */
    RobloxExtraSpace* prev; /* (16) (0x10) */
    std::shared_ptr<Shared> shared; /* (24) (0x18) */
    uint64_t field_0x28; /* (40) (0x28) */ // observed storage
    std::weak_ptr<void> script; /* (48) (0x30) */
    uint64_t field_0x40; /* (64) (0x40) */ // observed storage
    Identity identity; /* (72) (0x48) */
    uint64_t field_0x58; /* (88) (0x58) */ // observed storage
    std::weak_ptr<const void> InstanceDefiningCapabilities; /* (96) (0x60) */
    std::weak_ptr<void> actor; /* (112) (0x70) */
    uint64_t field_0x80; /* (128) (0x80) */ // observed storage
    uint64_t field_0x88; /* (136) (0x88) */ // observed storage
    uint64_t field_0x90; /* (144) (0x90) */ // observed storage
    uint64_t capabilities; /* (152) (0x98) */
    uint8_t field_0xa0; /* (160) (0xA0) */ // observed storage
    uint8_t field_0xa1; /* (161) (0xA1) */ // observed storage
    uint8_t field_0xa2; /* (162) (0xA2) */ // observed storage
    uint8_t field_0xa3; /* (163) (0xA3) */ // observed storage
    char gap_0[0x4]; /* (164) (0xA4) */
    uint64_t field_0xa8; /* (168) (0xA8) */ // observed storage
    uint64_t field_0xb0; /* (176) (0xB0) */ // observed storage
};
static_assert(sizeof(RobloxExtraSpace) == 184, "sizeof(RobloxExtraSpace) == 184");

// SharedExtraSpace: 1/1 members
struct SharedExtraSpace {
    char gap_0[0x8]; /* (0) (0x0) */
    uintptr_t ScriptContext; /* (8) (0x8) */
};

// GC_object: 6 recovered slots
struct GC_object {
    uint8_t field_0x0; /* (0) (0x0) */ // observed storage
    uint8_t field_0x1; /* (1) (0x1) */ // observed storage
    uint8_t field_0x2; /* (2) (0x2) */ // observed storage
    char gap_0[0xD]; /* (3) (0x3) */
    uint64_t field_0x10; /* (16) (0x10) */ // observed storage
    uint32_t field_0x18; /* (24) (0x18) */ // observed storage
    char gap_1[0x4]; /* (28) (0x1C) */
    uint64_t field_0x20; /* (32) (0x20) */ // observed storage; zero initialization observed
};

// LocVar: 0 recovered slots
struct LocVar {
    char gap_0[0x18]; /* (0) (0x0) */
};
static_assert(sizeof(LocVar) == 24, "sizeof(LocVar) == 24");



