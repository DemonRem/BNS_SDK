#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: T1Game_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
# Mentions: Ant.
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_DETACH_THROW_PAWN                                  0x01
#define CONST_DETACH_THROW_WITH_ROLL                             0x02
#define CONST_DETACH_THROW_STRAIGHT                              0x04
#define CONST_DETACH_FORCE_DETACH                                0x08
#define CONST_DETACH_NO_LOC_ROT_MOD_DETACH                       0x10
#define CONST_FLYATTACH_POSONLY                                  0x01
#define CONST_FLYATTACH_SYNCPOSWITHBONE                          0x02
#define CONST_FLYATTACH_SYNCPOSWHENDELAYED                       0x04
#define CONST_FLYATTACH_IGNOREGRAVITY                            0x08
#define CONST_FLYATTACH_FLIPROLL180                              0x10
#define CONST_MaxT1PawnMove                                      4
#define CONST_MaxT1PawnSummonedMove                              30

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum T1Game.T1AnimNotify_ChangeAttachSlot.AttachSlotList
/*enum AttachSlotList
{
	Attach_BODY                                        = 0,
	Attach_FACE                                        = 1,
	Attach_HAIR                                        = 2,
	Attach_ATTACH_WEAPON_R                             = 3,
	Attach_ATTACH_WEAPON_L                             = 4,
	Attach_ATTACH_WEAPON_R1                            = 5,
	Attach_ATTACH_WEAPON_L1                            = 6,
	Attach_ATTACH_WEAPON_R101                          = 7,
	Attach_ATTACH_WEAPON_L101                          = 8,
	Attach_ATTACH_WEAPON_R3                            = 9,
	Attach_ATTACH_WEAPON_L3                            = 10,
	Attach_ATTACH_BODY1                                = 11,
	Attach_ATTACH_BODY2                                = 12,
	Attach_ATTACH_BODY3                                = 13,
	Attach_ATTACH_BODY4                                = 14,
	Attach_ATTACH_BODY5                                = 15,
	Attach_ATTACH_KEEP_DAGGER                          = 16,
	Attach_ATTACH_KEEPWEAPON                           = 17,
	Attach_ATTACH_ETC1                                 = 18,
	Attach_ATTACH_ETC2                                 = 19,
	Attach_ATTACH_ETC3                                 = 20,
	Attach_ATTACH_ETC4                                 = 21,
	Attach_EYE                                         = 22,
	Attach_BEARD                                       = 23,
	Attach_TAIL                                        = 24,
	Attach_ATTACH_GAUNTLET_ONLY_R                      = 25,
	Attach_ATTACH_GAUNTLET_ONLY_L                      = 26,
	Attach_None                                        = 27,
	Attach_INDEX_NUM                                   = 28,
	Attach_MAX                                         = 29
};*/

// Enum T1Game.T1AnimNotify_ChangeAttachSlot.NOTIBONEINDEX
/*enum NOTIBONEINDEX
{
	NOTIBONE_ATTACH                                    = 0,
	NOTIBONE_ROOT                                      = 1,
	NOTIBONE_PELVIS                                    = 2,
	NOTIBONE_HEAD                                      = 3,
	NOTIBONE_RHAND                                     = 4,
	NOTIBONE_LHAND                                     = 5,
	NOTIBONE_SOCKET_WEAPON_R                           = 6,
	NOTIBONE_SOCKET_WEAPON_L                           = 7,
	NOTIBONE_SOCKET_WEAPON_R1                          = 8,
	NOTIBONE_SOCKET_WEAPON_L1                          = 9,
	NOTIBONE_SOCKET_WEAPON_R101                        = 10,
	NOTIBONE_SOCKET_WEAPON_L101                        = 11,
	NOTIBONE_SOCKET_WEAPON_R3                          = 12,
	NOTIBONE_SOCKET_WEAPON_L3                          = 13,
	NOTIBONE_SOCKET_WEAPON_KEEP_SW_L                   = 14,
	NOTIBONE_SOCKET_WEAPON_KEEP_PT_L                   = 15,
	NOTIBONE_SOCKET_WEAPON_KEEP_PT_R                   = 16,
	NOTIBONE_SOCKET_WEAPON_KEEP_RF_R                   = 17,
	NOTIBONE_SOCKET_WEAPON_TA_R                        = 18,
	NOTIBONE_SOCKET_WEAPON_KEEP_DG                     = 19,
	NOTIBONE_SOCKET_WEAPON_KEEP_SD                     = 20,
	NOTIBONE_BONE_INDEX_NUM                            = 21,
	NOTIBONE_MAX                                       = 22
};*/

// Enum T1Game.T1AnimNotify_ViewShake.ShakeEffectivenessType
/*enum ShakeEffectivenessType
{
	SET_All                                            = 0,
	SET_SelfOnly                                       = 1,
	SET_ExcludeSelf                                    = 2,
	SET_MAX                                            = 3
};*/

// Enum T1Game.T1CamMod_ScreenShake.EShakeParam
/*enum EShakeParam
{
	ESP_OffsetRandom                                   = 0,
	ESP_OffsetZero                                     = 1,
	ESP_MAX                                            = 2
};*/

// Enum T1Game.T1CustomPawn.CustomizeDefaultIndex
/*enum CustomizeDefaultIndex
{
	CustomizeDefault                                   = 0,
	CustomizeDefault01                                 = 1,
	CustomizeDefault02                                 = 2,
	CustomizeDefault03                                 = 3,
	CustomizeDefault_MAX                               = 4
};*/

// Enum T1Game.T1CustomPawn.ChildParticleBoneUse
/*enum ChildParticleBoneUse
{
	ChildParticle_NotUseBone                           = 0,
	ChildParticle_Bone                                 = 1,
	ChildParticle_BonePosOnly                          = 2,
	ChildParticle_BonePosRootRot                       = 3,
	ChildParticle_MAX                                  = 4
};*/

// Enum T1Game.T1CustomPawn.SKELINDEX
/*enum SKELINDEX
{
	SKEL_BODY                                          = 0,
	SKEL_FACE                                          = 1,
	SKEL_HAIR                                          = 2,
	SKEL_ATTACH_WEAPON_R                               = 3,
	SKEL_ATTACH_WEAPON_L                               = 4,
	SKEL_ATTACH_WEAPON_R1                              = 5,
	SKEL_ATTACH_WEAPON_L1                              = 6,
	SKEL_ATTACH_WEAPON_R101                            = 7,
	SKEL_ATTACH_WEAPON_L101                            = 8,
	SKEL_ATTACH_WEAPON_R3                              = 9,
	SKEL_ATTACH_WEAPON_L3                              = 10,
	SKEL_ATTACH_BODY1                                  = 11,
	SKEL_ATTACH_BODY2                                  = 12,
	SKEL_ATTACH_BODY3                                  = 13,
	SKEL_ATTACH_BODY4                                  = 14,
	SKEL_ATTACH_BODY5                                  = 15,
	SKEL_ATTACH_KEEP_DAGGER                            = 16,
	SKEL_ATTACH_KEEPWEAPON                             = 17,
	SKEL_ATTACH_ETC1                                   = 18,
	SKEL_ATTACH_ETC2                                   = 19,
	SKEL_ATTACH_ETC3                                   = 20,
	SKEL_ATTACH_ETC4                                   = 21,
	SKEL_ATTACH_ETC5                                   = 22,
	SKEL_BEARD                                         = 23,
	SKEL_TAIL                                          = 24,
	SKEL_ATTACH_GAUNTLET_ONLY_R                        = 25,
	SKEL_ATTACH_GAUNTLET_ONLY_L                        = 26,
	SKEL_ATTACH_GUILD_ACC1                             = 27,
	SKEL_INDEX_NUM                                     = 28,
	SKEL_MAX                                           = 29
};*/

// Enum T1Game.T1CustomPawn.BoneIndex
/*enum BoneIndex
{
	BONE_ATTACH                                        = 0,
	BONE_ROOT                                          = 1,
	BONE_PELVIS                                        = 2,
	BONE_HEAD                                          = 3,
	BONE_RHAND                                         = 4,
	BONE_LHAND                                         = 5,
	SOCKET_WEAPON_R                                    = 6,
	SOCKET_WEAPON_L                                    = 7,
	SOCKET_WEAPON_R1                                   = 8,
	SOCKET_WEAPON_L1                                   = 9,
	SOCKET_WEAPON_R101                                 = 10,
	SOCKET_WEAPON_L101                                 = 11,
	SOCKET_WEAPON_R3                                   = 12,
	SOCKET_WEAPON_L3                                   = 13,
	SOCKET_WEAPON_KEEP_SW_L                            = 14,
	SOCKET_WEAPON_KEEP_PT_L                            = 15,
	SOCKET_WEAPON_KEEP_PT_R                            = 16,
	SOCKET_WEAPON_KEEP_RF_R                            = 17,
	SOCKET_WEAPON_TA_R                                 = 18,
	SOCKET_WEAPON_KEEP_DG                              = 19,
	SOCKET_WEAPON_KEEP_SD                              = 20,
	BONE_INDEX_NUM                                     = 21,
	BoneIndex_MAX                                      = 22
};*/

// Enum T1Game.T1CustomPawn.ANIMSTATE
/*enum ANIMSTATE
{
	ANIM_IDLE1                                         = 0,
	ANIM_IDLE2                                         = 1,
	ANIM_IDLE3                                         = 2,
	ANIM_IDLE4                                         = 3,
	ANIM_SMILE                                         = 4,
	ANIM_ANGRY                                         = 5,
	ANIM_NUM                                           = 6,
	ANIM_MAX                                           = 7
};*/

// Enum T1Game.T1CustomPawn.MOVEANIMSLOTINDEX
/*enum MOVEANIMSLOTINDEX
{
	ANIMSLOT_WALKFRONT                                 = 0,
	ANIMSLOT_WALKRIGHT                                 = 1,
	ANIMSLOT_WALKLEFT                                  = 2,
	ANIMSLOT_WALKBACK                                  = 3,
	ANIMSLOT_WALKRIGHTBACK                             = 4,
	ANIMSLOT_WALKLEFTBACK                              = 5,
	ANIMSLOT_RUNFRONT                                  = 6,
	ANIMSLOT_RUNRIGHT                                  = 7,
	ANIMSLOT_RUNLEFT                                   = 8,
	ANIMSLOT_RUNBACK                                   = 9,
	ANIMSLOT_RUNRIGHTBACK                              = 10,
	ANIMSLOT_RUNLEFTBACK                               = 11,
	ANIMSLOT_IDLE                                      = 12,
	ANIMSLOT_JUMPFRONT                                 = 13,
	ANIMSLOT_JUMPRIGHT                                 = 14,
	ANIMSLOT_JUMPLEFT                                  = 15,
	ANIMSLOT_CUSTOMUPPER                               = 16,
	ANIMSLOT_CUSTOMLOWER                               = 17,
	ANIMSLOT_JToI                                      = 18,
	ANIMSLOT_JToM                                      = 19,
	ANIMSLOT_JToMRight                                 = 20,
	ANIMSLOT_JToMLeft                                  = 21,
	ANIMSLOT_JToMBack                                  = 22,
	ANIMSLOT_MToI                                      = 23,
	ANIMSLOT_LToR                                      = 24,
	ANIMSLOT_RToL                                      = 25,
	ANIMSLOT_MToJ                                      = 26,
	ANIMSLOT_MToJRight                                 = 27,
	ANIMSLOT_MToJLeft                                  = 28,
	ANIMSLOT_TurnLeft                                  = 29,
	ANIMSLOT_TurnRight                                 = 30,
	ANIMSLOT_LongJumpStart                             = 31,
	ANIMSLOT_LongJumpIng                               = 32,
	ANIMSLOT_LongJumpEnd                               = 33,
	ANIMSLOT_LongJumpCancel                            = 34,
	ANIMSLOT_HighJumpStart                             = 35,
	ANIMSLOT_HighJumpIng                               = 36,
	ANIMSLOT_HighJumpEnd                               = 37,
	ANIMSLOT_HighJumpCancel                            = 38,
	ANIMSLOT_RIDE_IDLE                                 = 39,
	ANIMSLOT_MAX                                       = 40
};*/

// Enum T1Game.T1CustomPawn.VehicleState
/*enum VehicleState
{
	VEHICLE_NONE                                       = 0,
	VEHICLE_RIDE                                       = 1,
	VEHICLE_MAX                                        = 2
};*/

// Enum T1Game.T1CustomPawn.Bone_NameIndex
/*enum Bone_NameIndex
{
	INDEX_BONENAME_LFoot                               = 0,
	INDEX_BONENAME_RFoot                               = 1,
	INDEX_BONENAME_Spine1                              = 2,
	INDEX_BONENAME_LHand                               = 3,
	INDEX_BONENAME_RHand                               = 4,
	INDEX_BONENAME_Pelvis                              = 5,
	INDEX_BONENAME_Root                                = 6,
	INDEX_BONENAME_MAX                                 = 7
};*/

// Enum T1Game.T1CustomPawn.UniqueBGM_State
/*enum UniqueBGM_State
{
	UniqueBGM_None                                     = 0,
	UniqueBGM_Playing                                  = 1,
	UniqueBGM_Stopped                                  = 2,
	UniqueBGM_Disabled                                 = 3,
	UniqueBGM_MAX                                      = 4
};*/

// Enum T1Game.T1CustomPawn.AnimMoveAttach_State
/*enum AnimMoveAttach_State
{
	AMA_None                                           = 0,
	AMA_Initiated                                      = 1,
	AMA_Attach                                         = 2,
	AMA_Detach                                         = 3,
	AMA_MAX                                            = 4
};*/

// Enum T1Game.T1CustomPawn.ParticleAttachInfoState
/*enum ParticleAttachInfoState
{
	PAIS_None                                          = 0,
	PAIS_Blending                                      = 1,
	PAIS_MAX                                           = 2
};*/

// Enum T1Game.T1CustomPawn.PAWNATTACHINGSEQUENCE
/*enum PAWNATTACHINGSEQUENCE
{
	PAS_None                                           = 0,
	PAS_AttachAnimating                                = 1,
	PAS_PreAttach                                      = 2,
	PAS_Attached                                       = 3,
	PAS_DetachAnimating                                = 4,
	PAS_MAX                                            = 5
};*/

// Enum T1Game.T1CustomPawn.PAWNATTACHTYPE
/*enum PAWNATTACHTYPE
{
	PAWN_ATTACH_SIMPLE                                 = 0,
	PAWN_ATTACH_GRAB                                   = 1,
	PAWN_ATTACH_RIDE                                   = 2,
	PAWN_ATTACH_GADGET                                 = 3,
	PAWN_ATTACH_PET                                    = 4,
	PAWN_ATTACH_MAX                                    = 5
};*/

// Enum T1Game.T1CustomPawn.PAWNDETATCHTYPE
/*enum PAWNDETATCHTYPE
{
	PAWN_DETATCH_THROW                                 = 0,
	PAWN_DETATCH_RIDE                                  = 1,
	PAWN_DETATCH_GADGET_DROP                           = 2,
	PAWN_DETATCH_PET                                   = 3,
	PAWN_DETATCH_MAX                                   = 4
};*/

// Enum T1Game.T1CustomPawn.ATTACHABLESOCKETSTATE
/*enum ATTACHABLESOCKETSTATE
{
	ATTACHSOCK_None                                    = 0,
	ATTACHSOCK_Attached                                = 1,
	ATTACHSOCK_Detached                                = 2,
	ATTACHSOCK_IdleOrbited                             = 3,
	ATTACHSOCK_MAX                                     = 4
};*/

// Enum T1Game.T1CustomPawn.ATTACHABLESOCKETSTATUS
/*enum ATTACHABLESOCKETSTATUS
{
	SOCKSTATUS_None                                    = 0,
	SOCKSTATUS_BlendingToAttach                        = 1,
	SOCKSTATUS_Attached                                = 2,
	SOCKSTATUS_BlendingToDetach                        = 3,
	SOCKSTATUS_MAX                                     = 4
};*/

// Enum T1Game.T1CustomPawn.EOrbitingSocketOriginType
/*enum EOrbitingSocketOriginType
{
	EOSOT_BONE                                         = 0,
	EOSOT_SOCKET                                       = 1,
	EOSOT_REFPOSE_BONE                                 = 2,
	EOSOT_MAX                                          = 3
};*/

// Enum T1Game.T1CustomPawn.EOrbitingSocketDelayType
/*enum EOrbitingSocketDelayType
{
	EOSDT_FollowupVelocity                             = 0,
	EOSDT_FollowupLocation                             = 1,
	EOSDT_MAX                                          = 2
};*/

// Enum T1Game.T1CustomPawn.EOrbitingSocketRotationType
/*enum EOrbitingSocketRotationType
{
	EOSRT_None                                         = 0,
	EOSRT_RotateTowardDirection                        = 1,
	EOSRT_RotateAsOrbitXYZ                             = 2,
	EOSRT_RotateAsOrbitX                               = 3,
	EOSRT_MAX                                          = 4
};*/

// Enum T1Game.T1CustomPawn.T1FlyAttachCurveMode
/*enum T1FlyAttachCurveMode
{
	FACURVE_Linear                                     = 0,
	FACURVE_AvoidEnd                                   = 1,
	FACURVE_AvoidStart                                 = 2,
	FACURVE_EightCurve                                 = 3,
	FACURVE_BendToDestination                          = 4,
	FACURVE_MAX                                        = 5
};*/

// Enum T1Game.T1CustomPawn.T1FlyAttachRotationMode
/*enum T1FlyAttachRotationMode
{
	FAROTATION_Direction                               = 0,
	FAROTATION_DirectionBlendAtEnd                     = 1,
	FAROTATION_FixedTarget                             = 2,
	FAROTATION_MAX                                     = 3
};*/

// Enum T1Game.T1CustomPawn.T1FlyAttachModeType
/*enum T1FlyAttachModeType
{
	FAMODE_None                                        = 0,
	FAMODE_Attach                                      = 1,
	FAMODE_Ground                                      = 2,
	FAMODE_MAX                                         = 3
};*/

// Enum T1Game.T1EnvObject.T1EnvObjClass
/*enum T1EnvObjClass
{
	T1_Env_Obj_Button                                  = 0,
	T1_Env_Obj_Chest                                   = 1,
	T1_Env_Obj_Pot                                     = 2,
	T1_Env_Obj_Gate                                    = 3,
	T1_Env_Obj_Wall                                    = 4,
	T1_Env_Obj_FootSwitch                              = 5,
	T1_Env_Obj_Portal                                  = 6,
	T1_Env_Obj_EffectRegion                            = 7,
	T1_Env_Obj_AirDash                                 = 8,
	T1_Env_Obj_AirDash_leave                           = 9,
	T1_Env_Obj_FallDeath                               = 10,
	T1_Env_Obj_ArenaPortal                             = 11,
	T1_Env_Obj_refiner                                 = 12,
	T1_Env_Obj_ControlPoint                            = 13,
	T1_Env_Obj_MAX                                     = 14
};*/

// Enum T1Game.T1EnvObject.T1EnvObj_Category
/*enum T1EnvObj_Category
{
	T1_Env_CATEGORY_COLLECT                            = 0,
	T1_Env_CATEGORY_MANIPULATE                         = 1,
	T1_Env_CATEGORY_PICKUP                             = 2,
	T1_Env_CATEGORY_PUTDOWN                            = 3,
	T1_Env_CATEGORY_RECHARGE_HEART                     = 4,
	T1_Env_CATEGORY_DEFAULT                            = 5,
	T1_Env_CATEGORY_MAX                                = 6
};*/

// Enum T1Game.T1EnvObject.T1EnvObjState
/*enum T1EnvObjState
{
	T1_Env_State_None                                  = 0,
	T1_Env_State_Destroyed                             = 1,
	T1_Env_State_Open                                  = 2,
	T1_Env_State_Close                                 = 3,
	T1_Env_State_On                                    = 4,
	T1_Env_State_Off                                   = 5,
	T1_Env_State_Empty                                 = 6,
	T1_Env_State_NoneIdle                              = 7,
	T1_Env_State_Step1                                 = 8,
	T1_Env_State_Step2                                 = 9,
	T1_Env_State_Step3                                 = 10,
	T1_Env_State_Step4                                 = 11,
	T1_Env_State_Step5                                 = 12,
	T1_Env_State_Step6                                 = 13,
	T1_Env_State_Step7                                 = 14,
	T1_Env_State_MAX                                   = 15
};*/

// Enum T1Game.T1EnvObject.T1ZoneEnvEffectTargetType
/*enum T1ZoneEnvEffectTargetType
{
	T1_Env_EFFECT_TARGET_ALL                           = 0,
	T1_Env_EFFECT_TARGET_PC                            = 1,
	T1_Env_EFFECT_TARGET_NPC                           = 2,
	T1_Env_EFFECT_TARGET_MAX                           = 3
};*/

// Enum T1Game.T1EnvObject.T1EnvStateActive
/*enum T1EnvStateActive
{
	T1_EnvActive_Enable                                = 0,
	T1_EnvActive_Disable                               = 1,
	T1_EnvActive_MAX                                   = 2
};*/

// Enum T1Game.T1EnvObject.T1EnvPortalType
/*enum T1EnvPortalType
{
	T1_Env_Portal_Door                                 = 0,
	T1_Env_Portal_Button                               = 1,
	T1_Env_Portal_MAX                                  = 2
};*/

// Enum T1Game.T1GatherObject.T1GatherState
/*enum T1GatherState
{
	T1_Gather_State_Spawn                              = 0,
	T1_Gather_State_On                                 = 1,
	T1_Gather_State_Casting                            = 2,
	T1_Gather_State_Destroy                            = 3,
	T1_Gather_State_Off                                = 4,
	T1_Gather_State_MAX                                = 5
};*/

// Enum T1Game.T1MapVolume.T1MAPVOLUME_IMAGE_SIZE
/*enum T1MAPVOLUME_IMAGE_SIZE
{
	T1_IMG_SIZE                                        = 0,
	T1_IMG_SIZE01                                      = 1,
	T1_IMG_SIZE02                                      = 2,
	T1_IMG_SIZE03                                      = 3,
	T1_IMG_SIZE04                                      = 4,
	T1_IMG_SIZE05                                      = 5,
	T1_IMG_SIZE06                                      = 6,
	T1_IMG_SIZE07                                      = 7,
	T1_IMG_SIZE_MAX                                    = 8
};*/

// Enum T1Game.T1NpcArea.T1NPCAREATYPE
/*enum T1NPCAREATYPE
{
	T1NPCAREA_VOLUME                                   = 0,
	T1NPCAREA_POINT                                    = 1,
	T1NPCAREA_MAX                                      = 2
};*/

// Enum T1Game.T1Pawn.PlayAnimType
/*enum PlayAnimType
{
	PAT_NONE                                           = 0,
	PAT_PRIORITY                                       = 1,
	PAT_PRIORITY01                                     = 2,
	PAT_PRIORITY_ETC                                   = 3,
	PAT_PRIORITY_UNDERATTACK                           = 4,
	PAT_PRIORITY_ATTACK                                = 5,
	PAT_PRIORITY_AFTER_FINISH_UNDERATTACK              = 6,
	PAT_PRIORITY_DEAD                                  = 7,
	PAT_MAX                                            = 8
};*/

// Enum T1Game.T1Pawn.T1PawnMoveType
/*enum T1PawnMoveType
{
	T1PAWNMOVE_MOUSE                                   = 0,
	T1PAWNMOVE_ACTION                                  = 1,
	T1PAWNMOVE_THROW                                   = 2,
	T1PAWNMOVE_ROLLING                                 = 3,
	T1PAWNMOVE_WALK                                    = 4,
	T1PAWNMOVE_RUN                                     = 5,
	T1PAWNMOVE_JUMP                                    = 6,
	T1PAWNMOVE_SPRINT                                  = 7,
	T1PAWNMOVE_SPRINTJUMP                              = 8,
	T1PAWNMOVE_FALLING                                 = 9,
	T1PAWNMOVE_GLIDE                                   = 10,
	T1PAWNMOVE_BOOST                                   = 11,
	T1PAWNMOVE_DIVE                                    = 12,
	T1PAWNMOVE_WALLJUMP                                = 13,
	T1PAWNMOVE_WALLRUN                                 = 14,
	T1PAWNMOVE_EVENTJUMP                               = 15,
	T1PAWNMOVE_YAW                                     = 16,
	T1PAWNMOVE_NPC_YAW                                 = 17,
	T1PAWNMOVE_FLEE                                    = 18,
	T1PAWNMOVE_CHASE                                   = 19,
	T1PAWNMOVE_RETURN                                  = 20,
	T1PAWNMOVE_SUMMONED_RUN                            = 21,
	T1PAWNMOVE_SUMMONED_SPRINT                         = 22,
	T1PAWNMOVE_SUMMONED_SPRINTJUMP                     = 23,
	T1PAWNMOVE_SUMMONED_FALLING                        = 24,
	T1PAWNMOVE_SUMMONED_GLIDE                          = 25,
	T1PAWNMOVE_SUMMONED_BOOST                          = 26,
	T1PAWNMOVE_SUMMONED_DIVE                           = 27,
	T1PAWNMOVE_SUMMONED_WALLJUMP                       = 28,
	T1PAWNMOVE_SUMMONED_WALLRUN                        = 29,
	T1PAWNMOVE_SUMMONED_EVENTJUMP                      = 30,
	T1PAWNMOVE_SUMMONED_THROW                          = 31,
	T1PAWNMOVE_SUMMONED_ROLLING                        = 32,
	T1PAWNMOVE_SUMMONED_DEST                           = 33,
	T1PAWNMOVE_END                                     = 34,
	T1PAWNMOVE_MAX                                     = 35
};*/

// Enum T1Game.T1PlayerCamera.T1CAMERAMODE
/*enum T1CAMERAMODE
{
	T1CAMERA_NORMAL                                    = 0,
	T1CAMERA_FRONT                                     = 1,
	T1CAMERA_LEFT                                      = 2,
	T1CAMERA_RIGHT                                     = 3,
	T1CAMERA_LEFTFRONT                                 = 4,
	T1CAMERA_RIGHTFRONT                                = 5,
	T1CAMERA_RIGHTBACK                                 = 6,
	T1CAMERA_LEFTBACK                                  = 7,
	T1CAMERA_PAWNTARGET                                = 8,
	T1CAMERA_PAWNTRAVEL                                = 9,
	T1CAMERA_MAX                                       = 10
};*/

// Enum T1Game.T1PlayerCamera.ManualStatus_UsingSceneType
/*enum ManualStatus_UsingSceneType
{
	ManualStatus_UsingScene_Login                      = 0,
	ManualStatus_UsingScene_AbNormal                   = 1,
	ManualStatus_UsingScene_MAX                        = 2
};*/

// Enum T1Game.T1PlayerCamera.ManualStatus_InputTreatType
/*enum ManualStatus_InputTreatType
{
	ManualStatus_InputTreat_Ignore                     = 0,
	ManualStatus_InputTreat_RotatePawn                 = 1,
	ManualStatus_InputTreat_RotateCamera               = 2,
	ManualStatus_InputTreat_MAX                        = 3
};*/

// Enum T1Game.T1PlayerCamera.CameraLensEffect_Fit_Type
/*enum CameraLensEffect_Fit_Type
{
	CameraLensEffect_Fit_Aspect                        = 0,
	CameraLensEffect_Fit_Full                          = 1,
	CameraLensEffect_Fit_MAX                           = 2
};*/

// Enum T1Game.T1PlayerController.CharacterFitStatus
/*enum CharacterFitStatus
{
	CharacterFitStatus_Outside                         = 0,
	CharacterFitStatus_AllFit                          = 1,
	CharacterFitStatus_HalfFit                         = 2,
	CharacterFitStatus_FaceFit                         = 3,
	CharacterFitStatus_Transparency                    = 4,
	CharacterFitStatus_MAX                             = 5
};*/

// Enum T1Game.T1PlayerInput.ETPSInnerMode
/*enum ETPSInnerMode
{
	TPS_Normal                                         = 0,
	TPS_UI                                             = 1,
	TPS_MAX                                            = 2
};*/

// Enum T1Game.T1PlayerStart.T1CHARTYPE
/*enum T1CHARTYPE
{
	JIN_MALE                                           = 0,
	JIN_FEMALE                                         = 1,
	GON_MALE                                           = 2,
	GON_FEMALE                                         = 3,
	LIN_MALE                                           = 4,
	LIN_FEMALE                                         = 5,
	KUN                                                = 6,
	T1CHARTYPE_MAX                                     = 7
};*/

// Enum T1Game.T1WayPointActor.T1PATHLINKTYPE
/*enum T1PATHLINKTYPE
{
	T1_LINK_TYPE_WALK                                  = 0,
	T1_LINK_TYPE_RUN                                   = 1,
	T1_LINK_TYPE_WARP                                  = 2,
	T1_LINK_TYPE_MAX                                   = 3
};*/

// Enum T1Game.T1WayPointActor.T1WAYPOINTMOVETYPE
/*enum T1WAYPOINTMOVETYPE
{
	T1_WAYPOINT_TYPE_WALK                              = 0,
	T1_WAYPOINT_TYPE_RUN                               = 1,
	T1_WAYPOINT_TYPE_WARP                              = 2,
	T1_WAYPOINT_TYPE_MAX                               = 3
};*/

// Enum T1Game.T1ZoneProperty.T1ZONE_TYPE
/*enum T1ZONE_TYPE
{
	type_none                                          = 0,
	persistant                                         = 1,
	instant_pc                                         = 2,
	instant_party                                      = 3,
	instant_hybrid                                     = 4,
	dungeon                                            = 5,
	T1ZONE_TYPE_MAX                                    = 6
};*/

// Enum T1Game.T1ZoneProperty.T1ZONE_TYPE_NEW
/*enum T1ZONE_TYPE_NEW
{
	zone_type_none                                     = 0,
	zone_type_persistant                               = 1,
	zone_type_single                                   = 2,
	zone_type_instant                                  = 3,
	zone_type_dungeon                                  = 4,
	zone_type_arena                                    = 5,
	zone_type_single_dungeon                           = 6,
	zone_type_duel                                     = 7,
	zone_type_MAX                                      = 8
};*/

// Enum T1Game.T1ZoneProperty.T1ZONE_TYPE
/*enum T1ZONE_TYPE
{
	zone_type2_none                                    = 0,
	zone_type2_persistent                              = 1,
	zone_type2_single                                  = 2,
	zone_type2_instant                                 = 3,
	zone_type2_MAX                                     = 4
};*/

// Enum T1Game.T1ZoneProperty.T1Env_Link_EffectType
/*enum T1Env_Link_EffectType
{
	T1Env_LinkEffect_Persistant                        = 0,
	T1Env_LinkEffect_Single                            = 1,
	T1Env_LinkEffect_Instant                           = 2,
	T1Env_LinkEffect_ConflictArea                      = 3,
	T1Env_LinkEffect_Dungeon_WayIn                     = 4,
	T1Env_LinkEffect_Dungeon                           = 5,
	T1Env_LinkEffect_Blocked                           = 6,
	T1Env_LinkEffect_Single_normal                     = 7,
	T1Env_LinkEffect_Single_higher                     = 8,
	T1Env_LinkEffect_Single_veryhigher                 = 9,
	T1Env_LinkEffect_Single_hero                       = 10,
	T1Env_LinkEffect_Instant_normal                    = 11,
	T1Env_LinkEffect_Instant_higher                    = 12,
	T1Env_LinkEffect_Instant_veryhigher                = 13,
	T1Env_LinkEffect_raid_Dungeon                      = 14,
	T1Env_LinkEffect_MAX                               = 15
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class T1Game.T1EnvObjCylinderComponent
// 0x000C (0x022C - 0x0220)
class UT1EnvObjCylinderComponent : public UCylinderComponent
{
public:
	struct FVector                                     AreaExtent;                                       		// 0x0220 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3506 ];

		return pClassPointer;
	};

};

//UClass* UT1EnvObjCylinderComponent::pClassPointer = NULL;

// Class T1Game.T1EnvObjPortalCylinderComponent
// 0x000C (0x022C - 0x0220)
class UT1EnvObjPortalCylinderComponent : public UCylinderComponent
{
public:
	struct FVector                                     AreaExtent;                                       		// 0x0220 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3508 ];

		return pClassPointer;
	};

};

//UClass* UT1EnvObjPortalCylinderComponent::pClassPointer = NULL;

// Class T1Game.T1GameClient
// 0x0000 (0x023C - 0x023C)
class UT1GameClient : public UWindowsClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3510 ];

		return pClassPointer;
	};

};

//UClass* UT1GameClient::pClassPointer = NULL;

// Class T1Game.T1GameUIUExporter
// 0x0000 (0x0064 - 0x0064)
class UT1GameUIUExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3512 ];

		return pClassPointer;
	};

};

//UClass* UT1GameUIUExporter::pClassPointer = NULL;

// Class T1Game.T1GameViewportClient
// 0x0004 (0x0114 - 0x0110)
class UT1GameViewportClient : public UGameViewportClient
{
public:
	unsigned long                                      m_bIsMouseMoving : 1;                             		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3514 ];

		return pClassPointer;
	};

	void DrawTransition ( class UCanvas* Canvas );
	void eventPostRender ( class UCanvas* Canvas );
	bool eventInit ( struct FString* OutError );
	void PostRenderT1 ( class UCanvas* Canvas );
};

//UClass* UT1GameViewportClient::pClassPointer = NULL;

// Class T1Game.T1MapVolume
// 0x0060 (0x02B8 - 0x0258)
class AT1MapVolume : public AVolume
{
public:
	float                                              VolumeWidth;                                      		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VolumeHeight;                                     		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DivCountHeight;                                   		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DivCountWidth;                                    		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeHeight;                                       		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeWidth;                                        		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PackageName;                                      		// 0x0270 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ImageSizeHeight;                                  		// 0x027C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ImageSizeWidth;                                   		// 0x027D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImageWidth;                                       		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MapScale;                                         		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      WorldMapFlag : 1;                                 		// 0x028C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      MiniMapFlag : 1;                                  		// 0x028C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0290 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x029C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                VolumeID;                                         		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MapResource;                                      		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ImageOffset;                                      		// 0x02B0 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3516 ];

		return pClassPointer;
	};

};

//UClass* AT1MapVolume::pClassPointer = NULL;

// Class T1Game.T1PlayerController
// 0x0058 (0x05F0 - 0x0598)
class AT1PlayerController : public APlayerController
{
public:
	float                                              fDestFreeCamDistance;                             		// 0x0598 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedDollyInterp : 1;                             		// 0x059C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnorePlayerRoation : 1;                         		// 0x059C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInvalidateViewport : 1;                          		// 0x059C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInvalidateViewportByMouse : 1;                   		// 0x059C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowMyPC : 1;                                    		// 0x059C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCharacterFit_Enable : 1;                         		// 0x059C (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bCharacterFit_DOF : 1;                            		// 0x059C (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      bCharacterShowMode : 1;                           		// 0x059C (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	float                                              DollyFactor;                                      		// 0x05A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              StopTime;                                         		// 0x05A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_Distance;                           		// 0x05A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_Boundary;                           		// 0x05AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_StatusBoundary;                     		// 0x05B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_InterpTime;                         		// 0x05B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_InterpSpeed;                        		// 0x05B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_DollyFactor;                        		// 0x05BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_ExtendHeight;                       		// 0x05C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_ExtendSize;                         		// 0x05C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_ExtendDepth_All;                    		// 0x05C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_ExtendDepth_Half;                   		// 0x05CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCharacterFit_ExtendDepth_Face;                   		// 0x05D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                iCharacterFit_Pitch_All;                          		// 0x05D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                iCharacterFit_Pitch_Half;                         		// 0x05D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                iCharacterFit_Pitch_Face;                         		// 0x05DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                iCharacterFit_Yaw_AllowDegree;                    		// 0x05E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      CharacterFit_Status;                              		// 0x05E4 (0x0001) [0x0000000000000000]              
	float                                              fCharacterFit_StatusPosition;                     		// 0x05E8 (0x0004) [0x0000000000000000]              
	float                                              fCharacterFit_Interp;                             		// 0x05EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3518 ];

		return pClassPointer;
	};

	void AlignPlayerPawnToCameraDirection ( );
	void eventCameraMove ( float Duration, float Pct, struct FRawDistributionVector* newRotAdjust, struct FRawDistributionVector* newLocAdjust, struct FRawDistributionFloat* newFovAdjust );
	void eventCameraShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom );
	void PlayerMove ( float DeltaTime );
	void CheckJumpOrDuck ( );
	void PlayerTick ( float DeltaTime );
	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation );
	void UpdateRotation ( float DeltaTime );
	void ShoulderPosCamDist ( float fDist );
	void ShoulderPosY ( float fY );
	void ShoulderPosX ( float fX );
	void ShoulderPos ( float fX, float fY, float fDist );
	void TargetZoom ( float fTargetZoom );
	void TargetRot ( float fPitch, float fYaw );
	void SetCamTargetHeightNear ( float fHeight );
	void CamTargetHeightNearDown ( );
	void CamTargetHeightNearUp ( );
	void SetCamTargetHeight ( float fHeight );
	void CamTargetHeightDown ( );
	void CamTargetHeightUp ( );
	void SetCharacterShowMode ( unsigned long bFlag );
	struct FVector NativeAccel ( struct FVector X, struct FVector Y, struct FVector Z );
	void ToggleCamInfo ( );
	void SetFovAtMax ( float FOV );
	void SetFovAtZero ( float FOV );
	void SetCamNearDist ( float fDist );
	void SetCamMaxDist ( float fDist );
	void SetCamMinDist ( float fDist );
	void SetCamHeightTransDist ( float fDist );
	void SetDollyFactor ( float fNewDollyFactor );
	void Dolly ( float fDollyFactor );
	bool CharacterFitDolly ( float fDollyFactor );
	void DollyOut ( );
	void DollyIn ( );
	void Face ( int a_Type );
	void Hair ( int a_Type );
	void Costume ( int a_Type );
	void ChangeSet ( int a_Type );
	void execAttackReq ( );
};

//UClass* AT1PlayerController::pClassPointer = NULL;

// Class T1Game.T1PlayerInput
// 0x0028 (0x01F0 - 0x01C8)
class UT1PlayerInput : public UPlayerInput
{
public:
	unsigned char                                      bInputMove;                                       		// 0x01C8 (0x0001) [0x0000000000000000]              
	unsigned char                                      bInputRotate;                                     		// 0x01C9 (0x0001) [0x0000000000000000]              
	unsigned char                                      bInitialCameraBlend;                              		// 0x01CA (0x0001) [0x0000000000000000]              
	unsigned char                                      bBlockInputRotation;                              		// 0x01CB (0x0001) [0x0000000000000000]              
	unsigned char                                      bRotateTypeForJoypad;                             		// 0x01CC (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bRotatePlayer;                                    		// 0x01CD (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bRotateCamOnly;                                   		// 0x01CE (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bForceRotatePlayer;                               		// 0x01CF (0x0001) [0x0000000000000000]              
	unsigned char                                      bLeftShift;                                       		// 0x01D0 (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      TPSInnerMode;                                     		// 0x01D1 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      bTPSRotateCamOnly;                                		// 0x01D2 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      bTPSRotatePlayer;                                 		// 0x01D3 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_bResetCamera : 1;                               		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTurnPlayer : 1;                                  		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTurnDirection : 1;                               		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseTPSMode : 1;                                  		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bForceTPSUIMode : 1;                              		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bUseTPSHybridMode : 1;                            		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bTPSHybridRotate : 1;                             		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bTPSCursorOutSideWindow : 1;                      		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      bTPSLostFocus : 1;                                		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      bUseTPSRotateCamToggle : 1;                       		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bTPSRotateCamToggleFlag : 1;                      		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	unsigned long                                      bTPSRotateCamResetToDefault : 1;                  		// 0x01D4 (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      bMustReleaseTPSContextKey : 1;                    		// 0x01D4 (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      bPushTPSContextKeyL : 1;                          		// 0x01D4 (0x0004) [0x0000000000002000] [0x00002000] ( CPF_Transient )
	unsigned long                                      bPushTPSContextKeyR : 1;                          		// 0x01D4 (0x0004) [0x0000000000002000] [0x00004000] ( CPF_Transient )
	unsigned long                                      bPushTPSContextKeyM : 1;                          		// 0x01D4 (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	float                                              aTurnKeyboard;                                    		// 0x01D8 (0x0004) [0x0000000000000004]              ( CPF_Input )
	float                                              m_fStrafe;                                        		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              aPreMouseX;                                       		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              aPreMouseY;                                       		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              aTPSMouseMoveX;                                   		// 0x01E8 (0x0004) [0x0000000000000000]              
	float                                              aTPSMouseMoveY;                                   		// 0x01EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3520 ];

		return pClassPointer;
	};

	void ToggleRotateTypeForJoypad ( );
	void DisableRotateForJoypad ( );
	void EnableRotateForJoypad ( );
	void ToggleKeepWalking ( );
	void QuickTurn ( );
	void ResetCamera ( );
	void GlideDrop ( );
	void UnDash ( );
	void Dash ( );
	void SetTPSInnerMode ( unsigned char InMode );
	bool IsRotateCamOnly ( );
	bool IsRotatePlayer ( );
	void eventPlayerInput ( float DeltaTime );
};

//UClass* UT1PlayerInput::pClassPointer = NULL;

// Class T1Game.T1PlayerStart
// 0x0001 (0x0305 - 0x0304)
class AT1PlayerStart : public APlayerStart
{
public:
	unsigned char                                      m_CharType;                                       		// 0x0304 (0x0001) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3522 ];

		return pClassPointer;
	};

};

//UClass* AT1PlayerStart::pClassPointer = NULL;

// Class T1Game.T1SceneCaptureMapVolumeActor
// 0x0004 (0x0218 - 0x0214)
class AT1SceneCaptureMapVolumeActor : public ASceneCaptureActor
{
public:
	class UTextureRenderTarget2D*                      renderTarget;                                     		// 0x0214 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3524 ];

		return pClassPointer;
	};

	bool GetRenderedResult ( class UTexture2D* ResultTexture );
};

//UClass* AT1SceneCaptureMapVolumeActor::pClassPointer = NULL;

// Class T1Game.T1SceneCaptureMapVolumeComponent
// 0x00A0 (0x0120 - 0x0080)
class UT1SceneCaptureMapVolumeComponent : public USceneCaptureComponent
{
public:
	class UTextureRenderTarget2D*                      TextureTarget;                                    		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FBox                                        ViewVolume;                                       		// 0x0084 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FMatrix                                     ViewMatrix;                                       		// 0x00A0 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	struct FMatrix                                     ProjMatrix;                                       		// 0x00E0 (0x0040) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3526 ];

		return pClassPointer;
	};

};

//UClass* UT1SceneCaptureMapVolumeComponent::pClassPointer = NULL;

// Class T1Game.T1TerrainProperty
// 0x0044 (0x0254 - 0x0210)
class AT1TerrainProperty : public AActor
{
public:
	int                                                Id;                                               		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0214 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TerrainMapName;                                   		// 0x0220 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x022C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                OrginX;                                           		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                OrginY;                                           		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CountX;                                           		// 0x0240 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CountY;                                           		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                World_Origin_X;                                   		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                World_Origin_Y;                                   		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ShowTerrainGridSimply : 1;                        		// 0x0250 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ShowZoneGridSimply : 1;                           		// 0x0250 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      ShowSelectedZoneOnly : 1;                         		// 0x0250 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      ShowSelectedZoneObject : 1;                       		// 0x0250 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3528 ];

		return pClassPointer;
	};

};

//UClass* AT1TerrainProperty::pClassPointer = NULL;

// Class T1Game.T1TerrainViewer
// 0x0004 (0x0214 - 0x0210)
class AT1TerrainViewer : public AActor
{
public:
	class UStaticMeshComponent*                        PlaneMeshComponent;                               		// 0x0210 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3530 ];

		return pClassPointer;
	};

};

//UClass* AT1TerrainViewer::pClassPointer = NULL;

// Class T1Game.T1ZoneProperty
// 0x0258 (0x0468 - 0x0210)
class AT1ZoneProperty : public AActor
{
public:
	unsigned char                                      nType;                                            		// 0x0210 (0x0001) [0x0000000000000000]              
	unsigned char                                      ZonePropType;                                     		// 0x0211 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ZoneType2;                                        		// 0x0212 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LinkZoneEffectType;                               		// 0x0213 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0218 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                TerrainID;                                        		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AI_ID;                                            		// 0x0228 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     KismetName;                                       		// 0x0234 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     KismetName01;                                     		// 0x0240 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x024C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     reentrance_pcspawn;                               		// 0x0258 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     reentrance_pcspawn_in_arena;                      		// 0x0264 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                OrginX;                                           		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                OrginY;                                           		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CountX;                                           		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CountY;                                           		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PCMax;                                            		// 0x0280 (0x0004) [0x0000000000000000]              
	int                                                NPCMax;                                           		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nXYCubeSize;                                      		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneDomain_Id;                                    		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                MinChannelCount;                                  		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReCommend_PC_Count;                               		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Recharge_exp_Boost : 1;                           		// 0x0298 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      EnableGhostMode : 1;                              		// 0x0298 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      TutorialZone : 1;                                 		// 0x0298 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      sharable_combatmode : 1;                          		// 0x0298 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      ZoneSight_Cube : 1;                               		// 0x0298 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      available_sextet_party : 1;                       		// 0x0298 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      WriteEquipinfoLog : 1;                            		// 0x0298 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      DeprecatedZone : 1;                               		// 0x0298 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      ArenaEntrance : 1;                                		// 0x0298 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      LightClientEnable : 1;                            		// 0x0298 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      DefaultPhaseZone : 1;                             		// 0x0298 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	int                                                ZoneGroupId;                                      		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              Close_Interval;                                   		// 0x02A0 (0x0004) [0x0000000000000000]              
	struct FT1_RESPAWN_AREA_INZONE                     RespawnAreaInfo;                                  		// 0x02A4 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FT1_BASECAMP_AREA_INZONE                    BaseCampAreaInfo;                                 		// 0x02B8 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChannelCount;                                     		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ZoneRefMapinfo;                                   		// 0x02D0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ZoneRefDiscoverinfo;                              		// 0x02DC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              FallDeathHeight;                                  		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DefPhaseSpawnId;                                  		// 0x02EC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DefDungeonTable;                                  		// 0x02F8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RefTableData;                                     		// 0x0304 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RefTableData01;                                   		// 0x0310 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RefTableData02;                                   		// 0x031C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FT1_ZONEPROP_ARENA_RETURN_INFO              ArenaInfo[ 0x2 ];                                 		// 0x0328 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ArenaRefEnterSocial;                              		// 0x0358 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ArenaRefLeaveSocial;                              		// 0x0364 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ArenaRefEnterCinematic[ 0x2 ];                    		// 0x0370 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ArenaRefLeaveCinematic[ 0x2 ];                    		// 0x0388 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TransferPcspawnByDeprecated;                      		// 0x03A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                Arena_faction_diff;                               		// 0x03AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DownLoadLevel;                                    		// 0x03B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     phase_zone[ 0xB ];                                		// 0x03B4 (0x0084) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RespawnByActivatedFactionRequiredFaction[ 0x2 ];  		// 0x0438 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RespawnByActivatedFaction[ 0x2 ];                 		// 0x0450 (0x0018) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3532 ];

		return pClassPointer;
	};

};

//UClass* AT1ZoneProperty::pClassPointer = NULL;

// Class T1Game.T1CustomPawn
// 0x1824 (0x1E70 - 0x064C)
class AT1CustomPawn : public APawn
{
public:
	class UAudioTrack*                                 VoiceAudioTrack;                                  		// 0x064C (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	struct FVector                                     LandBounceDestination;                            		// 0x0650 (0x000C) [0x0000000000000000]              
	struct FDouble                                     CustomVelocityStartTime;                          		// 0x065C (0x0008) [0x0000000000000000]              
	struct FDouble                                     CustomVelocityEndTime;                            		// 0x0664 (0x0008) [0x0000000000000000]              
	float                                              CustomVelocityDistance;                           		// 0x066C (0x0004) [0x0000000000000000]              
	float                                              CustomVelocityVelocityPerSec;                     		// 0x0670 (0x0004) [0x0000000000000000]              
	float                                              ThrowStartMultiplier;                             		// 0x0674 (0x0004) [0x0000000000000000]              
	TArray< struct FPawnThrowElement >                 PawnThrowSequence;                                		// 0x0678 (0x000C) [0x0000000000000000]              
	class AT1CustomPawn*                               PawnAttachedTo;                                   		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bRequirePawnReattach : 1;                         		// 0x0688 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bRequireParticleRepositioning : 1;                		// 0x0688 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bThrown : 1;                                      		// 0x0688 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUpdateCDTCount : 1;                              		// 0x0688 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bEnableGuildPreview : 1;                          		// 0x0688 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bForceUpdateGuildProp : 1;                        		// 0x0688 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bForceApplyGuildPropAll : 1;                      		// 0x0688 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bLocalFaceAnimFlag : 1;                           		// 0x0688 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bAutoPhysics : 1;                                 		// 0x0688 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bFaceAimOn : 1;                                   		// 0x0688 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bLookRandAimOn : 1;                               		// 0x0688 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	unsigned long                                      bForceCircleShadow : 1;                           		// 0x0688 (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      bDynamicShadowOff : 1;                            		// 0x0688 (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      bCalcFootLoc : 1;                                 		// 0x0688 (0x0004) [0x0000000000002000] [0x00002000] ( CPF_Transient )
	unsigned long                                      bChangeCheckFootPos : 1;                          		// 0x0688 (0x0004) [0x0000000000002000] [0x00004000] ( CPF_Transient )
	unsigned long                                      bAbsApplyPolyHeight : 1;                          		// 0x0688 (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	unsigned long                                      bAccumulateFlag : 1;                              		// 0x0688 (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	unsigned long                                      bCheckSitdown : 1;                                		// 0x0688 (0x0004) [0x0000000000002000] [0x00020000] ( CPF_Transient )
	unsigned long                                      bCheckHeightLock : 1;                             		// 0x0688 (0x0004) [0x0000000000002000] [0x00040000] ( CPF_Transient )
	unsigned long                                      bFirstSpawn : 1;                                  		// 0x0688 (0x0004) [0x0000000000002000] [0x00080000] ( CPF_Transient )
	unsigned long                                      bPreFootCheck : 1;                                		// 0x0688 (0x0004) [0x0000000000002000] [0x00100000] ( CPF_Transient )
	unsigned long                                      bPreEnablePolyHeight : 1;                         		// 0x0688 (0x0004) [0x0000000000002000] [0x00200000] ( CPF_Transient )
	unsigned long                                      bEnableOtherHeight : 1;                           		// 0x0688 (0x0004) [0x0000000000002000] [0x00400000] ( CPF_Transient )
	unsigned long                                      bCenterLineCheckIsNull : 1;                       		// 0x0688 (0x0004) [0x0000000000002000] [0x00800000] ( CPF_Transient )
	unsigned long                                      EnablePolyHeight : 1;                             		// 0x0688 (0x0004) [0x0000000000003000] [0x01000000] ( CPF_Native | CPF_Transient )
	unsigned long                                      bIgnoreFootPlacement : 1;                         		// 0x0688 (0x0004) [0x0000000000003000] [0x02000000] ( CPF_Native | CPF_Transient )
	unsigned long                                      bMoveInterp : 1;                                  		// 0x0688 (0x0004) [0x0000000000002000] [0x04000000] ( CPF_Transient )
	unsigned long                                      bMoveInterpReset : 1;                             		// 0x0688 (0x0004) [0x0000000000002000] [0x08000000] ( CPF_Transient )
	unsigned long                                      bMoveInterpCylinderTick : 1;                      		// 0x0688 (0x0004) [0x0000000000002000] [0x10000000] ( CPF_Transient )
	unsigned long                                      bMoveInterpMeshTick : 1;                          		// 0x0688 (0x0004) [0x0000000000002000] [0x20000000] ( CPF_Transient )
	unsigned long                                      bEnableFallingPolyHeight : 1;                     		// 0x0688 (0x0004) [0x0000000000002000] [0x40000000] ( CPF_Transient )
	unsigned long                                      bIgnoreDistanceOptimize : 1;                      		// 0x0688 (0x0004) [0x0000000000002000] [0x80000000] ( CPF_Transient )
	unsigned long                                      bPawnFadeIn : 1;                                  		// 0x068C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bFainting : 1;                                    		// 0x068C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDisappearfromView : 1;                           		// 0x068C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bDependencyParticleHide : 1;                      		// 0x068C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bChangeMoveAnimNamesPet : 1;                      		// 0x068C (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bChangeMoveAnimNamesUpper : 1;                    		// 0x068C (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bChangeMoveAnimNamesLower : 1;                    		// 0x068C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bSetCurrentRunWalkSpeed : 1;                      		// 0x068C (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      bSetCurrentMoveAnimRate : 1;                      		// 0x068C (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      bSkipUpdateSound : 1;                             		// 0x068C (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bKismetAnimOnlyMode : 1;                          		// 0x068C (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	unsigned long                                      bKismetUsingForCustomPawn : 1;                    		// 0x068C (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      bKismetPlayed : 1;                                		// 0x068C (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      bAddDelayReleasedList : 1;                        		// 0x068C (0x0004) [0x0000000000002000] [0x00002000] ( CPF_Transient )
	unsigned long                                      bNotCulledTicking : 1;                            		// 0x068C (0x0004) [0x0000000000002000] [0x00004000] ( CPF_Transient )
	unsigned long                                      bVisibleFootPrint : 1;                            		// 0x068C (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	unsigned long                                      bVisibleWaterPrint : 1;                           		// 0x068C (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	unsigned long                                      Driving : 1;                                      		// 0x068C (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bBlockMoveAnim : 1;                               		// 0x068C (0x0004) [0x0000000000002000] [0x00040000] ( CPF_Transient )
	unsigned long                                      bPlayCameraSetting : 1;                           		// 0x068C (0x0004) [0x0000000000002000] [0x00080000] ( CPF_Transient )
	unsigned long                                      bPauseCustomAnim : 1;                             		// 0x068C (0x0004) [0x0000000000002000] [0x00100000] ( CPF_Transient )
	unsigned long                                      bIgnoreFootAimControl : 1;                        		// 0x068C (0x0004) [0x0000000000002000] [0x00200000] ( CPF_Transient )
	unsigned long                                      bUseSlopeRotation : 1;                            		// 0x068C (0x0004) [0x0000000000002000] [0x00400000] ( CPF_Transient )
	unsigned long                                      bIgnoreAimControl : 1;                            		// 0x068C (0x0004) [0x0000000000002000] [0x00800000] ( CPF_Transient )
	unsigned long                                      bPreviousSocketPlacement : 1;                     		// 0x068C (0x0004) [0x0000000000002000] [0x01000000] ( CPF_Transient )
	unsigned long                                      bUseHandToSocketPlacement : 1;                    		// 0x068C (0x0004) [0x0000000000002000] [0x02000000] ( CPF_Transient )
	unsigned long                                      bIgnoreCustomAniWeaponC : 1;                      		// 0x068C (0x0004) [0x0000000000002000] [0x04000000] ( CPF_Transient )
	unsigned long                                      FlyingAttachPosOnly : 1;                          		// 0x068C (0x0004) [0x0000000000002000] [0x08000000] ( CPF_Transient )
	unsigned long                                      FlyingIdleBlendMode : 1;                          		// 0x068C (0x0004) [0x0000000000002000] [0x10000000] ( CPF_Transient )
	unsigned long                                      FlyingIgnoreGravity : 1;                          		// 0x068C (0x0004) [0x0000000000002000] [0x20000000] ( CPF_Transient )
	unsigned long                                      bPreventSpawnFallApplied : 1;                     		// 0x068C (0x0004) [0x0000000000002000] [0x40000000] ( CPF_Transient )
	unsigned long                                      bSpawned : 1;                                     		// 0x068C (0x0004) [0x0000000000002000] [0x80000000] ( CPF_Transient )
	unsigned long                                      bPet : 1;                                         		// 0x0690 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bPetSelfTicked : 1;                               		// 0x0690 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bResetPhysicsThisFrame : 1;                       		// 0x0690 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bApplyChangeAnimImmediate : 1;                    		// 0x0690 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bUpdatedOldLocation : 1;                          		// 0x0690 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bAllowPolyheightUpdate : 1;                       		// 0x0690 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	TArray< struct FPawnAttachInfo >                   PawnAttached;                                     		// 0x0694 (0x000C) [0x0000000000000000]              
	float                                              ParticleRepositioningBlendTime;                   		// 0x06A0 (0x0004) [0x0000000000000000]              
	TArray< struct FParticleAttachInfo >               ParticleAttachInfos;                              		// 0x06A4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             ParticleAttachUsableBones;                        		// 0x06B0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              ThrowTotalTime;                                   		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              CurrentThrowTime;                                 		// 0x06C0 (0x0004) [0x0000000000000000]              
	struct FVector                                     ThrowStartPosition;                               		// 0x06C4 (0x000C) [0x0000000000000000]              
	struct FVector                                     ThrowFixedYAxis;                                  		// 0x06D0 (0x000C) [0x0000000000000000]              
	float                                              ThrowInitialRotationTime;                         		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              CurrentThrowRotationTime;                         		// 0x06E0 (0x0004) [0x0000000000000000]              
	float                                              LandAnimationStartTime;                           		// 0x06E4 (0x0004) [0x0000000000000000]              
	float                                              CurrentLandPhysicsWeightBlendTime;                		// 0x06E8 (0x0004) [0x0000000000000000]              
	struct FRotator                                    ThrowLandingRotation;                             		// 0x06EC (0x000C) [0x0000000000000000]              
	struct FRotator                                    ThrowForceRotation;                               		// 0x06F8 (0x000C) [0x0000000000000000]              
	struct FName                                       PutDownEndAnimName;                               		// 0x0704 (0x0008) [0x0000000000000000]              
	class UPhysicsAsset*                               CommonPhysicsAsset;                               		// 0x070C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPhysicsAssetInstance*                       CommonPhysicsAssetInstance;                       		// 0x0710 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UAnimNotify* >                       TickedAnimNotifies;                               		// 0x0714 (0x000C) [0x0000000000000000]              
	TArray< struct FGroundParticleInfo >               ActiveGroundParticles;                            		// 0x0720 (0x000C) [0x0000000000000000]              
	TArray< struct FDelayParticleInfo >                ReservedDelayParticles;                           		// 0x072C (0x000C) [0x0000000000000000]              
	struct FSkeletalInfo                               MeshInfo[ 0x1C ];                                 		// 0x0738 (0x0E00) [0x0000000000000000]              
	int                                                UseCustomizeDefaultTypeCount[ 0x4 ];              		// 0x1538 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FT1PawnCustomizeInfo                        PawnCustomizeInfo;                                		// 0x1548 (0x022C) [0x0000000000000000]              
	struct Fsqword                                     JoinGuildKey;                                     		// 0x1774 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                GuildCustomMeshType[ 0x4 ];                       		// 0x177C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	int                                                GuildPropDirtyCount;                              		// 0x178C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       FacialAnimName;                                   		// 0x1790 (0x0008) [0x0000000000000000]              
	struct FSoundNotiType                              PawnSoundType;                                    		// 0x1798 (0x0008) [0x0000000000000000]              
	struct FVector                                     OldRotation;                                      		// 0x17A0 (0x000C) [0x0000000000000000]              
	struct FVector                                     OldAimRotation;                                   		// 0x17AC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UAudioComponent*                             FacialAudioComp;                                  		// 0x17B8 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	float                                              fWarpedTime;                                      		// 0x17BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPolyHeight;                                      		// 0x17C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vecPolyRotation;                                  		// 0x17C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vecBeforePolyRotWeight;                           		// 0x17D0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPolyRotationInterpol;                            		// 0x17DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPolyRotationBlendTime;                           		// 0x17E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     vDirectionLine;                                   		// 0x17E4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vRightLineCheck;                                  		// 0x17F0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vLeftLineCheck;                                   		// 0x17FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              InterpolTime;                                     		// 0x1808 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InterpolCurtime;                                  		// 0x180C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CalcCurHeight;                                    		// 0x1810 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CalcLastHeight;                                   		// 0x1814 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CalcHeightYaw;                                    		// 0x1818 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMesh*                               BackupBodyMesh;                                   		// 0x181C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MeshlegLength;                                    		// 0x1820 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fAccumulatedistance;                              		// 0x1824 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vOldLocation;                                     		// 0x1828 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vPrePelvisLoc;                                    		// 0x1834 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vPreLHandLoc;                                     		// 0x1840 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vPreRHandsLoc;                                    		// 0x184C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vOldLeftFootLocation;                             		// 0x1858 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vOldRightFootLocation;                            		// 0x1864 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPolyHeightChkDelayTime;                          		// 0x1870 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fCurCylinderCenterHeight;                         		// 0x1874 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPreEnablePolyHeight;                             		// 0x1878 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fMaxFootPolyHeight;                               		// 0x187C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fMinFootPolyHeight;                               		// 0x1880 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fEnableOtherHeightValue;                          		// 0x1884 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                bZeroVelocityCount;                               		// 0x1888 (0x0004) [0x0000000000000000]              
	float                                              fMoveInterpStartHeight;                           		// 0x188C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fMoveInterpEndHeight;                             		// 0x1890 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fMoveInterpCurTime;                               		// 0x1894 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fMoveInterpResetTime;                             		// 0x1898 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vInterpMovLocation;                               		// 0x189C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPawnFadeInTime;                                  		// 0x18A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             MoveAnimNamesPet;                                 		// 0x18AC (0x000C) [0x0000000000000048]              ( CPF_ExportObject | CPF_EditConstArray )
	TArray< struct FName >                             MoveAnimNamesUpper;                               		// 0x18B8 (0x000C) [0x0000000000000048]              ( CPF_ExportObject | CPF_EditConstArray )
	TArray< struct FName >                             MoveAnimNamesLower;                               		// 0x18C4 (0x000C) [0x0000000000000048]              ( CPF_ExportObject | CPF_EditConstArray )
	float                                              fLowerCurrentTime;                                		// 0x18D0 (0x0004) [0x0000000000000000]              
	int                                                LowerMoveAniState;                                		// 0x18D4 (0x0004) [0x0000000000000000]              
	float                                              fUpperCurrentTime;                                		// 0x18D8 (0x0004) [0x0000000000000000]              
	int                                                UpperMoveAniState;                                		// 0x18DC (0x0004) [0x0000000000000000]              
	int                                                CurrentUpperMoveAnimNodeIndex;                    		// 0x18E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentLowerMoveAnimNodeIndex;                    		// 0x18E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentUpperMoveAnimNodeInterpol;                 		// 0x18E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentLowerMoveAnimNodeInterpol;                 		// 0x18EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentPetMoveAnimNodeIndex;                      		// 0x18F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentPetMoveAnimNodeInterpol;                   		// 0x18F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentRunSpeedCheck;                             		// 0x18F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentWalkSpeedCheck;                            		// 0x18FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentMoveAnimRate;                              		// 0x1900 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentHeadAimX;                                  		// 0x1904 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentHeadAimY;                                  		// 0x1908 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentBodyAimX;                                  		// 0x190C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentBodyAimY;                                  		// 0x1910 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                OutlineBloomAnimType;                             		// 0x1914 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                OutlineBloomAlphaMin;                             		// 0x1918 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                OutlineBloomAlphaMax;                             		// 0x191C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OutlineBloomScaleMin;                             		// 0x1920 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OutlineBloomScaleMax;                             		// 0x1924 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OutlineBloomAlphaAnimTime;                        		// 0x1928 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OutlineBloomAnimPlayTime;                         		// 0x192C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ResetPhysicsBoneFlag;                             		// 0x1930 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaxResetBonesCount;                               		// 0x1934 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     KismetUsingBeforePos;                             		// 0x1938 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     KismetUsingSequenceName;                          		// 0x1944 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                UsedInShowStage;                                  		// 0x1950 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       EventAnimQueueingName;                            		// 0x1954 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FFluidFootPrevInfo                          FeetPrevInfo;                                     		// 0x195C (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FFootPrintPrevInfo                          FPPrevInfo;                                       		// 0x1974 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	TArray< unsigned long >                            vStayOnGround;                                    		// 0x1994 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     PreLocation;                                      		// 0x19A0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AEmitter* >                          ChildParticles;                                   		// 0x19AC (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           ChildParticlesRelativePos;                        		// 0x19B8 (0x000C) [0x0000000000000000]              
	TArray< struct FName >                             ChildParticleBoneName;                            		// 0x19C4 (0x000C) [0x0000000000000000]              
	TArray< int >                                      ChildParticleBoneUseType;                         		// 0x19D0 (0x000C) [0x0000000000000000]              
	unsigned char                                      MyVehicleState;                                   		// 0x19DC (0x0001) [0x0000000000000000]              
	unsigned char                                      AttachHideMode;                                   		// 0x19DD (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      bFlyingAttachModeOn;                              		// 0x19DE (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      FlyingRotationMode;                               		// 0x19DF (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SpawnFallOldPhysics;                              		// 0x19E0 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UniqueBGMState;                                   		// 0x19E1 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      FilteredHiddenFlag;                               		// 0x19E2 (0x0001) [0x0000000000000000]              
	class AT1CustomPawn*                               MyVehicle;                                        		// 0x19E4 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x19E8 (0x003C) UNKNOWN PROPERTY: MapProperty T1Game.T1CustomPawn.AttachDrivers
	float                                              PauseCustomAnimForceTime;                         		// 0x1A24 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                bMoveAttachOn;                                    		// 0x1A28 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FDouble                                     MoveAttachStartTime;                              		// 0x1A2C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FDouble                                     MoveAttachEndTime;                                		// 0x1A34 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     MoveAttachDestination;                            		// 0x1A3C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     MoveAttachCurrentLoc;                             		// 0x1A48 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class AT1CustomPawn*                               FlyingPawnToAttachTo;                             		// 0x1A54 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    FlyingGroundRotation;                             		// 0x1A58 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     FlyingGroundTarget;                               		// 0x1A64 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     FlyingAttachIdleOnArive;                          		// 0x1A70 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       FlyingAttachEndAnimName;                          		// 0x1A7C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       FlyingAttachToBoneName;                           		// 0x1A84 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       FlyingFlyerBoneName;                              		// 0x1A8C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyingAttachDuration;                             		// 0x1A94 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyingAttachTime;                                 		// 0x1A98 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyingTargetRadius;                               		// 0x1A9C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyingRollAngle;                                  		// 0x1AA0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyingAttachedDuration;                           		// 0x1AA4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FlyingCurveMode;                                  		// 0x1AA8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     FlyingAttachStartPosition;                        		// 0x1AAC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    FlyingBasisRot;                                   		// 0x1AB8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyDeceleration;                                  		// 0x1AC4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyAcceleration;                                  		// 0x1AC8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyFirstInitV;                                    		// 0x1ACC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlySecondInitV;                                   		// 0x1AD0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlySecondStartTime;                               		// 0x1AD4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlySecondOffsetT;                                 		// 0x1AD8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlyDeaccelerationTime;                            		// 0x1ADC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyDeaccelInitialVelocity;                        		// 0x1AE0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyDeaccelFinalVelocityMultiplier;                		// 0x1AE4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyAttachStartAnimDuration;                       		// 0x1AE8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CustomTickCullDistance;                           		// 0x1AEC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FDelayedFlyAttachInfo >             DelayedFlyAttachParams;                           		// 0x1AF0 (0x000C) [0x0000000000000000]              
	struct FPlateInfo                                  Plate;                                            		// 0x1AFC (0x029C) [0x0000000000002000]              ( CPF_Transient )
	float                                              UniqueBGMDistance;                                		// 0x1D98 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   UniqueBGMCue;                                     		// 0x1D9C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	float                                              UniqueBGMFadeTime;                                		// 0x1DA0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     DialogueSetPathName;                              		// 0x1DA4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              SoundVolumeScale;                                 		// 0x1DB0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SoundAttenuationScale;                            		// 0x1DB4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FLookupMap_Mirror                           InvalidSoundNotifies;                             		// 0x1DB8 (0x0048) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                UniqueBGMPlayCount;                               		// 0x1E00 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FOrbitingSocketInfo >               OrbitingSocketInfos;                              		// 0x1E04 (0x000C) [0x0000000000000000]              
	TArray< struct FAttachableSocketInfo >             AttachableSocketInfos;                            		// 0x1E10 (0x000C) [0x0000000000000000]              
	TArray< struct FDelayMoveSocketInfo >              DelayMoveSocketInfos;                             		// 0x1E1C (0x000C) [0x0000000000000000]              
	float                                              CircularMovCurrentTime;                           		// 0x1E28 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CircularMovEndTime;                               		// 0x1E2C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CircularMovTarget;                                		// 0x1E30 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CircularMovCenter;                                		// 0x1E3C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CircularMovStart;                                 		// 0x1E48 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRawDistributionFloat                       CircularMovDistribution;                          		// 0x1E54 (0x001C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3534 ];

		return pClassPointer;
	};

	bool IsActorPlayingFaceFXAnim ( );
	class UFaceFXAsset* eventGetActorFaceFXAsset ( );
	void OnPlayFaceFXAnim ( class USeqAct_PlayFaceFXAnim* inAction );
	void eventFinishAnimControl ( );
	void eventStartPawnFadeIn ( );
	void eventBeginAnimControl ( TArray< class UAnimSet* > InAnimSets );
	class UAudioComponent* eventGetFaceFXAudioComponent ( );
	void eventStopActorFaceFXAnim ( );
	bool eventIsPlayingFaceFXAnim ( );
	bool eventPlayActorFaceFXAnim ( class UFaceFXAnimSet* AnimSet, struct FString GroupName, struct FString SeqName, int SoundTrackType, unsigned long InStopPrevious );
	struct FVector GetHitPosition ( struct FString StartBone, class AT1CustomPawn* TargetPawn, struct FString TargetBone, float fMoveDist );
	unsigned char eventGetVehicleState ( );
	void eventSetMyVehicle ( class AT1CustomPawn* Vehicle );
	void PostKismet ( );
	bool IsValidDriver ( );
	bool IsRideDriver ( class AT1CustomPawn* Driver );
	bool CanEnterVehicle ( struct FString BoneName );
	bool SetVehicleAni ( struct FString strAnimName, float fAnimSpeed, float fAnimBlendIn, float fAnimBlendOut, unsigned long Loop );
	bool IsVehicleRide ( );
	bool IsReadyVehicleLeave ( );
	bool IsReadyVehicleRide ( );
	bool CanDriving ( struct FString BoneName );
	struct FBox GetBoundBoxForRender ( class AT1CustomPawn* Pawn );
	bool SwapPawnController ( class AT1CustomPawn* FirstPawn, class AT1CustomPawn* SecondPawn );
	bool DetachToVehicle ( );
	bool AttachToVehicle ( struct FString DriveBoneName, struct FString VehicleBoneName, struct FVector Offset );
	bool RideVehicle ( struct FString strAnimName, int iPriority, float fAnimSpeed, float fAnimBlendIn, float fAnimBlendOut, unsigned long bLoop, unsigned long bBlockMove, unsigned long bBlockRotate, unsigned long bNextAnim );
	void ChildParticleRelativePos ( class AEmitter* Particle, float fRelX, float fRelY, float fRelZ, int BoneUseType, struct FName BoneName );
	void ChildParticleDetach ( class AEmitter* Particle );
	void ChildParticleAttach ( class AEmitter* Particle, float fRelX, float fRelY, float fRelZ, int BoneUseType, struct FName BoneName );
	void MakeFootPrint ( class UPhysicalMaterial* PhysMaterial, int iFootPrintInfoId, struct FVector FootLocation, struct FRotator FootRotation );
	void UpdateWaterPrint ( class UPhysicalMaterial* PhysMaterial );
	void UpdateFootPrint ( class UPhysicalMaterial* PhysMaterial );
	void ChangeAnimSpeed ( int iMeshIndex, float fCustomAnimSpeed, float fPlayTime );
	void LogForMoveAnimName ( );
	void SetFadingAlpha ( int iMeshIndex, float fAlpha );
	void SetFadingState ( int iMeshIndex, int iType );
	void UpdateResetPhysicsBones ( );
	void SetResetPhysicsBoneFlag ( int Flag, int iMaxResetBonesCount );
	void SetOutLineBloomInfo ( int iMeshIndex, unsigned long bOutLineBloom, int Red, int Green, int Blue, int Alpha, int iAlphaAnimType, int iMinAlpha, int iMaxAlpha, float fAlphaAnimTime, float fScale, float fMinScale, float fMaxScale );
	void UpdatePolyHeight ( float fDeltaTime );
	void SetVehicleAnimName ( struct FString strIdle, int iSetType );
	void SetMoveAnimRate ( float fRate );
	void SetWalkRunCheckSpeed ( float fWalkSpeed, float fRunSpeed );
	void SetHighJumpAnimName ( struct FString strJumpStart, struct FString strJumpIng, struct FString strJumpEnd, struct FString strJumpCancel );
	void SetLongJumpAnimName ( struct FString strJumpStart, struct FString strJumpIng, struct FString strJumpEnd, struct FString strJumpCancel );
	bool GetChangeMoveAnimNamesFlag ( int iUpper );
	void SetChangeMoveAnimNamesFlag ( int iUpper, unsigned long bFlag );
	void SetInterpolAnimName ( struct FString strJToI, struct FString strJToMFront, struct FString strJToMRight, struct FString strJToMLeft, struct FString strJToMBack, struct FString strMToJFront, struct FString strMToJRight, struct FString strMToJLeft, struct FString strMtoI, struct FString strLtoR, struct FString strRtoL, int iSetType );
	void SetCustomAnimName ( int iUpper, struct FString strCustom );
	void SetIdleAnimName ( struct FString strIdle, int iSetType );
	void SetJumpAnimName ( struct FString strFront, struct FString strRight, struct FString strLeft, int iSetType );
	void SetRunAnimName ( struct FString strFront, struct FString strRight, struct FString strLeft, struct FString strBack, struct FString strRightBack, struct FString strLeftBack, int iSetType );
	void SetWalkAnimName ( struct FString strFront, struct FString strRight, struct FString strLeft, struct FString strBack, struct FString strRightBack, struct FString strLeftBack, int iSetType );
	void ApplyMeshCustomizeInfo ( int iMeshIndex );
	bool IsUseCustomizeDefaultType ( int Type );
	void SetCustomizeDefaultType ( int Type, unsigned long bUse );
	void PlayParticleMaterials ( );
	void GetHitParticleMaterial ( unsigned char InWeaponSize, TArray< class UParticleSystem* >* InParticleMaterialArray );
	void PlayPhysTempParticle ( struct FString BoneName, struct FVector ReleativeLoc );
	unsigned char GetPawnStepType ( );
	void UpdateSoundInfo ( );
	void SetPawnSoundInfo ( struct FSoundNotiType SoundInfo );
	void SetCalcFootLocation ( unsigned long bFlag );
	int GetMaxSlotNum ( );
	void PlayAnimSeq ( int iMeshIndex, unsigned long bLoop );
	void StopAnimSeq ( int iMeshIndex );
	void SetAnim ( int iMeshIndex, struct FName Seq, unsigned long bInitialTime, float InitialTime );
	bool IsAnim ( int iMeshIndex, struct FName Seq );
	void SetWrinkle ( int iMeshIndex, float fFadeIn, float fExpTime, float fFadeOut, float fWeightX, float fWeightY, float fWeightZ, float fWeightW );
	void ApplyAttachMatColorWeight ( int iMeshIndex );
	void SetAttachAnim ( int iMeshIndex, struct FString Seq, float fFadeIn, float fExpTime, float fFadeOut, int bForce );
	void SetExpression ( int iMeshIndex, int iExpression, float fFadeIn, float fExpTime, float fFadeOut, int bForce );
	void SetPhysicsWeight ( int iMeshIndex, float fPhysicsWeight );
	void AddPhysicsForce ( struct FVector vecPowerDir, float fForce );
	void PlayPhysicNoise ( int iMeshIndex, struct FVector NoiseDir, float NoiseScale, float NoisePlayTime, float NoiseDuration, float NoiseDurationScale, int NoiseSpace );
	void SetMatVectorParameterValue ( int iMeshIndex, struct FString ValueName, struct FVector vecValue );
	void SetMatScalarParameterValue ( int iMeshIndex, struct FString ValueName, float fValue );
	void UpdateFacial ( float fDeltaTime );
	void Update ( float fViewDistance, float fDeltaTime );
	void PlayAnim ( int iMeshIndex );
	void StopAnim ( int iMeshIndex );
	void EndAnim ( int iMeshIndex );
	void BeginAnim ( int iMeshIndex );
	void SetMeshDenpendencyParticle ( int iMeshIndex, unsigned long bSet );
	void SetVisible ( int iMeshIndex, int iVisible );
	class AT1Pawn* CopyMesh ( int iSrcMeshIndex, int iDestMeshIndex, class AT1CustomPawn* ParentP, class AT1CustomPawn* ChildP );
	void EndPhysics ( int iMeshIndex );
	void BeginPhysics ( int iMeshIndex );
	void ClearDashingSpecialEffect ( );
	void ClearMeshInfo ( int iMeshIndex );
	void Clear ( );
	void SetMeshPhysicsAsset ( int iMeshIndex, class UPhysicsAsset* MeshPhysics );
	void SetMeshAnimTree ( int iMeshIndex, class UAnimTree* MeshAnimTree );
	void SetMeshAnimset ( int iMeshIndex, class UAnimSet* MeshAnimSet );
	void MeshCompBeginDeferredReattach ( int iMeshIndex );
	void SetMaterialVectorParameterValue ( int iMeshIndex, struct FString ParamName, struct FLinearColor InColor, struct FName MaterialName );
	void SetMaterialTextureParameterValue ( int iMeshIndex, struct FString ParamName, class UTexture* InTexture, struct FName MaterialName );
	void SetMaterialScalarParameterValue ( int iMeshIndex, struct FString ParamName, float fValue, struct FName MaterialName );
	bool IsGuildPropDiry ( );
	void SetGuildCustomizeMesh ( int GuildItemType, unsigned long bFlag );
	void UpdateGuildCustomize ( );
	void SetMeshMaterialColor ( int iMeshIndex, struct FName MaterialName, struct FString ParamName, struct FLinearColor changeColor );
	class UMaterialInstanceConstant* GetMeshMaterialInstanceConstant ( int iMeshIndex, struct FName MaterialName );
	void SetMeshMaterial ( int iMeshIndex, class UMaterialInstanceConstant* Material );
	void SetMesh ( int iMeshIndex, class USkeletalMeshComponent* InMesh );
	class USkeletalMeshComponent* GetMesh ( int iMeshIndex );
	void SetFullPhysics ( int iMeshIndex, struct FString BoneName, int iNum, int iFixed );
	void SetMeshInfo ( int iMeshIndex, struct FString SkeletalMesh, struct FString AnimSet, struct FString PhysicsAsset, struct FString AnimTree, int iParentIndex, int iParentBoneIndex, int iPosOnly, int iCheckSameMesh, unsigned long bUsingDependencyRope, struct FString SubAnimTree, float InScale );
	void MoveMeshSocket ( int iMeshIndex, int iBoneIndex );
	void MoveMeshSlot ( int iSrcMeshIndex, int iDestMeshIndex, int iDestBoneIndex );
	void ReleaseLink ( int iParentMeshIndex, int iChildMeshIndex );
	void SetLink ( int iParentMeshIndex, int iParentBoneIndex, int iChildMeshIndex, int PosOnly );
	void SetAutoPhyiscs ( unsigned long AutoPhysics );
	void SwitchPhysicsAssetPair ( );
	void EnableGroundParticle ( float InGroundParticleDuration, float InRandomFactor, struct FName InFollowBoneName, float InVerticalOffset, float InRate );
};

//UClass* AT1CustomPawn::pClassPointer = NULL;

// Class T1Game.T1Pawn
// 0x00F4 (0x1F64 - 0x1E70)
class AT1Pawn : public AT1CustomPawn
{
public:
	float                                              AccumTime;                                        		// 0x1E70 (0x0004) [0x0000000000000000]              
	float                                              JumpTime;                                         		// 0x1E74 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x1E78 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bKeepWalking : 1;                               		// 0x1E7C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateFlag : 1;                                  		// 0x1E7C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNoComponentTIck : 1;                             		// 0x1E7C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBeforeIgnoreMoveState : 1;                       		// 0x1E7C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bSetBeforeIgnoreMoveState : 1;                    		// 0x1E7C (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bRtoLEventEnable : 1;                             		// 0x1E7C (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bLtoREventEnable : 1;                             		// 0x1E7C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bLastRuleMoveState : 1;                           		// 0x1E7C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bForceFalling : 1;                                		// 0x1E7C (0x0004) [0x0000000000003000] [0x00000100] ( CPF_Native | CPF_Transient )
	unsigned long                                      bCheckValidIdlePos : 1;                           		// 0x1E7C (0x0004) [0x0000000000003000] [0x00000200] ( CPF_Native | CPF_Transient )
	unsigned long                                      bGroundRoller : 1;                                		// 0x1E7C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      RuleMove : 1;                                     		// 0x1E7C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      blockMove : 1;                                    		// 0x1E7C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bIsCameraFadeInState : 1;                         		// 0x1E7C (0x0004) [0x0000000000002000] [0x00002000] ( CPF_Transient )
	unsigned long                                      bSilhouetteMode : 1;                              		// 0x1E7C (0x0004) [0x0000000000002000] [0x00004000] ( CPF_Transient )
	unsigned long                                      bBlinkOn : 1;                                     		// 0x1E7C (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bDead : 1;                                        		// 0x1E7C (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	unsigned char                                      PrevAnimType;                                     		// 0x1E80 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurMoveType;                                      		// 0x1E81 (0x0001) [0x0000000000000000]              
	int                                                NormalAttackCount;                                		// 0x1E84 (0x0004) [0x0000000000000000]              
	float                                              fGravityZ;                                        		// 0x1E88 (0x0004) [0x0000000000000000]              
	float                                              OriginalGroundSpeed;                              		// 0x1E8C (0x0004) [0x0000000000000000]              
	float                                              fCamTargetHeightFar;                              		// 0x1E90 (0x0004) [0x0000000000000000]              
	float                                              fCamTargetHeightFarEx;                            		// 0x1E94 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fCamTargetHeightMiddle;                           		// 0x1E98 (0x0004) [0x0000000000000000]              
	float                                              fCamTargetHeightNear;                             		// 0x1E9C (0x0004) [0x0000000000000000]              
	float                                              fCamTargetLRControlValue;                         		// 0x1EA0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fGlideCamHeightScale;                             		// 0x1EA4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fSwimCamHeightScale;                              		// 0x1EA8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Jin_M_CamTargetHeightFar;                         		// 0x1EAC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Jin_M_CamTargetHeightNear;                        		// 0x1EB0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Jin_F_CamTargetHeightFar;                         		// 0x1EB4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Jin_F_CamTargetHeightNear;                        		// 0x1EB8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Gon_M_CamTargetHeightFar;                         		// 0x1EBC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Gon_M_CamTargetHeightNear;                        		// 0x1EC0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Gon_F_CamTargetHeightFar;                         		// 0x1EC4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Gon_F_CamTargetHeightNear;                        		// 0x1EC8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Kun_CamTargetHeightFar;                           		// 0x1ECC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Kun_CamTargetHeightNear;                          		// 0x1ED0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Lyn_M_CamTargetHeightFar;                         		// 0x1ED4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Lyn_M_CamTargetHeightNear;                        		// 0x1ED8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Lyn_F_CamTargetHeightFar;                         		// 0x1EDC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Lyn_F_CamTargetHeightNear;                        		// 0x1EE0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UAnimNodeByMoveState*                        UpperAnimTreeNode;                                		// 0x1EE4 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UAnimNodeByMoveState*                        LowerAnimTreeNode;                                		// 0x1EE8 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                MoveForwardByInputValueFlag;                      		// 0x1EEC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              UpperIdleWaitTime;                                		// 0x1EF0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LowerIdleWaitTime;                                		// 0x1EF4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                RtoLEventOnCount;                                 		// 0x1EF8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FLastNonRuleMoveEntry >             LastNonRuleMoveDataList;                          		// 0x1EFC (0x000C) [0x0000000000000000]              
	float                                              fCurrentForceFallTime;                            		// 0x1F08 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                PrePhysic;                                        		// 0x1F0C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              GroundRollTime;                                   		// 0x1F10 (0x0004) [0x0000000000000000]              
	float                                              GroundRollSpeed;                                  		// 0x1F14 (0x0004) [0x0000000000000000]              
	struct FVector                                     GroundRollDir;                                    		// 0x1F18 (0x000C) [0x0000000000000000]              
	TArray< struct FT1PawnMove >                       moveList;                                         		// 0x1F24 (0x000C) [0x0000000000000000]              
	float                                              BackUpVelocityZ;                                  		// 0x1F30 (0x0004) [0x0000000000000000]              
	float                                              JumpDuration;                                     		// 0x1F34 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              JumpStartZ;                                       		// 0x1F38 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                GhostModeType;                                    		// 0x1F3C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CameraFadeTime;                                   		// 0x1F40 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CameraFadeCurrentTime;                            		// 0x1F44 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CameraFadeAlphaFrom;                              		// 0x1F48 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CameraFadeAlphaTo;                                		// 0x1F4C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CameraFadeAlphaCurrent;                           		// 0x1F50 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentBlinkTime;                                 		// 0x1F54 (0x0004) [0x0000000000000000]              
	float                                              BlinkSpeed;                                       		// 0x1F58 (0x0004) [0x0000000000000000]              
	float                                              BlinkDuration;                                    		// 0x1F5C (0x0004) [0x0000000000000000]              
	float                                              DelayedBlinkTime;                                 		// 0x1F60 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3536 ];

		return pClassPointer;
	};

	void eventSetAnimPosition ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping );
	void eventDestroyed ( );
	void PostBeginPlay ( );
	void eventDoJumpCommand ( );
	void ResetToDefaults ( );
	void GetLastNonRuleMoveLocationAndRotation ( struct FVector* LNRM_Location, struct FRotator* LNRM_Rotation );
	void UpdateLastNonRuleMoveLocationAndRotation ( );
	bool IsWallJumpOtherPlayer ( );
	bool IsWallRunOtherPlayer ( );
	void MakeVelocityMoveToAction ( );
	void MakeVelocityRuleMove ( );
	void MakeVelocity ( );
	void MakeVelocity2D ( );
	void MakeVelocityZero ( );
	void ClearSummonedRunMove ( );
	void StopSummoned ( );
	void SetSummonedForceMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, int ZoneID, int evtObjId, float fRunSpeed );
	void SetSummonedNextMove ( );
	bool SetSummonedMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration, int ZoneID, int evtObjId, float fRunSpeed );
	bool SetSummonedMoveLegacy ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration, int ZoneID, int evtObjId, float fRunSpeed );
	bool ObjResetMoveDestInfo ( );
	void SetObjNextMove ( float PassedTime );
	void SetObjSyncYaw ( int nYaw, unsigned long bResetPhysics );
	void SetObjMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration, int ZoneID, int evtObjId, float fMoveAnimRate, int ObjType );
	void RemovePlayerMoveList ( );
	void PlayerMoveCancel ( );
	void PlayerStop ( );
	bool SetPlayerMoveToAction ( float DestX, float DestY, float DestZ, float fRadius );
	bool SetPlayerMouseMove ( float DestX, float DestY, float DestZ );
	void SetPlayerRuleMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration );
	float GetGravityZ ( );
	bool IsTickSkippable ( );
	bool IsPlayer ( );
	void NotifyJumpAction ( );
	void MoveTo ( struct FVector Loc, struct FRotator rotate );
	void SetAnimPos ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping );
	bool GetMoveForwardByInputValueFlag ( );
	void SetMoveForwardByInputValueFlag ( int bFlag );
	void MoveForwardByInputValue ( );
	void SetBlockZoomFlag ( unsigned long bBlock );
	void SetIgnoreRotateInput ( unsigned long bIgnore );
	void SetIgnoreMoveInput ( );
	bool IsDead ( );
	void SetDeadFlag ( unsigned long bDeadFlag );
	void InterruptKeepWalking ( );
	void ToggleKeepWalking ( );
	bool CanRotate ( );
	void SetBlockMove ( unsigned long bNewBlockMove );
	void SetRuleMove ( unsigned long bNewRuleMove );
	bool IsMouseMove ( );
	bool IsRuleMove ( );
};

//UClass* AT1Pawn::pClassPointer = NULL;

// Class T1Game.T1CamMod_ScreenMove
// 0x000C (0x0050 - 0x0044)
class UT1CamMod_ScreenMove : public UCameraModifier
{
public:
	TArray< struct FScreenMoveStruct >                 Moves;                                            		// 0x0044 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3538 ];

		return pClassPointer;
	};

	void eventModifyCameraEditor ( float DeltaTime, struct FTPOV* OutPOV );
	bool ModifyCamera ( class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV );
	void UpdateScreenMove ( float DeltaTime, struct FScreenMoveStruct* Move, struct FTPOV* OutPOV );
	void eventStartNewMoveEditor ( float Duration, float Pct, struct FRawDistributionVector* newRotAdjust, struct FRawDistributionVector* newLocAdjust, struct FRawDistributionFloat* newFovAdjust );
	void StartNewMove ( float Duration, float Pct, struct FRawDistributionVector newRotAdjust, struct FRawDistributionVector newLocAdjust, struct FRawDistributionFloat newFovAdjust );
};

//UClass* UT1CamMod_ScreenMove::pClassPointer = NULL;

// Class T1Game.T1CamMod_ScreenShake
// 0x000C (0x0050 - 0x0044)
class UT1CamMod_ScreenShake : public UCameraModifier
{
public:
	TArray< struct FScreenShakeStruct >                Shakes;                                           		// 0x0044 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3540 ];

		return pClassPointer;
	};

	void eventModifyCameraEditor ( float DeltaTime, struct FTPOV* OutPOV );
	bool ModifyCamera ( class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV );
	void UpdateScreenShake ( float DeltaTime, struct FScreenShakeStruct* Shake, struct FTPOV* OutPOV );
	void DumpShakeInfo ( struct FScreenShakeStruct Shake );
	void eventStartNewShakeEditor ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom );
	void StartNewShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom );
	struct FScreenShakeStruct ComposeNewShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom );
	float InitializeOffset ( unsigned char Param );
	struct FScreenShakeStruct InitializeShake ( struct FScreenShakeStruct NewShake );
	void AddScreenShake ( struct FScreenShakeStruct NewShake );
};

//UClass* UT1CamMod_ScreenShake::pClassPointer = NULL;

// Class T1Game.T1PlayerCamera
// 0x2223 (0x2734 - 0x0511)
class AT1PlayerCamera : public AAnimatedCamera
{
public:
	float                                              fShoulderPosX;                                    		// 0x0514 (0x0004) [0x0000000000000000]              
	float                                              fShoulderPosY;                                    		// 0x0518 (0x0004) [0x0000000000000000]              
	float                                              fShoulderFreeCamDistance;                         		// 0x051C (0x0004) [0x0000000000000000]              
	struct FVector                                     DefaultLocation;                                  		// 0x0520 (0x000C) [0x0000000000000000]              
	struct FRotator                                    DefaultRotation;                                  		// 0x052C (0x000C) [0x0000000000000000]              
	float                                              CamDistBoundNearLimit;                            		// 0x0538 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CamDistBoundFarLimit;                             		// 0x053C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CamDistBoundHeightTransition_FarToMiddle;         		// 0x0540 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CamDistBoundHeightTransition_MiddleToNear;        		// 0x0544 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CamDistBoundTransparency;                         		// 0x0548 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CamDistForLRBackCameraMode;                       		// 0x054C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FovAtDistZero;                                    		// 0x0550 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FovAtDistBoundFarLimit;                           		// 0x0554 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CamTargetHeightModulteFactor;                     		// 0x0558 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PreCamTargetHeight;                               		// 0x055C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PawnHeightFarAdjustValue;                         		// 0x0560 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PawnHeightFarAdjustMax;                           		// 0x0564 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PawnHeightFarAdjustMin;                           		// 0x0568 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLockCamera : 1;                                  		// 0x056C (0x0004) [0x0000000000001000] [0x00000001] ( CPF_Native )
	unsigned long                                      fSetBeforeDstTargetZ : 1;                         		// 0x056C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bBackupOrigCameraInterpolMode : 1;                		// 0x056C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIgnoreCameraCollision : 1;                       		// 0x056C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bEnableCameraCollision : 1;                       		// 0x056C (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bInterpTargetHeightSwitch : 1;                    		// 0x056C (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bInterpTargetHeight : 1;                          		// 0x056C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bInterpRuleMoveHeight : 1;                        		// 0x056C (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      ManualStatus_bIsManualMode : 1;                   		// 0x056C (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      ManualStatus_bLeaveSmooth : 1;                    		// 0x056C (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bEnableTransparentization : 1;                    		// 0x056C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bSavedStateExist : 1;                             		// 0x056C (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      bCameraAutoBlendOff : 1;                          		// 0x056C (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	struct FVector                                     LockLocation;                                     		// 0x0570 (0x000C) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     LockViewDir;                                      		// 0x057C (0x000C) [0x0000000000001000]              ( CPF_Native )
	float                                              LockViewDist;                                     		// 0x0588 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     LockTargetLocation;                               		// 0x058C (0x000C) [0x0000000000001000]              ( CPF_Native )
	int                                                LockIsLocalSpace;                                 		// 0x0598 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     LockLocalSpaceRot;                                		// 0x059C (0x000C) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     OldLocation[ 0x12C ];                             		// 0x05A8 (0x0E10) [0x0000000000000000]              
	struct FRotator                                    OldRotation[ 0x12C ];                             		// 0x13B8 (0x0E10) [0x0000000000000000]              
	float                                              OldDeltaTime[ 0x12C ];                            		// 0x21C8 (0x04B0) [0x0000000000000000]              
	int                                                iCurrentIndex;                                    		// 0x2678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iMaxIndex;                                        		// 0x267C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iOldArrMaxIndex;                                  		// 0x2680 (0x0004) [0x0000000000000000]              
	float                                              fBeforeDstTargetZ;                                		// 0x2684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CameraMode;                                       		// 0x2688 (0x0001) [0x0000000000000000]              
	unsigned char                                      CameraInterpolMode;                               		// 0x2689 (0x0001) [0x0000000000000000]              
	unsigned char                                      BackupOrigCameraInterpolMode;                     		// 0x268A (0x0001) [0x0000000000000000]              
	unsigned char                                      ManualStatus_UsingScene;                          		// 0x268B (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ManualStatus_InputTreat;                          		// 0x268C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                CameraInterpol;                                   		// 0x2690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentCameraInterpolTime;                        		// 0x2694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPlayInterpolFadeInTime;                          		// 0x2698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPlayInterpolFadeOutTime;                         		// 0x269C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPlayInterpolPlayTime;                            		// 0x26A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iPlayCameraInterpol;                              		// 0x26A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vBeforeDstTargetLoc;                              		// 0x26A8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              fInterpTargetTime;                                		// 0x26B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fInterpRuleStart;                                 		// 0x26B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fInterpRuleDest;                                  		// 0x26BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fInterpRuleDeltaTime;                             		// 0x26C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ManualStatus_InitionLocation;                     		// 0x26C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ManualStatus_InitionTarget;                       		// 0x26D0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ManualStatus_LastLocation;                        		// 0x26DC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ManualStatus_LastTarget;                          		// 0x26E8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              ManualStatus_LeaveDurationTime;                   		// 0x26F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ManualStatus_LeaveCurrentTime;                    		// 0x26F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPointer >                          ManualStatus_ShowStageList;                       		// 0x26FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ManualStatus_PawnName;                            		// 0x2708 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FCameraLensEffectEntry >            CameraLensEffects;                                		// 0x2710 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UT1CamMod_ScreenShake*                       T1CamMod_ScreenShake;                             		// 0x271C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UT1CamMod_ScreenMove*                        T1CamMod_ScreenMove;                              		// 0x2720 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPlayerCameraAnimInstance*                   PlayerCameraAnimInstance;                         		// 0x2724 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fSavedDist;                                       		// 0x2728 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iSavedPitch;                                      		// 0x272C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iSavedDirection;                                  		// 0x2730 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3542 ];

		return pClassPointer;
	};

	void eventStartCameraMove ( float Duration, float Pct, struct FRawDistributionVector* newRotAdjust, struct FRawDistributionVector* newLocAdjust, struct FRawDistributionFloat* newFovAdjust );
	void eventStartCameraShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom );
	float InterPolateYaw ( float Src, float Dst, float DeltaTime, float fInterpSpeed );
	float YawToRange ( float Yaw );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	void InitializeFor ( class APlayerController* PC );
	void PostBeginPlay ( );
	void PlayCameraInterpolTime ( unsigned char InInterpolMode, float fFadeInTime, float fPlayTime, float fFadeOutTime );
	void SetT1MovieCameraMode ( int InCameraMode, int InInterpolMode );
	class AActor* T1Trace ( struct FVector TraceEnd, struct FVector TraceStart, struct FVector Extent, struct FVector* HitLocation, struct FVector* HitNormal );
	bool IsLocked ( );
	void Unlock ( );
	void Lock ( struct FVector vecLockLocation, struct FVector vecLockViewDir, float fViewDist, int IsLocalSpace, struct FVector vecLocalSpaceRot, struct FVector vecLockTargetLoc );
	bool IsCameraAutoBlend ( );
	void SetCameraAutoBlendFlag ( unsigned long bFlag );
	void SetFovAtMax ( float FOV );
	void SetFovAtZero ( float FOV );
	void SetCamMaxDist ( float fDist );
	void SetCamNearDist ( float fDist );
	void SetCamMinDist ( float fDist );
	void SetCamHeightTransDist ( float fDist );
};

//UClass* AT1PlayerCamera::pClassPointer = NULL;

// Class T1Game.T1ConsoleCmd
// 0x0000 (0x003C - 0x003C)
class UT1ConsoleCmd : public UCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3544 ];

		return pClassPointer;
	};

	void NormalCam ( );
	void FreeCam ( );
};

//UClass* UT1ConsoleCmd::pClassPointer = NULL;

// Class T1Game.T1AnimNodeAimOffset
// 0x0024 (0x0134 - 0x0110)
class UT1AnimNodeAimOffset : public UAnimNodeAimOffset
{
public:
	struct FVector2D                                   LastAim;                                          		// 0x0110 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              BackLimitDotValue;                                		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrontLimitDotValue;                               		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFaceAim : 1;                                     		// 0x0120 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseOnlyActorTarget : 1;                          		// 0x0120 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FName                                       ControlBaseBoneName;                              		// 0x0124 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              AimDistance;                                      		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AimApplySpeed;                                    		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3546 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeAimOffset::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendByAirDash
// 0x0000 (0x00E4 - 0x00E4)
class UT1AnimNodeBlendByAirDash : public UAnimNodeBlendList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3548 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendByAirDash::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendByEnvObjState
// 0x0000 (0x00E4 - 0x00E4)
class UT1AnimNodeBlendByEnvObjState : public UAnimNodeBlendList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3550 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendByEnvObjState::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendByFalling
// 0x0008 (0x00EC - 0x00E4)
class UT1AnimNodeBlendByFalling : public UAnimNodeBlendList
{
public:
	unsigned long                                      bDownAnimPlaying : 1;                             		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DownAnimTime;                                     		// 0x00E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3552 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendByFalling::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendByGatherObjState
// 0x0000 (0x00E4 - 0x00E4)
class UT1AnimNodeBlendByGatherObjState : public UAnimNodeBlendList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3554 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendByGatherObjState::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendByPhysics
// 0x0030 (0x0114 - 0x00E4)
class UT1AnimNodeBlendByPhysics : public UAnimNodeBlendList
{
public:
	int                                                PhysicsMap[ 0xC ];                                		// 0x00E4 (0x0030) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3556 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendByPhysics::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendBySpeed
// 0x0000 (0x0108 - 0x0108)
class UT1AnimNodeBlendBySpeed : public UAnimNodeBlendBySpeed
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3558 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendBySpeed::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendByState
// 0x000C (0x00F0 - 0x00E4)
class UT1AnimNodeBlendByState : public UAnimNodeBlendList
{
public:
	TArray< struct FString >                           IdleName;                                         		// 0x00E4 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3560 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendByState::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendByWalkMode
// 0x0000 (0x00E4 - 0x00E4)
class UT1AnimNodeBlendByWalkMode : public UAnimNodeBlendList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3562 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeBlendByWalkMode::pClassPointer = NULL;

// Class T1Game.T1AnimNodeBlendPerBone
// 0x0004 (0x0104 - 0x0100)
class UT1AnimNodeBlendPerBone : public UAnimNodeBlendPerBone
{
public:
	unsigned long                                      bFullAnimation : 1;                               		// 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3564 ];

		return pClassPointer;
	};

	void SetFullAnimation ( unsigned long a_bFull );
	struct FName GetCurAnimName ( );
	bool IsAction ( );
	void Action ( struct FName ActionName );
};

//UClass* UT1AnimNodeBlendPerBone::pClassPointer = NULL;

// Class T1Game.T1AnimNodeByDirection
// 0x0010 (0x0128 - 0x0118)
class UT1AnimNodeByDirection : public UAnimNodeSequenceBlendBase
{
public:
	float                                              DirAngle;                                         		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              BlendSpeed;                                       		// 0x011C (0x0004) [0x0000000000000000]              
	int                                                BlendYaw;                                         		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      IsUpper : 1;                                      		// 0x0124 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsRun : 1;                                        		// 0x0124 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3566 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeByDirection::pClassPointer = NULL;

// Class T1Game.T1AnimNodeByState
// 0x0070 (0x017C - 0x010C)
class UT1AnimNodeByState : public UAnimNodeSequence
{
public:
	struct FString                                     IdleSit;                                          		// 0x010C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleDead;                                         		// 0x0118 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleMounter;                                      		// 0x0124 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleMountee;                                      		// 0x0130 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleSwordSpirit;                                  		// 0x013C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleBladeMaster;                                  		// 0x0148 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleBighit;                                       		// 0x0154 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleNpcBasic;                                     		// 0x0160 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IdleStun;                                         		// 0x016C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTimeToGo;                                    		// 0x0178 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3568 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeByState::pClassPointer = NULL;

// Class T1Game.T1AnimNodePlayCustomAnim
// 0x0034 (0x010C - 0x00D8)
class UT1AnimNodePlayCustomAnim : public UAnimNodeBlend
{
public:
	unsigned long                                      bIsPlayingCustomAnim : 1;                         		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNextAnim : 1;                                    		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNextAnimLooping : 1;                             		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNextAnimOverride : 1;                            		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bNextDuration : 1;                                		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPauseLastFrame : 1;                              		// 0x00D8 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	float                                              CustomPendingBlendOutTime;                        		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              CustomMovingBlendTime;                            		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              CustomMovingBlendFadeTime;                        		// 0x00E4 (0x0004) [0x0000000000000000]              
	struct FName                                       strNextAnim;                                      		// 0x00E8 (0x0008) [0x0000000000000000]              
	float                                              NextAnimRate;                                     		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              NextAnimBlendInTime;                              		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              NextAnimBlendOutTime;                             		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              NextAnimMovingBlendTime;                          		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              NextAnimMovingBlendFade;                          		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              NextStartTime;                                    		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              NextEndTime;                                      		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3570 ];

		return pClassPointer;
	};

	void SetRootBoneAxisOption ( unsigned char AxisX, unsigned char AxisY, unsigned char AxisZ );
	class UAnimNodeSequence* GetCustomAnimNodeSeq ( );
	void SetActorAnimEndNotification ( unsigned long bNewStatus );
	void SetCustomAnim ( struct FName AnimName );
	bool IsPauseLastFrame ( );
	void UnPauseLastFrame ( );
	void PauseLastFrame ( );
	void StopCustomAnim ( float BlendOutTime );
	void PlayCustomAnimByDuration ( struct FName AnimName, float Duration, float BlendInTime, float BlendOutTime, float MovingBlendTime, unsigned long bLooping, unsigned long bOverride, float StartTime, float EndTime, float MovingBlendFadeTime );
	float PlayCustomAnim ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, float MovingBlendTime, unsigned long bLooping, unsigned long bOverride, float StartTime, float EndTime, float MovingBlendFadeTime );
	void PlayCustomNextAnim ( struct FName _AnimName, float _Rate, float _BlendInTime, float _BlendOutTime, float _MovingBlendTime, unsigned long _bLooping, unsigned long _bOverride, float StartTime, float EndTime, unsigned long _bDuration, float _MovingBlendFadeTime );
};

//UClass* UT1AnimNodePlayCustomAnim::pClassPointer = NULL;

// Class T1Game.T1AnimNodeSequence
// 0x000C (0x0118 - 0x010C)
class UT1AnimNodeSequence : public UAnimNodeSequence
{
public:
	unsigned long                                      bDelay : 1;                                       		// 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fDelayTime;                                       		// 0x0110 (0x0004) [0x0000000000000000]              
	float                                              fPreviousTime;                                    		// 0x0114 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3572 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNodeSequence::pClassPointer = NULL;

// Class T1Game.T1AnimNotify_ChangeAttachSlot
// 0x0002 (0x0042 - 0x0040)
class UT1AnimNotify_ChangeAttachSlot : public UAnimNotify
{
public:
	unsigned char                                      SrcSlot;                                          		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DestBone;                                         		// 0x0041 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3574 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNotify_ChangeAttachSlot::pClassPointer = NULL;

// Class T1Game.T1AnimNotify_ViewShake
// 0x004D (0x008D - 0x0040)
class UT1AnimNotify_ViewShake : public UAnimNotify
{
public:
	float                                              ShakeRadius;                                      		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocAmplitude;                                     		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVAmplitude;                                     		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVFrequency;                                     		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseBoneLocation : 1;                             		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0084 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ShakeEffectiveness;                               		// 0x008C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3576 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNotify_ViewShake::pClassPointer = NULL;

// Class T1Game.T1SkelControlArmWeaponPlacement
// 0x0020 (0x00E4 - 0x00C4)
class UT1SkelControlArmWeaponPlacement : public USkelControlLimb
{
public:
	struct FDouble                                     ActivatedTime;                                    		// 0x00C4 (0x0008) [0x0000000000000000]              
	unsigned char                                      AttachedMeshIndex;                                		// 0x00CC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PlacementBoneName;                                		// 0x00D0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RelativeOffsetBoneName;                           		// 0x00D8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CancelDistance;                                   		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3578 ];

		return pClassPointer;
	};

};

//UClass* UT1SkelControlArmWeaponPlacement::pClassPointer = NULL;

// Class T1Game.T1AnimNotify_Emitter
// 0x0048 (0x0088 - 0x0040)
class UT1AnimNotify_Emitter : public UAnimNotify
{
public:
	struct FName                                       AttachToBone;                                     		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AttachToSoket;                                    		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x0050 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x005C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scale;                                            		// 0x0068 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPosOnly : 1;                                     		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseGeoParticle : 1;                              		// 0x0074 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              Duration;                                         		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             Effect;                                           		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UseGeoParticleSlot;                               		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    ParticleInstance;                                 		// 0x0084 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3580 ];

		return pClassPointer;
	};

};

//UClass* UT1AnimNotify_Emitter::pClassPointer = NULL;

// Class T1Game.T1DropItem
// 0x0024 (0x0234 - 0x0210)
class AT1DropItem : public AActor
{
public:
	unsigned long                                      bIgnoreCollision : 1;                             		// 0x0210 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class USkeletalMeshComponent*                      ItemMeshComponent;                                		// 0x0214 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class USkeletalMesh*                               ItemMesh;                                         		// 0x0218 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    ItemAnimSet;                                      		// 0x021C (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   ItemAnimTree;                                     		// 0x0220 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           ItemNodeSeq;                                      		// 0x0224 (0x0004) [0x0000000000000000]              
	float                                              Speed;                                            		// 0x0228 (0x0004) [0x0000000000000000]              
	float                                              accel;                                            		// 0x022C (0x0004) [0x0000000000000000]              
	struct F_DropItemData                              DropItemData;                                     		// 0x0230 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3582 ];

		return pClassPointer;
	};

	void eventInitialize ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
};

//UClass* AT1DropItem::pClassPointer = NULL;

// Class T1Game.T1FieldItem
// 0x0014 (0x0224 - 0x0210)
class AT1FieldItem : public AActor
{
public:
	class USkeletalMeshComponent*                      SkelMeshComponent;                                		// 0x0210 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class USkeletalMesh*                               SkelMesh;                                         		// 0x0214 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    AnimSet;                                          		// 0x0218 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ObjectID;                                         		// 0x021C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3584 ];

		return pClassPointer;
	};

};

//UClass* AT1FieldItem::pClassPointer = NULL;

// Class T1Game.T1Actor
// 0x0018 (0x0228 - 0x0210)
class AT1Actor : public AActor
{
public:
	int                                                SectorX;                                          		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SectorY;                                          		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SectorZ;                                          		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellX;                                            		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellY;                                            		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellZ;                                            		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3586 ];

		return pClassPointer;
	};

};

//UClass* AT1Actor::pClassPointer = NULL;

// Class T1Game.T1EnvObject
// 0x0C94 (0x0EBC - 0x0228)
class AT1EnvObject : public AT1Actor
{
public:
	struct FEnvPlateInfo                               Plate;                                            		// 0x0228 (0x0074) [0x0000000000002000]              ( CPF_Transient )
	struct FT1EnvVolume                                EnvVolume;                                        		// 0x029C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct Fsqword                                     EnvServerID;                                      		// 0x02AC (0x0008) [0x0000000000000000]              
	unsigned long                                      bT1Env_Renewal1 : 1;                              		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bT1Env_ApplyPlace : 1;                            		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSpawnEnv : 1;                                    		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUseManipulationPoint : 1;                        		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      EnvIsEnable : 1;                                  		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      EnvRollBack : 1;                                  		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIgnoreCollision : 1;                             		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      Hide_Flag : 1;                                    		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      EnableEnvHp : 1;                                  		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      ToolTipOption : 1;                                		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      Hide_Open : 1;                                    		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      Hide_Close : 1;                                   		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      Enable_Solo_Party : 1;                            		// 0x02B4 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      dice_result_broadcast : 1;                        		// 0x02B4 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      save_authorizer : 1;                              		// 0x02B4 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      Cannot_manipulate_combatMode : 1;                 		// 0x02B4 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      Cannot_manipulate_MaxHeart_Count : 1;             		// 0x02B4 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      Hide_On : 1;                                      		// 0x02B4 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      Hide_Off : 1;                                     		// 0x02B4 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      Hide_destroy : 1;                                 		// 0x02B4 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      show_quest_indicator : 1;                         		// 0x02B4 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bIgnorePicking : 1;                               		// 0x02B4 (0x0004) [0x0000000000000001] [0x00200000] ( CPF_Edit )
	unsigned long                                      ReturnObject : 1;                                 		// 0x02B4 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      Transit_reenttance_PcSpawn : 1;                   		// 0x02B4 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bPortalEffectDespawn : 1;                         		// 0x02B4 (0x0004) [0x0000000000003000] [0x01000000] ( CPF_Native | CPF_Transient )
	unsigned long                                      OnOffTransition : 1;                              		// 0x02B4 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      OffOnTransition : 1;                              		// 0x02B4 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      Open_Close_Transition : 1;                        		// 0x02B4 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      Close_Open_Transition : 1;                        		// 0x02B4 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      EnvUnderAttack : 1;                               		// 0x02B4 (0x0004) [0x0000000000003000] [0x20000000] ( CPF_Native | CPF_Transient )
	unsigned long                                      bEnvForceUpdateComponent : 1;                     		// 0x02B4 (0x0004) [0x0000000000003000] [0x40000000] ( CPF_Native | CPF_Transient )
	unsigned long                                      bEnvForceTick : 1;                                		// 0x02B4 (0x0004) [0x0000000000003000] [0x80000000] ( CPF_Native | CPF_Transient )
	unsigned long                                      NotifyDeleted : 1;                                		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDevModeFlag : 1;                                 		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                T1Env_DataVersion;                                		// 0x02BC (0x0004) [0x0000000000000000]              
	unsigned char                                      InitEnvState;                                     		// 0x02C0 (0x0001) [0x0000000000000000]              
	unsigned char                                      EnvState;                                         		// 0x02C1 (0x0001) [0x0000000000000000]              
	unsigned char                                      EnvClass;                                         		// 0x02C2 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EnvStateActive;                                   		// 0x02C3 (0x0001) [0x0000000000000000]              
	unsigned char                                      EnvObjCategory;                                   		// 0x02C4 (0x0001) [0x0000000000000000]              
	unsigned char                                      Portal_Type;                                      		// 0x02C5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EnvTargetType;                                    		// 0x02C6 (0x0001) [0x0000000000000000]              
	unsigned char                                      ShowCollision_EnvType;                            		// 0x02C7 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PreEnvActive;                                     		// 0x02C8 (0x0001) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                ZoneID;                                           		// 0x02CC (0x0004) [0x0000000000000000]              
	int                                                ContentsGroup;                                    		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SpawnEnvName;                                     		// 0x02D4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pt1Len;                                           		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pt2Len;                                           		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Origin;                                           		// 0x02E8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    AxisRotation;                                     		// 0x02F4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitEnvStateDuration;                             		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              InitEnableDuration;                               		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              ManipulateRadius;                                 		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManipulateDuration;                               		// 0x030C (0x0004) [0x0000000000000000]              
	float                                              ManipulationRadius;                               		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManipulationHeightUpper;                          		// 0x0314 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManipulationHeightLower;                          		// 0x0318 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ManipulationPoint;                                		// 0x031C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                EnvID;                                            		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ZoneIDList;                                       		// 0x032C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0338 (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           AliasList;                                        		// 0x0344 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvName;                                          		// 0x0350 (0x000C) [0x0000000000000000]              
	struct FString                                     T1Description;                                    		// 0x035C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvAIid;                                          		// 0x0368 (0x000C) [0x0000000000000000]              
	struct FString                                     GroupAlias;                                       		// 0x0374 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ManipulateItem;                                   		// 0x0380 (0x000C) [0x0000000000000000]              
	int                                                ManipulateItemCount;                              		// 0x038C (0x0004) [0x0000000000000000]              
	struct FColor                                      EnvRegion_Color;                                  		// 0x0390 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    EnvMeshAnimSet;                                   		// 0x0394 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               EnvSkeletaObject;                                 		// 0x0398 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FT1EnvObjectLooping                         AnimLoopCheck_Enable;                             		// 0x039C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FT1EnvObjectLooping                         AnimLoopCheck_Disible;                            		// 0x03A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      EnvLinkEffect_Additive;                           		// 0x03A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Action_Name;                                      		// 0x03A8 (0x000C) [0x0000000000000000]              
	struct FString                                     Action_Description;                               		// 0x03B4 (0x000C) [0x0000000000000000]              
	float                                              EnvHeight;                                        		// 0x03C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RefFieldDropItem;                                 		// 0x03C4 (0x000C) [0x0000000000000000]              
	struct FString                                     EnvRequiredFieldItem;                             		// 0x03D0 (0x000C) [0x0000000000000000]              
	int                                                EnvHp;                                            		// 0x03DC (0x0004) [0x0000000000000000]              
	struct FString                                     ShowName;                                         		// 0x03E0 (0x000C) [0x0000000000000000]              
	struct FString                                     ChangeStateEnv;                                   		// 0x03EC (0x000C) [0x0000000000000000]              
	struct FString                                     AttackSkill[ 0x4 ];                               		// 0x03F8 (0x0030) [0x0000000000000000]              
	struct FString                                     AttackSkill3[ 0x4 ];                              		// 0x0428 (0x0030) [0x0000000000000000]              
	struct FString                                     Treasure_Reward;                                  		// 0x0458 (0x000C) [0x0000000000000000]              
	struct FString                                     Treasure_Caster_AnimName;                         		// 0x0464 (0x000C) [0x0000000000000000]              
	struct FString                                     Treasure_Env_OpenAnimName;                        		// 0x0470 (0x000C) [0x0000000000000000]              
	struct FString                                     Env_Caster_AnimName2;                             		// 0x047C (0x000C) [0x0000000000000000]              
	struct FString                                     Treasure_Env_Open_SoundName;                      		// 0x0488 (0x000C) [0x0000000000000000]              
	struct FString                                     CasterAttach;                                     		// 0x0494 (0x000C) [0x0000000000000000]              
	int                                                RewardFactionScoreMin;                            		// 0x04A0 (0x0004) [0x0000000000000000]              
	int                                                RewardFactionScoreMax;                            		// 0x04A4 (0x0004) [0x0000000000000000]              
	struct FString                                     Manipulated_effect;                               		// 0x04A8 (0x000C) [0x0000000000000000]              
	struct FString                                     Required_Active_Faction;                          		// 0x04B4 (0x000C) [0x0000000000000000]              
	struct FString                                     On_AnimName;                                      		// 0x04C0 (0x000C) [0x0000000000000000]              
	struct FString                                     OnOffAnimName2;                                   		// 0x04CC (0x000C) [0x0000000000000000]              
	struct FString                                     OffToOnSoundName;                                 		// 0x04D8 (0x000C) [0x0000000000000000]              
	struct FString                                     PushAnimName;                                     		// 0x04E4 (0x000C) [0x0000000000000000]              
	struct FString                                     PushAnimName2;                                    		// 0x04F0 (0x000C) [0x0000000000000000]              
	struct FString                                     PushSoundName;                                    		// 0x04FC (0x000C) [0x0000000000000000]              
	struct FString                                     Open_AnimName;                                    		// 0x0508 (0x000C) [0x0000000000000000]              
	struct FString                                     Door_Env_AnimName2;                               		// 0x0514 (0x000C) [0x0000000000000000]              
	struct FString                                     CloseToOpenSoundName;                             		// 0x0520 (0x000C) [0x0000000000000000]              
	struct FT1EnvStateSequence                         EnableStateSequence;                              		// 0x052C (0x00B4) [0x0000000000000001]              ( CPF_Edit )
	struct FT1EnvStateSequence                         DisableStateSequence;                             		// 0x05E0 (0x00B4) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnableSequenceName;                               		// 0x0694 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DisableSequenceName;                              		// 0x06A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     EnvPoint1;                                        		// 0x06AC (0x000C) [0x0000000000000000]              
	struct FVector                                     EnvPoint2;                                        		// 0x06B8 (0x000C) [0x0000000000000000]              
	struct FVector                                     EnvOrigin;                                        		// 0x06C4 (0x000C) [0x0000000000000000]              
	class UCylinderComponent*                          EnvCylinderComponent;                             		// 0x06D0 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class UT1EnvObjPortalCylinderComponent*            EnvCylinderComponent_Picking;                     		// 0x06D4 (0x0004) [0x0000000000000009]              ( CPF_Edit | CPF_ExportObject )
	class UT1EnvObjCylinderComponent*                  EnvCylinderComponent_Portal;                      		// 0x06D8 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	struct FVector                                     PickingExtent;                                    		// 0x06DC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PickingTranslation;                               		// 0x06E8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StateOpenDescription;                             		// 0x06F4 (0x000C) [0x0000000000000000]              
	struct FString                                     StateCloseDescription;                            		// 0x0700 (0x000C) [0x0000000000000000]              
	struct FString                                     StateOnDescription;                               		// 0x070C (0x000C) [0x0000000000000000]              
	struct FString                                     StateOffDescription;                              		// 0x0718 (0x000C) [0x0000000000000000]              
	float                                              HeightLen;                                        		// 0x0724 (0x0004) [0x0000000000000000]              
	struct FT1ZoneTransit                              ZoneTransit_ZoneInfo;                             		// 0x0728 (0x0030) [0x0000000000000000]              
	struct FT1ZoneTransit_cinematic                    ZoneTransit_Cinematic;                            		// 0x0758 (0x0018) [0x0000000000000000]              
	struct FT1EnvPortalPhase                           ZonePortalPhase[ 0x7 ];                           		// 0x0770 (0x00FC) [0x0000000000000000]              
	struct FString                                     PortalEffectList[ 0x8 ];                          		// 0x086C (0x0060) [0x0000000000000000]              
	class AActor*                                      EnvLinkEffect;                                    		// 0x08CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Transit_Leave_Social;                             		// 0x08D0 (0x000C) [0x0000000000000000]              
	struct FString                                     Transit_Enter_Social;                             		// 0x08DC (0x000C) [0x0000000000000000]              
	int                                                CurEffectLinkIndex;                               		// 0x08E8 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FString                                     RefTableName;                                     		// 0x08EC (0x000C) [0x0000000000000000]              
	struct FString                                     Off_AnimName;                                     		// 0x08F8 (0x000C) [0x0000000000000000]              
	struct FString                                     OnOffAnimName3;                                   		// 0x0904 (0x000C) [0x0000000000000000]              
	struct FString                                     OnToOffSoundName;                                 		// 0x0910 (0x000C) [0x0000000000000000]              
	struct FString                                     Close_AnimName;                                   		// 0x091C (0x000C) [0x0000000000000000]              
	struct FString                                     Door_Env_AnimName3;                               		// 0x0928 (0x000C) [0x0000000000000000]              
	struct FString                                     OpenToCloseSoundName;                             		// 0x0934 (0x000C) [0x0000000000000000]              
	float                                              EnvCurrentHp;                                     		// 0x0940 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                EnvChangedAnimIndex;                              		// 0x0944 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FString                                     EffectRegionList[ 0x4 ];                          		// 0x0948 (0x0030) [0x0000000000000000]              
	float                                              ToggleIntervalTime;                               		// 0x0978 (0x0004) [0x0000000000000000]              
	float                                              Dash_Duration;                                    		// 0x097C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AT1EnvObject*                                Dash_EndActor;                                    		// 0x0980 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Dash_Level;                                       		// 0x0984 (0x0004) [0x0000000000000000]              
	struct FString                                     Dash_Social;                                      		// 0x0988 (0x000C) [0x0000000000000000]              
	struct FVector                                     Dash_OtherPawnEndLoc;                             		// 0x0994 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                DashLeave_Level;                                  		// 0x09A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FT1ZoneTransit_Dash                         DashLeave_Transit;                                		// 0x09A4 (0x0018) [0x0000000000000000]              
	struct FT1ZoneTransitDash_Social                   DashLeave_TransitSocial;                          		// 0x09BC (0x0018) [0x0000000000000000]              
	struct FT1EnvAirDashleavePhase                     DashLeave_Phase_zone[ 0x7 ];                      		// 0x09D4 (0x00FC) [0x0000000000000000]              
	class UStaticMesh*                                 None_CollisionMesh;                               		// 0x0AD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Destroyed_CollisionMesh;                          		// 0x0AD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 On_CollisionMesh;                                 		// 0x0AD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Off_CollisionMesh;                                		// 0x0ADC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Open_CollisionMesh;                               		// 0x0AE0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Close_CollisionMesh;                              		// 0x0AE4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Empty_CollisionMesh;                              		// 0x0AE8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 NoneIdle_CollisionMesh;                           		// 0x0AEC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Step1_CollisionMesh;                              		// 0x0AF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Step2_CollisionMesh;                              		// 0x0AF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Step3_CollisionMesh;                              		// 0x0AF8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Step4_CollisionMesh;                              		// 0x0AFC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Step5_CollisionMesh;                              		// 0x0B00 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Step6_CollisionMesh;                              		// 0x0B04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 Step7_CollisionMesh;                              		// 0x0B08 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FEnvProgressEffect                          StateProgressEffect;                              		// 0x0B0C (0x0084) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                AdditiveProgressEffects;                          		// 0x0B90 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FEnvProgressEffect                          ProgEffect_ContentsGroupA;                        		// 0x0B9C (0x0084) [0x0000000000000001]              ( CPF_Edit )
	struct FEnvProgressEffect                          ProgEffect_ContentsGroupB;                        		// 0x0C20 (0x0084) [0x0000000000000001]              ( CPF_Edit )
	struct FEnvProgressEffectArrIndex                  StateProgEffectIndex_GroupA;                      		// 0x0CA4 (0x0084) [0x0000000000002000]              ( CPF_Transient )
	struct FEnvProgressEffectArrIndex                  StateProgEffectIndex_GroupB;                      		// 0x0D28 (0x0084) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      AdditiveProgEffectIndices;                        		// 0x0DAC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FEnvProgressEffectArrIndex                  StateProgressEffectIndex;                         		// 0x0DB8 (0x0084) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMeshComponent*                      EnvSkeletalMeshComponent;                         		// 0x0E3C (0x0004) [0x0000000000000009]              ( CPF_Edit | CPF_ExportObject )
	class UStaticMeshComponent*                        EnvCollisionMeshComponent;                        		// 0x0E40 (0x0004) [0x0000000000000009]              ( CPF_Edit | CPF_ExportObject )
	class USpriteComponent*                            EnvSpriteComponent;                               		// 0x0E44 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	float                                              VolumeInterval;                                   		// 0x0E48 (0x0004) [0x0000000000000000]              
	class UAnimNodeSeqBlendByEnvState*                 EnvAttackableAnimNodeSeq;                         		// 0x0E4C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UAnimNodeSeqBlendByEnvState*                 EnvNormalAnimNodeSeq;                             		// 0x0E50 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FPointer >                          RegionCellList;                                   		// 0x0E54 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              fCellTop;                                         		// 0x0E60 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              fCellBottom;                                      		// 0x0E64 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FVector                                     RegionEdgePoint[ 0x4 ];                           		// 0x0E68 (0x0030) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UAnimTree*                                   EnvObjAnimTree;                                   		// 0x0E98 (0x0004) [0x0000000000000000]              
	float                                              Fadein_time;                                      		// 0x0E9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Fadeout_time;                                     		// 0x0EA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Fading_State;                                     		// 0x0EA4 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              Fading_CurrentTime;                               		// 0x0EA8 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                AnimNodeCurIndex;                                 		// 0x0EAC (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                PreEnvState;                                      		// 0x0EB0 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UStaticMeshComponent*                        RegionMeshComponent;                              		// 0x0EB4 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class UMaterialInstanceConstant*                   Region_MaterialInst;                              		// 0x0EB8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3588 ];

		return pClassPointer;
	};

	void SetOutlineBloom ( unsigned long bBloomFlag, struct FColor InColor, int InAlpha );
	void SetEnvEnable ( unsigned long bEnable );
};

//UClass* AT1EnvObject::pClassPointer = NULL;

// Class T1Game.T1NpcArea
// 0x010C (0x0334 - 0x0228)
class AT1NpcArea : public AT1Actor
{
public:
	int                                                AreaID;                                           		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneID;                                           		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0230 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      AreaColor;                                        		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AreaOverlap : 1;                                  		// 0x0238 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RespawnAreaFlag : 1;                              		// 0x0238 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableBaseCamp : 1;                              		// 0x0238 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class UStaticMesh*                                 AreaMesh;                                         		// 0x023C (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x0240 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	struct FString                                     Alias;                                            		// 0x0244 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x0250 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AreaGroup;                                        		// 0x025C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AreaScale;                                        		// 0x0268 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    NpcDirectionRotator;                              		// 0x0274 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              AreaRadius;                                       		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PreviewNpcAppearanceAlias;                        		// 0x0284 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class ANpcAppDummyMeshActor*                       PreNpcAppearanceActor;                            		// 0x0290 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ArrowPitch;                                       		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArrowYaw;                                         		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArrowRoll;                                        		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   AreaMaterialInst;                                 		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UArrowComponent*                             NpcDirectionArrow;                                		// 0x02A4 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	int                                                RespawnAreaId;                                    		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     respawnalias;                                     		// 0x02AC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RespawnFacetion[ 0x4 ];                           		// 0x02B8 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	int                                                BaseCampId;                                       		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BaseCampAlias;                                    		// 0x02EC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SpawnNpcAlias[ 0x5 ];                             		// 0x02F8 (0x003C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3590 ];

		return pClassPointer;
	};

};

//UClass* AT1NpcArea::pClassPointer = NULL;

// Class T1Game.T1AirDashPoint
// 0x0050 (0x0278 - 0x0228)
class AT1AirDashPoint : public AT1Actor
{
public:
	int                                                ZoneID;                                           		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DashID;                                           		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0230 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Range;                                            		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x023C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0248 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class USequence*                                   MyAirDashSeq;                                     		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USequence*                                   AnotherAirDashSeq;                                		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AT1AirDashPoint*                             Dest;                                             		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SX;                                               		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SY;                                               		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SZ;                                               		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            PointSprite;                                      		// 0x026C (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class USkeletalMesh*                               TargetSkelMesh;                                   		// 0x0270 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      SkelMeshComp;                                     		// 0x0274 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3592 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

//UClass* AT1AirDashPoint::pClassPointer = NULL;

// Class T1Game.T1AreaFlag
// 0x0028 (0x0250 - 0x0228)
class AT1AreaFlag : public AT1Actor
{
public:
	int                                                ReferenceID;                                      		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ToolTipValue;                                     		// 0x0230 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x023C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            FlagSprite;                                       		// 0x0248 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class UDrawSphereComponent*                        RenderComponent;                                  		// 0x024C (0x0004) [0x0000000000000008]              ( CPF_ExportObject )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3594 ];

		return pClassPointer;
	};

};

//UClass* AT1AreaFlag::pClassPointer = NULL;

// Class T1Game.T1CampFire
// 0x0034 (0x025C - 0x0228)
class AT1CampFire : public AT1Actor
{
public:
	int                                                CampFireID;                                       		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneID;                                           		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CampFireAlias;                                    		// 0x0230 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RefCampFireTable;                                 		// 0x023C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CampFireDiscription;                              		// 0x0248 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CampFireRadius;                                   		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            CampFireSpriteComponent;                          		// 0x0258 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3596 ];

		return pClassPointer;
	};

};

//UClass* AT1CampFire::pClassPointer = NULL;

// Class T1Game.T1GatherObject
// 0x0048 (0x0270 - 0x0228)
class AT1GatherObject : public AT1Actor
{
public:
	int                                                GatherID;                                         		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneID;                                           		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0230 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x023C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     GatherSourceAlias;                                		// 0x0248 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      GatherState;                                      		// 0x0254 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      GatherObjOutlineColor;                            		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    GatherObjAnimSet;                                 		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   GatherObjAnimTree;                                		// 0x0260 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               GatherSkeletalMesh;                               		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshComponent*                      GatherSkeletalComponent;                          		// 0x0268 (0x0004) [0x0000000000000009]              ( CPF_Edit | CPF_ExportObject )
	class USpriteComponent*                            GatherSpriteComponent;                            		// 0x026C (0x0004) [0x0000000000000008]              ( CPF_ExportObject )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3598 ];

		return pClassPointer;
	};

	void SetOutlineBloom ( unsigned long bBloomFlag, struct FColor InColor, int InAlpha );
};

//UClass* AT1GatherObject::pClassPointer = NULL;

// Class T1Game.T1PCSpawnPoint
// 0x0048 (0x0270 - 0x0228)
class AT1PCSpawnPoint : public AT1Actor
{
public:
	struct FString                                     SpawnPointName;                                   		// 0x0228 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneID;                                           		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnPointID;                                     		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x023C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     T1Description;                                    		// 0x0248 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OtherPawnSpawnPoint;                              		// 0x0254 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    SpawnDirectionRotator;                            		// 0x0260 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UArrowComponent*                             DirectionArrow;                                   		// 0x026C (0x0004) [0x0000000000000009]              ( CPF_Edit | CPF_ExportObject )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3600 ];

		return pClassPointer;
	};

};

//UClass* AT1PCSpawnPoint::pClassPointer = NULL;

// Class T1Game.T1WayPointActor
// 0x00B8 (0x02E0 - 0x0228)
class AT1WayPointActor : public AT1Actor
{
public:
	struct FT1PATHLINKACTORINFO                        LinkPointArray[ 0x4 ];                            		// 0x0228 (0x0050) [0x0000000000000000]              
	int                                                WayPointIndex;                                    		// 0x0278 (0x0004) [0x0000000000000000]              
	int                                                wPointID;                                         		// 0x027C (0x0004) [0x0000000000000000]              
	int                                                PathWayId;                                        		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneID;                                           		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMoveDelay;                                       		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FString                                     T1Description;                                    		// 0x028C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0298 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     messageID;                                        		// 0x02A4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x02B0 (0x0004) [0x0000000000000000]              
	class AT1WayPointActor*                            DestinationPoint;                                 		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MoveType;                                         		// 0x02B8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                WayPointSyncValue;                                		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            NoneSprite;                                       		// 0x02C0 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class USpriteComponent*                            GroupSprite;                                      		// 0x02C4 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	TArray< struct FVector >                           ProjectionVertices;                               		// 0x02C8 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           TestingVertices;                                  		// 0x02D4 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3602 ];

		return pClassPointer;
	};

};

//UClass* AT1WayPointActor::pClassPointer = NULL;

// Class T1Game.T1GameInfo
// 0x000C (0x0404 - 0x03F8)
class AT1GameInfo : public AGameInfo
{
public:
	struct FString                                     SavedOptionStr;                                   		// 0x03F8 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36244 ];

		return pClassPointer;
	};

	void Logout ( class AController* Exiting );
	void eventPostLogin ( class APlayerController* NewPlayer );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FString* ErrorMessage );
	void eventPreLogin ( struct FString Options, struct FString Address, struct FString* ErrorMessage );
	class UClass* GetDefaultPlayerClass ( class AController* C );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void RestartPlayer ( class AController* NewPlayer );
	class ANavigationPoint* T1FindPlayerStart ( class AController* Player, struct FString IncomingName );
};

//UClass* AT1GameInfo::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif