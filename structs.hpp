#pragma once
#include <cstdint>

namespace StructOffsets
{
    namespace Actor
    {
        constexpr uintptr_t ParallelFlag = 0x100;
    }

    namespace AirProperties
    {
        constexpr uintptr_t AirDensity = 0x18;
        constexpr uintptr_t GlobalWind = 0x3C;
    }

    namespace AnimationTrack
    {
        constexpr uintptr_t Animation = 0xA0;
        constexpr uintptr_t Animator = 0xF8;
        constexpr uintptr_t IsPlaying = 0xA10;
        constexpr uintptr_t Looped = 0xCD;
        constexpr uintptr_t Speed = 0xBC;
        constexpr uintptr_t TimePosition = 0xC0;
    }

    namespace Animator
    {
        constexpr uintptr_t ActiveAnimations = 0x920;
    }

    namespace Atmosphere
    {
        constexpr uintptr_t Color = 0xA0;
        constexpr uintptr_t Decay = 0xAC;
        constexpr uintptr_t Density = 0xB8;
        constexpr uintptr_t Glare = 0xBC;
        constexpr uintptr_t Haze = 0xC0;
        constexpr uintptr_t Offset = 0xC4;
    }

    namespace Attachment
    {
        constexpr uintptr_t Position = 0xAC;
    }

    namespace Attribute
    {
        constexpr uintptr_t Key = 0x0;
        constexpr uintptr_t Size = 0x58;
        constexpr uintptr_t Value = 0x18;
    }

    namespace BasePart
    {
        constexpr uintptr_t CastShadow = 0x120;
        constexpr uintptr_t Color3 = 0x11C;
        constexpr uintptr_t Locked = 0x121;
        constexpr uintptr_t Massless = 0x122;
        constexpr uintptr_t Overlap = 0x1F8;
        constexpr uintptr_t Primitive = 0x178;
        constexpr uintptr_t Reflectance = 0xF4;
        constexpr uintptr_t Shape = 0x1A0;
        constexpr uintptr_t Transparency = 0x118;
    }

    namespace Beam
    {
        constexpr uintptr_t Attachment0 = 0x148;
        constexpr uintptr_t Attachment1 = 0x158;
        constexpr uintptr_t Brightness = 0x168;
        constexpr uintptr_t CurveSize0 = 0x16C;
        constexpr uintptr_t CurveSize1 = 0x170;
        constexpr uintptr_t LightEmission = 0x174;
        constexpr uintptr_t LightInfluence = 0x178;
        constexpr uintptr_t Texture = 0x128;
        constexpr uintptr_t TextureLength = 0x184;
        constexpr uintptr_t TextureSpeed = 0x18C;
        constexpr uintptr_t Width0 = 0x190;
        constexpr uintptr_t Width1 = 0x194;
        constexpr uintptr_t ZOffset = 0x198;
    }

    namespace BloomEffect
    {
        constexpr uintptr_t Enabled = 0x98;
        constexpr uintptr_t Intensity = 0xA0;
        constexpr uintptr_t Size = 0xA4;
        constexpr uintptr_t Threshold = 0xA8;
    }

    namespace BlurEffect
    {
        constexpr uintptr_t Enabled = 0x98;
        constexpr uintptr_t Size = 0xA0;
    }

    namespace ByteCode
    {
        constexpr uintptr_t LocalScriptByteCode = 0x178;
        constexpr uintptr_t ModuleScriptByteCode = 0x120;
        constexpr uintptr_t Pointer = 0x18;
        constexpr uintptr_t Size = 0x28;
    }

    namespace CachedItem
    {
        constexpr uintptr_t FileMeshData = 0x28;
    }

    namespace CallInfo
    {
        constexpr uintptr_t base = 0x10;
        constexpr uintptr_t func = 0x18;
        constexpr uintptr_t nresults = 0x28;
        constexpr uintptr_t top = 0x0;
    }

    namespace Callback
    {
        constexpr uintptr_t DataModelAdjustment = 0x1C8;
        constexpr uintptr_t Reference = 0x34;
        constexpr uintptr_t WeakChain = 0x38;
        constexpr uintptr_t WeakObject = 0x18;
        constexpr uintptr_t Wrapper = 0x18;
    }

    namespace Camera
    {
        constexpr uintptr_t CFrame = 0xC0;
        constexpr uintptr_t CameraSubject = 0xB0;
        constexpr uintptr_t CameraType = 0x120;
        constexpr uintptr_t FieldOfView = 0x128;
        constexpr uintptr_t ImagePlaneDepth = 0x2D4;
        constexpr uintptr_t Position = 0xE4;
        constexpr uintptr_t Rotation = 0xC0;
        constexpr uintptr_t Viewport = 0x284;
        constexpr uintptr_t ViewportInt16 = 0x284;
        constexpr uintptr_t ViewportSize = 0x2C4;
    }

    namespace Capabilities
    {
        constexpr uintptr_t Capabilities = 0x28;
    }

    namespace CharacterMesh
    {
        constexpr uintptr_t BaseTextureId = 0xB0;
        constexpr uintptr_t BodyPart = 0x130;
        constexpr uintptr_t MeshId = 0xE0;
        constexpr uintptr_t OverlayTextureId = 0x110;
    }

    namespace ClassDescriptor
    {
        constexpr uintptr_t CallbackEntryKindValue = 0x4;
        constexpr uintptr_t PropertyEntryDescriptor = 0x0;
        constexpr uintptr_t PropertyEntryKind = 0x8;
        constexpr uintptr_t PropertyMap = 0x250;
        constexpr uintptr_t PropertyMapBucketIndices = 0x2C8;
        constexpr uintptr_t PropertyMapBucketMask = 0x2D8;
        constexpr uintptr_t PropertyMapEntries = 0x2D0;
        constexpr uintptr_t PropertyMapEntrySize = 0x10;
    }

    namespace ClickDetector
    {
        constexpr uintptr_t MaxActivationDistance = 0xD0;
        constexpr uintptr_t MouseIcon = 0xB0;
    }

    namespace Closure
    {
        constexpr uintptr_t f = 0x28;
        constexpr uintptr_t isC = 0x3;
        constexpr uintptr_t nupvalues = 0x4;
        constexpr uintptr_t stacksize = 0x5;
    }

    namespace Clothing
    {
        constexpr uintptr_t Color3 = 0x108;
        constexpr uintptr_t Template = 0xE8;
    }

    namespace ColorCorrectionEffect
    {
        constexpr uintptr_t Brightness = 0xAC;
        constexpr uintptr_t Contrast = 0xB0;
        constexpr uintptr_t Enabled = 0x98;
        constexpr uintptr_t TintColor = 0xA0;
    }

    namespace ColorGradingEffect
    {
        constexpr uintptr_t Enabled = 0x98;
        constexpr uintptr_t TonemapperPreset = 0xA0;
    }

    namespace DataModel
    {
        constexpr uintptr_t Children = 0x70;
        constexpr uintptr_t CreatorId = 0x190;
        constexpr uintptr_t GameId = 0x198;
        constexpr uintptr_t GameLoaded = 0x5B8;
        constexpr uintptr_t JobId = 0x108;
        constexpr uintptr_t PlaceId = 0x1A0;
        constexpr uintptr_t PlaceVersion = 0x1BC;
        constexpr uintptr_t PrimitiveCount = 0x430;
        constexpr uintptr_t ScriptContext = 0x440;
        constexpr uintptr_t ServerIP = 0x5A0;
        constexpr uintptr_t ToRenderView1 = 0x1D8;
        constexpr uintptr_t ToRenderView2 = 0x8;
        constexpr uintptr_t ToRenderView3 = 0x28;
        constexpr uintptr_t Workspace = 0x168;
    }

    namespace DepthOfFieldEffect
    {
        constexpr uintptr_t Enabled = 0x98;
        constexpr uintptr_t FarIntensity = 0xA0;
        constexpr uintptr_t FocusDistance = 0xA4;
        constexpr uintptr_t InFocusRadius = 0xA8;
        constexpr uintptr_t NearIntensity = 0xAC;
    }

    namespace DragDetector
    {
        constexpr uintptr_t ActivatedCursorIcon = 0x188;
        constexpr uintptr_t CursorIcon = 0xB0;
        constexpr uintptr_t MaxActivationDistance = 0xD0;
        constexpr uintptr_t MaxDragAngle = 0x270;
        constexpr uintptr_t MaxDragTranslation = 0x234;
        constexpr uintptr_t MaxForce = 0x274;
        constexpr uintptr_t MaxTorque = 0x278;
        constexpr uintptr_t MinDragAngle = 0x27C;
        constexpr uintptr_t MinDragTranslation = 0x240;
        constexpr uintptr_t ReferenceInstance = 0x1B8;
        constexpr uintptr_t Responsiveness = 0x288;
    }

    namespace EventDescriptor
    {
        constexpr uintptr_t Signature = 0x48;
    }

    namespace EventInstance
    {
        constexpr uintptr_t Descriptor = 0x0;
        constexpr uintptr_t OwningInstance = 0x18;
    }

    namespace EventSignature
    {
        constexpr uintptr_t FirstParameter = 0x8;
        constexpr uintptr_t MaximumParameters = 0x80;
        constexpr uintptr_t ParameterStride = 0x70;
    }

    namespace ExtraSpace
    {
        constexpr uintptr_t IsCoreScript = 0x168;
        constexpr uintptr_t RequireBypass = 0xA00;
        constexpr uintptr_t ScriptContextToLuaState = 0x220;
        constexpr uintptr_t ScriptContextToResume = 0x8E0;
        constexpr uintptr_t ScriptContextToState = 0x300;
        constexpr uintptr_t WaitingHybridScriptsJobScriptContext = 0x1C0;
    }

    namespace FakeDataModel
    {
        constexpr uintptr_t RealDataModel = 0x1F8;
    }

    namespace FastClusterEntity
    {
        constexpr uintptr_t AlphaByte = 0x14;
        constexpr uintptr_t BBoxMaxX = 0xA4;
        constexpr uintptr_t BBoxMaxY = 0xA8;
        constexpr uintptr_t BBoxMaxZ = 0xAC;
        constexpr uintptr_t BBoxMinX = 0x98;
        constexpr uintptr_t BBoxMinY = 0x9C;
        constexpr uintptr_t BBoxMinZ = 0xA0;
        constexpr uintptr_t ContextPtr = 0x8;
        constexpr uintptr_t DecalMaterialPtr = 0x48;
        constexpr uintptr_t MaterialPtr = 0x20;
        constexpr uintptr_t PrimitiveIndexArrayPtr = 0x80;
        constexpr uintptr_t PrimitivePoolPtr = 0x1A0;
        constexpr uintptr_t RenderQueueId = 0x10;
        constexpr uintptr_t TechniqueArrayPtr = 0x70;
        constexpr uintptr_t VTableRva = 0x0;
    }

    namespace FileMeshData
    {
        constexpr uintptr_t AABBMax = 0x18C;
        constexpr uintptr_t AABBMin = 0x180;
        constexpr uintptr_t Faces = 0x30;
        constexpr uintptr_t FacesEnd = 0x38;
        constexpr uintptr_t Vertices = 0x0;
        constexpr uintptr_t VerticesEnd = 0x8;
    }

    namespace GarbageCollector
    {
        constexpr uintptr_t L_global = 0x28;
        constexpr uintptr_t g_freepages = 0x68;
        constexpr uintptr_t g_gcstate = 0x39;
        constexpr uintptr_t g_gcstepmul = 0x44;
        constexpr uintptr_t g_gcstepsize = 0x40;
        constexpr uintptr_t g_gray = 0x20;
        constexpr uintptr_t g_grayagain = 0x18;
        constexpr uintptr_t g_weak = 0x10;
    }

    namespace GuiBase2D
    {
        constexpr uintptr_t AbsolutePosition = 0xF4;
        constexpr uintptr_t AbsoluteRotation = 0xD0;
        constexpr uintptr_t AbsoluteSize = 0xFC;
    }

    namespace GuiObject
    {
        constexpr uintptr_t Active = 0x340;
        constexpr uintptr_t AnchorPoint = 0x2F0;
        constexpr uintptr_t AutomaticSize = 0x2F8;
        constexpr uintptr_t BackgroundColor3 = 0x2D8;
        constexpr uintptr_t BackgroundTransparency = 0x2E4;
        constexpr uintptr_t BorderColor3 = 0x2E4;
        constexpr uintptr_t BorderMode = 0x300;
        constexpr uintptr_t BorderSizePixel = 0x304;
        constexpr uintptr_t ClipsDescendants = 0x341;
        constexpr uintptr_t GuiState = 0x310;
        constexpr uintptr_t Image = 0x670;
        constexpr uintptr_t Interactable = 0x343;
        constexpr uintptr_t LayoutOrder = 0x314;
        constexpr uintptr_t Position = 0x2A8;
        constexpr uintptr_t RichText = 0x7C8;
        constexpr uintptr_t Rotation = 0xD0;
        constexpr uintptr_t ScreenGui_Enabled = 0x40D;
        constexpr uintptr_t Selectable = 0x344;
        constexpr uintptr_t SelectionOrder = 0x330;
        constexpr uintptr_t Size = 0x2C8;
        constexpr uintptr_t SizeConstraint = 0x338;
        constexpr uintptr_t Text = 0xA30;
        constexpr uintptr_t TextColor3 = 0xAE0;
        constexpr uintptr_t Visible = 0x72D;
        constexpr uintptr_t ZIndex = 0x33C;
    }

    namespace HandleAdornment
    {
        constexpr uintptr_t CFrame = 0x100;
    }

    namespace Humanoid
    {
        constexpr uintptr_t AutoJumpEnabled = 0x1CC;
        constexpr uintptr_t AutoRotate = 0x1CD;
        constexpr uintptr_t AutomaticScalingEnabled = 0x1CE;
        constexpr uintptr_t BreakJointsOnDeath = 0x1D0;
        constexpr uintptr_t CameraOffset = 0x110;
        constexpr uintptr_t DisplayDistanceType = 0x174;
        constexpr uintptr_t DisplayName = 0xA0;
        constexpr uintptr_t EvaluateStateMachine = 0x1D1;
        constexpr uintptr_t FloorMaterial = 0x178;
        constexpr uintptr_t Health = 0x184;
        constexpr uintptr_t HealthDisplayDistance = 0x17C;
        constexpr uintptr_t HealthDisplayType = 0x180;
        constexpr uintptr_t HipHeight = 0x188;
        constexpr uintptr_t HumanoidRootPart = 0x468;
        constexpr uintptr_t HumanoidState = 0x8B0;
        constexpr uintptr_t HumanoidStateID = 0x20;
        constexpr uintptr_t IsWalking = 0xA46;
        constexpr uintptr_t Jump = 0x1D4;
        constexpr uintptr_t JumpHeight = 0x198;
        constexpr uintptr_t JumpPower = 0x19C;
        constexpr uintptr_t MaxHealth = 0x1A0;
        constexpr uintptr_t MaxSlopeAngle = 0x1A4;
        constexpr uintptr_t MoveDirection = 0x134;
        constexpr uintptr_t MoveToPart = 0x100;
        constexpr uintptr_t MoveToPoint = 0x158;
        constexpr uintptr_t NameDisplayDistance = 0x1A8;
        constexpr uintptr_t NameOcclusion = 0x1AC;
        constexpr uintptr_t PlatformStand = 0x1D6;
        constexpr uintptr_t PlatformStatePointer = 0x4746A4F8;
        constexpr uintptr_t RequiresNeck = 0x1D7;
        constexpr uintptr_t RigType = 0x1B8;
        constexpr uintptr_t SeatPart = 0xF0;
        constexpr uintptr_t Sit = 0x1D7;
        constexpr uintptr_t TargetPoint = 0x140;
        constexpr uintptr_t UseJumpPower = 0x1DA;
        constexpr uintptr_t WalkSpeed = 0x1C8;
        constexpr uintptr_t WalkSpeedCheck = 0x3A4;
        constexpr uintptr_t WalkTimer = 0x3F0;
        constexpr uintptr_t WalkToPoint = 0x158;
        constexpr uintptr_t Walkspeed = 0x1C8;
        constexpr uintptr_t WalkspeedCheck = 0x3A4;
    }

    namespace InputObject
    {
        constexpr uintptr_t MousePosition = 0xD4;
    }

    namespace Instance
    {
        constexpr uintptr_t Children = 0x78;
        constexpr uintptr_t ChildrenEnd = 0x8;
        constexpr uintptr_t ChildrenStart = 0x70;
        constexpr uintptr_t ClassBase = 0x1B0;
        constexpr uintptr_t ClassDescriptor = 0x18;
        constexpr uintptr_t ClassName = 0x8;
        constexpr uintptr_t ComponentMap = 0x38;
        constexpr uintptr_t Name = 0x0;
        constexpr uintptr_t NameContainer = 0x68;
        constexpr uintptr_t Parent = 0x60;
        constexpr uintptr_t This = 0x8;
    }

    namespace JointInstance
    {
        constexpr uintptr_t Part0 = 0x100;
        constexpr uintptr_t Part1 = 0x110;
    }

    namespace LRUHolder
    {
        constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LRUNode
    {
        constexpr uintptr_t AssetID = 0x10;
        constexpr uintptr_t CachedItem = 0x38;
        constexpr uintptr_t Next = 0x0;
    }

    namespace Lighting
    {
        constexpr uintptr_t Ambient = 0xB8;
        constexpr uintptr_t Atmosphere = 0x1C0;
        constexpr uintptr_t Brightness = 0x100;
        constexpr uintptr_t ClockTime = 0xB0;
        constexpr uintptr_t ColorShift_Bottom = 0xC4;
        constexpr uintptr_t ColorShift_Top = 0xD0;
        constexpr uintptr_t EnvironmentDiffuseScale = 0x104;
        constexpr uintptr_t EnvironmentSpecularScale = 0x108;
        constexpr uintptr_t ExposureCompensation = 0x10C;
        constexpr uintptr_t FogColor = 0xDC;
        constexpr uintptr_t FogEnd = 0x114;
        constexpr uintptr_t FogStart = 0x118;
        constexpr uintptr_t GeographicLatitude = 0x11C;
        constexpr uintptr_t GlobalShadows = 0x12C;
        constexpr uintptr_t GradientBottom = 0x178;
        constexpr uintptr_t GradientTop = 0x138;
        constexpr uintptr_t LightColor = 0x144;
        constexpr uintptr_t LightDirection = 0x150;
        constexpr uintptr_t MoonPosition = 0x16C;
        constexpr uintptr_t OutdoorAmbient = 0xE8;
        constexpr uintptr_t ShadowSoftness = 0x124;
        constexpr uintptr_t Sky = 0x1B0;
        constexpr uintptr_t Source = 0x15C;
        constexpr uintptr_t SunPosition = 0x160;
    }

    namespace LightingParameters
    {
        constexpr uintptr_t GeographicLatitude = 0x11C;
        constexpr uintptr_t LightColor = 0x144;
        constexpr uintptr_t LightDirection = 0x150;
        constexpr uintptr_t SkyAmbient = 0x138;
        constexpr uintptr_t SkyAmbient2 = 0x120;
        constexpr uintptr_t Source = 0x15C;
        constexpr uintptr_t TrueMoonPosition = 0x16C;
        constexpr uintptr_t TrueSunPosition = 0x160;
    }

    namespace LocalScript
    {
        constexpr uintptr_t ByteCode = 0x178;
        constexpr uintptr_t Bytecode = 0x190;
        constexpr uintptr_t GUID = 0xB8;
        constexpr uintptr_t Hash = 0x188;
    }

    namespace MaterialColors
    {
        constexpr uintptr_t Asphalt = 0x30;
        constexpr uintptr_t Basalt = 0x27;
        constexpr uintptr_t Brick = 0xF;
        constexpr uintptr_t Cobblestone = 0x33;
        constexpr uintptr_t Concrete = 0xC;
        constexpr uintptr_t CrackedLava = 0x2D;
        constexpr uintptr_t Glacier = 0x1B;
        constexpr uintptr_t Grass = 0x6;
        constexpr uintptr_t Ground = 0x2A;
        constexpr uintptr_t Ice = 0x36;
        constexpr uintptr_t LeafyGrass = 0x39;
        constexpr uintptr_t Limestone = 0x3F;
        constexpr uintptr_t Mud = 0x24;
        constexpr uintptr_t Pavement = 0x42;
        constexpr uintptr_t Rock = 0x18;
        constexpr uintptr_t Salt = 0x3C;
        constexpr uintptr_t Sand = 0x12;
        constexpr uintptr_t Sandstone = 0x21;
        constexpr uintptr_t Slate = 0x9;
        constexpr uintptr_t Snow = 0x1E;
        constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MaterialLayer
    {
        constexpr uintptr_t ColorData = 0x24;
        constexpr uintptr_t FillModeByte = 0x11;
        constexpr uintptr_t Flags2 = 0x20;
        constexpr uintptr_t MatFlags = 0x18;
        constexpr uintptr_t Param = 0x1C;
        constexpr uintptr_t Stride = 0x88;
    }

    namespace MemEnforcedLRUCache
    {
        constexpr uintptr_t Head = 0x8;
    }

    namespace MeshContentProvider
    {
        constexpr uintptr_t LRUHolder = 0xC0;
    }

    namespace MeshPart
    {
        constexpr uintptr_t MeshId = 0x2F8;
        constexpr uintptr_t MeshSize = 0x210;
        constexpr uintptr_t Texture = 0x328;
        constexpr uintptr_t TextureId = 0x328;
    }

    namespace Misc
    {
        constexpr uintptr_t Adornee = 0xD8;
        constexpr uintptr_t AnimationId = 0xA8;
        constexpr uintptr_t StringLength = 0x10;
        constexpr uintptr_t Value = 0xA0;
    }

    namespace Model
    {
        constexpr uintptr_t PrimaryPart = 0x240;
        constexpr uintptr_t Scale = 0x12C;
    }

    namespace ModuleScript
    {
        constexpr uintptr_t ByteCode = 0x120;
        constexpr uintptr_t Bytecode = 0x138;
        constexpr uintptr_t GUID = 0xB8;
        constexpr uintptr_t Hash = 0x348;
        constexpr uintptr_t IsCoreScript = 0x0;
    }

    namespace MouseService
    {
        constexpr uintptr_t InputObject = 0xE8;
        constexpr uintptr_t InputObject2 = 0xF8;
        constexpr uintptr_t MousePosition = 0xBC;
        constexpr uintptr_t SensitivityPointer = 0x0;
    }

    namespace ParticleEmitter
    {
        constexpr uintptr_t Acceleration = 0x1C8;
        constexpr uintptr_t Brightness = 0x204;
        constexpr uintptr_t Drag = 0x208;
        constexpr uintptr_t Lifetime = 0x1DC;
        constexpr uintptr_t LightEmission = 0x220;
        constexpr uintptr_t LightInfluence = 0x224;
        constexpr uintptr_t Rate = 0x230;
        constexpr uintptr_t RotSpeed = 0x1E4;
        constexpr uintptr_t Rotation = 0x1EC;
        constexpr uintptr_t Speed = 0x1F4;
        constexpr uintptr_t SpreadAngle = 0x1FC;
        constexpr uintptr_t Texture = 0x1A8;
        constexpr uintptr_t TimeScale = 0x244;
        constexpr uintptr_t VelocityInheritance = 0x248;
        constexpr uintptr_t ZOffset = 0x24C;
    }

    namespace Player
    {
        constexpr uintptr_t AccountAge = 0x364;
        constexpr uintptr_t CameraMode = 0x378;
        constexpr uintptr_t Character = 0x2A0;
        constexpr uintptr_t DisplayName = 0x120;
        constexpr uintptr_t HealthDisplayDistance = 0x3A0;
        constexpr uintptr_t LocalPlayer = 0x118;
        constexpr uintptr_t LocaleId = 0x100;
        constexpr uintptr_t MaxZoomDistance = 0x370;
        constexpr uintptr_t MinZoomDistance = 0x374;
        constexpr uintptr_t ModelInstance = 0x2A0;
        constexpr uintptr_t Mouse = 0x11F0;
        constexpr uintptr_t NameDisplayDistance = 0x3B0;
        constexpr uintptr_t Team = 0x2E0;
        constexpr uintptr_t TeamColor = 0x3B8;
        constexpr uintptr_t UserId = 0xB8;
    }

    namespace PlayerConfigurer
    {
        constexpr uintptr_t Pointer = 0x0;
    }

    namespace PlayerMouse
    {
        constexpr uintptr_t Icon = 0xB0;
        constexpr uintptr_t Workspace = 0x138;
    }

    namespace Players
    {
        constexpr uintptr_t LocalPlayer = 0x118;
    }

    namespace Primitive
    {
        constexpr uintptr_t AssemblyAngularVelocity = 0xEC;
        constexpr uintptr_t AssemblyLinearVelocity = 0xE0;
        constexpr uintptr_t CFrame = 0x34;
        constexpr uintptr_t Flags = 0x1BE;
        constexpr uintptr_t Material = 0x24E;
        constexpr uintptr_t Orientation = 0x34;
        constexpr uintptr_t Owner = 0x218;
        constexpr uintptr_t Position = 0xD4;
        constexpr uintptr_t PrimitiveFlags = 0x1BE;
        constexpr uintptr_t Rotation = 0xB0;
        constexpr uintptr_t Size = 0x1C4;
        constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags
    {
        constexpr uintptr_t Anchored = 0x2;
        constexpr uintptr_t CanCollide = 0x8;
        constexpr uintptr_t CanQuery = 0x20;
        constexpr uintptr_t CanTouch = 0x10;
    }

    namespace PrimitivePool
    {
        constexpr uintptr_t ArrayBase = 0x20;
    }

    namespace PrimitiveRecord
    {
        constexpr uintptr_t Stride = 0x30;
        constexpr uintptr_t Translation = 0x24;
    }

    namespace Properties
    {
        constexpr uintptr_t CallbackFunctionOffset = 0x10;
        constexpr uintptr_t CallbackOffsetInDescriptor = 0x88;
        constexpr uintptr_t CallbackOwnerOffset = 0x0;
        constexpr uintptr_t CallbackThreadOffset = 0x28;
        constexpr uintptr_t ClassDescriptor = 0x18;
        constexpr uintptr_t ClassName = 0x8;
        constexpr uintptr_t FunctionRefIdOffset = 0x34;
        constexpr uintptr_t LiveThreadRefOffset = 0x10;
        constexpr uintptr_t LuaStateGlobalOffset = 0x60;
        constexpr uintptr_t Properties = 0x70;
        constexpr uintptr_t PropertyDescriptorBitFlags = 0x8C;
        constexpr uintptr_t TType = 0x68;
        constexpr uintptr_t TTypeNumber = 0x30;
    }

    namespace PropertyDescriptor
    {
        constexpr uintptr_t CallbackStorage = 0x80;
        constexpr uintptr_t GetSet = 0xB0;
        constexpr uintptr_t ReadCapabilities = 0x38;
        constexpr uintptr_t ScriptableMask = 0x10;
        constexpr uintptr_t TypeDescriptor = 0x68;
        constexpr uintptr_t TypeInfo = 0x70;
    }

    namespace Proto
    {
        constexpr uintptr_t code = 0x30;
        constexpr uintptr_t k = 0x28;
        constexpr uintptr_t sizecode = 0x98;
        constexpr uintptr_t sizek = 0xA8;
    }

    namespace ProximityPrompt
    {
        constexpr uintptr_t ActionText = 0x98;
        constexpr uintptr_t Enabled = 0x11E;
        constexpr uintptr_t GamepadKeyCode = 0x104;
        constexpr uintptr_t HoldDuration = 0x108;
        constexpr uintptr_t KeyCode = 0x10C;
        constexpr uintptr_t KeyboardKeyCode = 0x10C;
        constexpr uintptr_t MaxActivationDistance = 0x110;
        constexpr uintptr_t ObjectText = 0xB8;
        constexpr uintptr_t RequiresLineOfSight = 0x11F;
    }

    namespace Render
    {
        constexpr uintptr_t RenderJobToView = 0x1E0;
        constexpr uintptr_t RenderViewToDevice = 0x10;
        constexpr uintptr_t RobloxDeviceToSwapChain = 0x88;
    }

    namespace RenderJob
    {
        constexpr uintptr_t FakeDataModel = 0x38;
        constexpr uintptr_t RealDataModel = 0x1F0;
        constexpr uintptr_t RenderView = 0x1E0;
    }

    namespace RenderView
    {
        constexpr uintptr_t DeviceD3D11 = 0x0;
        constexpr uintptr_t LightingValid = 0x278;
        constexpr uintptr_t SkyValid = 0x0;
        constexpr uintptr_t SkyboxValid = 0x28D;
        constexpr uintptr_t VisualEngine = 0x0;
    }

    namespace RobloxExtraSpace
    {
        constexpr uintptr_t Capabilities = 0x70;
        constexpr uintptr_t Continuations = 0x98;
        constexpr uintptr_t Identity = 0x48;
        constexpr uintptr_t Script = 0x60;
        constexpr uintptr_t Shared = 0x18;
        constexpr uintptr_t capabilities = 0x68;
        constexpr uintptr_t identity = 0x48;
        constexpr uintptr_t script = 0x58;
    }

    namespace RunService
    {
        constexpr uintptr_t HeartbeatFPS = 0xC8;
        constexpr uintptr_t HeartbeatTask = 0x27C8;
    }

    namespace Script
    {
        constexpr uintptr_t ByteCode = 0x178;
        constexpr uintptr_t GUID = 0xB8;
        constexpr uintptr_t Hash = 0x188;
    }

    namespace ScriptContext
    {
        constexpr uintptr_t LuaState = 0x300;
        constexpr uintptr_t RequireBypass = 0xA00;
        constexpr uintptr_t Resume = 0x8E0;
    }

    namespace Scripts
    {
        constexpr uintptr_t weak_thread_live_thread = 0x28;
    }

    namespace Seat
    {
        constexpr uintptr_t Occupant = 0x200;
    }

    namespace SignalConnection
    {
        constexpr uintptr_t Enabled = 0x20;
        constexpr uintptr_t FunctionScriptSlotSelf = 0x18;
        constexpr uintptr_t IsOnce = 0xB5;
        constexpr uintptr_t Next = 0x10;
        constexpr uintptr_t SelfWeakFallback = 0x48;
        constexpr uintptr_t Signature = 0x60;
        constexpr uintptr_t SlotWrapper = 0x30;
        constexpr uintptr_t SlotWrapperFallbackSelf = 0x40;
        constexpr uintptr_t SlotWrapperFunctionId = 0x30;
        constexpr uintptr_t SlotWrapperFunctionIdFallback = 0x34;
        constexpr uintptr_t SlotWrapperSelf = 0x38;
        constexpr uintptr_t SlotWrapperThread = 0x28;
        constexpr uintptr_t SlotWrapperWeakObjectRef = 0xA0;
        constexpr uintptr_t SlotWrapperWeakObjectRefFallback = 0x90;
        constexpr uintptr_t SlotWrapperWeakObjectRefLegacy = 0x68;
        constexpr uintptr_t WeakChain = 0x68;
        constexpr uintptr_t WeakChainNext = 0x8;
    }

    namespace SignalWeakObject
    {
        constexpr uintptr_t FunctionReference = 0x34;
        constexpr uintptr_t Pointer = 0x60;
        constexpr uintptr_t Self = 0x18;
        constexpr uintptr_t Thread = 0x28;
        constexpr uintptr_t WaitContainer = 0x50;
        constexpr uintptr_t WeakChain = 0x68;
    }

    namespace Sky
    {
        constexpr uintptr_t MoonAngularSize = 0x22C;
        constexpr uintptr_t MoonTextureId = 0xB0;
        constexpr uintptr_t SkyboxBk = 0xE0;
        constexpr uintptr_t SkyboxDn = 0x110;
        constexpr uintptr_t SkyboxFt = 0x140;
        constexpr uintptr_t SkyboxLf = 0x170;
        constexpr uintptr_t SkyboxOrientation = 0x220;
        constexpr uintptr_t SkyboxRt = 0x1A0;
        constexpr uintptr_t SkyboxUp = 0x1D0;
        constexpr uintptr_t StarCount = 0x230;
        constexpr uintptr_t SunAngularSize = 0x224;
        constexpr uintptr_t SunTextureId = 0x200;
    }

    namespace Sound
    {
        constexpr uintptr_t IsPlaying = 0x130;
        constexpr uintptr_t Looped = 0x12D;
        constexpr uintptr_t PlaybackSpeed = 0x10C;
        constexpr uintptr_t RollOffMaxDistance = 0x110;
        constexpr uintptr_t RollOffMinDistance = 0x114;
        constexpr uintptr_t SoundGroup = 0xD0;
        constexpr uintptr_t SoundId = 0xB0;
        constexpr uintptr_t Volume = 0x120;
    }

    namespace SpawnLocation
    {
        constexpr uintptr_t AllowTeamChangeOnTouch = 0x3D;
        constexpr uintptr_t Enabled = 0x1D9;
        constexpr uintptr_t ForcefieldDuration = 0x1D0;
        constexpr uintptr_t Neutral = 0x1DA;
        constexpr uintptr_t TeamColor = 0x1D4;
    }

    namespace SpecialMesh
    {
        constexpr uintptr_t MeshId = 0xE0;
        constexpr uintptr_t Offset = 0xA0;
        constexpr uintptr_t Scale = 0xAC;
        constexpr uintptr_t TextureId = 0x110;
    }

    namespace StatsItem
    {
        constexpr uintptr_t Value = 0xE758;
    }

    namespace SunRaysEffect
    {
        constexpr uintptr_t Enabled = 0x98;
        constexpr uintptr_t Intensity = 0xA0;
        constexpr uintptr_t Spread = 0xA4;
    }

    namespace SurfaceAppearance
    {
        constexpr uintptr_t AlphaMode = 0x1D8;
        constexpr uintptr_t Color = 0x1C0;
        constexpr uintptr_t ColorMap = 0xB0;
        constexpr uintptr_t EmissiveMaskContent = 0xE0;
        constexpr uintptr_t EmissiveStrength = 0x1DC;
        constexpr uintptr_t EmissiveTint = 0x1CC;
        constexpr uintptr_t MetalnessMap = 0x110;
        constexpr uintptr_t NormalMap = 0x140;
        constexpr uintptr_t RoughnessMap = 0x170;
    }

    namespace TString
    {
        constexpr uintptr_t hash = 0x10;
        constexpr uintptr_t len = 0x14;
    }

    namespace TaskScheduler
    {
        constexpr uintptr_t Fps = 0xB0;
        constexpr uintptr_t JobEnd = 0xD0;
        constexpr uintptr_t JobName = 0x18;
        constexpr uintptr_t JobStart = 0xC8;
        constexpr uintptr_t JobTypeName = 0xF8;
        constexpr uintptr_t MaxFPS = 0xB0;
        constexpr uintptr_t Pointer = 0x8F1E408;
        constexpr uintptr_t ScriptContext = 0x1B8;
    }

    namespace Team
    {
        constexpr uintptr_t BrickColor = 0xA0;
        constexpr uintptr_t TeamColor = 0xA0;
    }

    namespace TechniqueArray
    {
        constexpr uintptr_t BeginOffset = 0x0;
        constexpr uintptr_t EndOffset = 0x8;
        constexpr uintptr_t EntryStride = 0x88;
    }

    namespace Terrain
    {
        constexpr uintptr_t GrassLength = 0x1D8;
        constexpr uintptr_t MaterialColors = 0x4A0;
        constexpr uintptr_t WaterColor = 0x1C8;
        constexpr uintptr_t WaterReflectance = 0x1E0;
        constexpr uintptr_t WaterTransparency = 0x1E4;
        constexpr uintptr_t WaterWaveSize = 0x1E8;
        constexpr uintptr_t WaterWaveSpeed = 0x1EC;
    }

    namespace TextButton
    {
        constexpr uintptr_t AutoButtonColor = 0x6AC;
        constexpr uintptr_t ContentText = 0xA48;
        constexpr uintptr_t Font = 0x1140;
        constexpr uintptr_t LineHeight = 0xB60;
        constexpr uintptr_t LocalizedText = 0xA48;
        constexpr uintptr_t MaxVisibleGraphemes = 0xD7C;
        constexpr uintptr_t Modal = 0x6AD;
        constexpr uintptr_t RichText = 0xC5E;
        constexpr uintptr_t Selected = 0x6AE;
        constexpr uintptr_t Text = 0xA48;
        constexpr uintptr_t TextColor3 = 0xD60;
        constexpr uintptr_t TextDirection = 0xC00;
        constexpr uintptr_t TextScaled = 0xA31;
        constexpr uintptr_t TextSize = 0xD84;
        constexpr uintptr_t TextStrokeColor3 = 0xD6C;
        constexpr uintptr_t TextStrokeTransparency = 0xD88;
        constexpr uintptr_t TextTransparency = 0xD8C;
        constexpr uintptr_t TextTruncate = 0xD90;
        constexpr uintptr_t TextWrapped = 0xA31;
        constexpr uintptr_t TextXAlignment = 0xD94;
        constexpr uintptr_t TextYAlignment = 0xBA8;
    }

    namespace TextLabel
    {
        constexpr uintptr_t ContentText = 0x7C8;
        constexpr uintptr_t Font = 0xEC0;
        constexpr uintptr_t LineHeight = 0x8E0;
        constexpr uintptr_t LocalizedText = 0x7C8;
        constexpr uintptr_t MaxVisibleGraphemes = 0xAFC;
        constexpr uintptr_t RichText = 0x9DE;
        constexpr uintptr_t Text = 0x7C8;
        constexpr uintptr_t TextColor3 = 0xAE0;
        constexpr uintptr_t TextDirection = 0x980;
        constexpr uintptr_t TextScaled = 0x765;
        constexpr uintptr_t TextSize = 0xB04;
        constexpr uintptr_t TextStrokeColor3 = 0xAEC;
        constexpr uintptr_t TextStrokeTransparency = 0xB08;
        constexpr uintptr_t TextTransparency = 0xB0C;
        constexpr uintptr_t TextTruncate = 0xB10;
        constexpr uintptr_t TextWrapped = 0x9D8;
        constexpr uintptr_t TextXAlignment = 0xB14;
        constexpr uintptr_t TextYAlignment = 0x928;
    }

    namespace Textures
    {
        constexpr uintptr_t Decal_Texture = 0x1C8;
        constexpr uintptr_t Texture_Texture = 0x1C8;
    }

    namespace Tool
    {
        constexpr uintptr_t CanBeDropped = 0x4A0;
        constexpr uintptr_t Enabled = 0x4A1;
        constexpr uintptr_t Grip = 0x494;
        constexpr uintptr_t GripForward = 0x488;
        constexpr uintptr_t GripPos = 0x494;
        constexpr uintptr_t GripRight = 0x470;
        constexpr uintptr_t GripUp = 0x47C;
        constexpr uintptr_t ManualActivationOnly = 0x4A2;
        constexpr uintptr_t RequiresHandle = 0x4A3;
        constexpr uintptr_t TextureId = 0x348;
        constexpr uintptr_t Tooltip = 0x450;
    }

    namespace UnionOperation
    {
        constexpr uintptr_t AssetId = 0x2F8;
    }

    namespace UpVal
    {
        constexpr uintptr_t v = 0x18;
    }

    namespace UserInputService
    {
        constexpr uintptr_t WindowInputState = 0x288;
    }

    namespace Value
    {
        constexpr uintptr_t Value = 0xA0;
    }

    namespace VehicleSeat
    {
        constexpr uintptr_t MaxSpeed = 0x210;
        constexpr uintptr_t Occupant = 0x1F0;
        constexpr uintptr_t SteerFloat = 0x214;
        constexpr uintptr_t ThrottleFloat = 0x218;
        constexpr uintptr_t Torque = 0x21C;
        constexpr uintptr_t TurnSpeed = 0x220;
    }

    namespace VirtualTable
    {
        constexpr uintptr_t RaiseEventInvocation = 0x18;
    }

    namespace VisualEngine
    {
        constexpr uintptr_t DeviceToSwapChain = 0x88;
        constexpr uintptr_t Dimensions = 0xB10;
        constexpr uintptr_t FakeDataModel = 0xAF0;
        constexpr uintptr_t RenderJobToView = 0x1E0;
        constexpr uintptr_t RenderView = 0xC50;
        constexpr uintptr_t ViewMatrix = 0x1B0;
        constexpr uintptr_t ViewToDevice = 0x10;
    }

    namespace WeldConstraint
    {
        constexpr uintptr_t Part0 = 0xA0;
        constexpr uintptr_t Part1 = 0xB0;
    }

    namespace WindowInputState
    {
        constexpr uintptr_t CapsLock = 0x40;
        constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace Workspace
    {
        constexpr uintptr_t CurrentCamera = 0x4A0;
        constexpr uintptr_t DistributedGameTime = 0x4C0;
        constexpr uintptr_t ReadOnlyGravity = 0x9C8;
        constexpr uintptr_t World = 0x3F8;
    }

    namespace World
    {
        constexpr uintptr_t AirProperties = 0x230;
        constexpr uintptr_t FallenPartsDestroyHeight = 0x20C;
        constexpr uintptr_t Gravity = 0x218;
        constexpr uintptr_t Primitives = 0x2A0;
        constexpr uintptr_t WorldSteps = 0x868;
        constexpr uintptr_t worldStepsPerSec = 0x868;
    }

    namespace WorldRoot
    {
        constexpr uintptr_t RaycastBoundDesc = 0x7004700;
        constexpr uintptr_t RaycastBoundFn = 0x80;
    }

    namespace lua_State
    {
        constexpr uintptr_t base = 0x30;
        constexpr uintptr_t ci = 0x40;
        constexpr uintptr_t global = 0x28;
        constexpr uintptr_t gt = 0x78;
        constexpr uintptr_t stack = 0x20;
        constexpr uintptr_t status = 0x3;
        constexpr uintptr_t top = 0x18;
        constexpr uintptr_t userdata = 0x70;
    }

}
