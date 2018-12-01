#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Engine_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x000C
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableShadowCasting : 1;                         		// 0x0004 (0x0004) [0x0000000000001001] [0x00000001] ( CPF_Edit | CPF_Native )
	unsigned long                                      bEnableCollision : 1;                             		// 0x0008 (0x0004) [0x0000000000001001] [0x00000001] ( CPF_Edit | CPF_Native )
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x000C
struct FStaticMeshLODInfo
{
	TArray< struct FStaticMeshLODElement >             Elements;                                         		// 0x0000 (0x000C) [0x0000000000001041]              ( CPF_Edit | CPF_EditConstArray | CPF_Native )
};

// ScriptStruct Engine.Actor.BaseRelativeOffsetInfo
// 0x001C
struct FBaseRelativeOffsetInfo
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                     		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	struct FName                                       AttachedName;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     NewFloor;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      NotifyActor : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Actor.TimerData
// 0x001C
struct FTimerData
{
	unsigned long                                      bLoop : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       FuncName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              Rate;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Count;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	class UObject*                                     TimerObj;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPaused : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Actor.SectorInfo
// 0x000C
struct FSectorInfo
{
	int                                                iSectorX;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iSectorY;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                iActorIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x001C
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LevelIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0018 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0050
struct FImpactInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     RayDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     StartTrace;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0034 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0014
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< float >                                    ChannelWeights;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumChannels;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0035
struct FRigidBodyState
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FQuat                                       Quaternion;                                       		// 0x000C (0x0010) [0x0000000000000000]              
	struct FVector                                     LinVel;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     AngVel;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	unsigned char                                      bNewData;                                         		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x003C
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ContactNormal;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              ContactPenetration;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     ContactVelocity[ 0x2 ];                           		// 0x001C (0x0018) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysMaterial[ 0x2 ];                              		// 0x0034 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0024
struct FCollisionImpactData
{
	TArray< struct FRigidBodyContactInfo >             ContactInfos;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     TotalNormalForceVector;                           		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     TotalFrictionForceVector;                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.AsyncLineCheckResult
// 0x000C
struct FAsyncLineCheckResult
{
	int                                                bCheckStarted;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                bCheckCompleted;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                bHit;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.ReplicatedHitImpulse
// 0x0028
struct FReplicatedHitImpulse
{
	struct FVector                                     AppliedImpulse;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      ImpulseCount;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned long                                      bRadialImpulse : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0010
struct FPhysEffectInfo
{
	float                                              Threshold;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReFireDelay;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             Effect;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0014
struct FActorReference
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       Guid;                                             		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.Actor.NavReference
// 0x0014
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       Guid;                                             		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AnimNode.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x0020
struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bHasImpulse : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	class USequenceOp*                                 LinkedOp;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivateDelay;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTranslucent : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDistortion : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLit : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUsesSceneColor : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct UPrimitiveComponent_FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                      		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      Nothing : 1;                                      		// 0x0000 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      Pawn : 1;                                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      Vehicle : 1;                                      		// 0x0000 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      Water : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	unsigned long                                      GameplayPhysics : 1;                              		// 0x0000 (0x0004) [0x0000000000000003] [0x00000020] ( CPF_Edit | CPF_Const )
	unsigned long                                      EffectPhysics : 1;                                		// 0x0000 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled1 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled2 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled3 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000200] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled4 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000400] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled5 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000800] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled6 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00001000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled7 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00002000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled8 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00004000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled9 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00008000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled10 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00010000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled11 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00020000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled12 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00040000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled13 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00080000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled14 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00100000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled15 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00200000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled16 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00400000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled17 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00800000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled18 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x01000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled19 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x02000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled20 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x04000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Cloth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x08000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      FluidDrain : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x10000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      SoftBody : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x20000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      FracturedMeshPart : 1;                            		// 0x0000 (0x0004) [0x0000000000000003] [0x40000000] ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0008
struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      BSP : 1;                                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Static : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Dynamic : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      CompositeDynamic : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      Skybox : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      Unnamed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      Unnamed01 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      Unnamed02 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      Unnamed03 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      Unnamed04 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      Unnamed05 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      Cinematic : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      Cinematic01 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      Cinematic02 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      Cinematic03 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      Cinematic04 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      Cinematic05 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      Gameplay : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      Gameplay01 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      Gameplay02 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00100000] ( CPF_Edit )
	unsigned long                                      Gameplay03 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00200000] ( CPF_Edit )
	unsigned long                                      Crowd : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00400000] ( CPF_Edit )
	unsigned long                                      Pawn : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00800000] ( CPF_Edit )
	unsigned long                                      WithoutPawn : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x01000000] ( CPF_Edit )
	unsigned long                                      WithoutPawnForChannel : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x02000000] ( CPF_Edit )
	unsigned long                                      Unnamed06 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x04000000] ( CPF_Edit )
	unsigned long                                      Unnamed07 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x08000000] ( CPF_Edit )
	unsigned long                                      Unnamed08 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x10000000] ( CPF_Edit )
	unsigned long                                      WithoutParticleLights : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x20000000] ( CPF_Edit )
	unsigned long                                      ParticleLight : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      Unnamed_A : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x80000000] ( CPF_Edit )
	unsigned long                                      Unnamed_B : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Unnamed_C : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Unnamed_D : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Unnamed_E : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x003C
struct FTexture2DMipMap
{
	struct FTextureMipBulkData_Mirror                  Data;                                             		// 0x0000 (0x0034) [0x0000000000001000]              ( CPF_Native )
	int                                                SizeX;                                            		// 0x0034 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                SizeY;                                            		// 0x0038 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x000C
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    Next;                                             		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    PrevLink;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0018
struct FKeyValuePair
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x002C
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlayerID;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                Ping;                                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Score;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StatsID;                                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FKeyValuePair >                     PlayerInfo;                                       		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0060
struct FServerResponseLine
{
	int                                                ServerID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IP;                                               		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                Port;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                QueryPort;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ServerName;                                       		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MapName;                                          		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     GameType;                                         		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentPlayers;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxPlayers;                                       		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Ping;                                             		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FKeyValuePair >                     ServerInfo;                                       		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPlayerResponseLine >               PlayerInfo;                                       		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0008
struct FUniqueNetId
{
	struct FQWord                                      Uid;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x000C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsFriend : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0024
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NickName;                                         		// 0x0008 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     PresenceInfo;                                     		// 0x0014 (0x000C) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsOnline : 1;                                    		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0020 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bIsPlayingThisGame : 1;                           		// 0x0020 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bIsJoinable : 1;                                  		// 0x0020 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bHasVoiceSupport : 1;                             		// 0x0020 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0034
struct FOnlineContent
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     FriendlyName;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     ContentPath;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           ContentPackages;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           ContentFiles;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0008
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C(0x0014 - 0x0008)
struct FOnlineArbitrationRegistrant : FOnlineRegistrant
{
	struct FQWord                                      MachineId;                                        		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                Trustworthiness;                                  		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0014
struct FSpeechRecognizedWord
{
	int                                                WordId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WordText;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              Confidence;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0010
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TeamID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0004
struct FLocalTalker
{
	unsigned long                                      bHasVoice : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasNetworkedVoice : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsRecognizingSpeech : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasTalking : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsRegistered : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x000C
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bWasTalking : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsRegistered : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x0024
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SendingPlayerNick;                                		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsFriendInvite : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsGameInvite : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasAccepted : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasDenied : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x000C
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     InterfaceObject;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0014
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     InterfaceClassName;                               		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x001C
struct FTitleFile
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      AsyncState;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            Data;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0034
struct FCommunityContentFile
{
	int                                                ContentId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FileId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ContentType;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                FileSize;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                Owner;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                DownloadCount;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              AverageRating;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                RatingCount;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                LastRatingGiven;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     LocalFilePath;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValueIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      AdvertisementType;                                		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.SettingsData
// 0x000C
struct FSettingsData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                Value1;                                           		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    Value2;                                           		// 0x0008 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0011
struct FSettingsProperty
{
	int                                                PropertyId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned char                                      AdvertisementType;                                		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0010
struct FCommunityContentMetadata
{
	int                                                ContentType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSettingsProperty >                 MetadataItems;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0028
struct FNamedSession
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    SessionInfo;                                      		// 0x0008 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FOnlineRegistrant >                 Registrants;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< struct FOnlineArbitrationRegistrant >      ArbitrationRegistrants;                           		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Controller.BasedPosition
// 0x0034
struct FBasedPosition
{
	class AActor*                                      Base;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CachedBaseLocation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CachedBaseRotation;                               		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     CachedTransPosition;                              		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0008
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Destination;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0031
struct FClientAdjustment
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      newPhysics;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FVector                                     NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     NewVel;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	class AActor*                                      NewBase;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector                                     NewFloor;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	unsigned char                                      bAckGoodMove;                                     		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeDelta;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0030
struct FInputMatchRequest
{
	TArray< struct FInputEntry >                       Inputs;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      MatchActor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       MatchFuncName;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       FailedFuncName;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       RequestName;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                MatchIdx;                                         		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastMatchTime;                                    		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0034
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     SrcActorOffset;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     SrcActorDesiredOffset;                            		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FString                                     DebugText;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Duration;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x001C
struct FLUTBlender
{
	TArray< class UTexture* >                          LUTTextures;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< float >                                    LUTWeights;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bHasChanged : 1;                                  		// 0x0018 (0x0004) [0x0000000000003002] [0x00000001] ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x0134
struct FPostProcessSettings
{
	unsigned long                                      bEnableBloom : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableDOF : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableMotionBlur : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEnableSceneEffect : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAllowAmbientOcclusion : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	float                                              Bloom_Scale;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Bloom_InterpolationDuration;                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_FalloffExponent;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_BlurKernelSize;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_MaxNearBlurAmount;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_MaxFarBlurAmount;                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DOF_ModulateBlurColor;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DOF_FocusType;                                    		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_FocusInnerRadius;                             		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_FocusDistance;                                		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DOF_FocusPosition;                                		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_InterpolationDuration;                        		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_MaxVelocity;                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_Amount;                                		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      MotionBlur_FullMotionBlur : 1;                    		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              MotionBlur_CameraRotationThreshold;               		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_CameraTranslationThreshold;            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_InterpolationDuration;                 		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      RadialBlur : 1;                                   		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RadialCenterX;                                    		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadialCenterY;                                    		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadialBlurScale;                                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadialBlurAmount;                                 		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadialSampleCount;                                		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FilterEffectThold;                                		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FilterEffectDistThold;                            		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FilterEffectLimitColor;                           		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              FilterEffectAlpha;                                		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FilterEffectType;                                 		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FilterEffectPower;                                		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FIlterEffectRotPower;                             		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FilterEffectMaskPower;                            		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FilterEffectUnitSize;                             		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SceneColorBrightness;                             		// 0x00A8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SceneColorAdd;                                    		// 0x00B4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              SceneSaturation;                                  		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SceneHue;                                         		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SceneContrast;                                    		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SceneColorMaskValue;                              		// 0x00CC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              AOMaskBrightness;                                 		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AOPower;                                          		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AORadius;                                         		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SceneCyanRed;                                     		// 0x00E4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SceneMagentaGreen;                                		// 0x00F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SceneYellowBlue;                                  		// 0x00FC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scene_Desaturation;                               		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_HighLights;                                 		// 0x010C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_MidTones;                                   		// 0x0118 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_Shadows;                                    		// 0x0124 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scene_InterpolationDuration;                      		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Camera.CameraTravelModeInfo
// 0x0078
struct FCameraTravelModeInfo
{
	unsigned char                                      CurrentTravelMode;                                		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     WorldPosViewDir;                                  		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     WorldPos;                                         		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class APawn*                                       NonPlayerPawn;                                    		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class APawn* >                             FitPawns;                                         		// 0x0020 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              FitPawnsAddHeight;                                		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FitPawnsAddDistance;                              		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FitPawnsAddDistanceMax;                           		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FitPawnsAddDistanceMin;                           		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FitPawnsHeightByRadius;                           		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      BeforeTravelBlockMove : 1;                        		// 0x0040 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      BeforeTravelBlockRotate : 1;                      		// 0x0040 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FVector                                     BeforeTravelControllerPos;                        		// 0x0044 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    BeforeTravelControllerRot;                        		// 0x0050 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      FitCamLock : 1;                                   		// 0x005C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FVector                                     FitCamLockBoundExtent;                            		// 0x0060 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     FitCamLockBoundOrigin;                            		// 0x006C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTPOV                                       POV;                                              		// 0x0004 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x002C
struct FTViewTarget
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AController*                                 Controller;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTPOV                                       POV;                                              		// 0x0008 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	float                                              AspectRatio;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x000C
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BlendFunction;                                    		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendExp;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0028
struct FOverrideSkill
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	TArray< struct FDouble >                           Mus;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< struct FDouble >                           Sigmas;                                           		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0014
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ObjectPropertyValue;                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectPropertyName;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      EntryType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      ComparisonType;                                   		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectPropertyName;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      EntryType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      SortType;                                         		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x000C
struct FOnlineGameSearchORClause
{
	TArray< struct FOnlineGameSearchParameter >        OrParams;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0018
struct FOnlineGameSearchQuery
{
	TArray< struct FOnlineGameSearchORClause >         OrClauses;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct FOnlineGameSearchSortClause >       SortClauses;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0008
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    PlatformData;                                     		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.SkeletalMeshComponent.MutationMaterialParam
// 0x002C
struct FMutationMaterialParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     StartValue;                                       		// 0x0008 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     TargetValue;                                      		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     InitValue;                                        		// 0x0020 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.SkeletalMeshComponent.MutationMaterialObj
// 0x0024
struct FMutationMaterialObj
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                LoopCount;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fDurationTime;                                    		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fCurrentTime;                                     		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fReturnTime;                                      		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bReturned : 1;                                    		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< struct FMutationMaterialParam >            Params;                                           		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x0008
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.MovableSocketInfo
// 0x002C
struct FMovableSocketInfo
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     SocketLocation;                                   		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    SocketRotation;                                   		// 0x001C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bWorldSpace : 1;                                  		// 0x0028 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bMoved : 1;                                       		// 0x0028 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0040
struct FAttachment
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0004) [0x0000000000000009]              ( CPF_Edit | CPF_ExportObject )
	struct FName                                       BoneName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeLocation;                                 		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeScale;                                    		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      PosOnly : 1;                                      		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     ParentScale;                                      		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshComponent.DynamicParamPlayObj
// 0x0044
struct FDynamicParamPlayObj
{
	unsigned long                                      IsAddMaterial : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MaterialIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       ParameterName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     StartValue;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndValue;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              fPlayTime;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fCurrentTime;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      PlayType;                                         		// 0x0030 (0x0001) [0x0000000000000000]              
	struct FVector                                     InitValue;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	float                                              fCurrentRevertTime;                               		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[ 0x2 ];                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0044
struct FAnimBlendChild
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNode*                                   Anim;                                             		// 0x0008 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	float                                              Weight;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TotalWeight;                                      		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BlendWeight;                                      		// 0x0014 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                bHasRootMotion;                                   		// 0x0018 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FBoneAtom                                   RootMotion;                                       		// 0x001C (0x0020) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bMirrorSkeleton : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsAdditive : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                DrawY;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x000C
struct FReverbSettings
{
	unsigned char                                      ReverbType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned long                                      bIsWorldInfo : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExteriorVolume;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExteriorTime;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExteriorLPF;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExteriorLPFTime;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorVolume;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorTime;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorLPF;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorLPFTime;                                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0010
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FloatParam;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundNodeWave*                              WaveParam;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x0004
struct ASkeletalMeshActor_FCheckpointRecord
{
	unsigned long                                      bHidden : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int                                                NodePosX;                                         		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NodePosY;                                         		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.SoundNodeAmbientNonLoop.AmbientSoundSlot
// 0x0010
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchScale;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VolumeScale;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000000001]              ( CPF_Edit )
	float                                              X;                                                		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNoRBCollision : 1;                               		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPerPolyShape : 1;                                		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Length;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x0064
struct FKConvexElem
{
	TArray< struct FVector >                           VertexData;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct FPlane >                            PermutedVertexData;                               		// 0x000C (0x000C) [0x0000000000000000]              
	TArray< int >                                      FaceTriData;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           EdgeDirections;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           FaceNormalDirections;                             		// 0x0030 (0x000C) [0x0000000000000000]              
	TArray< struct FPlane >                            FacePlaneData;                                    		// 0x003C (0x000C) [0x0000000000000000]              
	struct FBox                                        ElemBox;                                          		// 0x0048 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x0034
struct FKAggregateGeom
{
	TArray< struct FKSphereElem >                      SphereElems;                                      		// 0x0000 (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
	TArray< struct FKBoxElem >                         BoxElems;                                         		// 0x000C (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
	TArray< struct FKSphylElem >                       SphylElems;                                       		// 0x0018 (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
	TArray< struct FKConvexElem >                      ConvexElems;                                      		// 0x0024 (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
	struct FPointer                                    RenderInfo;                                       		// 0x0030 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x000C
struct FKCachedConvexData_Mirror
{
	TArray< int >                                      CachedConvexElements;                             		// 0x0000 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x0010
struct FGeomSelection
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SelectionIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SelStrength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MusicVolume.IntroTrack
// 0x0018
struct FIntroTrack
{
	unsigned char                                      TrackType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInVolumeLevel;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutVolmeLevel;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MusicVolume.MusicTrackBank
// 0x001C
struct FMusicTrackBank
{
	unsigned char                                      TrackType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInVolumeLevel;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayBetweenOldandNewTrackForVolume;              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutVolmeLevel;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MusicVolume.SoundSettings
// 0x0008
struct FSoundSettings
{
	float                                              Volume;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      RandomizeWithoutReplaceGroup : 1;                 		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLoop : 1;                                        		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x002C
struct FStaticMeshComponentLODInfo
{
	TArray< class UShadowMap2D* >                      ShadowMaps;                                       		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	TArray< class UObject* >                           ShadowVertexBuffers;                              		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    LightMap;                                         		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    OverrideVertexColors;                             		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FVector >                           VertexColorPositions;                             		// 0x0020 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0030
struct FCompressedTrack
{
	TArray< unsigned char >                            ByteStream;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< float >                                    Times;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Mins[ 0x3 ];                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              Ranges[ 0x3 ];                                    		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x0010
struct FAnimNotifyEvent
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNotify*                                 Notify;                                           		// 0x0004 (0x0004) [0x0000000000000009]              ( CPF_Edit | CPF_ExportObject )
	struct FName                                       Comment;                                          		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0024
struct FRawAnimSequenceTrack
{
	TArray< struct FVector >                           PosKeys;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct FQuat >                             RotKeys;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	TArray< float >                                    KeyTimes;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0018
struct FTranslationTrack
{
	TArray< struct FVector >                           PosKeys;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< float >                                    Times;                                            		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0018
struct FRotationTrack
{
	TArray< struct FQuat >                             RotKeys;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< float >                                    Times;                                            		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                       		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0104
struct FAimComponent
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               LU;                                               		// 0x0008 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               LC;                                               		// 0x0024 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               LD;                                               		// 0x0040 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               CU;                                               		// 0x005C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               CC;                                               		// 0x0078 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               CD;                                               		// 0x0094 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               RU;                                               		// 0x00B0 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               RC;                                               		// 0x00CC (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               RD;                                               		// 0x00E8 (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x006C
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   HorizontalRange;                                  		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   VerticalRange;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAimComponent >                     AimComponents;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FName                                       AnimName_LU;                                      		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_LC;                                      		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_LD;                                      		// 0x0034 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_CU;                                      		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_CC;                                      		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_CD;                                      		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_RU;                                      		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_RC;                                      		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_RD;                                      		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0030
struct FChildBoneBlendInfo
{
	TArray< float >                                    TargetPerBoneWeight;                              		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       InitTargetStartBone;                              		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitPerBoneIncrease;                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       OldStartBone;                                     		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              OldBoneIncrease;                                  		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< unsigned char >                            TargetRequiredBones;                              		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0010
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                      		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAnimSequence*                               AnimSeq;                                          		// 0x0008 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                AnimLinkupIndex;                                  		// 0x000C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x001C
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAnimInfo                                   AnimInfo;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0019
struct FRandomAnimInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMin;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMax;                                     		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   PlayRateRange;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStillFrame : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      LoopCount;                                        		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0020
struct FSynchGroup
{
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	class UAnimNodeSequence*                           MasterNode;                                       		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       GroupName;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFireSlaveNotifies : 1;                           		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RateScale;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_ParticleSet.PlayParticleMaterialType
// 0x0025
struct FPlayParticleMaterialType
{
	unsigned long                                      bStepParticle : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeLocation;                                 		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      IsUpper;                                          		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNotify_SESound.BodyfallTypePlayInfo
// 0x0009
struct FBodyfallTypePlayInfo
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_SESound.StuffTypePlayInfo
// 0x0009
struct FStuffTypePlayInfo
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_SESound.MonWPTypePlayInfo
// 0x0009
struct FMonWPTypePlayInfo
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_SESound.MonStepTypePlayInfo
// 0x0008
struct FMonStepTypePlayInfo
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_SESound.PlaySESoundType
// 0x0060
struct FPlaySESoundType
{
	unsigned long                                      StepSound : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              StepSoundVolume;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ScuffSound : 1;                                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              ScuffVolume;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      JumpSound : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      LandSound : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      AttachSound : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              AttachSoundVolume;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      HitSound : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      WeaponSound : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              WeaponSoundVolume;                                		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      BodyfallSound : 1;                                		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              BodyfallSoundVolume;                              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FBodyfallTypePlayInfo                       BFTPlayInfo;                                      		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FStuffTypePlayInfo                          StuffPlayInfo;                                    		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FMonStepTypePlayInfo                        MonStepPlayInfo;                                  		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FMonWPTypePlayInfo                          MonWpPlayInfo;                                    		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      IsUpper;                                          		// 0x0054 (0x0001) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.DamageVoice
// 0x0009
struct FDamageVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.DeathVoice
// 0x0009
struct FDeathVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.BreathVoice
// 0x0009
struct FBreathVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.MoveVoice
// 0x0009
struct FMoveVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.SocialVoice
// 0x0009
struct FSocialVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.CastVoice
// 0x0009
struct FCastVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.ShotVoice
// 0x0009
struct FShotVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.AttackVoice
// 0x0009
struct FAttackVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.HeavyAttackVoice
// 0x0009
struct FHeavyAttackVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.PreAttackVoice
// 0x0009
struct FPreAttackVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.IdleVoice
// 0x0009
struct FIdleVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.SPAttackVoice
// 0x0009
struct FSPAttackVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.KnockBackVoice
// 0x0009
struct FKnockBackVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNotify_VoiceSound.CombatVoice
// 0x0009
struct FCombatVoice
{
	unsigned long                                      Play : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlayType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimSet.StopShaking
// 0x0010
struct FStopShaking
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              IgnoreValue;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IgnoreRotValue;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0084
struct FAnimSetMeshLinkup
{
	struct FGuid                                       SkelMeshLinkupGUID;                               		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< int >                                      BoneToTrackTable;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            BoneUseAnimTranslation;                           		// 0x001C (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            BoneUseAnimMovement;                              		// 0x0028 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            BoneNonAniScale;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            BoneAdjustAniScale;                               		// 0x0040 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            BoneStopShaking;                                  		// 0x004C (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           BoneStopShakingValue;                             		// 0x0058 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            BoneDynamicFixed;                                 		// 0x0064 (0x000C) [0x0000000000000000]              
	unsigned long                                      bUseStandardSeq : 1;                              		// 0x0070 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UAnimSequence*                               pStandardSequence;                                		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< unsigned char >                            BoneIgnoreAnim;                                   		// 0x0078 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSet.RefAnimSequence
// 0x0010
struct FRefAnimSequence
{
	struct FName                                       InstanceName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAnimSequence*                               RefSequence;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseAnimsetRef : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0024
struct FAnimGroup
{
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0000 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAnimNodeSequence*                           SynchMaster;                                      		// 0x000C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAnimNodeSequence*                           NotifyMaster;                                     		// 0x0010 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       GroupName;                                        		// 0x0014 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RateScale;                                        		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SynchPctPosition;                                 		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0010
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkelControlBase*                            ControlHead;                                      		// 0x0008 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	int                                                DrawY;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0034
struct FListener
{
	class APortalVolume*                               PortalVolume;                                     		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Up;                                               		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Right;                                            		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Front;                                            		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AudioDevice.AudioVisualizerInfo
// 0x0024
struct FAudioVisualizerInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      AudioColor;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     SoundCueName;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              MaxRadius;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AudioDevice.SoundGroupProperties
// 0x001C
struct FSoundGroupProperties
{
	float                                              Volume;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pitch;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VoiceCenterChannelVolume;                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VoiceRadioVolume;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyEffects : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              WavePriority;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsUISound : 1;                                   		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsMusic : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNoReverb : 1;                                    		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBleedStereo : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bApplyLowPass : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bApplyAmbientZone : 1;                            		// 0x0018 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct Engine.AudioDevice.SoundGroupVolIntep
// 0x0010
struct FSoundGroupVolIntep
{
	struct FDouble                                     StartTime;                                        		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FDouble                                     EndTime;                                          		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.AudioDevice.SoundGroup
// 0x0030
struct FSoundGroup
{
	struct FSoundGroupProperties                       Properties;                                       		// 0x0000 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             ChildGroupNames;                                  		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AudioDevice.BalanceWavInfo
// 0x000C
struct FBalanceWavInfo
{
	int                                                BalanceWavCount;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BalanceTargetVolumeScale;                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BalanceTargetAttenuationScale;                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0031
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                      		// 0x0000 (0x001C) [0x0000000000000000]              
	struct FVector                                     BoxCenter;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FPointer                                    OctreeNode;                                       		// 0x0028 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UObject*                                     Owner;                                            		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      OwnerType;                                        		// 0x0030 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0010
struct FDebugNavCost
{
	struct FString                                     Desc;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CameraActor.SoundGroupVolumeCtrl
// 0x0014
struct FSoundGroupVolumeCtrl
{
	float                                              SoundGroupVolume;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SoundGroupName;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeTime;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.SkyDomeInfo
// 0x0038
struct FSkyDomeInfo
{
	class UStaticMesh*                                 SkyDomeMesh;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SkyDomeOffset;                                    		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    SkyDomeRotation;                                  		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              SkyDomeDrawScale;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             SkyDomeMaterialNames;                             		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SkyDomeDrawScale3D;                               		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.LightFuncInfo
// 0x0010
struct FLightFuncInfo
{
	class UMaterialInterface*                          SourceMaterial;                                   		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     Scale;                                            		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.ExtraPostProcessObj
// 0x0010
struct FExtraPostProcessObj
{
	class UPostProcessParameter*                       ParameterObj;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartTime;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndTime;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InterpolationDurationTime;                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.WeatherLightningRandom
// 0x000C
struct FWeatherLightningRandom
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinCount;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxCount;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.WeatherLightning
// 0x0044
struct FWeatherLightning
{
	float                                              MinRate;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRate;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinRandomSpawnTime;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRandomSpawnTime;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinFadeTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxFadeTime;                                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDuration;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDuration;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CullDistance;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ParticleLocation;                                 		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeatherLightningRandom >           RandomInfo;                                       		// 0x0038 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.WeatherParticle
// 0x0004
struct FWeatherParticle
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.InterpVolumeInfo
// 0x0004
struct FInterpVolumeInfo
{
	class APostProcessVolume*                          Volume;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x0088
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableAntialiasing : 1;                          		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableBold : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableItalic : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEnableUnderline : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      CharacterSet;                                     		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Chars;                                            		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     UnicodeRange;                                     		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CharsFilePath;                                    		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CharsFileWildcard;                                		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCreatePrintableOnly : 1;                         		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FLinearColor                                ForegroundColor;                                  		// 0x004C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableDropShadow : 1;                            		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TexturePageWidth;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TexturePageMaxHeight;                             		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                XPadding;                                         		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YPadding;                                         		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxTop;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxBottom;                                  		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxRight;                                   		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxLeft;                                    		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableLegacyMode : 1;                            		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                Kerning;                                          		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartV;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                USize;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VSize;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TextureIndex;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalOffset;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Font.FontGlyph
// 0x0018
struct FFontGlyph
{
	float                                              OffsetX;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              OffsetY;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AdvanceX;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              AdvanceY;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Font.FontAttributes
// 0x0008
struct FFontAttributes
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GlyphIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Font.DrawFont
// 0x000C
struct FDrawFont
{
	struct FName                                       FontName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Font.UITextAttributes
// 0x0004
struct FUITextAttributes
{
	unsigned long                                      Bold : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Italic : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Underline : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Outline : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      Shadow : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      Strokeout : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0014
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              U;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CircularShadowManager.ActiveCircularShadowInfo
// 0x0008
struct FActiveCircularShadowInfo
{
	class UDecalComponent*                             Decal;                                            		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class UMaterialInstanceConstant*                   Material;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CloudInfo.FixedElementInfo
// 0x0014
struct FFixedElementInfo
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Size;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TextureIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIAnimTimeProperty
// 0x0014
struct FUIAnimTimeProperty
{
	float                                              DurationTime;                                     		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EventTime;                                        		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Count;                                            		// 0x0010 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimDummyKeyProperty
// 0x0014
struct FUIAnimDummyKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UITargetProperty_Widget
// 0x000C
struct FUITargetProperty_Widget
{
	struct FString                                     WidgetTag;                                        		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIInstRenderObjProperty
// 0x001C
struct FUIInstRenderObjProperty
{
	struct FUITargetProperty_Widget                    RednerWidget;                                     		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      RenderOrder;                                      		// 0x000C (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bUseLocalSpace : 1;                               		// 0x0010 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bHideSourceWidget : 1;                            		// 0x0010 (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
	float                                              SizeRatio;                                        		// 0x0014 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              InitAlpha;                                        		// 0x0018 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UITextStyleMaskProperty
// 0x001C
struct FUITextStyleMaskProperty
{
	unsigned char                                      AreaType;                                         		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   RatioLT;                                          		// 0x000C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   RatioRB;                                          		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimObjectSubProperty
// 0x000D
struct FUIAnimObjectSubProperty
{
	struct FUITargetProperty_Widget                    ClippingWidgetProperty;                           		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      LoopMode;                                         		// 0x000C (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimTimeInfo
// 0x0018
struct FUIAnimTimeInfo
{
	unsigned long                                      bIsAnimating : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationTime;                                     		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EventTime;                                        		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                AnimCount;                                        		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimCubicFuncWeightInfo
// 0x000C
struct FUIAnimCubicFuncWeightInfo
{
	float                                              InitJerk;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InitAccel;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InitSpeed;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimModeWeightInfo
// 0x0008
struct FUIAnimModeWeightInfo
{
	unsigned char                                      AnimationMode;                                    		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInverseMode : 1;                                 		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.CubicFuncAnimationInfo
// 0x002C
struct FCubicFuncAnimationInfo
{
	struct FUIAnimTimeInfo                             AnimTimeInfo;                                     		// 0x0000 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimCubicFuncWeightInfo                  CubicFuncWeightInfo;                              		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartValue;                                       		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndValue;                                         		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.ModeAnimationInfo
// 0x0028
struct FModeAnimationInfo
{
	struct FUIAnimTimeInfo                             AnimTimeInfo;                                     		// 0x0000 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimModeWeightInfo                       ModeWeightInfo;                                   		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartValue;                                       		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndValue;                                         		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimId
// 0x0008
struct FUIAnimId
{
	struct FQWord                                      AnimId;                                           		// 0x0000 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimEvent
// 0x0014
struct FUIAnimEvent
{
	struct FUIAnimId                                   AnimId;                                           		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EventState;                                       		// 0x0008 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEvent : 1;                                       		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              RemainEventTime;                                  		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimIntegerData
// 0x0008
struct FUIAnimIntegerData
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                IntValue;                                         		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimFloatData
// 0x0008
struct FUIAnimFloatData
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              FloatValue;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimColorData
// 0x0014
struct FUIAnimColorData
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ColorValue;                                       		// 0x0004 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimVector2DData
// 0x000C
struct FUIAnimVector2DData
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Vector2DValue;                                    		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimObjectData
// 0x0008
struct FUIAnimObjectData
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     ObjectValue;                                      		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimData
// 0x003C
struct FUIAnimData
{
	TArray< struct FUIAnimIntegerData >                IntDataArray;                                     		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimFloatData >                  FloatDataArray;                                   		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimColorData >                  ColorDataArray;                                   		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimVector2DData >               Vector2DDataArray;                                		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimObjectData >                 ObjectDataArray;                                  		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimIntegerFactor
// 0x0024
struct FUIAnimIntegerFactor
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimModeWeightInfo                       ModeWeightInfo;                                   		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUseFinishValue : 1;                              		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              StartValue;                                       		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndValue;                                         		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FinishValue;                                      		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ReverseFinishValue;                               		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0020 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0021 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      FinishValueType;                                  		// 0x0022 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ReverseFinishValueType;                           		// 0x0023 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimFloatFactor
// 0x0036
struct FUIAnimFloatFactor
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimModeWeightInfo                       ModeWeightInfo;                                   		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimModeWeightInfo                       ReverseModeWeightInfo;                            		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUseFinishValue : 1;                              		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              StartValue;                                       		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndValue;                                         		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FinishValue;                                      		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ReverseStartValue;                                		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ReverseEndValue;                                  		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ReverseFinishValue;                               		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0030 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0031 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      FinishValueType;                                  		// 0x0032 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ReverseStartValueType;                            		// 0x0033 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ReverseEndValueType;                              		// 0x0034 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ReverseFinishValueType;                           		// 0x0035 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimColorFactor
// 0x0054
struct FUIAnimColorFactor
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimModeWeightInfo                       ModeWeightInfo;                                   		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUseFinishValue : 1;                              		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FLinearColor                                StartValue;                                       		// 0x0010 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                EndValue;                                         		// 0x0020 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                FinishValue;                                      		// 0x0030 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ReverseFinishValue;                               		// 0x0040 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0050 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0051 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      FinishValueType;                                  		// 0x0052 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ReverseFinishValueType;                           		// 0x0053 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimBoundFactor
// 0x0047
struct FUIAnimBoundFactor
{
	unsigned char                                      PosFactorType;                                    		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SizeFactorType;                                   		// 0x0001 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SizeHAlignFactorType;                             		// 0x0002 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SizeVAlignFactorType;                             		// 0x0003 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimModeWeightInfo                       ModeWeightInfo;                                   		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimCubicFuncWeightInfo                  CubicFuncWeightInfo;                              		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              CubicFuncTime;                                    		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCubicFuncAnimation : 1;                          		// 0x001C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnablePosFactor : 1;                             		// 0x001C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bEnableSizeFactor : 1;                            		// 0x001C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FVector2D                                   StartPosition;                                    		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   StartSize;                                        		// 0x0028 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   EndPosition;                                      		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   EndSize;                                          		// 0x0038 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartPosType;                                     		// 0x0040 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartSizeType;                                    		// 0x0041 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndPosType;                                       		// 0x0042 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndSizeType;                                      		// 0x0043 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      PosHorizontalAlignment;                           		// 0x0044 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      PosVerticlaAlignment;                             		// 0x0045 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      MoveType;                                         		// 0x0046 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimObjectFactor
// 0x0014
struct FUIAnimObjectFactor
{
	unsigned char                                      FactorType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUseFinishValue : 1;                              		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UObject*                                     AnimValue;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     FinishValue;                                      		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     ReverseFinishValue;                               		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimKey
// 0x0060
struct FUIAnimKey
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bReverseMode : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	float                                              BaseTime;                                         		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimTimeInfo                             AnimTimeInfo;                                     		// 0x0008 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      MainFactorType;                                   		// 0x0020 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimIntegerFactor >              IntFactorArray;                                   		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimFloatFactor >                FloatFactorArray;                                 		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimColorFactor >                ColorFactorArray;                                 		// 0x003C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimBoundFactor >                BoundFactorArray;                                 		// 0x0048 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimObjectFactor >               ObjectFactorArray;                                		// 0x0054 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UITargetInfo
// 0x0010
struct FUITargetInfo
{
	unsigned char                                      TargetType;                                       		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                TargetOwnerId;                                    		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TargetId;                                         		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLifeSyncWithAnim : 1;                            		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimBackupData
// 0x004C
struct FUIAnimBackupData
{
	struct FUITargetInfo                               AnimTargetInfo;                                   		// 0x0000 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimData                                 AnimData;                                         		// 0x0010 (0x003C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimNode
// 0x001C
struct FUIAnimNode
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bReverseMode : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationTime;                                     		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimKey >                        AnimKeys;                                         		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimObject
// 0x0024
struct FUIAnimObject
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bStarted : 1;                                     		// 0x0000 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bReverseMode : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bKeepAnimating : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bFinishReserved : 1;                              		// 0x0000 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	float                                              ReservedUpdateTime;                               		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      LoopMode;                                         		// 0x0008 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimId                                   AnimId;                                           		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIObject*                             ClippingBoundWidget;                              		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimNode >                       AnimNodes;                                        		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UITargetProperty_DrawComponent
// 0x0019
struct FUITargetProperty_DrawComponent
{
	struct FString                                     WidgetTag;                                        		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FString                                     ComponentType;                                    		// 0x000C (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      State;                                            		// 0x0018 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UITargetProperty_ExpansionComponent
// 0x0018
struct FUITargetProperty_ExpansionComponent
{
	struct FString                                     WidgetTag;                                        		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FString                                     ExpansionId;                                      		// 0x000C (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UITargetProperty
// 0x0044
struct FUITargetProperty
{
	unsigned char                                      TargetType;                                       		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUITargetProperty_Widget                    WidgetProperty;                                   		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FUITargetProperty_DrawComponent             DrawComponentProperty;                            		// 0x0010 (0x001C) [0x0000000000002000]              ( CPF_Transient )
	struct FUITargetProperty_ExpansionComponent        ExpansionComponentProperty;                       		// 0x002C (0x0018) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimObjectProperty
// 0x008C
struct FUIAnimObjectProperty
{
	struct FUITargetProperty                           TargetProperty;                                   		// 0x0000 (0x0044) [0x0000000000002000]              ( CPF_Transient )
	struct FUIInstRenderObjProperty                    InstRenderObjProperty;                            		// 0x0044 (0x001C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUITextStyleMaskProperty                    TextStyleMaskProperty;                            		// 0x0060 (0x001C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimObjectSubProperty                    AnimObjSubProperty;                               		// 0x007C (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimObjectConvertedProperty
// 0x0020
struct FUIAnimObjectConvertedProperty
{
	struct FUITargetInfo                               AnimTargetInfo;                                   		// 0x0000 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimObjectSubProperty                    AnimObjSubProperty;                               		// 0x0010 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimNodeProperty
// 0x0004
struct FUIAnimNodeProperty
{
	float                                              DelayTime;                                        		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.Vector2DValueInfo
// 0x0010
struct FVector2DValueInfo
{
	struct FVector2D                                   StartValue;                                       		// 0x0000 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   EndValue;                                         		// 0x0008 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.FloatValueInfo
// 0x0008
struct FFloatValueInfo
{
	float                                              StartValue;                                       		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              EndValue;                                         		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimModeWeightProperty
// 0x0008
struct FUIAnimModeWeightProperty
{
	unsigned char                                      AnimationMode;                                    		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bInverseMode : 1;                                 		// 0x0004 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimCubicFuncWeightProperty
// 0x0008
struct FUIAnimCubicFuncWeightProperty
{
	float                                              Acceleration;                                     		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              Speed;                                            		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimPosKeyProperty.WidgetPositionInfo
// 0x000E
struct FWidgetPositionInfo
{
	struct FUITargetProperty_Widget                    WidgetProperty;                                   		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      HorizontalAlignment;                              		// 0x000C (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      VerticalAlignment;                                		// 0x000D (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimPosKeyProperty.PositionValueInfo
// 0x0024
struct FPositionValueInfo
{
	unsigned char                                      ValueType;                                        		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   PixelOffset;                                      		// 0x0004 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   ScreenRatio;                                      		// 0x000C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FWidgetPositionInfo                         WidgetPosition;                                   		// 0x0014 (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimPosKeyProperty
// 0x0088
struct FUIAnimPosKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimCubicFuncWeightProperty              CubicFuncWeightProperty;                          		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FPositionValueInfo                          PositionStart;                                    		// 0x0024 (0x0024) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FPositionValueInfo                          PositionEnd;                                      		// 0x0048 (0x0024) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      StartHorizontalAlignment;                         		// 0x006C (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      StartVerticalAlignment;                           		// 0x006D (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      EndHorizontalAlignment;                           		// 0x006E (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      EndVerticalAlignment;                             		// 0x006F (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      MoveType;                                         		// 0x0070 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      RenderOrder;                                      		// 0x0071 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             ScaleValueInfo;                                   		// 0x0074 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             AlphaValueInfo;                                   		// 0x007C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bCubicFuncAnim : 1;                               		// 0x0084 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableScale : 1;                                 		// 0x0084 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bEnableAlpha : 1;                                 		// 0x0084 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimPosKeyConvertedProperty
// 0x0058
struct FUIAnimPosKeyConvertedProperty
{
	float                                              DurationTime;                                     		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      AnimMode;                                         		// 0x0010 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInverseMode : 1;                                 		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              Acceleration;                                     		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Speed;                                            		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      MoveType;                                         		// 0x0020 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      RenderOrder;                                      		// 0x0021 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     RenderWidget;                                     		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   StartPos;                                         		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   EndPos;                                           		// 0x0038 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0040 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0041 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      HorizontalAlignment;                              		// 0x0042 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VerticalAlignment;                                		// 0x0043 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartScale;                                       		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndScale;                                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartAlpha;                                       		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndAlpha;                                         		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCubicFuncAnim : 1;                               		// 0x0054 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableScale : 1;                                 		// 0x0054 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bEnableAlpha : 1;                                 		// 0x0054 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimScaleKeyProperty
// 0x002C
struct FUIAnimScaleKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             ScaleValueInfo;                                   		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              ScaleRatio;                                       		// 0x0024 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bEnableScaleValue : 1;                            		// 0x0028 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableScaleRatio : 1;                            		// 0x0028 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimScaleKeyConvertedProperty
// 0x0024
struct FUIAnimScaleKeyConvertedProperty
{
	float                                              DurationTime;                                     		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      AnimMode;                                         		// 0x0010 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInverseMode : 1;                                 		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0019 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartScale;                                       		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndScale;                                         		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimAlphaKeyProperty
// 0x002C
struct FUIAnimAlphaKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             AlphaValueInfo;                                   		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              AlphaRatio;                                       		// 0x0024 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bEnableAlphaValue : 1;                            		// 0x0028 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableAlphaRatio : 1;                            		// 0x0028 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimAlphaKeyConvertedProperty
// 0x0024
struct FUIAnimAlphaKeyConvertedProperty
{
	float                                              DurationTime;                                     		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      AnimMode;                                         		// 0x0010 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInverseMode : 1;                                 		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0019 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartAlpha;                                       		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndAlpha;                                         		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimResizeKeyProperty
// 0x0024
struct FUIAnimResizeKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   ResizeRatio;                                      		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimResizeKeyConvertedProperty
// 0x002A
struct FUIAnimResizeKeyConvertedProperty
{
	float                                              DurationTime;                                     		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      AnimMode;                                         		// 0x0010 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInverseMode : 1;                                 		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FVector2D                                   StartSize;                                        		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   EndSize;                                          		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0028 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0029 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIParticleEmitterInfo
// 0x003C
struct FUIParticleEmitterInfo
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FQWord                                      ParticleId;                                       		// 0x0004 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FVector2D                                   Location;                                         		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Scale;                                            		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ParticleSystemPath;                               		// 0x0020 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    ParticleEmitter;                                  		// 0x002C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UCustomUIObject*                             RenderWidget;                                     		// 0x0030 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UCustomUIObject*                             UpdateWidget;                                     		// 0x0034 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                InstRenderObjectId;                               		// 0x0038 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIGroup
// 0x000C
struct FUIGroup
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UUIObject*                                   TopMostOrderWidget;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIObject*                                   TopMostWidget;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.RenderBound
// 0x0010
struct FRenderBound
{
	float                                              DrawX;                                            		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawY;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawXL;                                           		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawYL;                                           		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.ExpansionComponent
// 0x0038
struct FExpansionComponent
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LabelText;                                        		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MetaData;                                         		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WidgetState;                                      		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WidgetSubState;                                   		// 0x0025 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPostExpansitonRender : 1;                        		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UUIComp_DrawComponents*                      Component;                                        		// 0x002C (0x0004) [0x000000000000000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject )
	unsigned long                                      bVisibleAlphaAnimation : 1;                       		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bVisibleAlphaAnimationSine : 1;                   		// 0x0030 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableSubState : 1;                              		// 0x0030 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bVisibleFlag : 1;                                 		// 0x0030 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bShow : 1;                                        		// 0x0030 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	float                                              fVisibleBlendTime;                                		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.WIDGET_ID
// 0x0000(0x0010 - 0x0010)
struct FWIDGET_ID : FGuid
{
};

// ScriptStruct Engine.UIRoot.STYLE_ID
// 0x0000(0x0010 - 0x0010)
struct FSTYLE_ID : FGuid
{
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinValue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NudgeValue;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIntRange : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              V;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UL;                                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VL;                                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.CustomRenderText
// 0x0028
struct FCustomRenderText
{
	int                                                TextIndex;                                        		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SizeX;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SizeY;                                            		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Text;                                             		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableSubscript : 1;                             		// 0x0020 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UFontSet*                                    FontSet;                                          		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.CustomRenderIcon
// 0x003C
struct FCustomRenderIcon
{
	float                                              PosX;                                             		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PosY;                                             		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MarginX;                                          		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MarginY;                                          		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SizeX;                                            		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SizeY;                                            		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  Image;                                            		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         TexCoords;                                        		// 0x001C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                Color;                                            		// 0x002C (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.CustomRenderFillBox
// 0x0034
struct FCustomRenderFillBox
{
	struct FVector2D                                   Position;                                         		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                FillColor;                                        		// 0x0010 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ShadowColor;                                      		// 0x0020 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bShadow : 1;                                      		// 0x0030 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.BoundInfo
// 0x0014
struct FBoundInfo
{
	struct FVector2D                                   Position;                                         		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              Scale;                                            		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UITargetProperty_WidgetParticle
// 0x0010
struct FUITargetProperty_WidgetParticle
{
	struct FString                                     WidgetTag;                                        		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	int                                                ParticleInstanceId;                               		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionProperty
// 0x0004
struct FUIActionProperty
{
	unsigned long                                      bLoop : 1;                                        		// 0x0000 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bCinemaMode : 1;                                  		// 0x0000 (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionVisibleCommandProperty
// 0x0004
struct FUIActionVisibleCommandProperty
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionTextCommandProperty
// 0x0010
struct FUIActionTextCommandProperty
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bUseDatasheet : 1;                                		// 0x000C (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionImageCommandProperty.ImageAndCoordsInfo
// 0x0020
struct FImageAndCoordsInfo
{
	class UTexture2D*                                  Image;                                            		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FString                                     ImagePath;                                        		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         ImageCoords;                                      		// 0x0010 (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionImageCommandProperty
// 0x0034
struct FUIActionImageCommandProperty
{
	class UImageSet*                                   ImageSet;                                         		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FString                                     ImageSetPath;                                     		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FImageAndCoordsInfo                         ImageAndCoords;                                   		// 0x0010 (0x0020) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bEnableImageSet : 1;                              		// 0x0030 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableImageAndCoords : 1;                        		// 0x0030 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionSoundCommandProperty
// 0x0010
struct FUIActionSoundCommandProperty
{
	class USoundCue*                                   SoundCue;                                         		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FString                                     SoundCuePath;                                     		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionParticleCommandProperty
// 0x0025
struct FUIActionParticleCommandProperty
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FString                                     ParticleSystemPath;                               		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      HorizontalAlignment;                              		// 0x0010 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      VerticalAlignment;                                		// 0x0011 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   Offset;                                           		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector2D                                   Scale;                                            		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      RenderOrder;                                      		// 0x0024 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIActionResizeLinkCommandProperty
// 0x0028
struct FUIActionResizeLinkCommandProperty
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      Orientation;                                      		// 0x0001 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bEnable : 1;                                      		// 0x0004 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	float                                              Offset;                                           		// 0x0008 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              Offset2;                                          		// 0x000C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUITargetProperty_Widget                    LinkWidgetProperty;                               		// 0x0010 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUITargetProperty_Widget                    LinkWidgetProperty2;                              		// 0x001C (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimScrollKeyProperty.ScrollValueInfo
// 0x0008
struct FScrollValueInfo
{
	unsigned char                                      ValueType;                                        		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              ScrollRatio;                                      		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimScrollKeyProperty
// 0x002C
struct FUIAnimScrollKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FScrollValueInfo                            ScrollStart;                                      		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FScrollValueInfo                            ScrollEnd;                                        		// 0x0024 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimScrollKeyConvertedProperty
// 0x0022
struct FUIAnimScrollKeyConvertedProperty
{
	float                                              DurationTime;                                     		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      AnimMode;                                         		// 0x0010 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInverseMode : 1;                                 		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              ScrollStart;                                      		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ScrollEnd;                                        		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartValueType;                                   		// 0x0020 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      EndValueType;                                     		// 0x0021 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimProgressKeyProperty
// 0x0028
struct FUIAnimProgressKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             ProgressRatio;                                    		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bEnableChangedEvent : 1;                          		// 0x0024 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimTexCoordsKeyProperty
// 0x003C
struct FUIAnimTexCoordsKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FTextureCoordinates                         TexCoordsStart;                                   		// 0x001C (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FTextureCoordinates                         TexCoordsEnd;                                     		// 0x002C (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimColorKeyProperty
// 0x003C
struct FUIAnimColorKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FLinearColor                                ColorStart;                                       		// 0x001C (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FLinearColor                                ColorEnd;                                         		// 0x002C (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimVisibleKeyProperty
// 0x0044
struct FUIAnimVisibleKeyProperty
{
	float                                              DurationTime;                                     		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bVisible : 1;                                     		// 0x000C (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned char                                      AlphaAnimMode;                                    		// 0x0010 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bAlphaInverseMode : 1;                            		// 0x0014 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned char                                      ScaleAnimMode;                                    		// 0x0018 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bScaleInverseMode : 1;                            		// 0x001C (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned char                                      ReverseScaleAnimMode;                             		// 0x0020 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bReverseScaleInverseMode : 1;                     		// 0x0024 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	float                                              ReverseStartScale;                                		// 0x0028 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              ReverseEndScale;                                  		// 0x002C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             ScaleValueInfo;                                   		// 0x0030 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             AlphaValueInfo;                                   		// 0x0038 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bEnableScale : 1;                                 		// 0x0040 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableAlpha : 1;                                 		// 0x0040 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimClippingKeyProperty
// 0x0025
struct FUIAnimClippingKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              ClippingStart;                                    		// 0x001C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              ClippingEnd;                                      		// 0x0020 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      ClippingFace;                                     		// 0x0024 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimGaugeKeyProperty
// 0x0028
struct FUIAnimGaugeKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bReverseGauge : 1;                                		// 0x001C (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	float                                              GaugeStart;                                       		// 0x0020 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              GaugeEnd;                                         		// 0x0024 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimTextFadeKeyProperty
// 0x0029
struct FUIAnimTextFadeKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              StartAlpha;                                       		// 0x001C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              EndAlpha;                                         		// 0x0020 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              InterpolationSize;                                		// 0x0024 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      Direction;                                        		// 0x0028 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimRadialGraphValueKeyProperty
// 0x0024
struct FUIAnimRadialGraphValueKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              StartValue;                                       		// 0x001C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              EndValue;                                         		// 0x0020 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.DurationByValue
// 0x0008
struct FDurationByValue
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              DurationTime;                                     		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimCountingKeyProperty
// 0x0034
struct FUIAnimCountingKeyProperty
{
	struct FUIAnimTimeProperty                         TimeProperty;                                     		// 0x0000 (0x0014) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FUIAnimModeWeightProperty                   ModeWeightProperty;                               		// 0x0014 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FFloatValueInfo                             CountingValue;                                    		// 0x001C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	int                                                DecimalPlace;                                     		// 0x0024 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	TArray< struct FDurationByValue >                  DurationsByValue;                                 		// 0x0028 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimDummyKeyElement
// 0x0014
struct FUIAnimDummyKeyElement
{
	struct FUIAnimDummyKeyProperty                     AnimDummyKeyProperty;                             		// 0x0000 (0x0014) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimPosKeyElement
// 0x00E4
struct FUIAnimPosKeyElement
{
	unsigned long                                      bNeedToConvert : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FUIAnimPosKeyProperty                       AnimPosKeyProperty;                               		// 0x0004 (0x0088) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimPosKeyConvertedProperty              AnimPosKeyConvertedProperty;                      		// 0x008C (0x0058) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimAlphaKeyElement
// 0x0054
struct FUIAnimAlphaKeyElement
{
	unsigned long                                      bNeedToConvert : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FUIAnimAlphaKeyProperty                     AnimAlphaKeyProperty;                             		// 0x0004 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimAlphaKeyConvertedProperty            AnimAlphaKeyConvertedProperty;                    		// 0x0030 (0x0024) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimScaleKeyElement
// 0x0054
struct FUIAnimScaleKeyElement
{
	unsigned long                                      bNeedToConvert : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FUIAnimScaleKeyProperty                     AnimScaleKeyProperty;                             		// 0x0004 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimScaleKeyConvertedProperty            AnimScaleKeyConvertedProperty;                    		// 0x0030 (0x0024) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimResizeKeyElement
// 0x0054
struct FUIAnimResizeKeyElement
{
	unsigned long                                      bNeedToConvert : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FUIAnimResizeKeyProperty                    AnimResizeKeyProperty;                            		// 0x0004 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimResizeKeyConvertedProperty           AnimResizeKeyConvertedProperty;                   		// 0x0028 (0x002C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimScrollKeyElement
// 0x0054
struct FUIAnimScrollKeyElement
{
	unsigned long                                      bNeedToConvert : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FUIAnimScrollKeyProperty                    AnimScrollKeyProperty;                            		// 0x0004 (0x002C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimScrollKeyConvertedProperty           AnimScrollKeyConvertedProperty;                   		// 0x0030 (0x0024) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimProgressKeyElement
// 0x0028
struct FUIAnimProgressKeyElement
{
	struct FUIAnimProgressKeyProperty                  AnimProgressKeyProperty;                          		// 0x0000 (0x0028) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimTexCoordsKeyElement
// 0x003C
struct FUIAnimTexCoordsKeyElement
{
	struct FUIAnimTexCoordsKeyProperty                 AnimTexCoordsKeyProperty;                         		// 0x0000 (0x003C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimColorKeyElement
// 0x003C
struct FUIAnimColorKeyElement
{
	struct FUIAnimColorKeyProperty                     AnimColorKeyProperty;                             		// 0x0000 (0x003C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimVisibleKeyElement
// 0x0044
struct FUIAnimVisibleKeyElement
{
	struct FUIAnimVisibleKeyProperty                   AnimVisibleKeyProperty;                           		// 0x0000 (0x0044) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimClippingKeyElement
// 0x0028
struct FUIAnimClippingKeyElement
{
	struct FUIAnimClippingKeyProperty                  AnimClippingKeyProperty;                          		// 0x0000 (0x0028) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimGaugeKeyElement
// 0x0028
struct FUIAnimGaugeKeyElement
{
	struct FUIAnimGaugeKeyProperty                     AnimGaugeKeyProperty;                             		// 0x0000 (0x0028) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimTextFadeKeyElement
// 0x002C
struct FUIAnimTextFadeKeyElement
{
	struct FUIAnimTextFadeKeyProperty                  AnimTextFadeKeyProperty;                          		// 0x0000 (0x002C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimRadialGraphValueKeyElement
// 0x0024
struct FUIAnimRadialGraphValueKeyElement
{
	struct FUIAnimRadialGraphValueKeyProperty          AnimRadialGraphValueKeyProperty;                  		// 0x0000 (0x0024) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimCountingKeyElement
// 0x0034
struct FUIAnimCountingKeyElement
{
	struct FUIAnimCountingKeyProperty                  AnimCountingKeyProperty;                          		// 0x0000 (0x0034) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimKeyElement
// 0x0401
struct FUIAnimKeyElement
{
	struct FUIAnimDummyKeyElement                      AnimDummyKeyElement;                              		// 0x0000 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimPosKeyElement                        AnimPosKeyElement;                                		// 0x0014 (0x00E4) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimAlphaKeyElement                      AnimAlphaKeyElement;                              		// 0x00F8 (0x0054) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimScaleKeyElement                      AnimScaleKeyElement;                              		// 0x014C (0x0054) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimResizeKeyElement                     AnimResizeKeyElement;                             		// 0x01A0 (0x0054) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimScrollKeyElement                     AnimScrollKeyElement;                             		// 0x01F4 (0x0054) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimProgressKeyElement                   AnimProgressKeyElement;                           		// 0x0248 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimTexCoordsKeyElement                  AnimTexCoordsKeyElement;                          		// 0x0270 (0x003C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimColorKeyElement                      AnimColorKeyElement;                              		// 0x02AC (0x003C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimVisibleKeyElement                    AnimVisibleKeyElement;                            		// 0x02E8 (0x0044) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimClippingKeyElement                   AnimClippingKeyElement;                           		// 0x032C (0x0028) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimGaugeKeyElement                      AnimGaugeKeyElement;                              		// 0x0354 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimTextFadeKeyElement                   AnimTextFadeKeyElement;                           		// 0x037C (0x002C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimRadialGraphValueKeyElement           AnimRadialGraphValueKeyElement;                   		// 0x03A8 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimCountingKeyElement                   AnimCountingKeyElement;                           		// 0x03CC (0x0034) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Type;                                             		// 0x0400 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimNodeElement
// 0x0010
struct FUIAnimNodeElement
{
	struct FUIAnimNodeProperty                         AnimNodeProperty;                                 		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimKeyElement >                 AnimKeyElementArray;                              		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimObjectElement
// 0x00BC
struct FUIAnimObjectElement
{
	unsigned long                                      bNeedToConvert : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FUIAnimObjectProperty                       AnimObjectProperty;                               		// 0x0004 (0x008C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimObjectConvertedProperty              AnimObjectConvertedProperty;                      		// 0x0090 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimNodeElement >                AnimNodeElementArray;                             		// 0x00B0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimManager
// 0x0070
struct FUIAnimManager
{
	class UUIScreenObject*                             AnimTargetOwner;                                  		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0004 (0x003C) UNKNOWN PROPERTY: MapProperty Engine.UIRoot.UIAnimManager.AnimTargetInfoMap
	TArray< struct FUIAnimObject >                     AnimatingObjects;                                 		// 0x0040 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimObject >                     PendingObjects;                                   		// 0x004C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimObject >                     FinishedObjects;                                  		// 0x0058 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIAnimBackupData >                 AnimSimulateBackups;                              		// 0x0064 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAnimationSystemInfo
// 0x0014
struct FUIAnimationSystemInfo
{
	TArray< struct FUIAnimManager >                    AnimManagerArray;                                 		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bNeedToSimulate : 1;                              		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                InstanceIdIndex;                                  		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIInstanceRenderMaterial
// 0x0008
struct FUIInstanceRenderMaterial
{
	unsigned long                                      bUsed : 1;                                        		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UMaterialInstanceConstant*                   MaterialInstanceConstant;                         		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIRenderData
// 0x00B4
struct FUIRenderData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position;                                         		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OffsetLT;                                         		// 0x0014 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OffsetRB;                                         		// 0x001C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ColorLT;                                          		// 0x0024 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ColorRT;                                          		// 0x0034 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ColorLB;                                          		// 0x0044 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ColorRB;                                          		// 0x0054 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  Texture;                                          		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         TexCoords;                                        		// 0x0068 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bGray : 1;                                        		// 0x0078 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              GrayWeight;                                       		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Text;                                             		// 0x0080 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UFontSet*                                    FontSet;                                          		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TextScale;                                        		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              AnimScale;                                        		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                InverseTextIndex;                                 		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                InverseTextCount;                                 		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bClipping : 1;                                    		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              ClippingBounds[ 0x4 ];                            		// 0x00A4 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIInstanceRenderData
// 0x006C
struct FUIInstanceRenderData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   CenterPos;                                        		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                Color;                                            		// 0x0014 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  Texture;                                          		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         TexCoords;                                        		// 0x0028 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableGray : 1;                                  		// 0x0038 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              GrayWeightValue;                                  		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Text;                                             		// 0x0040 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UFontSet*                                    FontSet;                                          		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TextScale;                                        		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              AnimScale;                                        		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingLeft;                                     		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingTop;                                      		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingRight;                                    		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingBottom;                                   		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   MaterialInstanceConstant;                         		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIInstanceParticleInfo
// 0x000F
struct FUIInstanceParticleInfo
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Offset;                                           		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Alignment[ 0x2 ];                                 		// 0x000C (0x0002) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Order;                                            		// 0x000E (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIInstanceRenderObject
// 0x0074
struct FUIInstanceRenderObject
{
	int                                                InstRenderObjectId;                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIObject*                             SourceWidget;                                     		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIObject*                             RenderWidget;                                     		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIComp_DrawComponents*                      RenderComponent;                                  		// 0x000C (0x0004) [0x0000000000002008]              ( CPF_ExportObject | CPF_Transient )
	unsigned char                                      RenderOrder;                                      		// 0x0010 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   CenterPos;                                        		// 0x0014 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x001C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              Scale;                                            		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Alpha;                                            		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingBoundLeft;                                		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingBoundTop;                                 		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingBoundRight;                               		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingBoundBottom;                              		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHideSourceWidget : 1;                            		// 0x003C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bUseLocalSpacePos : 1;                            		// 0x003C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	int                                                NeedToRefreshMatParamFlag;                        		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIInstanceRenderData >             RenderDataArray;                                  		// 0x0044 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIInstanceParticleInfo >           ParticleArray;                                    		// 0x0050 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHasLocalDestBound : 1;                           		// 0x005C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FBoundInfo                                  LocalDestBound;                                   		// 0x0060 (0x0014) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIInstanceRenderSystemInfo
// 0x001C
struct FUIInstanceRenderSystemInfo
{
	TArray< struct FUIInstanceRenderMaterial >         InstanceRenderMaterialArray;                      		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIInstanceRenderObject >           InstanceRenderObjectArray;                        		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                InstanceIdIndex;                                  		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.TextStyleMask
// 0x0060
struct FTextStyleMask
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      AreaType;                                         		// 0x0004 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      TextStyleMaskType;                                		// 0x0005 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   RatioLT;                                          		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   RatioRB;                                          		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              StringPos;                                        		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StringSize;                                       		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   BoundPos;                                         		// 0x0028 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   BoundSize;                                        		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                Color;                                            		// 0x0038 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              FadeValue;                                        		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      DirectionType;                                    		// 0x004C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartValue;                                       		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndValue;                                         		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InterpolationSize;                                		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bNeedToRefresh : 1;                               		// 0x005C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIProviderScriptFieldValue
// 0x0054
struct FUIProviderScriptFieldValue
{
	struct FName                                       PropertyTag;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      PropertyType;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     StringValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	class USurface*                                    ImageValue;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ArrayValue;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	struct FUIRangeData                                RangeValue;                                       		// 0x0028 (0x0014) [0x0000000000000000]              
	struct FUniqueNetId                                NetIdValue;                                       		// 0x003C (0x0008) [0x0000000000000000]              
	struct FTextureCoordinates                         AtlasCoordinates;                                 		// 0x0044 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIProviderFieldValue
// 0x0004(0x0058 - 0x0054)
struct FUIProviderFieldValue : FUIProviderScriptFieldValue
{
	struct FPointer                                    CustomStringNode;                                 		// 0x0054 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIStyleReference
// 0x0020
struct FUIStyleReference
{
	struct FName                                       DefaultStyleTag;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      RequiredStyleClass;                               		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FSTYLE_ID                                   AssignedStyleID;                                  		// 0x000C (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UUIStyle*                                    ResolvedStyle;                                    		// 0x001C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIScreenValue
// 0x0006
struct FUIScreenValue
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScaleType;                                        		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Orientation;                                      		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIScreenValue_Extent
// 0x0006
struct FUIScreenValue_Extent
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScaleType;                                        		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Orientation;                                      		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIScreenValue_Position
// 0x000A
struct FUIScreenValue_Position
{
	float                                              Value[ 0x2 ];                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScaleType[ 0x2 ];                                 		// 0x0008 (0x0002) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIScreenValue_Bounds
// 0x0022
struct FUIScreenValue_Bounds
{
	float                                              Value[ 0x4 ];                                     		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScaleType[ 0x4 ];                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bInvalidated[ 0x4 ];                              		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              AspectRatio[ 0x2 ];                               		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AspectRatioAlignment[ 0x2 ];                      		// 0x0020 (0x0002) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIAnchorPosition
// 0x0006(0x0010 - 0x000A)
struct FUIAnchorPosition : FUIScreenValue_Position
{
	float                                              ZDepth;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.ScreenPositionRange
// 0x0000(0x000A - 0x000A)
struct FScreenPositionRange : FUIScreenValue_Position
{
};

// ScriptStruct Engine.UIRoot.UIScreenValue_DockPadding
// 0x0014
struct FUIScreenValue_DockPadding
{
	float                                              PaddingValue[ 0x4 ];                              		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PaddingScaleType[ 0x4 ];                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIScreenValue_AutoSizeRegion
// 0x000A
struct FUIScreenValue_AutoSizeRegion
{
	float                                              Value[ 0x2 ];                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EvalType[ 0x2 ];                                  		// 0x0008 (0x0002) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.AutoSizePadding
// 0x0000(0x000A - 0x000A)
struct FAutoSizePadding : FUIScreenValue_AutoSizeRegion
{
};

// ScriptStruct Engine.UIRoot.AutoSizeData
// 0x001C
struct FAutoSizeData
{
	struct FUIScreenValue_AutoSizeRegion               Extent;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FAutoSizePadding                            Padding;                                          		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoSizeEnabled : 1;                             		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIRenderingSubregion
// 0x0018
struct FUIRenderingSubregion
{
	struct FUIScreenValue_Extent                       ClampRegionSize;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FUIScreenValue_Extent                       ClampRegionOffset;                                		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ClampRegionAlignment;                             		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSubregionEnabled : 1;                            		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.InputEventSubscription
// 0x0014
struct FInputEventSubscription
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class UUIScreenObject* >                   Subscribers;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.DefaultEventSpecification
// 0x0008
struct FDefaultEventSpecification
{
	class UUIEvent*                                    EventTemplate;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      EventState;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x0008
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InputLinkIdx;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x002C
struct FSeqOpOutputLink
{
	TArray< struct FSeqOpOutputInputLink >             Links;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     LinkDesc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bHasImpulse : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	class USequenceOp*                                 LinkedOp;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ActivateDelay;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0040
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class USequenceVariable* >                 LinkedVariables;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     LinkDesc;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FName                                       LinkVar;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       PropertyName;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	unsigned long                                      bWriteable : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHidden : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                MinVars;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxVars;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                DrawX;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	class UProperty*                                   CachedProperty;                                   		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0024
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class USequenceEvent* >                    LinkedEvents;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     LinkDesc;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                DrawX;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0024
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InputKeyState;                                    		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSeqOpOutputInputLink >             TriggeredOps;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	TArray< class USequenceOp* >                       ActionsToExecute;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.StateInputKeyAction
// 0x0004(0x0028 - 0x0024)
struct FStateInputKeyAction : FInputKeyAction
{
	class UClass*                                      Scope;                                            		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.PlayerInteractionData
// 0x0008
struct FPlayerInteractionData
{
	class UUIObject*                                   FocusedControl;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIObject*                                   LastFocusedControl;                               		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIFocusPropagationData
// 0x0014
struct FUIFocusPropagationData
{
	class UUIObject*                                   FirstFocusTarget;                                 		// 0x0000 (0x0004) [0x0000000000002003]              ( CPF_Edit | CPF_Const | CPF_Transient )
	class UUIObject*                                   LastFocusTarget;                                  		// 0x0004 (0x0004) [0x0000000000002003]              ( CPF_Edit | CPF_Const | CPF_Transient )
	class UUIObject*                                   NextFocusTarget;                                  		// 0x0008 (0x0004) [0x0000000000002003]              ( CPF_Edit | CPF_Const | CPF_Transient )
	class UUIObject*                                   PrevFocusTarget;                                  		// 0x000C (0x0004) [0x0000000000002003]              ( CPF_Edit | CPF_Const | CPF_Transient )
	unsigned long                                      bPendingReceiveFocus : 1;                         		// 0x0010 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UINavigationData
// 0x0024
struct FUINavigationData
{
	class UUIObject*                                   NavigationTarget[ 0x4 ];                          		// 0x0000 (0x0010) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class UUIObject*                                   ForcedNavigationTarget[ 0x4 ];                    		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bNullOverride[ 0x4 ];                             		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIDockingSet
// 0x0038
struct FUIDockingSet
{
	class UUIObject*                                   OwnerWidget;                                      		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UUIObject*                                   TargetWidget[ 0x4 ];                              		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FUIScreenValue_DockPadding                  DockPadding;                                      		// 0x0014 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLockWidthWhenDocked : 1;                         		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLockHeightWhenDocked : 1;                        		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      TargetFace[ 0x4 ];                                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bResolved[ 0x4 ];                                 		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      bLinking[ 0x4 ];                                  		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIDockingNode
// 0x0005
struct FUIDockingNode
{
	class UUIObject*                                   Widget;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Face;                                             		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIRotation
// 0x0061
struct FUIRotation
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) MISSED OFFSET
	struct FMatrix                                     TransformMatrix;                                  		// 0x0010 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnchorPosition                           AnchorPosition;                                   		// 0x0050 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AnchorType;                                       		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIDataStoreBinding
// 0x0030
struct FUIDataStoreBinding
{
	class UUIDataStoreSubscriber*                      Subscriber;                                       		// 0x0000 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      RequiredFieldType;                                		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     MarkupString;                                     		// 0x000C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                BindingIndex;                                     		// 0x0018 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       DataStoreName;                                    		// 0x001C (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       DataStoreField;                                   		// 0x0024 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UUIDataStore*                                ResolvedDataStore;                                		// 0x002C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIStyleSubscriberReference
// 0x0010
struct FUIStyleSubscriberReference
{
	struct FName                                       SubscriberId;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UUIStyleResolver*                            Subscriber;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct Engine.UIRoot.StyleReferenceId
// 0x000C
struct FStyleReferenceId
{
	struct FName                                       StyleReferenceTag;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	class UProperty*                                   StyleProperty;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIImageAdjustmentData
// 0x0012
struct FUIImageAdjustmentData
{
	struct FUIScreenValue_Extent                       ProtectedRegion[ 0x2 ];                           		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AdjustmentType;                                   		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Alignment;                                        		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIStringCaretParameters
// 0x001C
struct FUIStringCaretParameters
{
	unsigned long                                      bDisplayCaret : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CaretType;                                        		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              CaretWidth;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CaretStyle;                                       		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                CaretPosition;                                    		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInterface*                          CaretMaterial;                                    		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIRoot.RenderParameters
// 0x0044
struct FRenderParameters
{
	float                                              DrawX;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DrawY;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DrawXL;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DrawYL;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   Scaling;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	class UFont*                                       DrawFont;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      TextAlignment[ 0x2 ];                             		// 0x001C (0x0002) [0x0000000000000000]              
	struct FVector2D                                   ImageExtent;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FTextureCoordinates                         DrawCoords;                                       		// 0x0028 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   SpacingAdjust;                                    		// 0x0038 (0x0008) [0x0000000000000000]              
	float                                              ViewportHeight;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.TextAutoScaleValue
// 0x0005
struct FTextAutoScaleValue
{
	float                                              MinScale;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AutoScaleMode;                                    		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIStyleOverride
// 0x0008
struct FUIStyleOverride
{
	float                                              Opacity;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverrideOpacity : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.UIRoot.UITextStyleOverride
// 0x0024(0x002C - 0x0008)
struct FUITextStyleOverride : FUIStyleOverride
{
	class UFont*                                       RenderFont;                                       		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Padding[ 0x2 ];                                   		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UFontSet*                                    FontSet;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpaceBetweenLines;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bJustification : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWordWrap : 1;                                    		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      JustificationType;                                		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TextAlignment[ 0x2 ];                             		// 0x0021 (0x0002) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ClipMode;                                         		// 0x0023 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TextDirection;                                    		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverridePadding : 1;                             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverrideWordWrap : 1;                            		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverrideAlignment : 1;                           		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverrideClipMode : 1;                            		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.UIRoot.UIImageStyleOverride
// 0x0028(0x0030 - 0x0008)
struct FUIImageStyleOverride : FUIStyleOverride
{
	struct FLinearColor                                DrawColor;                                        		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTextureCoordinates >               CoordinatesArray;                                 		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImageScale[ 0x2 ];                                		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverrideDrawColor : 1;                           		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverrideCoordinates : 1;                         		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverrideScale : 1;                               		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.UIRoot.UICombinedStyleData
// 0x0040
struct FUICombinedStyleData
{
	struct FLinearColor                                ImageColor;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              TextPadding[ 0x2 ];                               		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              ImageScale[ 0x2 ];                                		// 0x0018 (0x0008) [0x0000000000000000]              
	class UFont*                                       RenderFont;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	class UFontSet*                                    FontSet;                                          		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpaceBetweenLines;                                		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bWordWrap : 1;                                    		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      TextAlignment[ 0x2 ];                             		// 0x0030 (0x0002) [0x0000000000000000]              
	unsigned char                                      TextClipMode;                                     		// 0x0032 (0x0001) [0x0000000000000000]              
	unsigned char                                      TextDirection;                                    		// 0x0033 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   TextScale;                                        		// 0x0034 (0x0008) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x003C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct Engine.UIRoot.UIStringNodeModifier.ModifierData
// 0x0010
struct FModifierData
{
	class UUIStyle_Data*                               Style;                                            		// 0x0000 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UFontSet* >                          InlineFontSetStack;                               		// 0x0004 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIStringNodeModifier
// 0x0090
struct FUIStringNodeModifier
{
	struct FUICombinedStyleData                        CustomStyleData;                                  		// 0x0000 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FUICombinedStyleData                        BaseStyleData;                                    		// 0x0040 (0x0040) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< struct FModifierData >                     ModifierStack;                                    		// 0x0080 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UUIState*                                    CurrentMenuState;                                 		// 0x008C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIStringNode
// 0x002C
struct FUIStringNode
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UUIDataStore*                                NodeDataStore;                                    		// 0x0004 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    ParentNode;                                       		// 0x0008 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FString                                     SourceText;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Extent;                                           		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Scaling;                                          		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceWrap : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.UIRoot.UIStringNode_Text
// 0x004C(0x0078 - 0x002C)
struct FUIStringNode_Text : FUIStringNode
{
	struct FString                                     RenderedText;                                     		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FUICombinedStyleData                        NodeStyleParameters;                              		// 0x0038 (0x0040) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIStringNode_Image
// 0x001C(0x0048 - 0x002C)
struct FUIStringNode_Image : FUIStringNode
{
	struct FVector2D                                   ForcedExtent;                                     		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         TexCoords;                                        		// 0x0034 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UUITexture*                                  RenderedImage;                                    		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIStringNode_NestedMarkupParent
// 0x0000(0x002C - 0x002C)
struct FUIStringNode_NestedMarkupParent : FUIStringNode
{
};

// ScriptStruct Engine.UIRoot.UIStringNode_FormattedNodeParent
// 0x0000(0x0078 - 0x0078)
struct FUIStringNode_FormattedNodeParent : FUIStringNode_Text
{
};

// ScriptStruct Engine.UIRoot.WrappedStringElement
// 0x0014
struct FWrappedStringElement
{
	struct FString                                     Value;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   LineExtent;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIMouseCursor
// 0x000C
struct FUIMouseCursor
{
	struct FName                                       CursorStyle;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UUITexture*                                  Cursor;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       InputKeyName;                                     		// 0x0008 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      EventType;                                        		// 0x0010 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              InputDelta;                                       		// 0x0014 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              DeltaTime;                                        		// 0x0018 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bAltPressed : 1;                                  		// 0x001C (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )
	unsigned long                                      bCtrlPressed : 1;                                 		// 0x001C (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      bShiftPressed : 1;                                		// 0x001C (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008(0x0028 - 0x0020)
struct FSubscribedInputEventParameters : FInputEventParameters
{
	struct FName                                       InputAliasName;                                   		// 0x0020 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AdjacentAxisInputKey;                             		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bEmulateButtonPress : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       InputKeyToEmulate[ 0x2 ];                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      ModifierKeyFlags;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIInputActionAlias
// 0x0014
struct FUIInputActionAlias
{
	struct FName                                       InputAliasName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FRawInputKeyEventData >             LinkedInputKeys;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIInputAliasValue
// 0x000C
struct FUIInputAliasValue
{
	unsigned char                                      ModifierFlagMask;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       InputAliasName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIInputAliasMap
// 0x003C
struct FUIInputAliasMap
{
	struct FMultiMap_Mirror                            InputAliasLookupTable;                            		// 0x0000 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIInputAliasStateMap
// 0x001C
struct FUIInputAliasStateMap
{
	struct FString                                     StateClassName;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	class UClass*                                      State;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FUIInputActionAlias >               StateInputAliases;                                		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIInputAliasClassMap
// 0x0094
struct FUIInputAliasClassMap
{
	struct FString                                     WidgetClassName;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	class UClass*                                      WidgetClass;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FUIInputAliasStateMap >             WidgetStates;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x001C (0x003C) UNKNOWN PROPERTY: MapProperty Engine.UIRoot.UIInputAliasClassMap.StateLookupTable
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0058 (0x003C) UNKNOWN PROPERTY: MapProperty Engine.UIRoot.UIInputAliasClassMap.StateReverseLookupTable
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x0018
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInVolumeLevel;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutVolumeLevel;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x001C
struct FScreenMessageString
{
	int                                                Key;                                              		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ScreenMessage;                                    		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      DisplayColor;                                     		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeToDisplay;                                    		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentTimeDisplayed;                             		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.WorldInfo.T1LevelNodeInfo
// 0x000C
struct FT1LevelNodeInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       NodeName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.T1LevelTreeNode
// 0x0018
struct FT1LevelTreeNode
{
	struct FT1LevelNodeInfo                            CurrentInfo;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< int >                                      ChildId;                                          		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0020
struct FNetViewer
{
	class APlayerController*                           InViewer;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Viewer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     ViewLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     ViewDir;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Fluid : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Cloth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      SoftBody : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	unsigned long                                      bUseHardware : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFixedTimeStep : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              TimeStep;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxSubSteps;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                             		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FPhysXSimulationProperties                  CompartmentFluid;                                 		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FPhysXSimulationProperties                  CompartmentCloth;                                 		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                              		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                ParticlesLodMin;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ParticlesLodMax;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PacketsPerPhysXParticleSystemMax;                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyCylindricalPacketCulling : 1;               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              SpawnLodVsFifoBias;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                         		// 0x0000 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SequenceEvent.QueuedActivationInfo
// 0x0018
struct FQueuedActivationInfo
{
	class AActor*                                      InOriginator;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      InInstigator;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ActivateIndices;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bPushTop : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.UIComp_DrawStringEditbox.UIStringSelectionRegion
// 0x0008
struct FUIStringSelectionRegion
{
	int                                                SelectionStartCharIndex;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SelectionEndCharIndex;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x002C
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 LeanLeft;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 LeanRight;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 Climb;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 Mantle;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SlipLeft;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SlipRight;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SwatLeft;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SwatRight;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 PopUp;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 PlayerOnly;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0008(0x001C - 0x0014)
struct FCoverReference : FActorReference
{
	int                                                SlotIdx;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Direction;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.LinkSlotHelper
// 0x0010
struct FLinkSlotHelper
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Slots;                                            		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x0008
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SlotIdx;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.TargetInfo
// 0x000C
struct FTargetInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SlotIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Direction;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0034
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LtSlotIdx;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RtSlotIdx;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LtToRtPct;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Tangent;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	unsigned char                                      SrcType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SrcAction;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      DestType;                                         		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      DestAction;                                       		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x003C
struct FFireLink
{
	struct FActorReference                             TargetMarker;                                     		// 0x0000 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FFireLinkItem >                     Items;                                            		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastTargetMarkerLocation;                         		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastSrcMarkerLocation;                            		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned long                                      bFallbackLink : 1;                                		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x0015
struct FExposedLink
{
	struct FActorReference                             TargetMarker;                                     		// 0x0000 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ExposedScale;                                     		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.DangerLink
// 0x0018
struct FDangerLink
{
	struct FActorReference                             DangerNav;                                        		// 0x0000 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                DangerCost;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x00C0
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SlotValidAfterTime;                               		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ForceCoverType;                                   		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverType;                                        		// 0x0009 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocationOffset;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    RotationOffset;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            Actions;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	TArray< struct FFireLink >                         FireLinks;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	TArray< struct FFireLink >                         ForcedFireLinks;                                  		// 0x003C (0x000C) [0x0000000000000000]              
	TArray< struct FFireLink >                         RejectedFireLinks;                                		// 0x0048 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FExposedLink >                      ExposedFireLinks;                                 		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FDangerLink >                       DangerLinks;                                      		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FCoverReference                             MantleTarget;                                     		// 0x006C (0x001C) [0x0000000000000000]              
	TArray< struct FCoverReference >                   TurnTarget;                                       		// 0x0088 (0x000C) [0x0000000000000000]              
	TArray< struct FCoverReference >                   SlipTarget;                                       		// 0x0094 (0x000C) [0x0000000000000000]              
	TArray< struct FCoverReference >                   OverlapClaims;                                    		// 0x00A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLeanLeft : 1;                                    		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLeanRight : 1;                                   		// 0x00AC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bForceCanPopUp : 1;                               		// 0x00AC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bCanPopUp : 1;                                    		// 0x00AC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bCanMantle : 1;                                   		// 0x00AC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bCanClimbUp : 1;                                  		// 0x00AC (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bForceCanCoverSlip_Left : 1;                      		// 0x00AC (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bForceCanCoverSlip_Right : 1;                     		// 0x00AC (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bCanCoverSlip_Left : 1;                           		// 0x00AC (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bCanCoverSlip_Right : 1;                          		// 0x00AC (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bCanSwatTurn_Left : 1;                            		// 0x00AC (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bCanSwatTurn_Right : 1;                           		// 0x00AC (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x00AC (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bAllowPopup : 1;                                  		// 0x00AC (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bAllowMantle : 1;                                 		// 0x00AC (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      bAllowCoverSlip : 1;                              		// 0x00AC (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      bAllowClimbUp : 1;                                		// 0x00AC (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      bAllowSwatTurn : 1;                               		// 0x00AC (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      bForceNoGroundAdjust : 1;                         		// 0x00AC (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      bPlayerOnly : 1;                                  		// 0x00AC (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      bSelected : 1;                                    		// 0x00AC (0x0004) [0x0000000000002000] [0x00100000] ( CPF_Transient )
	float                                              LeanTraceDist;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	class ACoverSlotMarker*                            SlotMarker;                                       		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LocationDescription;                              		// 0x00B8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFailedToFindSurface : 1;                         		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ManualCoverType;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0034
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            SlotsEnabled;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            SlotsDisabled;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            SlotsAdjusted;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	TArray< struct FManualCoverTypeInfo >              SlotsCoverTypeChanged;                            		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ForcedReachSpec.BakedVertex
// 0x001C
struct FBakedVertex
{
	struct FVector                                     pos;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   UV[ 0x2 ];                                        		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CullDistance;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              KeyOut;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      TangentsValid : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TangentOut;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      IntepMode;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIObject.WidgetClippingBoundInfo
// 0x0008
struct FWidgetClippingBoundInfo
{
	unsigned char                                      ClippingType;                                     		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIObject*                             ClippingBoundWidget;                              		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIObject.CustomDragInfo
// 0x001C
struct FCustomDragInfo
{
	class UUIObject*                                   DragWidget;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIObject*                                   LastDestCandidate;                                		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      Enable : 1;                                       		// 0x0008 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      Lock : 1;                                         		// 0x0008 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      DragEvent : 1;                                    		// 0x0008 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      DropEvent : 1;                                    		// 0x0008 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FVector2D                                   MousePos;                                         		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       DragKey;                                          		// 0x0014 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIObject.UIParticleRenderInfo
// 0x0008
struct FUIParticleRenderInfo
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Order;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIObject.UIParticleUpdateInfo
// 0x000E
struct FUIParticleUpdateInfo
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Offset;                                           		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Alignment[ 0x2 ];                                 		// 0x000C (0x0002) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIObject.UIParticle
// 0x001C
struct FUIParticle
{
	struct FVector2D                                   Scale;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Offset;                                           		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Horizontal;                                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Vertical;                                         		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                InstanceId;                                       		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIObject.WidgetContainDataInfo
// 0x0038
struct FWidgetContainDataInfo
{
	int                                                ContainDataId;                                    		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position;                                         		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   AnimOffset;                                       		// 0x0014 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIsModified : 1;                                  		// 0x001C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bRelocateAnim : 1;                                		// 0x001C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bHasLocalDestBound : 1;                           		// 0x001C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FBoundInfo                                  LocalDestBound;                                   		// 0x0020 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	int                                                PositionAnimInstId;                               		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIObject.WidgetContainerSystemInfo
// 0x000C
struct FWidgetContainerSystemInfo
{
	TArray< class UCustomUIObject* >                   ContainerArray;                                   		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIObject.WidgetContainDataSystemInfo
// 0x00C0
struct FWidgetContainDataSystemInfo
{
	TArray< struct FWidgetContainDataInfo >            ContainDataInfoArray;                             		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x000C (0x003C) UNKNOWN PROPERTY: MapProperty Engine.CustomUIObject.WidgetContainDataSystemInfo.ContainDataIdToIndexMap
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0048 (0x003C) UNKNOWN PROPERTY: MapProperty Engine.CustomUIObject.WidgetContainDataSystemInfo.MappedContainers
	unsigned char                                      UnknownData02[ 0x3C ];                            		// 0x0084 (0x003C) UNKNOWN PROPERTY: MapProperty Engine.CustomUIObject.WidgetContainDataSystemInfo.MappedContainDataIndexes
};

// ScriptStruct Engine.CustomUIObject.ResizeLink
// 0x0014
struct FResizeLink
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset1;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset2;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIObject*                                   LinkUIObject;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIObject*                                   LinkUIObject2;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CustomUIObject.DrawComponentInfo
// 0x0010
struct FDrawComponentInfo
{
	class UClass*                                      WidgetClass;                                      		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      WidgetState;                                      		// 0x0004 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bRender : 1;                                      		// 0x0008 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UUIComp_DrawComponents*                      DrawComponent;                                    		// 0x000C (0x0004) [0x0000000000002008]              ( CPF_ExportObject | CPF_Transient )
};

// ScriptStruct Engine.CustomUIArrow.UIArrowLine
// 0x0020
struct FUIArrowLine
{
	int                                                StartColumn;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartRow;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EndColumn;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EndRow;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Color;                                            		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TextParser.Text
// 0x0010
struct FText
{
	class UFontSet*                                    FontSet;                                          		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Text;                                             		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.EditTextParser.EditTextNode
// 0x0010
struct FEditTextNode
{
	struct FText                                       Text;                                             		// 0x0000 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.XmlAttribute
// 0x0018
struct FXmlAttribute
{
	struct FString                                     AttributeName;                                    		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     AttributeValue;                                   		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.XmlNode
// 0x0018
struct FXmlNode
{
	struct FString                                     ElementName;                                      		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FXmlAttribute >                     Attributes;                                       		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.XmlTextNode
// 0x000C
struct FXmlTextNode
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.ExportXmlNode
// 0x0034
struct FExportXmlNode
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FXmlNode                                    XmlNode;                                          		// 0x0004 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FXmlTextNode                                XmlTextNode;                                      		// 0x001C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FExportXmlNode >                    Children;                                         		// 0x0028 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.TextNode
// 0x003C
struct FTextNode
{
	struct FText                                       Text;                                             		// 0x0000 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FText                                       Subscript;                                        		// 0x0010 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   TextExtent;                                       		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   SubscriptExtent;                                  		// 0x0028 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bSubscript : 1;                                   		// 0x0030 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                TimerId;                                          		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TimerType;                                        		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.Image
// 0x002C
struct FImage
{
	class UTexture2D*                                  Image;                                            		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              U;                                                		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              V;                                                		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              UL;                                               		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VL;                                               		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                Color;                                            		// 0x0014 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0024 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.EditTextParser.EditIconNode
// 0x0018
struct FEditIconNode
{
	TArray< struct FImage >                            ImageArray;                                       		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              CustomScale;                                      		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TextFitScale;                                     		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableScale : 1;                                 		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.EditTextParser.EditParseNode
// 0x0038
struct FEditParseNode
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Extent;                                           		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingExtentY;                                  		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FEditTextNode                               TextNode;                                         		// 0x0010 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FEditIconNode                               IconNode;                                         		// 0x0020 (0x0018) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.EditTextParser.EditUnitNode
// 0x0038
struct FEditUnitNode
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                LinkId;                                           		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     LinkTextId;                                       		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIgnoreInput : 1;                                 		// 0x001C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bLineFeed : 1;                                    		// 0x001C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FVector2D                                   Extent;                                           		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingExtentY;                                  		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FEditParseNode >                    ParseNodes;                                       		// 0x002C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.EditTextParser.EditLineNode
// 0x0018
struct FEditLineNode
{
	struct FVector2D                                   Extent;                                           		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingExtentY;                                  		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FEditUnitNode >                     UnitNodes;                                        		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.IconNode
// 0x0022
struct FIconNode
{
	TArray< struct FImage >                            ImageArray;                                       		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   ImageExtent;                                      		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              CustomScale;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TextFitScale;                                     		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableScale : 1;                                 		// 0x001C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      HorizontalAlignment;                              		// 0x0020 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VerticalAlignment;                                		// 0x0021 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.ParseNode
// 0x0084
struct FParseNode
{
	struct FVector2D                                   Extent;                                           		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingExtentY;                                  		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     LinkTextId;                                       		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                LinkId;                                           		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIgnoreInput : 1;                                 		// 0x001C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bLineFeed : 1;                                    		// 0x001C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bBullet : 1;                                      		// 0x001C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	int                                                Type;                                             		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTextNode                                   TextNode;                                         		// 0x0024 (0x003C) [0x0000000000002000]              ( CPF_Transient )
	struct FIconNode                                   IconNode;                                         		// 0x0060 (0x0024) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.ParagraphNode
// 0x00B4
struct FParagraphNode
{
	float                                              LeftMargin;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RightMargin;                                      		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TopMargin;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BottomMargin;                                     		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Indent;                                           		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bWordWrap : 1;                                    		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bJustification : 1;                               		// 0x0014 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDisableParagraphBreak : 1;                       		// 0x0014 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              SpaceBetweenLines;                                		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      JustificationType;                                		// 0x001C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      HorizontalAlignment;                              		// 0x001D (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VerticalAlignment;                                		// 0x001E (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      BulletHorizontalAlignment;                        		// 0x001F (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FParseNode                                  Bullets;                                          		// 0x0020 (0x0084) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableIndent : 1;                                		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableWordWrap : 1;                              		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bEnableHorizontalAlignment : 1;                   		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bEnableVerticalAlignment : 1;                     		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bEnableJustification : 1;                         		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bEnableSpaceBetweenLines : 1;                     		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bEnableBullets : 1;                               		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	TArray< struct FParseNode >                        SourceNodes;                                      		// 0x00A8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIComp_DrawStringList.StringListItem
// 0x002C
struct FStringListItem
{
	unsigned long                                      bNeedRecreateSourceNodes : 1;                     		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FString                                     SourceText;                                       		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FParagraphNode >                    SourceNodes;                                      		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector2D >                         LineExtent;                                       		// 0x001C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIComp_UIString*                      ValueString;                                      		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.LineNode
// 0x0038
struct FLineNode
{
	TArray< struct FParseNode >                        Nodes;                                            		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Extent;                                           		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClippingExtentY;                                  		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LeftMargin;                                       		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RightMargin;                                      		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TopMargin;                                        		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BottomMargin;                                     		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ParagraphIndex;                                   		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bJustification : 1;                               		// 0x002C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      HorizontalAlignment;                              		// 0x0030 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VerticalAlignment;                                		// 0x0031 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      JustificationType;                                		// 0x0032 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableHorizontalAlignment : 1;                   		// 0x0034 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableVerticalAlignment : 1;                     		// 0x0034 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bEnableJustification : 1;                         		// 0x0034 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.AttachToCursorInfo
// 0x000E
struct FAttachToCursorInfo
{
	class UCustomUIObject*                             AttachWidget;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   Offset;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      Horizontal;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      Vertical;                                         		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIGameMainScene.RenderCustomizeLinkInfo
// 0x0024
struct FRenderCustomizeLinkInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TargetIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   StartPos;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   EndPos;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   Size;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              RotateDegree;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIGameMainScene.WidgetWorldInfo
// 0x0014
struct FWidgetWorldInfo
{
	class UCustomUIObject*                             Widget;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              PlateHeight;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIGameMainScene.WidgetScreenInfo
// 0x001C
struct FWidgetScreenInfo
{
	class UCustomUIObject*                             Widget;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Left;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Right;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Top;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Bottom;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Depth;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIGameMainScene.CustomizeLinkInfo
// 0x001C
struct FCustomizeLinkInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              Offset1;                                          		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Offset2;                                          		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Orientation;                                      		// 0x000C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIObject*                             LinkSource;                                       		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIObject*                             LinkTarget1;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIObject*                             LinkTarget2;                                      		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.CustomizeGroupInfo
// 0x0014
struct FCustomizeGroupInfo
{
	int                                                GroupId;                                          		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bPinned : 1;                                      		// 0x0004 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	TArray< class UCustomUIObject* >                   WidgetArray;                                      		// 0x0008 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.Timer
// 0x001C
struct FTimer
{
	int                                                TimerId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InstanceId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeLeft;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< float >                                    TimeEventArray;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIGameMainScene.WidgetDelayParticleInfo
// 0x003C
struct FWidgetDelayParticleInfo
{
	struct FQWord                                      ParticleId;                                       		// 0x0000 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UCustomUIObject*                             UpdateWidget;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class UCustomUIObject*                             RenderWidget;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      HorizontalAlignment;                              		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      VerticalAlignment;                                		// 0x0011 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   Offset;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector                                     Scale;                                            		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              DelayTimeLeft;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Order;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     ParticleSystemPath;                               		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIGameMainScene.ChildrenSceneInfo
// 0x0014
struct FChildrenSceneInfo
{
	class UUIScene*                                    ChildScene;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsedPublisherNCSOFT : 1;                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUsedPublisherTENCENT : 1;                        		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUsedPublisherINNOVA : 1;                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUsedPublisherNCJAPAN : 1;                        		// 0x0004 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUsedPublisherSEA : 1;                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bUsedPublisherNCTAIWAN : 1;                       		// 0x0004 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bUsedPublisherNCWEST : 1;                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	struct FString                                     ChildScenePath;                                   		// 0x0008 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.RegionMaskMapInfo
// 0x0010
struct FRegionMaskMapInfo
{
	class UImageSet*                                   RegionImageSet;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< unsigned char >                            RegionMaskMapColorBuffer;                         		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UISound
// 0x0008
struct FUISound
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAudioComponent*                             AudioComponent;                                   		// 0x0004 (0x0004) [0x0000000000002008]              ( CPF_ExportObject | CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIVisibleCommand
// 0x0010
struct FUIVisibleCommand
{
	struct FUIActionVisibleCommandProperty             VisibleProperty;                                  		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIActionVisibleCommandProperty >   BackupVisibleProperties;                          		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UISoundCommand
// 0x001C
struct FUISoundCommand
{
	struct FUIActionSoundCommandProperty               SoundProperty;                                    		// 0x0000 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationTime;                                     		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FQWord                                      ExcuteId;                                         		// 0x0014 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIParticleCommand
// 0x0034
struct FUIParticleCommand
{
	struct FUIActionParticleCommandProperty            ParticleProperty;                                 		// 0x0000 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationTime;                                     		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FQWord                                      ExcuteId;                                         		// 0x002C (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIAnimationCommand
// 0x0014
struct FUIAnimationCommand
{
	TArray< struct FUIAnimObjectElement >              AnimObjElementArray;                              		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FQWord                                      ExcuteId;                                         		// 0x000C (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UITextCommand
// 0x001C
struct FUITextCommand
{
	struct FUIActionTextCommandProperty                TextProperty;                                     		// 0x0000 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIActionTextCommandProperty >      BackupTextProperties;                             		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIImageCommand
// 0x0040
struct FUIImageCommand
{
	struct FUIActionImageCommandProperty               ImageProperty;                                    		// 0x0000 (0x0034) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIActionImageCommandProperty >     BackupImageProperties;                            		// 0x0034 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIResizeLinkCommand
// 0x0034
struct FUIResizeLinkCommand
{
	struct FUIActionResizeLinkCommandProperty          ResizeLinkProperty;                               		// 0x0000 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIActionResizeLinkCommandProperty > BackupResizeLinkProperties;                       		// 0x0028 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIInstRenderObjCommand
// 0x0028
struct FUIInstRenderObjCommand
{
	struct FUIInstRenderObjProperty                    InstRenderObjProperty;                            		// 0x0000 (0x001C) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationTime;                                     		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FQWord                                      ExcuteId;                                         		// 0x0020 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UICommand
// 0x0164
struct FUICommand
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCompleted : 1;                                   		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                LoopCount;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Alias;                                            		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     TargetLinkAlias;                                  		// 0x001C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FUITargetInfo                               TargetInfo;                                       		// 0x0028 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FUIVisibleCommand                           UIVisibleCommand;                                 		// 0x0038 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FUISoundCommand                             UISoundCommand;                                   		// 0x0048 (0x001C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIParticleCommand                          UIParticleCommand;                                		// 0x0064 (0x0034) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAnimationCommand                         UIAnimationCommand;                               		// 0x0098 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	struct FUITextCommand                              UITextCommand;                                    		// 0x00AC (0x001C) [0x0000000000002000]              ( CPF_Transient )
	struct FUIImageCommand                             UIImageCommand;                                   		// 0x00C8 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	struct FUIResizeLinkCommand                        UIResizeLinkCommand;                              		// 0x0108 (0x0034) [0x0000000000002000]              ( CPF_Transient )
	struct FUIInstRenderObjCommand                     UIInstRenderObjCommand;                           		// 0x013C (0x0028) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIAction
// 0x0054
struct FUIAction
{
	struct FUIActionProperty                           ActionProperty;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCompleteEvent : 1;                               		// 0x0008 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< struct FUICommand >                        UICommandArray;                                   		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0018 (0x003C) UNKNOWN PROPERTY: MapProperty Engine.CustomUIGameMainScene.UIAction.InstTargetInfoMap
};

// ScriptStruct Engine.UIActionGroupData.UIActionCustomTarget
// 0x000C
struct FUIActionCustomTarget
{
	struct FString                                     WidgetTag;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIActionGroupData.UIActionInfo
// 0x0024
struct FUIActionInfo
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FUIActionCustomTarget                       CustomTarget;                                     		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActionOrder;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartTime;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnable : 1;                                      		// 0x0020 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIActionEntry
// 0x0078
struct FUIActionEntry
{
	struct FUIActionInfo                               ActionInfo;                                       		// 0x0000 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	struct FUIAction                                   Action;                                           		// 0x0024 (0x0054) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIActionGroup
// 0x001C
struct FUIActionGroup
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentOrder;                                     		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUIActionEntry >                    UIActionEntryArray;                               		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIgnoreReplay : 1;                                		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bCompleteEvent : 1;                               		// 0x0018 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIActionGroupRemains
// 0x0010
struct FUIActionGroupRemains
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           UIActionEntryIdArray;                             		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIActionCustomInfo
// 0x001C
struct FUIActionCustomInfo
{
	struct FString                                     UIActionEntryId;                                  		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDisabled : 1;                                    		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FString                                     CustomWidgetTag;                                  		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIGameMainScene.UIParticleAnimInfo
// 0x0008
struct FUIParticleAnimInfo
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                AnimInstId;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIImageText.ImageTextInfo
// 0x0010
struct FImageTextInfo
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UImageSet*                                   ImageSet;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FDouble                                     NextRepeatTime;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004(0x0014 - 0x0010)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Material.MaterialInput
// 0x001C
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaskR;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaskG;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaskB;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaskA;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                GCC64_Padding;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008(0x0024 - 0x001C)
struct FColorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      Constant;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008(0x0024 - 0x001C)
struct FScalarMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Constant;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010(0x002C - 0x001C)
struct FVectorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Constant;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C(0x0028 - 0x001C)
struct FVector2MaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ConstantX;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ConstantY;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CustomUIMiniMap.DrawLine
// 0x0054
struct FDrawLine
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MapInfoId;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ExportIndex;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   CenterPosition;                                   		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector2D >                         PositionArray;                                    		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector2D >                         SplinePositionArray;                              		// 0x0020 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      SplinePositionIndexArray;                         		// 0x002C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< float >                                    LifeTimeArray;                                    		// 0x0038 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      Color;                                            		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawingTimeLeft;                                  		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ExportTimeLeft;                                   		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bComplete : 1;                                    		// 0x0050 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bRefresh : 1;                                     		// 0x0050 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapPosition
// 0x0020
struct FMapPosition
{
	struct FVector2D                                   Position0;                                        		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position1;                                        		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position2;                                        		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position3;                                        		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapCoordinate
// 0x0020
struct FMapCoordinate
{
	struct FVector2D                                   TexCoord0;                                        		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   TexCoord1;                                        		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   TexCoord2;                                        		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   TexCoord3;                                        		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapInfoData
// 0x0010
struct FMapInfoData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Scale;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UImageSet*                                   MapImageSet;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UImageSet*                                   MapMaskImageSet;                                  		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MarkingInfo
// 0x0018
struct FMarkingInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MapInfoId;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position;                                         		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   CenterPosition;                                   		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapAnimationInfo
// 0x0040
struct FMapAnimationInfo
{
	unsigned long                                      IsBegun : 1;                                      		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      AnimationType;                                    		// 0x0004 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              AnimationElapsedTime;                             		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              AnimationTime;                                    		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                StartMapId;                                       		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                EndMapId;                                         		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   StartPosition;                                    		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   EndPosition;                                      		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   StartRenderPosition;                              		// 0x0028 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   EndRenderPosition;                                		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                StartRotateDegree;                                		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                EndRotateDegree;                                  		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapUnit
// 0x00EC
struct FMapUnit
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                InstanceId;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MapInfoId;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position;                                         		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0014 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OutOfSightSize;                                   		// 0x001C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OutGlowSize;                                      		// 0x0024 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OutGlowOutOfSightSize;                            		// 0x002C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   RotateCenter;                                     		// 0x0034 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FQWord                                      HiLabel;                                          		// 0x003C (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FQWord                                      LowLabel;                                         		// 0x0044 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                RotateDegree;                                     		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                InteractionFlag;                                  		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Opacity;                                          		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Scale;                                            		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UImageSet* >                         ImageSetArray;                                    		// 0x005C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UImageSet* >                         OutOfSightImageSetArray;                          		// 0x0068 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FMapCoordinate >                    TexCoordArray;                                    		// 0x0074 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FMapPosition                                Bounds;                                           		// 0x0080 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	struct FMapPosition                                OutGlowBounds;                                    		// 0x00A0 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   RenderPosition;                                   		// 0x00C0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   RenderSize;                                       		// 0x00C8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OutGlowRenderPosition;                            		// 0x00D0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OutGlowRenderSize;                                		// 0x00D8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bZoom : 1;                                        		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsOutOfSight : 1;                                		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIsRender : 1;                                    		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIsTextRender : 1;                                		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bRotate : 1;                                      		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bRefresh : 1;                                     		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	int                                                AlphaAnimInstId;                                  		// 0x00E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                OutGlowAlphaAnimInstId;                           		// 0x00E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapParticleInfo
// 0x001C
struct FMapParticleInfo
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MapInfoId;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position;                                         		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   RenderPosition;                                   		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bRefresh : 1;                                     		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.UnitMaskMapBuffer
// 0x000C
struct FUnitMaskMapBuffer
{
	TArray< unsigned char >                            Buffer;                                           		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapAnimationFunc
// 0x0010
struct FMapAnimationFunc
{
	TArray< struct FMapAnimationInfo >                 MapAnimationInfoArray;                            		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIMiniMap*                            Owner;                                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapDragFunc
// 0x0004
struct FMapDragFunc
{
	class UCustomUIMiniMap*                            Owner;                                            		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapMarkLineDrawFunc
// 0x0020
struct FMapMarkLineDrawFunc
{
	unsigned long                                      bIsMarking : 1;                                   		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsLineDrawing : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FVector2D                                   StartPosition;                                    		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   DeltaPosition;                                    		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawingSamplingLeftTime;                          		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIMiniMap*                            Owner;                                            		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapSetMapInfoFunc
// 0x0008
struct FMapSetMapInfoFunc
{
	int                                                MapInfoId;                                        		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIMiniMap*                            Owner;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapSetCenterPositionFunc
// 0x000C
struct FMapSetCenterPositionFunc
{
	struct FVector2D                                   CenterPos;                                        		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIMiniMap*                            Owner;                                            		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapSetMiniMapModeFunc
// 0x000C
struct FMapSetMiniMapModeFunc
{
	int                                                MapMode;                                          		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      Event : 1;                                        		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UCustomUIMiniMap*                            Owner;                                            		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapSetRotateFunc
// 0x0008
struct FMapSetRotateFunc
{
	int                                                RotateDegree;                                     		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCustomUIMiniMap*                            Owner;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIMiniMap.MapFunc
// 0x0060
struct FMapFunc
{
	unsigned char                                      MapFunction;                                      		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FMapAnimationFunc                           MapAnimationFunc;                                 		// 0x0004 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FMapDragFunc                                MapDragFunc;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMapMarkLineDrawFunc                        MapMarkLineDrawFunc;                              		// 0x0018 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	struct FMapSetMapInfoFunc                          MapSetMapInfoFunc;                                		// 0x0038 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FMapSetCenterPositionFunc                   MapSetCenterPositionFunc;                         		// 0x0040 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FMapSetMiniMapModeFunc                      MapSetMiniMapModeFunc;                            		// 0x004C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FMapSetRotateFunc                           MapSetRotateFunc;                                 		// 0x0058 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIProgressBar.ProgressRenderData
// 0x0038
struct FProgressRenderData
{
	class USurface*                                    Surface;                                          		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawX;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawY;                                            		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawXL;                                           		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DrawYL;                                           		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         TexCoords;                                        		// 0x0014 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                Color;                                            		// 0x0024 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              GrayWeightValue;                                  		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIProgressBar.ProgressSectionData
// 0x0046
struct FProgressSectionData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct Fsqword                                     EndProgressValue;                                 		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ActiveProgressColor;                              		// 0x000C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                PassiveProgressColor;                             		// 0x001C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  SeparatorTexture;                                 		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         SeparatorCoords;                                  		// 0x0030 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              SeparatorScale;                                   		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SeparatorHorizontalAlign;                         		// 0x0044 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SeparatorVerticalAlign;                           		// 0x0045 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIProgressBar.ProgressColorSectionData
// 0x0020
struct FProgressColorSectionData
{
	struct Fsqword                                     StartProgressValue;                               		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct Fsqword                                     EndProgressValue;                                 		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                ProgressColor;                                    		// 0x0010 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIProgressBar.ProgressMarkImageData
// 0x0022
struct FProgressMarkImageData
{
	struct Fsqword                                     ProgressValue;                                    		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  Texture;                                          		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         Coords;                                           		// 0x000C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      HorizontalAlign;                                  		// 0x0020 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VerticalAlign;                                    		// 0x0021 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIScrollIndex.IndexEntryData
// 0x0020
struct FIndexEntryData
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UImageSet*                                   ImageSet;                                         		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Type;                                             		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.CustomUIScrollIndex.IndexEntryInfo
// 0x0014
struct FIndexEntryInfo
{
	TArray< struct FIndexEntryData >                   IndexEntryDataArray;                              		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   IndexEntrySize;                                   		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x0010
struct FShowFlags_Mirror
{
	struct FQWord                                      flags0;                                           		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FQWord                                      flags1;                                           		// 0x0008 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000(0x0010 - 0x0010)
struct FExportShowFlags_Mirror : FShowFlags_Mirror
{
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxPercentY;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RecommendedPercentX;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RecommendedPercentY;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              OriginX;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              OriginY;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x000C
struct FSplitscreenData
{
	TArray< struct FPerPlayerSplitscreenData >         PlayerData;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0010
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       PropertyName;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSpecialProperty : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameViewportClient.ScreenShotInfo
// 0x0020
struct FScreenShotInfo
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                PosX;                                             		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PosY;                                             		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SizeX;                                            		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SizeY;                                            		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0010
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UUIDataStore* >                      DataStores;                                       		// 0x0004 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0018
struct FConsoleMessage
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MessageLife;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x0040
struct FHudLocalizedMessage
{
	class UClass*                                      Message;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StringMessage;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                Switch;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              EndOfLife;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              PosY;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	struct FColor                                      DrawColor;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                FontSize;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	class UFont*                                       StringFont;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              DX;                                               		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              DY;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      Drawn : 1;                                        		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Count;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	class UObject*                                     OptionalObject;                                   		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Input.KeyBind
// 0x0018
struct FKeyBind
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      Control : 1;                                      		// 0x0014 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      Shift : 1;                                        		// 0x0014 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      Alt : 1;                                          		// 0x0014 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      DisableCommand : 1;                               		// 0x0014 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0008
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0004) [0x000000000000000A]              ( CPF_Const | CPF_ExportObject )
	struct FPointer                                    RenderData;                                       		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x0008
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                            		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	float                                              LifetimeRemaining;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x000C
struct FLODSoloTrack
{
	TArray< unsigned char >                            SoloEnableSetting;                                		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              EmitterTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000(0x0034 - 0x0034)
struct FParticleEventSpawnData : FParticleEventData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004(0x0038 - 0x0034)
struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020(0x0054 - 0x0034)
struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Item;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x004C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0028
struct FParticleSysParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ParamType;                                        		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scalar;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Vector;                                           		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Color;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Actor;                                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010(0x0044 - 0x0034)
struct FParticleEventKismetData : FParticleEventData
{
	unsigned long                                      UsePSysCompLocation : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	unsigned long                                      bIsActive : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x0020
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class AActor*                                      Base;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                               		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FColor                                      Out;                                              		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0018
struct FStatColorMapping
{
	struct FString                                     StatName;                                         		// 0x0000 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FStatColorMapEntry >                ColorMap;                                         		// 0x000C (0x000C) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct Engine.Engine.FrameInfo
// 0x0030
struct FFrameInfo
{
	TArray< struct FDouble >                           FrameTimes;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FDouble                                     LastTime;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	struct FDouble                                     TotalFrameTime;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                Count;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	struct FDouble                                     FrameTime;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FDouble                                     PrevFrameTime;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Engine.FrameAutoInfo
// 0x0030
struct FFrameAutoInfo
{
	unsigned long                                      Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000001000] [0x00000001] ( CPF_Native )
	int                                                TargetFrame;                                      		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                MaxFrame;                                         		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FDouble                                     OFFWaitTime;                                      		// 0x000C (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FDouble                                     ONWaitTime;                                       		// 0x0014 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FDouble                                     StartTime;                                        		// 0x001C (0x0008) [0x0000000000001000]              ( CPF_Native )
	TArray< unsigned long >                            DisableStates;                                    		// 0x0024 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0024
struct FDropNoteInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FString                                     Comment;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.MoveActionPoint.MoveActionPointInfo
// 0x0028
struct FMoveActionPointInfo
{
	float                                              fVelocity;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AnimName[ 0x2 ];                                  		// 0x0004 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.FluidSurfaceComponent.LightMapRef
// 0x0004
struct FLightMapRef
{
	struct FPointer                                    Reference;                                        		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.FoliageComponent.FoliageInstanceBase
// 0x0044
struct FFoliageInstanceBase
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     XAxis;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     YAxis;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     ZAxis;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	float                                              DistanceFactorSquared;                            		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     GlobarCoord;                                      		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.FoliageComponent.GatheredFoliageInstance
// 0x0010(0x0054 - 0x0044)
struct FGatheredFoliageInstance : FFoliageInstanceBase
{
	struct FColor                                      StaticLighting[ 0x4 ];                            		// 0x0044 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.FoliageFactory.FoliageMesh
// 0x0048
struct FFoliageMesh
{
	class UStaticMesh*                                 InstanceStaticMesh;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDrawRadius;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTransitionRadius;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinThinningRadius;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MinScale;                                         		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxScale;                                         		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinUniformScale;                                  		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxUniformScale;                                  		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwayScale;                                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Seed;                                             		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SurfaceAreaPerInstance;                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCreateInstancesOnBSP : 1;                        		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCreateInstancesOnStaticMeshes : 1;               		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCreateInstancesOnTerrain : 1;                    		// 0x0040 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class UFoliageComponent*                           Component;                                        		// 0x0044 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;                                    		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RightAmplitude;                                   		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LeftFunction;                                     		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RightFunction;                                    		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0010
struct FFragmentGroup
{
	TArray< int >                                      FragmentIndices;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bGroupIsRooted : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x0024
struct FDeferredPartToSpawn
{
	int                                                ChunkIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     InitialVel;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     InitialAngVel;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              RelativeScale;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bExplosion : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameEngine.URL
// 0x0044
struct FURL
{
	struct FString                                     Protocol;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     Host;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     Map;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           Op;                                               		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FString                                     Portal;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
	int                                                Valid;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0028
struct FFullyLoadedPackagesInfo
{
	unsigned char                                      FullyLoadType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	TArray< struct FName >                             PackagesToLoad;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< class UObject* >                           LoadedObjects;                                    		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x000C
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    NetDriver;                                        		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumMapListCyclesDone;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameUISceneClient.Link
// 0x0018
struct FLink
{
	int                                                LinkId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIgnoreInput : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     LinkString;                                       		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.GameUISceneClient.ProgressBar
// 0x0028
struct FProgressBar
{
	int                                                ProgressId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fValue;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fAnimationStart;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fAnimationEnd;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fAnimationValue;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fAnimationTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fAnimationElapsedTime;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fAnimationDelayTime;                              		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fAnimationDelayElapsedTime;                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ProgressBarWidgetId;                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameUISceneClient.LoadingImageInfo
// 0x0024
struct FLoadingImageInfo
{
	struct FString                                     PackageFilePath;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     ImageFileName;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                UncompressedSize;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PosInZipDirectory;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumOfFile;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameUISceneClient.SoundInfo
// 0x0008
struct FSoundInfo
{
	float                                              DelayTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIgnoreReplay : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x000D
struct FIniLocFileEntry
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      CollisionType;                                    		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsShutdown : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x002C
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FColor                                      CurveColor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CurveName;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                bHideCurve;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                bColorCurve;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                bFloatingPointColorCurve;                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                bClamp;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ClampLow;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              ClampHigh;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0028
struct FCurveEdTab
{
	struct FString                                     TabName;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct FCurveEdEntry >                     Curves;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              ViewStartInput;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ViewEndInput;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ViewStartOutput;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ViewEndOutput;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0010
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TrackIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                KeyIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              UnsnappedPosition;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AnimSeqName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              AnimStartOffset;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AnimEndOffset;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              AnimPlayRate;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReverse : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackBooleanBase.BooleanTrackKey
// 0x0008
struct FBooleanTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsOn : 1;                                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0010
struct FDirectorTrackCut
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TransitionTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       TargetCamGroup;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x001C
struct FFaceFXTrackKey
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     FaceFXGroupName;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     FaceFXSeqName;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x000C
struct FInterpLookupTrack
{
	TArray< struct FInterpLookupPoint >                Points;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClipIDNumber;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0010
struct FSoundTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      ToggleAction;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0005
struct FVisibilityTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackVoice.VoiceTrackKey
// 0x0014
struct FVoiceTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      VoicePlaySubFlag;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      VoicePlayFlag;                                    		// 0x0009 (0x0001) [0x0000000000000000]              
	struct FName                                       TrackName;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0010
struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class UObject*                                     CurveObject;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0140
struct FLensFlareElement
{
	struct FName                                       ElementName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              RayDistance;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsEnabled : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseSourceDistance : 1;                           		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNormalizeRadialDistance : 1;                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bModulateColorBySource : 1;                       		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FVector                                     Size;                                             		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                LFMaterials;                                      		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       LFMaterialIndex;                                  		// 0x0028 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       Scaling;                                          		// 0x0044 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionVector                      AxisScaling;                                      		// 0x0060 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       Rotation;                                         		// 0x007C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionVector                      Color;                                            		// 0x0098 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       Alpha;                                            		// 0x00B4 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionVector                      Offset;                                           		// 0x00D0 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionVector                      DistMap_Scale;                                    		// 0x00EC (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionVector                      DistMap_Color;                                    		// 0x0108 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       DistMap_Alpha;                                    		// 0x0124 (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0008
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CriticalSection;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x0284
struct FCurrentPostProcessVolumeInfo
{
	struct FVector                                     ViewLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FPostProcessSettings                        LastSettings;                                     		// 0x000C (0x0134) [0x0000000000000000]              
	struct FPostProcessSettings                        PrevSettings;                                     		// 0x0140 (0x0134) [0x0000000000000000]              
	class APostProcessVolume*                          PrevVolumeUsed;                                   		// 0x0274 (0x0004) [0x0000000000000000]              
	class APostProcessVolume*                          LastVolumeUsed;                                   		// 0x0278 (0x0004) [0x0000000000000000]              
	float                                              BlendStartTime;                                   		// 0x027C (0x0004) [0x0000000000000000]              
	float                                              LastBlendTime;                                    		// 0x0280 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LocalPlayer.CurrentUIBlurMaskInfo
// 0x0024
struct FCurrentUIBlurMaskInfo
{
	float                                              fStartX;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fStartY;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fSizeX;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fSizeY;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fStartU;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fStartV;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fSizeU;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fSizeV;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x001C
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaskR;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaskG;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaskB;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaskA;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                GCC64_Padding;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0020
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UFont*                                       FontValue;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FontPage;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x001C
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ParameterName;                                    		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLoop : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoActivate : 1;                                		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              CycleTime;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              OffsetTime;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x0008(0x0038 - 0x0030)
struct FFontParameterValueOverTime : FParameterValueOverTime
{
	class UFont*                                       FontValue;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FontPage;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0014(0x0044 - 0x0030)
struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           ParameterValueCurve;                              		// 0x0034 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0004(0x0034 - 0x0030)
struct FTextureParameterValueOverTime : FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0020(0x0050 - 0x0030)
struct FVectorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveVector                          ParameterValueCurve;                              		// 0x0040 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x0018
struct FMorphNodeConn
{
	TArray< class UMorphNodeBase* >                    ChildNodes;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       ConnName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NxGenericForceFieldBrush.RBCollisionChannelContainer
// 0x0004
struct ANxGenericForceFieldBrush_FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                      		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      Nothing : 1;                                      		// 0x0000 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      Pawn : 1;                                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      Vehicle : 1;                                      		// 0x0000 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      Water : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	unsigned long                                      GameplayPhysics : 1;                              		// 0x0000 (0x0004) [0x0000000000000003] [0x00000020] ( CPF_Edit | CPF_Const )
	unsigned long                                      EffectPhysics : 1;                                		// 0x0000 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled1 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled2 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled3 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000200] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled4 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000400] ( CPF_Edit | CPF_Const )
	unsigned long                                      FluidDrain : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00000800] ( CPF_Edit | CPF_Const )
	unsigned long                                      Cloth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00001000] ( CPF_Edit | CPF_Const )
	unsigned long                                      SoftBody : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00002000] ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.OnlineGameplayEvents.PlayerInformation
// 0x0028
struct FPlayerInformation
{
	struct FString                                     ControllerName;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	struct FUniqueNetId                                UniqueId;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsBot : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LastPlayerEventIdx;                               		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameplayEvents.GameplayEvent
// 0x000C
struct FGameplayEvent
{
	int                                                EventNameIdx;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EventDescIdx;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TargetPlayerIdx;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameplayEvents.PlayerEvent
// 0x002C
struct FPlayerEvent
{
	int                                                PlayerIdx;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     EventLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    EventRotation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              EventTime;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< struct FGameplayEvent >                    Events;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	unsigned long                                      bIsWildcard : 1;                                  		// 0x000C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0024
struct FLocalizedStringSettingMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ColumnHeaderText;                                 		// 0x000C (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	TArray< struct FStringIdToStringMapping >          ValueMappings;                                    		// 0x0018 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0040
struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ColumnHeaderText;                                 		// 0x000C (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	unsigned char                                      MappingType;                                      		// 0x0018 (0x0001) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FIdToStringMapping >                ValueMappings;                                    		// 0x001C (0x000C) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FSettingsData >                     PredefinedValues;                                 		// 0x0028 (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              MinVal;                                           		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MaxVal;                                           		// 0x0038 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              RangeIncrement;                                   		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x0034
struct FAchievementDetails
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     AchievementName;                                  		// 0x0004 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     HowTo;                                            		// 0x001C (0x000C) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  Image;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                GamerPoints;                                      		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsSecret : 1;                                    		// 0x0030 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bWasAchievedOnline : 1;                           		// 0x0030 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bWasAchievedOffline : 1;                          		// 0x0030 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
};

// ScriptStruct Engine.OnlinePlaylistManager.ConfiguredGameSetting
// 0x0020
struct FConfiguredGameSetting
{
	int                                                GameSettingId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GameSettingsClassName;                            		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     URL;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.OnlinePlaylistManager.Playlist
// 0x003C
struct FPlaylist
{
	TArray< struct FConfiguredGameSetting >            ConfiguredGames;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                PlaylistId;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     LocalizationString;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< int >                                      ContentIds;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	int                                                TeamSize;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TeamCount;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineProfileSettings.OnlineProfileSetting
// 0x0018
struct FOnlineProfileSetting
{
	unsigned char                                      Owner;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FSettingsProperty                           ProfileSetting;                                   		// 0x0004 (0x0014) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x0014
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      PartyMembers;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0010
struct FOnlineStatsColumn
{
	int                                                ColumnNo;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FSettingsData                               StatValue;                                        		// 0x0004 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x002C
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FSettingsData                               Rank;                                             		// 0x0008 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NickName;                                         		// 0x0014 (0x000C) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FOnlineStatsColumn >                Columns;                                          		// 0x0020 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x0018
struct FColumnMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ColumnName;                                       		// 0x000C (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CountLow;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0010
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class UObject*                                     CurveObject;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bScale : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x001C
struct FParticleEvent_GenerateInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Frequency;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LowFreq;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ParticleFrequency;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FirstTimeOnly : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      LastTimeOnly : 1;                                 		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      UseReflectedImpactVector : 1;                     		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       CustomName;                                       		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bProcessDuringUpdate : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleParameterDecalDynamicParam.EmitterDecalDynamicParameter
// 0x0024
struct FEmitterDecalDynamicParameter
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionVector                      ParamValue;                                       		// 0x0008 (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0028
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FRawDistributionFloat                       ParamValue;                                       		// 0x000C (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleParameterMeshDynamicParam.EmitterMeshDynamicParameter
// 0x0024
struct FEmitterMeshDynamicParameter
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionVector                      ParamValue;                                       		// 0x0008 (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetPercentage;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeightForSpawnLod;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnLodRateVsLifeBias;                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RelativeFadeoutTime;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleSet.StepParticleInfo
// 0x0011
struct FStepParticleInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             Particles[ 0x3 ];                                 		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WeaponSize;                                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleSet.WeaponParticleInfo
// 0x0011
struct FWeaponParticleInfo
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             Particles[ 0x3 ];                                 		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WeaponSize;                                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x000C
struct FParticleEmitterReplayFrame
{
	int                                                EmitterType;                                      		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                OriginalEmitterIndex;                             		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    FrameState;                                       		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x000C
struct FParticleSystemReplayFrame
{
	TArray< struct FParticleEmitterReplayFrame >       Emitters;                                         		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.Pawn.MoveHistroyObj
// 0x0028
struct FMoveHistroyObj
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              fTimeStamp;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                bInEnvVolume;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ZoneID;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                EnvID;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      SprintJtoJDecelSpeed : 1;                         		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GroundSpeed;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Pawn.EventJumpHistory
// 0x0010
struct FEventJumpHistory
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysicalMaterial.FootPrintDecalInfo
// 0x0010
struct FFootPrintDecalInfo
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeSpan;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PhysicalMaterial.FootPrintEffectInfo
// 0x0004
struct FFootPrintEffectInfo
{
	class UParticleSystem*                             Particle;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PhysicalMaterial.FootPrintInfo
// 0x0018
struct FFootPrintInfo
{
	unsigned char                                      DataType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Position;                                         		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FFootPrintDecalInfo                         Decal;                                            		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FFootPrintEffectInfo                        Effect;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PhysicalMaterial.WaterPrintInfo
// 0x0018
struct FWaterPrintInfo
{
	class UParticleSystem*                             StandStillEffect;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             MoveEffect;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      DrawStandStillEffect : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              DrawTimeForNoneMove;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveStepSizeForDraw;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValidSurfaceHeight;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PhysicalMaterial.FootPrintHeightInfo
// 0x000C
struct FFootPrintHeightInfo
{
	unsigned char                                      Position;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              NormalHeight;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashHeight;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PhysXDestructible.PhysXDestructibleDepthParameters
// 0x0004
struct FPhysXDestructibleDepthParameters
{
	unsigned long                                      bTakeImpactDamage : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlaySoundEffect : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPlayParticleEffect : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDoNotTimeOut : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bNoKillDummy : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct Engine.PhysXDestructible.PhysXDestructibleParameters
// 0x0030
struct FPhysXDestructibleParameters
{
	float                                              DamageThreshold;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageToRadius;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageCap;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceToDamage;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FractureSound;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             CrumbleParticleSystem;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrumbleParticleSize;                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAccumulateDamage : 1;                            		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              ScaledDamageToRadius;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FPhysXDestructibleDepthParameters > DepthParameters;                                  		// 0x0024 (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
};

// ScriptStruct Engine.PhysXDestructibleActor.SpawnBasis
// 0x001C
struct FSpawnBasis
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysXDestructibleAsset.PhysXDestructibleAssetChunk
// 0x0034
struct FPhysXDestructibleAssetChunk
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FragmentIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Size;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Depth;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ParentIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                FirstChildIndex;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumChildren;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MeshIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	int                                                BodyIndex;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysXDestructibleStructure.PhysXDestructibleChunk
// 0x0100
struct FPhysXDestructibleChunk
{
	unsigned long                                      WorldCentroidValid : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      WorldMatrixValid : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCrumble : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsEnvironmentSupported : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      IsRouting : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      IsRouteValid : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      IsRouteBlocker : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                ActorIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FragmentIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MeshIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                BodyIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeCentroid;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     WorldCentroid;                                    		// 0x0030 (0x000C) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	struct FMatrix                                     RelativeMatrix;                                   		// 0x0040 (0x0040) [0x0000000000000000]              
	struct FMatrix                                     WorldMatrix;                                      		// 0x0080 (0x0040) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                ParentIndex;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                FirstChildIndex;                                  		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                NumChildren;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                Depth;                                            		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              Age;                                              		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              Size;                                             		// 0x00DC (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentState;                                     		// 0x00E0 (0x0001) [0x0000000000000000]              
	struct FPointer                                    Structure;                                        		// 0x00E4 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                FIFOIndex;                                        		// 0x00E8 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                FirstOverlapIndex;                                		// 0x00EC (0x0004) [0x0000000000000000]              
	int                                                NumOverlaps;                                      		// 0x00F0 (0x0004) [0x0000000000000000]              
	int                                                ShortestRoute;                                    		// 0x00F4 (0x0004) [0x0000000000000000]              
	int                                                NumSupporters;                                    		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                NumChildrenDup;                                   		// 0x00FC (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysXDestructibleStructure.PhysXDestructibleOverlap
// 0x000C
struct FPhysXDestructibleOverlap
{
	int                                                ChunkIndex0;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ChunkIndex1;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Adjacent;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysXEmitterSpawnable.IndexedRBState
// 0x0028
struct FIndexedRBState
{
	struct FVector                                     CenterOfMass;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     LinearVelocity;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     AngularVelocity;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysXEmitterSpawnable.RBVolumeFill
// 0x0018
struct FRBVolumeFill
{
	TArray< struct FIndexedRBState >                   RBStates;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           Positions;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.PostProcessParameter.TimeTableObj
// 0x01CC
struct FTimeTableObj
{
	struct FColor                                      ColorInfo[ 0xB ];                                 		// 0x0000 (0x002C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    CharacterLightAddRot;                             		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBackGlowPow;                                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fValues[ 0x61 ];                                  		// 0x003C (0x0184) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    SunAddRot;                                        		// 0x01C0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0010
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class USequenceOp*                                 Op;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InputIdx;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RemainingDelay;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ProgressControler_InternalValue.FProgControlExtent
// 0x0008
struct FFProgControlExtent
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ProgressEffectProperty_Anim.ProgressEffectAnimPropery
// 0x0028
struct FProgressEffectAnimPropery
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AnimPlayType;                                     		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AnimWeightType;                                   		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SequenceName[ 0x3 ];                              		// 0x0004 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Loop : 1;                                         		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                AnimSeqCount;                                     		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ProgressValue;                                    		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.ProgressEffectProperty_MatInst.ProgEffectMaterialExtent
// 0x0028
struct FProgEffectMaterialExtent
{
	float                                              ScalarParamMin;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalarParamMax;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                VectorParamStart;                                 		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                VectorParamEnd;                                   		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ProgressEffectProperty_MatInst.ProgEffectMatRestoreInfo
// 0x0028
struct FProgEffectMatRestoreInfo
{
	float                                              RestoreScalarValue;                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SrcScalarValue;                                   		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                RestoreVectorValue;                               		// 0x0008 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                SrcVectorValue;                                   		// 0x0018 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.ProgressEffectProperty_Particle.FProgEffectParticleRate
// 0x0008
struct FFProgEffectParticleRate
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ProgressEffectProperty_Particle.ProgEffectParticleDynamicParam
// 0x0018
struct FProgEffectParticleDynamicParam
{
	unsigned char                                      ParamType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ParamValue;                                       		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ProgressEffectProperty_Sound.ProgEffectFadeInOut
// 0x0008
struct FProgEffectFadeInOut
{
	float                                              FadeIn;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOut;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ProgressEffectProperty_Sound.ProgEffectVolumeRate
// 0x0008
struct FProgEffectVolumeRate
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x000C
struct FKCachedConvexDataElement
{
	TArray< unsigned char >                            ConvexElementData;                                		// 0x0000 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x000C
struct FKCachedConvexData
{
	TArray< struct FKCachedConvexDataElement >         CachedConvexElements;                             		// 0x0000 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x000C
struct FLinearDOFSetup
{
	unsigned char                                      bLimited;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              LimitSize;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseLooseLinearLimit : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CrouchHeight;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      PathColor;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_CrowdSpawner.CrowdTargetActionInfo
// 0x000C
struct FCrowdTargetActionInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFireEffects : 1;                                 		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SeqAct_CrowdSpawner.CrowdAttachmentInfo
// 0x0014
struct FCrowdAttachmentInfo
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Chance;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scale3D;                                          		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SeqAct_CrowdSpawner.CrowdAttachmentList
// 0x0014
struct FCrowdAttachmentList
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCrowdAttachmentInfo >              List;                                             		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x000C
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                            		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       LevelName;                                        		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x0008
struct FSwitchRange
{
	int                                                Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bFallThru;                                        		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SeqCond_SwitchName.SwitchNameCase
// 0x000C
struct FSwitchNameCase
{
	struct FName                                       NameValue;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFallThru : 1;                                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x0008
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFallThru : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDefaultValue : 1;                                		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.ShowActionKey.SamplePointRandomData
// 0x001C
struct FSamplePointRandomData
{
	struct FVector                                     Random_Min;                                       		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Random_Max;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                AssociateIndex;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ShowActionCatmullromRandomKey.CatmullromData
// 0x0018
struct FCatmullromData
{
	struct FVector                                     arrArrivePos;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FVector >                           aSamplePoints;                                    		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ShowCopyPawnKey.DynamicParamInfo
// 0x0030
struct FDynamicParamInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vecStartValue;                                    		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vecEndValue;                                      		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vecInitValue;                                     		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPlayTime;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ShowDynamicParamKey.Meshes_DynamicParam
// 0x0004
struct FMeshes_DynamicParam
{
	unsigned long                                      Body : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Face : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Hair : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      WeaponR : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      WeaponL : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      Weapon_Gauntlet_R : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      Weapon_Gauntlet_L : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      Attach : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      KeepDagger : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      KeepWeapon : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      Tail : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      GuildAcc : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
};

// ScriptStruct Engine.ShowParticleAnimKey.ParticleAnimInfo
// 0x0038
struct FParticleAnimInfo
{
	class UParticleSystem*                             ParticleSys;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BoneName;                                         		// 0x0004 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      PosOnly : 1;                                      		// 0x0010 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      AttachToSocket : 1;                               		// 0x0010 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	struct FVector                                     RelativePosition;                                 		// 0x0014 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FRotator                                    RelativeRotation;                                 		// 0x0020 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     RelativeScale;                                    		// 0x002C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.ShowPlayerCameraAnimRandomKey.PlayerCameraAnimRandomEntry
// 0x0008
struct FPlayerCameraAnimRandomEntry
{
	class UPlayerCameraAnim*                           CameraAnimTemplate;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Weight;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ShowTrackInputParameter.ShowObjectPlayInfo
// 0x0008
struct FShowObjectPlayInfo
{
	class UShowObject*                                 ShowObject;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UShowTrackInputParameter*                    InputParam;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ShowTrackInputParameter.HitEventParam
// 0x0014
struct FHitEventParam
{
	struct Fsqword                                     Object;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct Fsqword                                     effectid;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                HitObjectType;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ShowTrackInputParameter.DieEventParam
// 0x0024
struct FDieEventParam
{
	struct Fsqword                                     DieObject;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct Fsqword                                     Caster;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	struct Fsqword                                     effectid;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                SkillInstanceId;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                DieObjectType;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                IdleType;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ShowTrackInputParameter.ShowKnockBackInfo
// 0x0018
struct FShowKnockBackInfo
{
	class APawn*                                       Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     KnockBackPos;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              KnockBackYaw;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              KnockBackDuration;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ShowTrackInputParameter.AdditionalDamage
// 0x0008
struct FAdditionalDamage
{
	int                                                SignalType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ShowTrackOutputParameter.ShowInstanceDataKeyCopy
// 0x0014
struct FShowInstanceDataKeyCopy
{
	int                                                TypeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SpawnId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       TagName;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                RunTimeSpawnId;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ShowTrailMeshKey.ShowTrailInfo
// 0x0034
struct FShowTrailInfo
{
	float                                              fDuration;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SamplerType;                                      		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       strStartBone;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       strEndBone;                                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                iSecondMeshIndex;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SecondSamplerType;                                		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       strSecondStartBone;                               		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       strSecondEndBone;                                 		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTrailTemplate*                              TrailSys;                                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalData
// 0x0018
struct FSignalData
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartU;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartV;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                USize;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VSize;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalTypeData
// 0x0028
struct FSignalTypeData
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkipZero : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAbs : 1;                                         		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                PosType;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DrawColor;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DrawNumColor;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AnimTypeIdx;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDisable : 1;                                     		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalConfig
// 0x0038
struct FSignalConfig
{
	float                                              DefaultScale;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpaceBetweenWord;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerMaxDistance;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerMaxScale;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerMinScale;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerPositionType;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ObjMaxDistance;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ObjMaxScale;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ObjMinScale;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ObjPositionType;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ComboDistance;                                    		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ComboOffset;                                      		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseComma : 1;                                     		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                DigitRange;                                       		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalAnimScale
// 0x0024
struct FSignalAnimScale
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartTime;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndTime;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartScale;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndScale;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpeed;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPow;                                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMinScale;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMinSpeed;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalAnimAlpha
// 0x0008
struct FSignalAnimAlpha
{
	float                                              fStart;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEnd;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalAnimRotation
// 0x0018
struct FSignalAnimRotation
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartTime;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndTime;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fValue;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpeed;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCurve : 1;                                       		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalAnimShake
// 0x0018
struct FSignalAnimShake
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartTime;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndTime;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fValue;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpeed;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCurve : 1;                                       		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalAnimMoveXY
// 0x0028
struct FSignalAnimMoveXY
{
	float                                              fStartTime;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndTime;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMove;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCurve : 1;                                       		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fSpeed;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMoveDist;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxMove;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxSpeed;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRandomMove : 1;                                  		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRandomSpeed : 1;                                 		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bGravity : 1;                                     		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              fPow;                                             		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalAnimBackground
// 0x0018
struct FSignalAnimBackground
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Offset;                                           		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fScale;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DrawColor;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SignalInfo.SignalAnimInfo
// 0x00E4
struct FSignalAnimInfo
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PosBoxMin;                                        		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PosBoxMax;                                        		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PosType;                                          		// 0x0030 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SkipOverlapArea : 1;                              		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                AreaCountX;                                       		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AreaCountY;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DynamicURate;                                     		// 0x0040 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DynamicVRange;                                    		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxComboSpeed;                                    		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DropComboSpeed;                                   		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ApplyComboCount;                                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ApplyPhysicsVector : 1;                           		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     MaxRenderBoundMin;                                		// 0x0068 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxRenderBoundMax;                                		// 0x0074 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SwitchMoveDir : 1;                                		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FSignalAnimAlpha >                  vData_FadeIn;                                     		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSignalAnimAlpha >                  vData_FadeOut;                                    		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSignalAnimRotation >               vData_Rotation;                                   		// 0x009C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSignalAnimShake >                  vData_Shake;                                      		// 0x00A8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSignalAnimScale >                  vData_Scale;                                      		// 0x00B4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSignalAnimMoveXY >                 vData_MoveX;                                      		// 0x00C0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSignalAnimMoveXY >                 vData_MoveY;                                      		// 0x00CC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSignalAnimBackground >             vData_Background;                                 		// 0x00D8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshSocket.DependencyTrailInfo
// 0x0028
struct FDependencyTrailInfo
{
	struct FString                                     DependencyTrailName;                              		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UTrailTemplate*                              TrailSystem;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iSecondMeshIndex;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SecondSamplerType;                                		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       strSecondStartBone;                               		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       strSecondEndBone;                                 		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshFactorSet.SkeletalMeshSocketInfo
// 0x0078
struct FSkeletalMeshSocketInfo
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeScale;                                    		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               PreviewSkelMesh;                                  		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DependencyParticleName;                           		// 0x0038 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             DependencyParticleSystem;                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bParticleAttachPosOnly : 1;                       		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bParticleApplyAutoScale : 1;                      		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FDependencyTrailInfo                        DependencyTrailTemplate;                          		// 0x004C (0x0028) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseCustomizeScaleZ : 1;                           		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneFlipAxis;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x002C
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LODHysteresis;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      LODMaterialMap;                                   		// 0x0008 (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
	TArray< unsigned long >                            bEnableShadowCasting;                             		// 0x0014 (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
	TArray< unsigned char >                            TriangleSorting;                                  		// 0x0020 (0x000C) [0x0000000000000041]              ( CPF_Edit | CPF_EditConstArray )
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x0018
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      AttachedVertexIndices;                            		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Bary;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x0018
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      AttachedVertexIndices;                            		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.SkeletalMeshCustomizeSet.CustomizeMorphAnimRotInfo
// 0x001C
struct FCustomizeMorphAnimRotInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneRotScale;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AddRotValue;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneAddRotApplySize;                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshCustomizeSet.CustomizeDefaultChannels
// 0x0004
struct FCustomizeDefaultChannels
{
	unsigned long                                      Type1 : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      Type2 : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      Type3 : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      Type4 : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.SkeletalMeshCustomizeSet.CustomizeDefaultTypeInfo
// 0x0008
struct FCustomizeDefaultTypeInfo
{
	struct FCustomizeDefaultChannels                   DefaultChannels;                                  		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DefalutValue;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshCustomizeSet.CustomizeMorphInfo
// 0x0024
struct FCustomizeMorphInfo
{
	struct FName                                       TargetName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCustomizeMorphAnimRotInfo >        RelativeRotBoneInfos;                             		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FCustomizeDefaultTypeInfo                   DefalutTypeInfo;                                  		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseDefaultTypeInfo : 1;                          		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshCustomizeSet.CustomizeSingleBoneInfo
// 0x003C
struct FCustomizeSingleBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scale3D;                                          		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     TranslationScale;                                 		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     TranslationAddValue;                              		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAbsoluteValue : 1;                               		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     vecRelativeScale;                                 		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshCustomizeSet.CustomizeBoneInfo
// 0x006C
struct FCustomizeBoneInfo
{
	struct FString                                     Description;                                      		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FCustomizeSingleBoneInfo                    BoneInfo;                                         		// 0x000C (0x003C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCustomizeSingleBoneInfo >          RelativeBoneInfo;                                 		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalScale;                                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Priority;                                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FCustomizeDefaultTypeInfo                   DefalutTypeInfo;                                  		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseDefaultTypeInfo : 1;                          		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                ArrIndex;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                         		// 0x0000 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              HFFrequency;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HFGain;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MFCutoffFrequency;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MFBandwidthFrequency;                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MFGain;                                           		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LFFrequency;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LFGain;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x0014
struct FSoundClassAdjuster
{
	unsigned char                                      SoundClassName;                                   		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FName                                       SoundClass;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              VolumeAdjuster;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchAdjuster;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x003C
struct FDistanceDatum
{
	struct FRawDistributionFloat                       FadeInDistance;                                   		// 0x0000 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       FadeOutDistance;                                  		// 0x001C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Volume;                                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundNodeWave.SubtitleCue
// 0x0010
struct FSubtitleCue
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
};

// ScriptStruct Engine.SoundNodeWave.LocalizedSubtitle
// 0x0010
struct FLocalizedSubtitle
{
	TArray< struct FSubtitleCue >                      Subtitles;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bMature : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bManualWordWrap : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.SoundSet.StepSoundInfo
// 0x000C
struct FStepSoundInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoundVolume;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundSet.AttachSoundInfo
// 0x000C
struct FAttachSoundInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoundVolume;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundSet.DamageSoundInfo
// 0x000C
struct FDamageSoundInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoundVolume;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundSet.DialoguesSoundInfo
// 0x000C
struct FDialoguesSoundInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoundVolume;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundSet.WeaponSoundInfo
// 0x000C
struct FWeaponSoundInfo
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoundVolume;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x001C
struct FRecognisableWord
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ReferenceWord;                                    		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PhoneticWord;                                     		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0048
struct FRecogVocabulary
{
	TArray< struct FRecognisableWord >                 WhoDictionary;                                    		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FRecognisableWord >                 WhatDictionary;                                   		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FRecognisableWord >                 WhereDictionary;                                  		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     VocabName;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            VocabData;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            WorkingVocabData;                                 		// 0x003C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0010
struct FRecogUserData
{
	int                                                ActiveVocabularies;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            UserData;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x0044
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                          		// 0x0000 (0x0038) [0x0000000000000000]              
	unsigned char                                      ServerBrake;                                      		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerGas;                                        		// 0x0039 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerSteering;                                   		// 0x003A (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerRise;                                       		// 0x003B (0x0001) [0x0000000000000000]              
	unsigned long                                      bServerHandbrake : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ServerView;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{
};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{
};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0030
struct FTerrainLayer
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UTerrainLayerSetup*                          Setup;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AlphaMapIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      Highlighted : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      WireframeHighlighted : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Hidden : 1;                                       		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FColor                                      HighlightColor;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      WireframeColor;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinX;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MinY;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaxX;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MaxY;                                             		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0020
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     LocalLocation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x0028
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinScale;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxScale;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Density;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlopeRotationBlend;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RandSeed;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CullDistance;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTerrainDecorationInstance >        Instances;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x001C
struct FTerrainDecoLayer
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTerrainDecoration >                Decorations;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                AlphaMapIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.FoliageLayerAlphaMap
// 0x0018
struct FFoliageLayerAlphaMap
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FColor >                            VertexColor;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Terrain.TerrainFoliageLayer
// 0x0054
struct FTerrainFoliageLayer
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Density;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDrawRadius;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnvApplyRadius;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinScale;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxScale;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinUniformScale;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxUniformScale;                                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Seed;                                             		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AlphaMapThreshold;                                		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlopeRotationBlend;                               		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViewActorRadius;                                  		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSkewScalar;                                    		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseMeshVertexColor : 1;                           		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FFoliageLayerAlphaMap                       AlphaMapData;                                     		// 0x003C (0x0018) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{
};

// ScriptStruct Engine.Terrain.TerrainExcludedPatchData
// 0x0010
struct FTerrainExcludedPatchData
{
	int                                                ToRemoveSectorY;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ToRemoveSectorXs;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x000C
struct FCachedTerrainMaterialArray
{
	TArray< struct FPointer >                          CachedMaterials;                                  		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TerrainComponent.TerrainkDOPTree
// 0x0018
struct FTerrainkDOPTree
{
	TArray< int >                                      Nodes;                                            		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< int >                                      Triangles;                                        		// 0x000C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x000C
struct FTerrainBVTree
{
	TArray< int >                                      Nodes;                                            		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	unsigned long                                      Enabled : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Base;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NoiseScale;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NoiseAmount;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0054
struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              NoiseScale;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NoisePercent;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MinHeight;                                        		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MaxHeight;                                        		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MinSlope;                                         		// 0x002C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MaxSlope;                                         		// 0x003C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              Alpha;                                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTerrainMaterial*                            Material;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TerrainMaterial.TerrainFoliageMesh
// 0x0040
struct FTerrainFoliageMesh
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Density;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDrawRadius;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTransitionRadius;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinScale;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxScale;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinUniformScale;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxUniformScale;                                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinThinningRadius;                                		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Seed;                                             		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwayScale;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AlphaMapThreshold;                                		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlopeRotationBlend;                               		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViewActorRadius;                                  		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSkewScalar;                                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.TextParser.ParagraphAttributes
// 0x0038
struct FParagraphAttributes
{
	float                                              LeftMargin;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RightMargin;                                      		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TopMargin;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BottomMargin;                                     		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Indent;                                           		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SpaceBetweenLines;                                		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bWordWrap : 1;                                    		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bJustification : 1;                               		// 0x0018 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDisableParagraphBreak : 1;                       		// 0x0018 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned char                                      HorizontalAlignment;                              		// 0x001C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VerticalAlignment;                                		// 0x001D (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      BulletHorizontalAlignment;                        		// 0x001E (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      JustificationType;                                		// 0x001F (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class UFontSet*                                    BulletsFontSet;                                   		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BulletsText;                                      		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UImageSet*                                   BulletsImageSet;                                  		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableIndent : 1;                                		// 0x0034 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEnableSpaceBetweenLines : 1;                     		// 0x0034 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bEnableWordWrap : 1;                              		// 0x0034 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bEnableJustification : 1;                         		// 0x0034 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bEnableHorizontalAlignment : 1;                   		// 0x0034 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bEnableVerticalAlignment : 1;                     		// 0x0034 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bEnableBullets : 1;                               		// 0x0034 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
};

// ScriptStruct Engine.TextParser.ImageAttributes
// 0x0044
struct FImageAttributes
{
	TArray< class UTexture2D* >                        ImageArray;                                       		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector2D >                         UVArray;                                          		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector2D >                         UVSizeArray;                                      		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FColor >                            ColorArray;                                       		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector2D >                         SizeArray;                                        		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              CustomScale;                                      		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableScale : 1;                                 		// 0x0040 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0014
struct FSourceTexture2DRegion
{
	int                                                OffsetX;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OffsetY;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SizeY;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture2D;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TrailComponent.TrailPoint
// 0x0054
struct FTrailPoint
{
	struct FVector                                     pos;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     NormalVelocity;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     Tangent;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     TangentVelocity;                                  		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     OuterLocalVelocity;                               		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0048 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.TrailComponent.PhysicalTrailSample
// 0x0010
struct FPhysicalTrailSample
{
	TArray< struct FVector >                           Points;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              GeneratedTime;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TrailComponent.TrailPushForceElement
// 0x0028
struct FTrailPushForceElement
{
	int                                                iForceApplyIndex;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      eForceApplyType;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              fForceTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     vForceDirection;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              fForceValue;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fForceBound;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fCurrentForceTime;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fCurrentForceValue;                               		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TrailComponent.TrailDataPerSample
// 0x0040
struct FTrailDataPerSample
{
	TArray< struct FTrailPoint >                       Points;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FLinearColor                                BaseColor;                                        		// 0x000C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                Color;                                            		// 0x001C (0x0010) [0x0000000000000000]              
	float                                              ExtraSize;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              ExtraSizeScale;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              OffsetOverGenTime;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              OffsetOverLifeTime;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              LifeRemained;                                     		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TrailTemplate.TrailPointSamplerInfo
// 0x000C
struct FTrailPointSamplerInfo
{
	unsigned char                                      SamplerType;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SamplerName;                                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TrailTemplate.TrailPushForceInfo
// 0x0038
struct FTrailPushForceInfo
{
	unsigned long                                      EnableTrailPushForce : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              ForceTerm_Min;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceTerm_Max;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceTime_Min;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceTime_Max;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceValue_Min;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceValue_Max;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceBound;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ForceDirection_Min;                               		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ForceDirection_Max;                               		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	unsigned long                                      bCollideActors : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0008
struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShouldBlockOnLoad : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class ULevelStreaming*                             Level;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIActionEditBase.UIActionClientDataInfo
// 0x0004
struct FUIActionClientDataInfo
{
	int                                                DataType;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIActionEditNode.UIActionTimeLinkInfo
// 0x001C
struct FUIActionTimeLinkInfo
{
	struct FString                                     LinkTargetAlias;                                  		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      TimeSyncType;                                     		// 0x000C (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              TimeSyncOffset;                                   		// 0x0010 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bDurationSync : 1;                                		// 0x0014 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	float                                              DurationSyncOffset;                               		// 0x0018 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIActionEditSequence.UIActionTargetLinkInfo
// 0x000C
struct FUIActionTargetLinkInfo
{
	struct FString                                     LinkTargetAlias;                                  		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct Engine.UIActionGroupData.UIActionDataEntry
// 0x0028
struct FUIActionDataEntry
{
	struct FUIActionInfo                               ActionInfo;                                       		// 0x0000 (0x0024) [0x0000000000000001]              ( CPF_Edit )
	class UUIActionData*                               ActionData;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIActionGroupEditManager.UIActionEditManagerEntry
// 0x0028
struct FUIActionEditManagerEntry
{
	struct FUIActionInfo                               ActionInfo;                                       		// 0x0000 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	class UUIActionEditManager*                        ActionEditManager;                                		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIDataProvider.UIDataProviderField
// 0x0018
struct FUIDataProviderField
{
	struct FName                                       FieldTag;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      FieldType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	TArray< class UUIDataProvider* >                   FieldProviders;                                   		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.UISkin.UISoundCue
// 0x000C
struct FUISoundCue
{
	struct FName                                       SoundName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SoundToPlay;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x0018
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                     		// 0x0000 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ButtonFontMarkupString;                           		// 0x000C (0x000C) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x0050
struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;                                        		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FUIInputKeyData                             PlatformInputKeys[ 0x3 ];                         		// 0x0008 (0x0048) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x001C
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Set;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     MappedText;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.UIStyle_Combo.StyleDataReference
// 0x0020
struct FStyleDataReference
{
	class UUIStyle*                                    OwnerStyle;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSTYLE_ID                                   SourceStyleID;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
	class UUIStyle*                                    SourceStyle;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIState*                                    SourceState;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	class UUIStyle_Data*                               CustomStyleData;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WindDirectionalSourceComponent.RandomInfo
// 0x0010
struct FRandomInfo
{
	float                                              Default;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseRandom : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RandomMin;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomMax;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WindDirectionalSourceComponent.WindRoad
// 0x0060
struct FWindRoad
{
	struct FRandomInfo                                 Lifetime;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRandomInfo                                 DurationTime;                                     		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRandomInfo                                 Distance;                                         		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRandomInfo                                 Angle;                                            		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRandomInfo                                 Range;                                            		// 0x0040 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRandomInfo                                 Strength;                                         		// 0x0050 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif