#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: T1Game_structs.h
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

// ScriptStruct T1Game.T1CamMod_ScreenMove.ScreenMoveStruct
// 0x0060
struct FScreenMoveStruct
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Pct;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FRawDistributionVector                      RotAdjust;                                        		// 0x000C (0x001C) [0x0000000000000000]              
	struct FRawDistributionVector                      LocAdjust;                                        		// 0x0028 (0x001C) [0x0000000000000000]              
	struct FRawDistributionFloat                       FovAdjust;                                        		// 0x0044 (0x001C) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CamMod_ScreenShake.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct T1Game.T1CamMod_ScreenShake.ScreenShakeStruct
// 0x0065
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                RotParam;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocAmplitude;                                     		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                LocParam;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVAmplitude;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVFrequency;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVSinOffset;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      FOVParam;                                         		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1CustomPawn.T1PawnCustomizeInfo
// 0x022C
struct FT1PawnCustomizeInfo
{
	unsigned long                                      bUpdate : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                race;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                sex;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                job;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     BodyMesh;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FString                                     BodyAnimSet;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	struct FString                                     BodyAnimTree;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FString                                     FaceMesh;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FString                                     FaceAnimSet;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	struct FString                                     VoiceSetName;                                     		// 0x004C (0x000C) [0x0000000000000000]              
	struct FString                                     DialogueSetName;                                  		// 0x0058 (0x000C) [0x0000000000000000]              
	struct FString                                     BodyMatName;                                      		// 0x0064 (0x000C) [0x0000000000000000]              
	struct FString                                     FaceMatName;                                      		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FString                                     AttachMesh1;                                      		// 0x007C (0x000C) [0x0000000000000000]              
	struct FString                                     AttachMesh2;                                      		// 0x0088 (0x000C) [0x0000000000000000]              
	struct FString                                     AttachMeshMaterial1;                              		// 0x0094 (0x000C) [0x0000000000000000]              
	struct FString                                     AttachMeshMaterial2;                              		// 0x00A0 (0x000C) [0x0000000000000000]              
	struct FString                                     EffectAttach;                                     		// 0x00AC (0x000C) [0x0000000000000000]              
	unsigned long                                      bPCCustomize : 1;                                 		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPhysBrst : 1;                                    		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                Param8[ 0x5C ];                                   		// 0x00BC (0x0170) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CustomPawn.SkeletalInfo
// 0x0080
struct FSkeletalInfo
{
	class USkeletalMeshComponent*                      SkelMesh;                                         		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	class UMaterialInstanceConstant*                   Material;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    MeshAnimSet;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               MeshPhysicsAsset;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   MeshAnimTree;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PhysicsBegin;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ParentIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ParentBone;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                PosOnly;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                CreatedAnimTree;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                WorkingExpression;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                WorkingSlot;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              FadeInExp;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              FadeOutExp;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              ExpTime;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              CurrentTime;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              WrinkleWeight_R;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              WrinkleWeight_G;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              WrinkleWeight_B;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              WrinkleWeight_A;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              CurrentWrinkleWeight_R;                           		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              CurrentWrinkleWeight_G;                           		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              CurrentWrinkleWeight_B;                           		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              CurrentWrinkleWeight_A;                           		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              CurrentWrinkleSec;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              WrinkleFadeIndSec;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              WrinkleFadeOutdSec;                               		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              WrinkleExpSec;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                bFirst;                                           		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                bHidden;                                          		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                bNonExistMeshSlot;                                		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CustomPawn.GroundParticleInfo
// 0x0028
struct FGroundParticleInfo
{
	float                                              CurrentGroundParticlesTime;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              GroundParticlesDuration;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              GroundParticlesRandomFactor;                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              GroundParticlesRate;                              		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     GroundParticlePreviousPoint;                      		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FName                                       GroundParticleFollowBoneName;                     		// 0x001C (0x0008) [0x0000000000000000]              
	float                                              GroundVerticalOffset;                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CustomPawn.DelayParticleInfo
// 0x0028
struct FDelayParticleInfo
{
	struct FString                                     ParticleName;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ParticleLocation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    ParticleRotation;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              ExecuteTime;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CustomPawn.ParticleAttachInfo
// 0x00A8
struct FParticleAttachInfo
{
	class UParticleSystemComponent*                    AttachedParticle;                                 		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	float                                              TimeElapsed;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AttachState;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      PendingRemove : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       BoneName;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              BlendingEndTime;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     BlendingBasisLocation;                            		// 0x001C (0x000C) [0x0000000000000000]              
	struct FRotator                                    BlendingBasisRotation;                            		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     PreviousLocation;                                 		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FRotator                                    PreviousRotation;                                 		// 0x0040 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedPreviousLocation;                          		// 0x004C (0x000C) [0x0000000000000000]              
	struct FRotator                                    DelayedPreviousRotation;                          		// 0x0058 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachAcceleration;                        		// 0x0064 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachVelocity;                            		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachTargetVelocity;                      		// 0x007C (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachPrevLocation;                        		// 0x0088 (0x000C) [0x0000000000000000]              
	float                                              DelayedAttachStopPercentage;                      		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachStopInterpolationTime;               		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachFollowupTime;                        		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      DelayedAttachAllowRotation : 1;                   		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DelayedAttachRotationAngle;                       		// 0x00A4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CustomPawn.DelayMoveSocketInfo
// 0x0068
struct FDelayMoveSocketInfo
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                CarrierMeshIndex;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     DelayedPreviousLocation;                          		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    DelayedPreviousRotation;                          		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachAcceleration;                        		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachVelocity;                            		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachPrevLocation;                        		// 0x003C (0x000C) [0x0000000000000000]              
	float                                              DelayedAttachStopPercentage;                      		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachStopInterpolationTime;               		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachFollowupTime;                        		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      DelayedAttachAllowRotation : 1;                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DelayedAttachRotationAngle;                       		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              RemainedDelayMoveTime;                            		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              ReturnBlendTime;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedInitPos : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct T1Game.T1CustomPawn.AttachableSocketInfo
// 0x0140
struct FAttachableSocketInfo
{
	class AT1CustomPawn*                               TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       TargetBoneName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                TargetMeshIndex;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       AttachableSocketName;                             		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                CarrierMeshIndex;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x001C (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              TimeElapsed;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              BlendingEndTime;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FVector                                     BlendingBasisLocation;                            		// 0x003C (0x000C) [0x0000000000000000]              
	struct FRotator                                    BlendingBasisRotation;                            		// 0x0048 (0x000C) [0x0000000000000000]              
	unsigned char                                      AttachState;                                      		// 0x0054 (0x0001) [0x0000000000000000]              
	unsigned long                                      bPosOnly : 1;                                     		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     OrbitPreviousOffset;                              		// 0x005C (0x000C) [0x0000000000000000]              
	struct FVector                                     OrbitPreviousRotation;                            		// 0x0068 (0x000C) [0x0000000000000000]              
	struct FVector                                     OrbitRotationRate;                                		// 0x0074 (0x000C) [0x0000000000000000]              
	struct FVector                                     OrbitBaseOffset;                                  		// 0x0080 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           OrbitOriginLocalLocationArray;                    		// 0x008C (0x000C) [0x0000000000000000]              
	TArray< struct FRotator >                          OrbitOriginLocalRotationArray;                    		// 0x0098 (0x000C) [0x0000000000000000]              
	float                                              OrbitOffsetCosScaleElapsedTime;                   		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              OrbitDelayElapsedTimeForBlending;                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                OrbitDelayBlendingMode;                           		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FVector                                     OrbitDelayBlendingChangedLocation;                		// 0x00B0 (0x000C) [0x0000000000000000]              
	struct FRotator                                    OrbitDelayBlendingChangedRotation;                		// 0x00BC (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedPreviousLocation;                          		// 0x00C8 (0x000C) [0x0000000000000000]              
	struct FRotator                                    DelayedPreviousRotation;                          		// 0x00D4 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachAcceleration;                        		// 0x00E0 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachVelocity;                            		// 0x00EC (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachPrevLocation;                        		// 0x00F8 (0x000C) [0x0000000000000000]              
	float                                              DelayedAttachStopPercentage;                      		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachStopInterpolationTime;               		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachFollowupTime;                        		// 0x010C (0x0004) [0x0000000000000000]              
	unsigned long                                      DelayedAttachAllowRotation : 1;                   		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DelayedAttachRotationAngle;                       		// 0x0114 (0x0004) [0x0000000000000000]              
	struct FVector                                     OrbitBasicOrginPrevLocation;                      		// 0x0118 (0x000C) [0x0000000000000000]              
	struct FVector                                     OrbitFinalOrginPrevLocation;                      		// 0x0124 (0x000C) [0x0000000000000000]              
	struct FRotator                                    OrbitFinalOrginPrevRotation;                      		// 0x0130 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    OrbitingParticle;                                 		// 0x013C (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
};

// ScriptStruct T1Game.T1CustomPawn.OrbitingSocketInfo
// 0x00AC
struct FOrbitingSocketInfo
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                MeshIndex;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayTime;                                        		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElpasedTime;                                      		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlendTime;                                        		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Offset;                                           		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     RotateMin;                                        		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     RotateMax;                                        		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     RotateRateMin;                                    		// 0x003C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     RotateRateMax;                                    		// 0x0048 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      BasicOriginType;                                  		// 0x0054 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      MovingOriginType;                                 		// 0x0055 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       BasicOriginName;                                  		// 0x0058 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       MovingOriginName;                                 		// 0x0060 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              OriginBlendTime;                                  		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      RotationType;                                     		// 0x006C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableReload : 1;                                		// 0x0070 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bUseOriginRotation : 1;                           		// 0x0070 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bReverseOrbitRotateAxis : 1;                      		// 0x0070 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FVector                                     OffsetCosScaleAmplitude;                          		// 0x0074 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     OffsetCosScaleOffset;                             		// 0x0080 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              OffsetCosScaleCycleTime;                          		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      DelayedAttachType;                                		// 0x0090 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayedAttachFollowupTimeMin;                     		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayedAttachFollowupTimeMax;                     		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DelayedAttachRotationAngle;                       		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDelayedAttachAllowRotation : 1;                  		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              AttachParticleScale;                              		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             AttachParticleSystem;                             		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.PawnAttachInfo
// 0x0140
struct FPawnAttachInfo
{
	class AT1CustomPawn*                               AttachedPawn;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       TargetAttachBoneName;                             		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       CasterAttachBoneName;                             		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned long                                      PhysicsOn : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       CasterAnimName;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       TargetAnimName;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FString                                     TargetIdleAnimName;                               		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetInitialRelativeLocation;                    		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FRotator                                    TargetInitialRelativeRotation;                    		// 0x0040 (0x000C) [0x0000000000000000]              
	unsigned long                                      IsReleased : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CasterAttachAnimDuration;                         		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              AttachedRelativeRotationDuration;                 		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FRotator                                    AttachedRelativeRotationStart;                    		// 0x0058 (0x000C) [0x0000000000000000]              
	struct FRotator                                    AttachedRelativeRotationEnd;                      		// 0x0064 (0x000C) [0x0000000000000000]              
	float                                              PreAttachRelativeLocBlendDuration;                		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              PreAttachRelativeLocBlendEndTime;                 		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FVector                                     PreAttachRelativeLocation;                        		// 0x0078 (0x000C) [0x0000000000000000]              
	float                                              CurrentAttachSequenceTime;                        		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              AttachTime;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              DetachTime;                                       		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned char                                      AttachingPhase;                                   		// 0x0090 (0x0001) [0x0000000000000000]              
	unsigned char                                      AttachType;                                       		// 0x0091 (0x0001) [0x0000000000000000]              
	unsigned char                                      DetachType;                                       		// 0x0092 (0x0001) [0x0000000000000000]              
	struct FDouble                                     ThrowExecTime;                                    		// 0x0094 (0x0008) [0x0000000000000000]              
	struct FVector                                     AttachedPawnRelativeOffset;                       		// 0x009C (0x000C) [0x0000000000000000]              
	struct FName                                       PutDownStartAnimName;                             		// 0x00A8 (0x0008) [0x0000000000000000]              
	struct FName                                       PutDownEndAnimName;                               		// 0x00B0 (0x0008) [0x0000000000000000]              
	unsigned long                                      IsGadgetAutoscale : 1;                            		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ParentUpdateFirstFlag : 1;                        		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FRotator                                    InitialAttachAlignment;                           		// 0x00BC (0x000C) [0x0000000000000000]              
	struct FVector                                     DetachDestination;                                		// 0x00C8 (0x000C) [0x0000000000000000]              
	float                                              DetachSequenceTime;                               		// 0x00D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableLegsPhysics : 1;                           		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableArmsPhysics : 1;                           		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnableBodyPhysics : 1;                           		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              PhysicsStartTime;                                 		// 0x00DC (0x0004) [0x0000000000000000]              
	struct FRotator                                    AttachedPreviousRotation;                         		// 0x00E0 (0x000C) [0x0000000000000000]              
	float                                              AttachDuration;                                   		// 0x00EC (0x0004) [0x0000000000000000]              
	unsigned long                                      bIgnoreGravity : 1;                               		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DeltaTime;                                        		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPosOnly : 1;                                     		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateTransformProcessed : 1;                    		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     DelayedAttachAcceleration;                        		// 0x00FC (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachVelocity;                            		// 0x0108 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachTargetVelocity;                      		// 0x0114 (0x000C) [0x0000000000000000]              
	struct FVector                                     DelayedAttachPrevLocation;                        		// 0x0120 (0x000C) [0x0000000000000000]              
	float                                              DelayedAttachStopPercentage;                      		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachStopInterpolationTime;               		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              DelayedAttachFollowupTime;                        		// 0x0134 (0x0004) [0x0000000000000000]              
	unsigned long                                      DelayedAttachAllowRotation : 1;                   		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DelayedAttachRotationAngle;                       		// 0x013C (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CustomPawn.PawnThrowElement
// 0x0024
struct FPawnThrowElement
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                iCellX;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                iCellY;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1CustomPawn.FluidFootPrevInfo
// 0x0018
struct FFluidFootPrevInfo
{
	TArray< struct FVector >                           Locations;                                        		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      Times;                                            		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.FootPrintPrevInfo
// 0x0020
struct FFootPrintPrevInfo
{
	class UPhysicalMaterial*                           Material;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     BoneLocInfo;                                      		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              Time;                                             		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.DelayedFlyAttachInfo
// 0x006C
struct FDelayedFlyAttachInfo
{
	class AT1CustomPawn*                               InAttachToPawn;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       InBoneName;                                       		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       InTargetBoneName;                                 		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              InDuration;                                       		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     InAnimationName;                                  		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     InFlyAnimationName;                               		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       InEndAnimationName;                               		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                InRotationMode;                                   		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                InCurveMode;                                      		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                InRollAngle;                                      		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      InPosOnly : 1;                                    		// 0x0044 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              InAttachedDuration;                               		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      InSyncPostionWithBone : 1;                        		// 0x004C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      InSynPositionWhenDelayFollowed : 1;               		// 0x004C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      InIgnoreGravity : 1;                              		// 0x004C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FVector                                     GroundTargetLocation;                             		// 0x0050 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    GroundTargetRotation;                             		// 0x005C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      InFlipRoll180 : 1;                                		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      InFlyAnimNoLoop : 1;                              		// 0x0068 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.PlateBlend
// 0x0014
struct FPlateBlend
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartValue;                                       		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndValue;                                         		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.PlateImage
// 0x0038
struct FPlateImage
{
	struct FPointer                                    Image;                                            		// 0x0000 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FVector2D                                   UV;                                               		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   UVSize;                                           		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Offset;                                           		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                Color;                                            		// 0x0028 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.NamePlateLineInfo
// 0x0078
struct FNamePlateLineInfo
{
	float                                              TextLeftOffSet;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TextRightOffSet;                                  		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateImage                                 LeftImage;                                        		// 0x0008 (0x0038) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateImage                                 RightImage;                                       		// 0x0040 (0x0038) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.NamePlateInfo
// 0x0050
struct FNamePlateInfo
{
	TArray< struct FNamePlateLineInfo >                NamePlateLineArray;                               		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FLineNode >                         LineNodes;                                        		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector >                           TextOffSetList;                                   		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPlateImage >                       ImageList;                                        		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateBlend                                 BlendInfo;                                        		// 0x0038 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x004C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.IndicatorInfo
// 0x0038
struct FIndicatorInfo
{
	TArray< struct FPlateImage >                       IndicatorList;                                    		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< float >                                    OffsetList;                                       		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateBlend                                 BlendInfo;                                        		// 0x0020 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x0034 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.BalloonInfo
// 0x009C
struct FBalloonInfo
{
	TArray< struct FLineNode >                         NameLineNodes;                                    		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FLineNode >                         LineNodes;                                        		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector >                           NameTextOffSetList;                               		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector >                           TextOffSetList;                                   		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateImage                                 Indicator;                                        		// 0x0030 (0x0038) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPlateImage >                       BalloonList;                                      		// 0x0068 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0074 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateBlend                                 BlendInfo;                                        		// 0x007C (0x0014) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationLeft;                                     		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Duration;                                         		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x0098 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.CoinInfo
// 0x00B8
struct FCoinInfo
{
	TArray< struct FLineNode >                         CoinLineNodes;                                    		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector >                           CoinTextOffSetList;                               		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateImage                                 CoinTextBackground;                               		// 0x0018 (0x0038) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateImage                                 Coin;                                             		// 0x0050 (0x0038) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Offset;                                           		// 0x0090 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position;                                         		// 0x0098 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateBlend                                 BlendInfo;                                        		// 0x00A0 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x00B4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.VipIconInfo
// 0x0068
struct FVipIconInfo
{
	struct FPlateImage                                 VipIcon;                                          		// 0x0000 (0x0038) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0038 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Offset;                                           		// 0x0040 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Position;                                         		// 0x0048 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateBlend                                 BlendInfo;                                        		// 0x0050 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x0064 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1CustomPawn.PlateInfo
// 0x029C
struct FPlateInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                HeightMode;                                       		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x0010 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bUseBip01AnimPos : 1;                             		// 0x0010 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	int                                                ProgressId1;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ProgressId2;                                      		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ProgressHeight1;                                  		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ProgressHeight2;                                  		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ProgressMargin1;                                  		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ProgressMargin2;                                  		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateBlend                                 BlendInfo;                                        		// 0x002C (0x0014) [0x0000000000002000]              ( CPF_Transient )
	struct FPlateBlend                                 BalloonBlendInfo;                                 		// 0x0040 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	struct FNamePlateInfo                              NamePlateInfo;                                    		// 0x0054 (0x0050) [0x0000000000002000]              ( CPF_Transient )
	struct FIndicatorInfo                              IndicatorInfo;                                    		// 0x00A4 (0x0038) [0x0000000000002000]              ( CPF_Transient )
	struct FBalloonInfo                                BalloonInfo;                                      		// 0x00DC (0x009C) [0x0000000000002000]              ( CPF_Transient )
	struct FCoinInfo                                   CoinInfo;                                         		// 0x0178 (0x00B8) [0x0000000000002000]              ( CPF_Transient )
	struct FVipIconInfo                                VipIconInfo;                                      		// 0x0230 (0x0068) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEnableCustomCullDistance : 1;                    		// 0x0298 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1DropItem._DropItemData
// 0x0004
struct F_DropItemData
{
	int                                                Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct T1Game.T1EnvObject.EnvProgressEffect
// 0x0084
struct FEnvProgressEffect
{
	TArray< class UProgressiveEffect* >                NoneProgressEffects;                              		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                OpenProgressEffects;                              		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                CloseProgressEffects;                             		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                EmptyProgressEffects;                             		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                Step1ProgressEffects;                             		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                Step2ProgressEffects;                             		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                Step3ProgressEffects;                             		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                Step4ProgressEffects;                             		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                Step5ProgressEffects;                             		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                Step6ProgressEffects;                             		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UProgressiveEffect* >                Step7ProgressEffects;                             		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.EnvProgressEffectArrIndex
// 0x0084
struct FEnvProgressEffectArrIndex
{
	TArray< int >                                      NoneProgressEffectIndex;                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      OpenProgressEffectIndex;                          		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      CloseProgressEffectIndex;                         		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      EmptyProgressEffectIndex;                         		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Step1ProgressEffectIndex;                         		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Step2ProgressEffectIndex;                         		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Step3ProgressEffectIndex;                         		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Step4ProgressEffectIndex;                         		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Step5ProgressEffectIndex;                         		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Step6ProgressEffectIndex;                         		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Step7ProgressEffectIndex;                         		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1EnvObjectLooping
// 0x0004
struct FT1EnvObjectLooping
{
	unsigned long                                      bState_None_Loop : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bState_Destroyed_Loop : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bState_On_Loop : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bState_Off_Loop : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bState_Open_Loop : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bState_Close_Loop : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bState_Empty_Loop : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bState_NoneIdle_Loop : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bState_Step1 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bState_Step2 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bState_Step3 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bState_Step4 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bState_Step5 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bState_Step6 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bState_Step7 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1EnvStateSequence
// 0x00B4
struct FT1EnvStateSequence
{
	struct FString                                     EnvState_None;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     EnvState_Destroyed;                               		// 0x000C (0x000C) [0x0000000000000000]              
	struct FString                                     EnvState_On;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FString                                     EnvState_Off;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FString                                     EnvState_Open;                                    		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Close;                                   		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Empty;                                   		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_NoneIdle;                                		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Step1;                                   		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Step2;                                   		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Step3;                                   		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Step4;                                   		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Step5;                                   		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Step6;                                   		// 0x009C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EnvState_Step7;                                   		// 0x00A8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1ZoneTransit
// 0x0030
struct FT1ZoneTransit
{
	struct FString                                     ZoneTransit_zone;                                 		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ZoneTransit_dungeon;                              		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ZoneTransit_PcSpawn;                              		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ZoneTransit_PcSpawn_In_Arena;                     		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1ZoneTransit_cinematic
// 0x0018
struct FT1ZoneTransit_cinematic
{
	struct FString                                     Enter_cinematic;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Leave_cinematic;                                  		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1ZoneTransit_Dash
// 0x0018
struct FT1ZoneTransit_Dash
{
	struct FString                                     DashZoneTransit_zone;                             		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DashZoneTransit_PcSpawn;                          		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1ZoneTransitDash_Social
// 0x0018
struct FT1ZoneTransitDash_Social
{
	struct FString                                     Dash_Enter_Social;                                		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Dash_Leave_Social;                                		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1EnvPortalPhase
// 0x0024
struct FT1EnvPortalPhase
{
	struct FString                                     pc_spawn;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     zone_leave_cinematic;                             		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     zone_enter_cinematic;                             		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1EnvAirDashleavePhase
// 0x0024
struct FT1EnvAirDashleavePhase
{
	struct FString                                     pc_spawn;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     zone_leave_social;                                		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     zone_enter_social;                                		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.T1EnvVolume
// 0x0010
struct FT1EnvVolume
{
	float                                              SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeZ;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      DrawSolid : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct T1Game.T1EnvObject.EnvPlateBlend
// 0x0014
struct FEnvPlateBlend
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartValue;                                       		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EndValue;                                         		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1EnvObject.EnvProgressBarInfo
// 0x001C
struct FEnvProgressBarInfo
{
	int                                                ProgressId;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Offset;                                           		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1EnvObject.EnvIndicatorInfo
// 0x002C
struct FEnvIndicatorInfo
{
	struct FPointer                                    Image;                                            		// 0x0000 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FVector2D                                   UV;                                               		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   UVSize;                                           		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Offset;                                           		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   Size;                                             		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHide : 1;                                        		// 0x0028 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct T1Game.T1EnvObject.EnvPlateInfo
// 0x0074
struct FEnvPlateInfo
{
	int                                                HeightMode;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FEnvPlateBlend                              BlendInfo;                                        		// 0x0004 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	struct FEnvPlateBlend                              IndicatorBlendInfo;                               		// 0x0018 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	struct FEnvProgressBarInfo                         ProgressBarInfo;                                  		// 0x002C (0x001C) [0x0000000000002000]              ( CPF_Transient )
	struct FEnvIndicatorInfo                           IndicatorInfo;                                    		// 0x0048 (0x002C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct T1Game.T1Pawn.LastNonRuleMoveEntry
// 0x0020
struct FLastNonRuleMoveEntry
{
	struct FDouble                                     TimeStamp;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     LastNonRuleMoveLocation;                          		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastNonRuleMoveRotation;                          		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1Pawn.T1PawnMove
// 0x0050
struct FT1PawnMove
{
	float                                              GroundSpeed;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Dest;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              TimeToTake;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DestYaw;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      MoveType;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      PathResult : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RotationBlendingTime;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              StopTime;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FVector                                     prevLocation;                                     		// 0x002C (0x000C) [0x0000000000000000]              
	float                                              AnimPlayRate;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FVector                                     AccelDir;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	int                                                ZoneID;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                evtObjId;                                         		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1PlayerCamera.CameraLensEffectEntry
// 0x000C
struct FCameraLensEffectEntry
{
	class UParticleSystemComponent*                    CameraLensEffect;                                 		// 0x0000 (0x0004) [0x0000000000000008]              ( CPF_ExportObject )
	unsigned char                                      CameraLensEffectFitType;                          		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              CameraLensEffectDistance;                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct T1Game.T1WayPointActor.T1PATHLINKACTORINFO
// 0x0014
struct FT1PATHLINKACTORINFO
{
	int                                                Weight;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MsgID;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LinkType;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class AT1WayPointActor*                            DestPoint;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1ZoneProperty.T1_RESPAWN_AREA_INZONE
// 0x0014
struct FT1_RESPAWN_AREA_INZONE
{
	struct FString                                     Alias;                                            		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneID;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AreaID;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1ZoneProperty.T1_BASECAMP_AREA_INZONE
// 0x0014
struct FT1_BASECAMP_AREA_INZONE
{
	struct FString                                     Alias;                                            		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneID;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AreaID;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct T1Game.T1ZoneProperty.T1_ZONEPROP_ARENA_RETURN_INFO
// 0x0018
struct FT1_ZONEPROP_ARENA_RETURN_INFO
{
	struct FString                                     Ref_Info1;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Ref_Info2;                                        		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif