#pragma once
#include "Includes.h"
////////Updated for PUBG MOBILE 4.6
namespace Offset
{
    
    // Global / Engine Base Pointers
    const DWORD Gname = 0xA9BFEB4;
    const DWORD GName = Gname;
    const DWORD GWorld = 0xADC3514;
    const DWORD ViewWorld = 0xADA1B24;
    const DWORD ViewMatrix = 0xADA1B24;
    const DWORD ViewMatrixBase = 0xADA1B24;
    const DWORD UE4Pointer = 0xE0C3560;
    const DWORD LibUe4 = 0xE0C3560;

    // View / Camera FOV
    const DWORD ScopeGL = 0x6D6F148;
    const DWORD ThirdPersonFOV = 0x6933A78;
    const DWORD MoveGL = 0x6989844;
    const DWORD GameGL = 0x70C1C3C;

    // World & Level
    const DWORD PersistentLevel = 0x20;
    const DWORD NetDriver = 0x24;
    const DWORD ServerConnection = 0x64;
    const DWORD PlayerController = 0x20;
    const DWORD AcknowledgedPawn = 0x400;
    const DWORD EntityList = 0x70;
    const DWORD EntityCount = EntityList + 4;
    const DWORD EncryptedActors_Offset = 0x334;

    // GameState
    const DWORD GameState = 0x2F8;
    const DWORD pExtraGameState = 0x244;
    const DWORD ElapsedTime = 0x3F0;
    const DWORD NoneAIGameTime = 0x93C;
    const DWORD AlivePlayerNum = 0x934;
    const DWORD AliveTeamNum = 0x938;
    const DWORD PlayerNum = 0x654;
    const DWORD RealPlayerNum = 0x654;
    const DWORD OnlinePlayer = 0x5a0;
    const DWORD PlayerNumPerTeam = 0xC2C;
    const DWORD bNoAliveHumanPlayer = 0x8C0;
    const DWORD GameModeID = 0xD38;
    const DWORD GameID = 0xD30;
    const DWORD GameModeState = 0x8D8;
    const DWORD CurCircleWave = 0x8BC;
    const DWORD GameReplayType = 0x7D8;
    const DWORD IsFPPGameMode = 0x7E8;
    const DWORD IsGameModeFpp = 0x7C8;
    const DWORD IsCanSwitchFPP = 0x7E9;
    const DWORD PlayerAddonCount = 0xe9c;

    // Actor / Character Base
    const DWORD STExtraBaseCharacter = 0x1F68;
    const DWORD RootComponent = 0x1B0;
    const DWORD Position = 0x1B0;
    const DWORD RelativeLocation = 0x178;
    const DWORD RelativeRotation = 0x184;
    const DWORD RelativeScale3D = 0x190;
    const DWORD ReplicatedMovement = 0xD8;
    const DWORD LastUpdateVelocity = 0x2B0;
    const DWORD ComponentVelocity = 0x250;
    const DWORD CurrentStates = 0xC48;
    const DWORD Status = 0x3C0;
    const DWORD PoseState = 0x1248;
    const DWORD TeamId = 0x748;
    const DWORD Name = 0x720;
    const DWORD Nation = 0x72C;
    const DWORD PlayerUID = 0x73C;
    const DWORD ServerZoneId = 0x768;
    const DWORD IsBot = 0x7ED;
    const DWORD bIsAI = 0x7ED;
    const DWORD IsDead = 0xB00;
    const DWORD bDead = 0xB00;
    const DWORD Health = 0xAE8;
    const DWORD HealthMax = 0xAEC;
    const DWORD NearDeatchComponent = 0x1580;
    const DWORD NearDeathBreath = 0x1590;
    const DWORD BreathMax = 0x16C;
    const DWORD Kills = 0x5A0;
    const DWORD CharacterOverrideAttrs = 0xED0;
    const DWORD IsNetFPP = 0x19A0;
    const DWORD SynData = 0x670;
    const DWORD NetAvatarData = 0x344;
    const DWORD AvatarComponent2 = 0x24D8;

    // Mesh & Bones
    const DWORD Mesh = 0x3F0;
    const DWORD MeshContainer = 0x1528;
    const DWORD BodyAddv = 0x1A0;
    const DWORD BoneAddv = 0x5E8;
    const DWORD MinLOD = 0x870;
    const DWORD Skeletal = 0x7e8;
    const DWORD Asset = 0xF0;
    const DWORD ArraySkeletal = 0x28;
    const DWORD X_BONE = 0x88;
    const DWORD Y_BONE = 0x8C;
    const DWORD Z_BONE = 0x90;

    // Visibility / Render Checks
    const DWORD LastRenderTimeOnScreen = 0x39c;
    const DWORD LastSubmitTime = 0x394;
    const DWORD LastRenderTime = 0x398;
    const DWORD isVisible = 0x15D0;
    const DWORD visBits = 0x15D4;
    const DWORD isVisibleAutoStand = 0x15D8;
    const DWORD isVisibleAutoMagic = 0x15DC;

    // Movement & Parachute
    const DWORD CharacterMovement = 0x3F4;
    const DWORD STCharacterMovement = 0x177C;
    const DWORD CharacterParachuteComponent = 0x122C;
    const DWORD ParachuteComponent = 0x122C;
    const DWORD CurrentFallSpeed = 0x1AC;
    const DWORD JumpZVelocity = 0x19C;
    const DWORD Acceleration = 0x280;
    const DWORD GravityScale = 0x194;
    const DWORD MovementMode = 0x1AC;
    const DWORD PendingImpulseToApply = 0x2C0;
    const DWORD PendingForceToApply = 0x2CC;
    const DWORD PendingLaunchVelocity = 0x400;
    const DWORD AllowMaxDiatanceSqAtServer = 0x2a0;
    const DWORD AllowMaxDistanceSqInParachuteOpen = 0x2a4;
    const DWORD MaxZAllowDistance = 0x2ac;
    const DWORD ParachuteStateSub = 0xf90;
    const DWORD IsInWater = 0x18d0;
    const DWORD OutofWaterZ = 0x1f4;
    const DWORD PawnBackpackCapacity = 0x1fa8;

    // Controllers & Camera
    const DWORD STPlayerController = 0x3C78;
    const DWORD STPlayerController1 = 0x3C78;
    const DWORD Controller = 0x3CC;
    const DWORD PlayerKeyController = 0x714;
    const DWORD PlayerKeyAActor = 0x738;
    const DWORD PlayerState = 0x3c4;
    const DWORD PlayerCameraManager = 0x410;
    const DWORD CameraCache = 0x420;
    const DWORD ControlRotation = 0x3C8;
    const DWORD ScopeFov = 0x1674;
    const DWORD FieldOfView = 0x31C;
    const DWORD ScopeCameraComp = 0x16B8;
    const DWORD SpringArmComp = 0x16A0;
    const DWORD CameraShakeInnerRadius = 0x21C;
    const DWORD CameraShakeOuterRadius = 0x1B0;
    const DWORD CameraShakFalloff = 0x224;
    const DWORD MyHUD = 0x40C;
    const DWORD CrossHairColor = 0x1144;
    const DWORD BP_MapUIMarkManager = 0x30f8;

    // Weapon Management
    const DWORD CurrentWeapon = 0x210C;
    const DWORD CurrentWeaponReplicated = 0x4D4;
    const DWORD CurrentReloadWeapon = 0x26CC;
    const DWORD WeaponManagerComponent = 0x1DC0;
    const DWORD SwitchWeaponSpeedScale = 0x2240;
    const DWORD bIsWeaponFiring = 0x1238;
    const DWORD bIsGunADS = 0xCF4;
    const DWORD bIsAirOpen = 0x5E0;
    const DWORD ShootWeaponComponent = 0xCB0;
    const DWORD OwnerShootWeapon = 0x244;
    const DWORD ShootMode = 0xDA5;
    const DWORD ShootWeaponEntity = 0xF9C;
    const DWORD ShootWeaponEntityComp = 0xF9C;
    const DWORD ShootWeaponEffectComp = 0xFA0;

    // Ballistics, Recoil & Shooting Mechanics
    const DWORD BulletFireSpeed = 0x484;
    const DWORD BulletMomentum = 0x5C0;
    const DWORD BulletRange = 0x5D0;
    const DWORD BulletTrackDistance = 0x774;
    const DWORD BulletTrackDistanceFix = 0x774;
    const DWORD BaseImpactDamage = 0x5B4;
    const DWORD VehicleDamageScale = 0x5BC;
    const DWORD LaunchGravityScale = 0x488;
    const DWORD ShootInterval = 0x4B4;
    const DWORD BurstShootInterval = 0x530;
    const DWORD ReloadRate = 0x7BC;
    const DWORD bHasSingleFireMode = 0x500;
    const DWORD bHasAutoFireMode = 0x501;
    const DWORD bHasBurstFireMode = 0x502;
    const DWORD CurBulletNumInClip = 0x0;
    const DWORD CurMaxBulletNumInOneClip = 0xD18;
    const DWORD AccessoriesVRecoilFactor = 0x9C4;
    const DWORD AccessoriesHRecoilFactor = 0x9CC;
    const DWORD AccessoriesRecoveryFactor = 0x9C8;
    const DWORD ShotGunCenterPerc = 0xA20;
    const DWORD ShotGunVerticalSpread = 0xA24;
    const DWORD ShotGunHorizontalSpread = 0xA28;
    const DWORD GameDeviationFactor = 0xA18;
    const DWORD GameDeviationAccuracy = 0xA1C;
    const DWORD AccessoriesDeviationFactor = 0x9DC;
    const DWORD VehicleWeaponDeviationAngle = 0xA38;
    const DWORD RecoilKickADS = 0xAD8;

    // Hit Performance & Colors
    const DWORD HitPerform = 0x4B0;
    const DWORD HitBodyDrawColor = 0x30;
    const DWORD HitHeadDrawColor = 0x40;
    const DWORD HitToDeathDrawColor = 0x60;
    const DWORD PartHitComponent = 0xcdc;

    // Vehicle Offsets
    const DWORD CurrentVehicle = 0xB24;
    const DWORD VehicleMovement = 0x185C;
    const DWORD VehicleCommon = 0x960;
    const DWORD lastForwardSpeed = 0xA04;
    const DWORD HP = 0x280;
    const DWORD HPMax = 0x27C;
    const DWORD vHP = 0x280;
    const DWORD Fuel = 0x330;
    const DWORD FuelMax = 0x32C;
    const DWORD vFuel = 0x330;
    const DWORD vFuelMax = 0x32C;
    const DWORD bIsEngineStarted = 0x92C;
    const DWORD ExtraBoostFactor = 0x19F8;
    const DWORD bIsFPPOnVehicle = 0x11CC;
    const DWORD Wheels = 0x1e4 + 0x10;

    // Items & Inventory
    const DWORD PickUpDataList = 0x788;
    const DWORD ItemDefineID = 0x4A0;
    const DWORD TypeSpecificID = 0x4;

    // Misc
    const DWORD bAutoDestroyWhenFinished = 0x190;
    const DWORD ConfigCollisionDistSqAngles = 0x178;
    const DWORD IsInvincible = 0x11a8;
    const DWORD CurAnimParamList = 0x1e7c;

    // Access Pattern Namespaces
    namespace STExtraPlayerCharacter {
        const DWORD STPlayerController = 0x3C78;
    }
    namespace PlayerController1 {
        const DWORD PlayerCameraManager = 0x410;
    }
    namespace PlayerCameraManager1 {
        const DWORD CameraCache = 0x420;
    }
}