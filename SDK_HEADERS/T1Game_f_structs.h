#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: T1Game_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function T1Game.T1GameViewportClient.DrawTransition
// [0x00020002] 
struct UT1GameViewportClient_execDrawTransition_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1GameViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
struct UT1GameViewportClient_eventPostRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1GameViewportClient.Init
// [0x00420802] ( FUNC_Event )
struct UT1GameViewportClient_eventInit_Parms
{
	struct FString                                     OutError;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1GameViewportClient.PostRenderT1
// [0x00020400] ( FUNC_Native )
struct UT1GameViewportClient_execPostRenderT1_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.AlignPlayerPawnToCameraDirection
// [0x00820202] ( FUNC_Exec )
struct AT1PlayerController_execAlignPlayerPawnToCameraDirection_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 LocalRotation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.CameraMove
// [0x00420802] ( FUNC_Event )
struct AT1PlayerController_eventCameraMove_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Pct;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRawDistributionVector                      newRotAdjust;                                     		// 0x0008 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FRawDistributionVector                      newLocAdjust;                                     		// 0x0024 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FRawDistributionFloat                       newFovAdjust;                                     		// 0x0040 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function T1Game.T1PlayerController.CameraShake
// [0x00824802] ( FUNC_Event )
struct AT1PlayerController_eventCameraShake_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotAmplitude;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotFrequency;                                  		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocAmplitude;                                  		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocFrequency;                                  		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVAmplitude;                                  		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVFrequency;                                  		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRotRandom : 1;                                   		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLocRandom : 1;                                   		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFOVRandom : 1;                                   		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UForceFeedbackWaveform*                   CameraShakeWaveform;                              		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FWaveformSample                          Sample;                                           		// 0x004C (0x0008) [0x0000000000000000]              
	// struct FVector                                  AmplitudeVector;                                  		// 0x0054 (0x000C) [0x0000000000000000]              
	// float                                           Amplitude;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.PlayerMove
// [0x00820002] 
struct AT1PlayerController_execPlayerMove_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  X;                                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x001C (0x000C) [0x0000000000000000]              
	// unsigned long                                   bSaveJump : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function T1Game.T1PlayerController.CheckJumpOrDuck
// [0x00020002] 
struct AT1PlayerController_execCheckJumpOrDuck_Parms
{
	// unsigned long                                   IsJump : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function T1Game.T1PlayerController.PlayerTick
// [0x00020002] 
struct AT1PlayerController_execPlayerTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fInterpSpeed;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fResult;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.ProcessViewRotation
// [0x00420002] 
struct AT1PlayerController_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    DeltaRot;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.UpdateRotation
// [0x00820002] 
struct AT1PlayerController_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 DeltaRot;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.ShoulderPosCamDist
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execShoulderPosCamDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.ShoulderPosY
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execShoulderPosY_Parms
{
	float                                              fY;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.ShoulderPosX
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execShoulderPosX_Parms
{
	float                                              fX;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.ShoulderPos
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execShoulderPos_Parms
{
	float                                              fX;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fY;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDist;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.TargetZoom
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execTargetZoom_Parms
{
	float                                              fTargetZoom;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.TargetRot
// [0x00820202] ( FUNC_Exec )
struct AT1PlayerController_execTargetRot_Parms
{
	float                                              fPitch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fYaw;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 Rot;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.SetCamTargetHeightNear
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetCamTargetHeightNear_Parms
{
	float                                              fHeight;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.CamTargetHeightNearDown
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execCamTargetHeightNearDown_Parms
{
};

// Function T1Game.T1PlayerController.CamTargetHeightNearUp
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execCamTargetHeightNearUp_Parms
{
};

// Function T1Game.T1PlayerController.SetCamTargetHeight
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetCamTargetHeight_Parms
{
	float                                              fHeight;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.CamTargetHeightDown
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execCamTargetHeightDown_Parms
{
};

// Function T1Game.T1PlayerController.CamTargetHeightUp
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execCamTargetHeightUp_Parms
{
};

// Function T1Game.T1PlayerController.SetCharacterShowMode
// [0x00020400] ( FUNC_Native )
struct AT1PlayerController_execSetCharacterShowMode_Parms
{
	unsigned long                                      bFlag : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1PlayerController.NativeAccel
// [0x00020400] ( FUNC_Native )
struct AT1PlayerController_execNativeAccel_Parms
{
	struct FVector                                     X;                                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Y;                                                		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Z;                                                		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1PlayerController.ToggleCamInfo
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct AT1PlayerController_execToggleCamInfo_Parms
{
};

// Function T1Game.T1PlayerController.SetFovAtMax
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetFovAtMax_Parms
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.SetFovAtZero
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetFovAtZero_Parms
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.SetCamNearDist
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetCamNearDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.SetCamMaxDist
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetCamMaxDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.SetCamMinDist
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetCamMinDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.SetCamHeightTransDist
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execSetCamHeightTransDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.SetDollyFactor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct AT1PlayerController_execSetDollyFactor_Parms
{
	float                                              fNewDollyFactor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.Dolly
// [0x00020002] 
struct AT1PlayerController_execDolly_Parms
{
	float                                              fDollyFactor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fResult;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.CharacterFitDolly
// [0x00020002] 
struct AT1PlayerController_execCharacterFitDolly_Parms
{
	float                                              fDollyFactor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fNewDestFreeCamDistance;                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.DollyOut
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execDollyOut_Parms
{
};

// Function T1Game.T1PlayerController.DollyIn
// [0x00020202] ( FUNC_Exec )
struct AT1PlayerController_execDollyIn_Parms
{
	// int                                             iBoundaryState;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1PlayerController.Face
// [0x00020200] ( FUNC_Exec )
struct AT1PlayerController_execFace_Parms
{
	int                                                a_Type;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.Hair
// [0x00020200] ( FUNC_Exec )
struct AT1PlayerController_execHair_Parms
{
	int                                                a_Type;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.Costume
// [0x00020200] ( FUNC_Exec )
struct AT1PlayerController_execCostume_Parms
{
	int                                                a_Type;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.ChangeSet
// [0x00020200] ( FUNC_Exec )
struct AT1PlayerController_execChangeSet_Parms
{
	int                                                a_Type;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerController.execAttackReq
// [0x00020200] ( FUNC_Exec )
struct AT1PlayerController_execexecAttackReq_Parms
{
};

// Function T1Game.T1PlayerInput.ToggleRotateTypeForJoypad
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execToggleRotateTypeForJoypad_Parms
{
	// unsigned char                                   Temp;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function T1Game.T1PlayerInput.DisableRotateForJoypad
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execDisableRotateForJoypad_Parms
{
};

// Function T1Game.T1PlayerInput.EnableRotateForJoypad
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execEnableRotateForJoypad_Parms
{
};

// Function T1Game.T1PlayerInput.ToggleKeepWalking
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execToggleKeepWalking_Parms
{
};

// Function T1Game.T1PlayerInput.QuickTurn
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execQuickTurn_Parms
{
};

// Function T1Game.T1PlayerInput.ResetCamera
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execResetCamera_Parms
{
};

// Function T1Game.T1PlayerInput.GlideDrop
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execGlideDrop_Parms
{
};

// Function T1Game.T1PlayerInput.UnDash
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execUnDash_Parms
{
};

// Function T1Game.T1PlayerInput.Dash
// [0x00020202] ( FUNC_Exec )
struct UT1PlayerInput_execDash_Parms
{
};

// Function T1Game.T1PlayerInput.SetTPSInnerMode
// [0x00020400] ( FUNC_Native )
struct UT1PlayerInput_execSetTPSInnerMode_Parms
{
	unsigned char                                      InMode;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerInput.IsRotateCamOnly
// [0x00020400] ( FUNC_Native )
struct UT1PlayerInput_execIsRotateCamOnly_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1PlayerInput.IsRotatePlayer
// [0x00020400] ( FUNC_Native )
struct UT1PlayerInput_execIsRotatePlayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1PlayerInput.PlayerInput
// [0x00020802] ( FUNC_Event )
struct UT1PlayerInput_eventPlayerInput_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           TimeScale;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fMoveDist;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSetCursorVisible : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUseStrafe : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bIsMouseMove : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function T1Game.T1SceneCaptureMapVolumeActor.GetRenderedResult
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct AT1SceneCaptureMapVolumeActor_execGetRenderedResult_Parms
{
	class UTexture2D*                                  ResultTexture;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.IsActorPlayingFaceFXAnim
// [0x00020102] 
struct AT1CustomPawn_execIsActorPlayingFaceFXAnim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.GetActorFaceFXAsset
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventGetActorFaceFXAsset_Parms
{
	class UFaceFXAsset*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.OnPlayFaceFXAnim
// [0x00020102] 
struct AT1CustomPawn_execOnPlayFaceFXAnim_Parms
{
	class USeqAct_PlayFaceFXAnim*                      inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1CustomPawn.FinishAnimControl
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventFinishAnimControl_Parms
{
};

// Function T1Game.T1CustomPawn.StartPawnFadeIn
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventStartPawnFadeIn_Parms
{
};

// Function T1Game.T1CustomPawn.BeginAnimControl
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventBeginAnimControl_Parms
{
	TArray< class UAnimSet* >                          InAnimSets;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1CustomPawn.GetFaceFXAudioComponent
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventGetFaceFXAudioComponent_Parms
{
	class UAudioComponent*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.StopActorFaceFXAnim
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventStopActorFaceFXAnim_Parms
{
};

// Function T1Game.T1CustomPawn.IsPlayingFaceFXAnim
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventIsPlayingFaceFXAnim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.PlayActorFaceFXAnim
// [0x00024902] ( FUNC_Event )
struct AT1CustomPawn_eventPlayActorFaceFXAnim_Parms
{
	class UFaceFXAnimSet*                              AnimSet;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SeqName;                                          		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SoundTrackType;                                   		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      InStopPrevious : 1;                               		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.GetHitPosition
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execGetHitPosition_Parms
{
	struct FString                                     StartBone;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AT1CustomPawn*                               TargetPawn;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TargetBone;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMoveDist;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0020 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.GetVehicleState
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventGetVehicleState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetMyVehicle
// [0x00020902] ( FUNC_Event )
struct AT1CustomPawn_eventSetMyVehicle_Parms
{
	class AT1CustomPawn*                               Vehicle;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.PostKismet
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execPostKismet_Parms
{
};

// Function T1Game.T1CustomPawn.IsValidDriver
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsValidDriver_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.IsRideDriver
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsRideDriver_Parms
{
	class AT1CustomPawn*                               Driver;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.CanEnterVehicle
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execCanEnterVehicle_Parms
{
	struct FString                                     BoneName;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetVehicleAni
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetVehicleAni_Parms
{
	struct FString                                     strAnimName;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAnimSpeed;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAnimBlendIn;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAnimBlendOut;                                    		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Loop : 1;                                         		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.IsVehicleRide
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsVehicleRide_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.IsReadyVehicleLeave
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsReadyVehicleLeave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.IsReadyVehicleRide
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsReadyVehicleRide_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.CanDriving
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execCanDriving_Parms
{
	struct FString                                     BoneName;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.GetBoundBoxForRender
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execGetBoundBoxForRender_Parms
{
	class AT1CustomPawn*                               Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBox                                        ReturnValue;                                      		// 0x0004 (0x001C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SwapPawnController
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSwapPawnController_Parms
{
	class AT1CustomPawn*                               FirstPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AT1CustomPawn*                               SecondPawn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.DetachToVehicle
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execDetachToVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.AttachToVehicle
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execAttachToVehicle_Parms
{
	struct FString                                     DriveBoneName;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     VehicleBoneName;                                  		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Offset;                                           		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.RideVehicle
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execRideVehicle_Parms
{
	struct FString                                     strAnimName;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                iPriority;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAnimSpeed;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAnimBlendIn;                                     		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fAnimBlendOut;                                    		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBlockMove : 1;                                   		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBlockRotate : 1;                                 		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNextAnim : 1;                                    		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.ChildParticleRelativePos
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execChildParticleRelativePos_Parms
{
	class AEmitter*                                    Particle;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRelX;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fRelY;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fRelZ;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                BoneUseType;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.ChildParticleDetach
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execChildParticleDetach_Parms
{
	class AEmitter*                                    Particle;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.ChildParticleAttach
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execChildParticleAttach_Parms
{
	class AEmitter*                                    Particle;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRelX;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fRelY;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fRelZ;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                BoneUseType;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.MakeFootPrint
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execMakeFootPrint_Parms
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iFootPrintInfoId;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FootLocation;                                     		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    FootRotation;                                     		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.UpdateWaterPrint
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdateWaterPrint_Parms
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.UpdateFootPrint
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdateFootPrint_Parms
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.ChangeAnimSpeed
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execChangeAnimSpeed_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCustomAnimSpeed;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fPlayTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.LogForMoveAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execLogForMoveAnimName_Parms
{
};

// Function T1Game.T1CustomPawn.SetFadingAlpha
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetFadingAlpha_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAlpha;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetFadingState
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetFadingState_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iType;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.UpdateResetPhysicsBones
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdateResetPhysicsBones_Parms
{
};

// Function T1Game.T1CustomPawn.SetResetPhysicsBoneFlag
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetResetPhysicsBoneFlag_Parms
{
	int                                                Flag;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iMaxResetBonesCount;                              		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetOutLineBloomInfo
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetOutLineBloomInfo_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOutLineBloom : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                Red;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Green;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Blue;                                             		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Alpha;                                            		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iAlphaAnimType;                                   		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iMinAlpha;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iMaxAlpha;                                        		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fAlphaAnimTime;                                   		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fScale;                                           		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fMinScale;                                        		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fMaxScale;                                        		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.UpdatePolyHeight
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdatePolyHeight_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetVehicleAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetVehicleAnimName_Parms
{
	struct FString                                     strIdle;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSetType;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMoveAnimRate
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMoveAnimRate_Parms
{
	float                                              fRate;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetWalkRunCheckSpeed
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetWalkRunCheckSpeed_Parms
{
	float                                              fWalkSpeed;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRunSpeed;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetHighJumpAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetHighJumpAnimName_Parms
{
	struct FString                                     strJumpStart;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJumpIng;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJumpEnd;                                       		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJumpCancel;                                    		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetLongJumpAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetLongJumpAnimName_Parms
{
	struct FString                                     strJumpStart;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJumpIng;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJumpEnd;                                       		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJumpCancel;                                    		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.GetChangeMoveAnimNamesFlag
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execGetChangeMoveAnimNamesFlag_Parms
{
	int                                                iUpper;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetChangeMoveAnimNamesFlag
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetChangeMoveAnimNamesFlag_Parms
{
	int                                                iUpper;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFlag : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetInterpolAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetInterpolAnimName_Parms
{
	struct FString                                     strJToI;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJToMFront;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJToMRight;                                     		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJToMLeft;                                      		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strJToMBack;                                      		// 0x0030 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strMToJFront;                                     		// 0x003C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strMToJRight;                                     		// 0x0048 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strMToJLeft;                                      		// 0x0054 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strMtoI;                                          		// 0x0060 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strLtoR;                                          		// 0x006C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strRtoL;                                          		// 0x0078 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSetType;                                         		// 0x0084 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetCustomAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetCustomAnimName_Parms
{
	int                                                iUpper;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strCustom;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetIdleAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetIdleAnimName_Parms
{
	struct FString                                     strIdle;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSetType;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetJumpAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetJumpAnimName_Parms
{
	struct FString                                     strFront;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strRight;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strLeft;                                          		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSetType;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetRunAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetRunAnimName_Parms
{
	struct FString                                     strFront;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strRight;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strLeft;                                          		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strBack;                                          		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strRightBack;                                     		// 0x0030 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strLeftBack;                                      		// 0x003C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSetType;                                         		// 0x0048 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetWalkAnimName
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetWalkAnimName_Parms
{
	struct FString                                     strFront;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strRight;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strLeft;                                          		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strBack;                                          		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strRightBack;                                     		// 0x0030 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strLeftBack;                                      		// 0x003C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSetType;                                         		// 0x0048 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.ApplyMeshCustomizeInfo
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execApplyMeshCustomizeInfo_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.IsUseCustomizeDefaultType
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsUseCustomizeDefaultType_Parms
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetCustomizeDefaultType
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetCustomizeDefaultType_Parms
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUse : 1;                                         		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.PlayParticleMaterials
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execPlayParticleMaterials_Parms
{
};

// Function T1Game.T1CustomPawn.GetHitParticleMaterial
// [0x00420400] ( FUNC_Native )
struct AT1CustomPawn_execGetHitParticleMaterial_Parms
{
	TArray< class UParticleSystem* >                   InParticleMaterialArray;                          		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      InWeaponSize;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.PlayPhysTempParticle
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execPlayPhysTempParticle_Parms
{
	struct FString                                     BoneName;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReleativeLoc;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.GetPawnStepType
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execGetPawnStepType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.UpdateSoundInfo
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdateSoundInfo_Parms
{
};

// Function T1Game.T1CustomPawn.SetPawnSoundInfo
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetPawnSoundInfo_Parms
{
	struct FSoundNotiType                              SoundInfo;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetCalcFootLocation
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetCalcFootLocation_Parms
{
	unsigned long                                      bFlag : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.GetMaxSlotNum
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execGetMaxSlotNum_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.PlayAnimSeq
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execPlayAnimSeq_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.StopAnimSeq
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execStopAnimSeq_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetAnim
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetAnim_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Seq;                                              		// 0x0004 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      bInitialTime : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              InitialTime;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.IsAnim
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsAnim_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Seq;                                              		// 0x0004 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetWrinkle
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetWrinkle_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeIn;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fExpTime;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeOut;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fWeightX;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fWeightY;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fWeightZ;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fWeightW;                                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.ApplyAttachMatColorWeight
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execApplyAttachMatColorWeight_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetAttachAnim
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetAttachAnim_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Seq;                                              		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeIn;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fExpTime;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeOut;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                bForce;                                           		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetExpression
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetExpression_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iExpression;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeIn;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fExpTime;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeOut;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                bForce;                                           		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetPhysicsWeight
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetPhysicsWeight_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fPhysicsWeight;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.AddPhysicsForce
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execAddPhysicsForce_Parms
{
	struct FVector                                     vecPowerDir;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fForce;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.PlayPhysicNoise
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execPlayPhysicNoise_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NoiseDir;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoiseScale;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoisePlayTime;                                    		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoiseDuration;                                    		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoiseDurationScale;                               		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NoiseSpace;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMatVectorParameterValue
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMatVectorParameterValue_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ValueName;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vecValue;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMatScalarParameterValue
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMatScalarParameterValue_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ValueName;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fValue;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.UpdateFacial
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdateFacial_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.Update
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdate_Parms
{
	float                                              fViewDistance;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDeltaTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.PlayAnim
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execPlayAnim_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.StopAnim
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execStopAnim_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.EndAnim
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execEndAnim_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.BeginAnim
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execBeginAnim_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMeshDenpendencyParticle
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMeshDenpendencyParticle_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSet : 1;                                         		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetVisible
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetVisible_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iVisible;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.CopyMesh
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execCopyMesh_Parms
{
	int                                                iSrcMeshIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iDestMeshIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AT1CustomPawn*                               ParentP;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AT1CustomPawn*                               ChildP;                                           		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AT1Pawn*                                     ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.EndPhysics
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execEndPhysics_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.BeginPhysics
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execBeginPhysics_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.ClearDashingSpecialEffect
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execClearDashingSpecialEffect_Parms
{
};

// Function T1Game.T1CustomPawn.ClearMeshInfo
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execClearMeshInfo_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.Clear
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execClear_Parms
{
};

// Function T1Game.T1CustomPawn.SetMeshPhysicsAsset
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMeshPhysicsAsset_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPhysicsAsset*                               MeshPhysics;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMeshAnimTree
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMeshAnimTree_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAnimTree*                                   MeshAnimTree;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMeshAnimset
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMeshAnimset_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAnimSet*                                    MeshAnimSet;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.MeshCompBeginDeferredReattach
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execMeshCompBeginDeferredReattach_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMaterialVectorParameterValue
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMaterialVectorParameterValue_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ParamName;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                InColor;                                          		// 0x0010 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       MaterialName;                                     		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMaterialTextureParameterValue
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMaterialTextureParameterValue_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ParamName;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UTexture*                                    InTexture;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       MaterialName;                                     		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMaterialScalarParameterValue
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMaterialScalarParameterValue_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ParamName;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fValue;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       MaterialName;                                     		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.IsGuildPropDiry
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execIsGuildPropDiry_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetGuildCustomizeMesh
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetGuildCustomizeMesh_Parms
{
	int                                                GuildItemType;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFlag : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.UpdateGuildCustomize
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execUpdateGuildCustomize_Parms
{
};

// Function T1Game.T1CustomPawn.SetMeshMaterialColor
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMeshMaterialColor_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       MaterialName;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ParamName;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                changeColor;                                      		// 0x0018 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.GetMeshMaterialInstanceConstant
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execGetMeshMaterialInstanceConstant_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       MaterialName;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInstanceConstant*                   ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetMeshMaterial
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMeshMaterial_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInstanceConstant*                   Material;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMesh
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetMesh_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      InMesh;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.GetMesh
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execGetMesh_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CustomPawn.SetFullPhysics
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetFullPhysics_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     BoneName;                                         		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iNum;                                             		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iFixed;                                           		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetMeshInfo
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetMeshInfo_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SkeletalMesh;                                     		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     AnimSet;                                          		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     PhysicsAsset;                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     AnimTree;                                         		// 0x0028 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iParentIndex;                                     		// 0x0034 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iParentBoneIndex;                                 		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iPosOnly;                                         		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iCheckSameMesh;                                   		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUsingDependencyRope : 1;                         		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     SubAnimTree;                                      		// 0x0048 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              InScale;                                          		// 0x0054 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.MoveMeshSocket
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execMoveMeshSocket_Parms
{
	int                                                iMeshIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iBoneIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.MoveMeshSlot
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execMoveMeshSlot_Parms
{
	int                                                iSrcMeshIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iDestMeshIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iDestBoneIndex;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.ReleaseLink
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execReleaseLink_Parms
{
	int                                                iParentMeshIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iChildMeshIndex;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetLink
// [0x00024400] ( FUNC_Native )
struct AT1CustomPawn_execSetLink_Parms
{
	int                                                iParentMeshIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iParentBoneIndex;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iChildMeshIndex;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosOnly;                                          		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CustomPawn.SetAutoPhyiscs
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSetAutoPhyiscs_Parms
{
	unsigned long                                      AutoPhysics : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1CustomPawn.SwitchPhysicsAssetPair
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execSwitchPhysicsAssetPair_Parms
{
};

// Function T1Game.T1CustomPawn.EnableGroundParticle
// [0x00020400] ( FUNC_Native )
struct AT1CustomPawn_execEnableGroundParticle_Parms
{
	float                                              InGroundParticleDuration;                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InRandomFactor;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InFollowBoneName;                                 		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              InVerticalOffset;                                 		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InRate;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1Pawn.SetAnimPosition
// [0x00020902] ( FUNC_Event )
struct AT1Pawn_eventSetAnimPosition_Parms
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ChannelIndex;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InAnimSeqName;                                    		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              InPosition;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFireNotifies : 1;                                		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1Pawn.Destroyed
// [0x00020900] ( FUNC_Event )
struct AT1Pawn_eventDestroyed_Parms
{
};

// Function T1Game.T1Pawn.PostBeginPlay
// [0x00020102] 
struct AT1Pawn_execPostBeginPlay_Parms
{
};

// Function T1Game.T1Pawn.DoJumpCommand
// [0x00020802] ( FUNC_Event )
struct AT1Pawn_eventDoJumpCommand_Parms
{
};

// Function T1Game.T1Pawn.ResetToDefaults
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execResetToDefaults_Parms
{
};

// Function T1Game.T1Pawn.GetLastNonRuleMoveLocationAndRotation
// [0x00420400] ( FUNC_Native )
struct AT1Pawn_execGetLastNonRuleMoveLocationAndRotation_Parms
{
	struct FVector                                     LNRM_Location;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    LNRM_Rotation;                                    		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function T1Game.T1Pawn.UpdateLastNonRuleMoveLocationAndRotation
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execUpdateLastNonRuleMoveLocationAndRotation_Parms
{
};

// Function T1Game.T1Pawn.IsWallJumpOtherPlayer
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execIsWallJumpOtherPlayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.IsWallRunOtherPlayer
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execIsWallRunOtherPlayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.MakeVelocityMoveToAction
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execMakeVelocityMoveToAction_Parms
{
};

// Function T1Game.T1Pawn.MakeVelocityRuleMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execMakeVelocityRuleMove_Parms
{
};

// Function T1Game.T1Pawn.MakeVelocity
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execMakeVelocity_Parms
{
};

// Function T1Game.T1Pawn.MakeVelocity2D
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execMakeVelocity2D_Parms
{
};

// Function T1Game.T1Pawn.MakeVelocityZero
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execMakeVelocityZero_Parms
{
};

// Function T1Game.T1Pawn.ClearSummonedRunMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execClearSummonedRunMove_Parms
{
};

// Function T1Game.T1Pawn.StopSummoned
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execStopSummoned_Parms
{
};

// Function T1Game.T1Pawn.SetSummonedForceMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetSummonedForceMove_Parms
{
	int                                                MoveType;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestX;                                            		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestY;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestZ;                                            		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                nYaw;                                             		// 0x0010 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                ZoneID;                                           		// 0x0014 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                evtObjId;                                         		// 0x0018 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fRunSpeed;                                        		// 0x001C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function T1Game.T1Pawn.SetSummonedNextMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetSummonedNextMove_Parms
{
};

// Function T1Game.T1Pawn.SetSummonedMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetSummonedMove_Parms
{
	int                                                MoveType;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestX;                                            		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestY;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestZ;                                            		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                nYaw;                                             		// 0x0010 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                ZoneID;                                           		// 0x0018 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                evtObjId;                                         		// 0x001C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fRunSpeed;                                        		// 0x0020 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.SetSummonedMoveLegacy
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetSummonedMoveLegacy_Parms
{
	int                                                MoveType;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestX;                                            		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestY;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestZ;                                            		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                nYaw;                                             		// 0x0010 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                ZoneID;                                           		// 0x0018 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                evtObjId;                                         		// 0x001C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fRunSpeed;                                        		// 0x0020 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.ObjResetMoveDestInfo
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execObjResetMoveDestInfo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.SetObjNextMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetObjNextMove_Parms
{
	float                                              PassedTime;                                       		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function T1Game.T1Pawn.SetObjSyncYaw
// [0x00024400] ( FUNC_Native )
struct AT1Pawn_execSetObjSyncYaw_Parms
{
	int                                                nYaw;                                             		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      bResetPhysics : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1Pawn.SetObjMove
// [0x00024400] ( FUNC_Native )
struct AT1Pawn_execSetObjMove_Parms
{
	int                                                MoveType;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestX;                                            		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestY;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestZ;                                            		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                nYaw;                                             		// 0x0010 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                ZoneID;                                           		// 0x0018 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                evtObjId;                                         		// 0x001C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fMoveAnimRate;                                    		// 0x0020 (0x0004) [0x0000000000000092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm )
	int                                                ObjType;                                          		// 0x0024 (0x0004) [0x0000000000000092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1Pawn.RemovePlayerMoveList
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execRemovePlayerMoveList_Parms
{
};

// Function T1Game.T1Pawn.PlayerMoveCancel
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execPlayerMoveCancel_Parms
{
};

// Function T1Game.T1Pawn.PlayerStop
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execPlayerStop_Parms
{
};

// Function T1Game.T1Pawn.SetPlayerMoveToAction
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetPlayerMoveToAction_Parms
{
	float                                              DestX;                                            		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestY;                                            		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestZ;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.SetPlayerMouseMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetPlayerMouseMove_Parms
{
	float                                              DestX;                                            		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestY;                                            		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestZ;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.SetPlayerRuleMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetPlayerRuleMove_Parms
{
	int                                                MoveType;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestX;                                            		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestY;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              DestZ;                                            		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                nYaw;                                             		// 0x0010 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function T1Game.T1Pawn.GetGravityZ
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execGetGravityZ_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.IsTickSkippable
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execIsTickSkippable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.IsPlayer
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execIsPlayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.NotifyJumpAction
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execNotifyJumpAction_Parms
{
};

// Function T1Game.T1Pawn.MoveTo
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execMoveTo_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    rotate;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1Pawn.SetAnimPos
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetAnimPos_Parms
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ChannelIndex;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InAnimSeqName;                                    		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              InPosition;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFireNotifies : 1;                                		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1Pawn.GetMoveForwardByInputValueFlag
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execGetMoveForwardByInputValueFlag_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.SetMoveForwardByInputValueFlag
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetMoveForwardByInputValueFlag_Parms
{
	int                                                bFlag;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1Pawn.MoveForwardByInputValue
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execMoveForwardByInputValue_Parms
{
};

// Function T1Game.T1Pawn.SetBlockZoomFlag
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetBlockZoomFlag_Parms
{
	unsigned long                                      bBlock : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1Pawn.SetIgnoreRotateInput
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetIgnoreRotateInput_Parms
{
	unsigned long                                      bIgnore : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1Pawn.SetIgnoreMoveInput
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetIgnoreMoveInput_Parms
{
};

// Function T1Game.T1Pawn.IsDead
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execIsDead_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.SetDeadFlag
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetDeadFlag_Parms
{
	unsigned long                                      bDeadFlag : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1Pawn.InterruptKeepWalking
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execInterruptKeepWalking_Parms
{
};

// Function T1Game.T1Pawn.ToggleKeepWalking
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execToggleKeepWalking_Parms
{
};

// Function T1Game.T1Pawn.CanRotate
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execCanRotate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.SetBlockMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetBlockMove_Parms
{
	unsigned long                                      bNewBlockMove : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1Pawn.SetRuleMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execSetRuleMove_Parms
{
	unsigned long                                      bNewRuleMove : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1Pawn.IsMouseMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execIsMouseMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1Pawn.IsRuleMove
// [0x00020400] ( FUNC_Native )
struct AT1Pawn_execIsRuleMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CamMod_ScreenMove.ModifyCameraEditor
// [0x00C20802] ( FUNC_Event )
struct UT1CamMod_ScreenMove_eventModifyCameraEditor_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FScreenMoveStruct                        CurrentScreenMove;                                		// 0x0024 (0x0060) [0x0000000000000000]              
};

// Function T1Game.T1CamMod_ScreenMove.ModifyCamera
// [0x00C20002] 
struct UT1CamMod_ScreenMove_execModifyCamera_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FScreenMoveStruct                        CurrentScreenMove;                                		// 0x002C (0x0060) [0x0000000000000000]              
};

// Function T1Game.T1CamMod_ScreenMove.UpdateScreenMove
// [0x00420400] ( FUNC_Native )
struct UT1CamMod_ScreenMove_execUpdateScreenMove_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScreenMoveStruct                           Move;                                             		// 0x0004 (0x0060) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FTPOV                                       OutPOV;                                           		// 0x0064 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function T1Game.T1CamMod_ScreenMove.StartNewMoveEditor
// [0x00420802] ( FUNC_Event )
struct UT1CamMod_ScreenMove_eventStartNewMoveEditor_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Pct;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRawDistributionVector                      newRotAdjust;                                     		// 0x0008 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FRawDistributionVector                      newLocAdjust;                                     		// 0x0024 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FRawDistributionFloat                       newFovAdjust;                                     		// 0x0040 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function T1Game.T1CamMod_ScreenMove.StartNewMove
// [0x00820002] 
struct UT1CamMod_ScreenMove_execStartNewMove_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Pct;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRawDistributionVector                      newRotAdjust;                                     		// 0x0008 (0x001C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FRawDistributionVector                      newLocAdjust;                                     		// 0x0024 (0x001C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FRawDistributionFloat                       newFovAdjust;                                     		// 0x0040 (0x001C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	// struct FScreenMoveStruct                        NewMove;                                          		// 0x005C (0x0060) [0x0000000000000000]              
};

// Function T1Game.T1CamMod_ScreenShake.ModifyCameraEditor
// [0x00C20802] ( FUNC_Event )
struct UT1CamMod_ScreenShake_eventModifyCameraEditor_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0004 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FScreenShakeStruct                       CurrentScreenShake;                               		// 0x0024 (0x0068) [0x0000000000000000]              
};

// Function T1Game.T1CamMod_ScreenShake.ModifyCamera
// [0x00C20002] 
struct UT1CamMod_ScreenShake_execModifyCamera_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FScreenShakeStruct                       CurrentScreenShake;                               		// 0x002C (0x0068) [0x0000000000000000]              
};

// Function T1Game.T1CamMod_ScreenShake.UpdateScreenShake
// [0x00420400] ( FUNC_Native )
struct UT1CamMod_ScreenShake_execUpdateScreenShake_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScreenShakeStruct                          Shake;                                            		// 0x0004 (0x0068) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FTPOV                                       OutPOV;                                           		// 0x006C (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function T1Game.T1CamMod_ScreenShake.DumpShakeInfo
// [0x00020002] 
struct UT1CamMod_ScreenShake_execDumpShakeInfo_Parms
{
	struct FScreenShakeStruct                          Shake;                                            		// 0x0000 (0x0068) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1CamMod_ScreenShake.StartNewShakeEditor
// [0x00024802] ( FUNC_Event )
struct UT1CamMod_ScreenShake_eventStartNewShakeEditor_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotAmplitude;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotFrequency;                                  		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocAmplitude;                                  		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocFrequency;                                  		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVAmplitude;                                  		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVFrequency;                                  		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRotRandom : 1;                                   		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLocRandom : 1;                                   		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFOVRandom : 1;                                   		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1CamMod_ScreenShake.StartNewShake
// [0x00824002] 
struct UT1CamMod_ScreenShake_execStartNewShake_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotAmplitude;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotFrequency;                                  		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocAmplitude;                                  		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocFrequency;                                  		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVAmplitude;                                  		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVFrequency;                                  		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRotRandom : 1;                                   		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLocRandom : 1;                                   		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFOVRandom : 1;                                   		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FScreenShakeStruct                       NewShake;                                         		// 0x0048 (0x0068) [0x0000000000000000]              
};

// Function T1Game.T1CamMod_ScreenShake.ComposeNewShake
// [0x00820003] ( FUNC_Final )
struct UT1CamMod_ScreenShake_execComposeNewShake_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotAmplitude;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotFrequency;                                  		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocAmplitude;                                  		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocFrequency;                                  		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVAmplitude;                                  		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVFrequency;                                  		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRotRandom : 1;                                   		// 0x003C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bLocRandom : 1;                                   		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bFOVRandom : 1;                                   		// 0x0044 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FScreenShakeStruct                          ReturnValue;                                      		// 0x0048 (0x0068) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FScreenShakeStruct                       NewShake;                                         		// 0x00B0 (0x0068) [0x0000000000000000]              
};

// Function T1Game.T1CamMod_ScreenShake.InitializeOffset
// [0x00022003] ( FUNC_Final )
struct UT1CamMod_ScreenShake_execInitializeOffset_Parms
{
	unsigned char                                      Param;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CamMod_ScreenShake.InitializeShake
// [0x00020003] ( FUNC_Final )
struct UT1CamMod_ScreenShake_execInitializeShake_Parms
{
	struct FScreenShakeStruct                          NewShake;                                         		// 0x0000 (0x0068) [0x0000000000000080]              ( CPF_Parm )
	struct FScreenShakeStruct                          ReturnValue;                                      		// 0x0068 (0x0068) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1CamMod_ScreenShake.AddScreenShake
// [0x00020003] ( FUNC_Final )
struct UT1CamMod_ScreenShake_execAddScreenShake_Parms
{
	struct FScreenShakeStruct                          NewShake;                                         		// 0x0000 (0x0068) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.StartCameraMove
// [0x00420802] ( FUNC_Event )
struct AT1PlayerCamera_eventStartCameraMove_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Pct;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRawDistributionVector                      newRotAdjust;                                     		// 0x0008 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FRawDistributionVector                      newLocAdjust;                                     		// 0x0024 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FRawDistributionFloat                       newFovAdjust;                                     		// 0x0040 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function T1Game.T1PlayerCamera.StartCameraShake
// [0x00024802] ( FUNC_Event )
struct AT1PlayerCamera_eventStartCameraShake_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotAmplitude;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newRotFrequency;                                  		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocAmplitude;                                  		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newLocFrequency;                                  		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVAmplitude;                                  		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              newFOVFrequency;                                  		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRotRandom : 1;                                   		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLocRandom : 1;                                   		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFOVRandom : 1;                                   		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1PlayerCamera.InterPolateYaw
// [0x00020002] 
struct AT1PlayerCamera_execInterPolateYaw_Parms
{
	float                                              Src;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Dst;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fInterpSpeed;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fResult;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fDist;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1PlayerCamera.YawToRange
// [0x00020002] 
struct AT1PlayerCamera_execYawToRange_Parms
{
	float                                              Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1PlayerCamera.UpdateViewTarget
// [0x00420400] ( FUNC_Native )
struct AT1PlayerCamera_execUpdateViewTarget_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.InitializeFor
// [0x00020002] 
struct AT1PlayerCamera_execInitializeFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.PostBeginPlay
// [0x00020002] 
struct AT1PlayerCamera_execPostBeginPlay_Parms
{
};

// Function T1Game.T1PlayerCamera.PlayCameraInterpolTime
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execPlayCameraInterpolTime_Parms
{
	unsigned char                                      InInterpolMode;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeInTime;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fPlayTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFadeOutTime;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.SetT1MovieCameraMode
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetT1MovieCameraMode_Parms
{
	int                                                InCameraMode;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InInterpolMode;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.T1Trace
// [0x00420400] ( FUNC_Native )
struct AT1PlayerCamera_execT1Trace_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     TraceEnd;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TraceStart;                                       		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0030 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1PlayerCamera.IsLocked
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execIsLocked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1PlayerCamera.Unlock
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execUnlock_Parms
{
};

// Function T1Game.T1PlayerCamera.Lock
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execLock_Parms
{
	struct FVector                                     vecLockLocation;                                  		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vecLockViewDir;                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fViewDist;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                IsLocalSpace;                                     		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vecLocalSpaceRot;                                 		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vecLockTargetLoc;                                 		// 0x002C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.IsCameraAutoBlend
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execIsCameraAutoBlend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1PlayerCamera.SetCameraAutoBlendFlag
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetCameraAutoBlendFlag_Parms
{
	unsigned long                                      bFlag : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.SetFovAtMax
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetFovAtMax_Parms
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.SetFovAtZero
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetFovAtZero_Parms
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.SetCamMaxDist
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetCamMaxDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.SetCamNearDist
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetCamNearDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.SetCamMinDist
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetCamMinDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1PlayerCamera.SetCamHeightTransDist
// [0x00020400] ( FUNC_Native )
struct AT1PlayerCamera_execSetCamHeightTransDist_Parms
{
	float                                              fDist;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1ConsoleCmd.NormalCam
// [0x00020202] ( FUNC_Exec )
struct UT1ConsoleCmd_execNormalCam_Parms
{
};

// Function T1Game.T1ConsoleCmd.FreeCam
// [0x00020202] ( FUNC_Exec )
struct UT1ConsoleCmd_execFreeCam_Parms
{
};

// Function T1Game.T1AnimNodeBlendPerBone.SetFullAnimation
// [0x00020400] ( FUNC_Native )
struct UT1AnimNodeBlendPerBone_execSetFullAnimation_Parms
{
	unsigned long                                      a_bFull : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1AnimNodeBlendPerBone.GetCurAnimName
// [0x00020400] ( FUNC_Native )
struct UT1AnimNodeBlendPerBone_execGetCurAnimName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1AnimNodeBlendPerBone.IsAction
// [0x00020400] ( FUNC_Native )
struct UT1AnimNodeBlendPerBone_execIsAction_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1AnimNodeBlendPerBone.Action
// [0x00020400] ( FUNC_Native )
struct UT1AnimNodeBlendPerBone_execAction_Parms
{
	struct FName                                       ActionName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1AnimNodePlayCustomAnim.SetRootBoneAxisOption
// [0x00024003] ( FUNC_Final )
struct UT1AnimNodePlayCustomAnim_execSetRootBoneAxisOption_Parms
{
	unsigned char                                      AxisX;                                            		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      AxisY;                                            		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      AxisZ;                                            		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UAnimNodeSequence*                        AnimSeq;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1AnimNodePlayCustomAnim.GetCustomAnimNodeSeq
// [0x00020003] ( FUNC_Final )
struct UT1AnimNodePlayCustomAnim_execGetCustomAnimNodeSeq_Parms
{
	class UAnimNodeSequence*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1AnimNodePlayCustomAnim.SetActorAnimEndNotification
// [0x00020003] ( FUNC_Final )
struct UT1AnimNodePlayCustomAnim_execSetActorAnimEndNotification_Parms
{
	unsigned long                                      bNewStatus : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1AnimNodePlayCustomAnim.SetCustomAnim
// [0x00020003] ( FUNC_Final )
struct UT1AnimNodePlayCustomAnim_execSetCustomAnim_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1AnimNodePlayCustomAnim.IsPauseLastFrame
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UT1AnimNodePlayCustomAnim_execIsPauseLastFrame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1AnimNodePlayCustomAnim.UnPauseLastFrame
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UT1AnimNodePlayCustomAnim_execUnPauseLastFrame_Parms
{
};

// Function T1Game.T1AnimNodePlayCustomAnim.PauseLastFrame
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UT1AnimNodePlayCustomAnim_execPauseLastFrame_Parms
{
};

// Function T1Game.T1AnimNodePlayCustomAnim.StopCustomAnim
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UT1AnimNodePlayCustomAnim_execStopCustomAnim_Parms
{
	float                                              BlendOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1AnimNodePlayCustomAnim.PlayCustomAnimByDuration
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UT1AnimNodePlayCustomAnim_execPlayCustomAnimByDuration_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              MovingBlendTime;                                  		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              EndTime;                                          		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              MovingBlendFadeTime;                              		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1AnimNodePlayCustomAnim.PlayCustomAnim
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UT1AnimNodePlayCustomAnim_execPlayCustomAnim_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              MovingBlendTime;                                  		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              EndTime;                                          		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              MovingBlendFadeTime;                              		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1AnimNodePlayCustomAnim.PlayCustomNextAnim
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UT1AnimNodePlayCustomAnim_execPlayCustomNextAnim_Parms
{
	struct FName                                       _AnimName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              _Rate;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              _BlendInTime;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              _BlendOutTime;                                    		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              _MovingBlendTime;                                 		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      _bLooping : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      _bOverride : 1;                                   		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              EndTime;                                          		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      _bDuration : 1;                                   		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              _MovingBlendFadeTime;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function T1Game.T1DropItem.Initialize
// [0x00020802] ( FUNC_Event )
struct AT1DropItem_eventInitialize_Parms
{
	// class UAnimSequence*                            AnimSeq;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1DropItem.Landed
// [0x00020802] ( FUNC_Event )
struct AT1DropItem_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UAnimSequence*                            AnimSeq;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1EnvObject.SetOutlineBloom
// [0x00020400] ( FUNC_Native )
struct AT1EnvObject_execSetOutlineBloom_Parms
{
	unsigned long                                      bBloomFlag : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FColor                                      InColor;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InAlpha;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1EnvObject.SetEnvEnable
// [0x00020400] ( FUNC_Native )
struct AT1EnvObject_execSetEnvEnable_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function T1Game.T1AirDashPoint.PostBeginPlay
// [0x00020002] 
struct AT1AirDashPoint_execPostBeginPlay_Parms
{
};

// Function T1Game.T1GatherObject.SetOutlineBloom
// [0x00020400] ( FUNC_Native )
struct AT1GatherObject_execSetOutlineBloom_Parms
{
	unsigned long                                      bBloomFlag : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FColor                                      InColor;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InAlpha;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1GameInfo.Logout
// [0x00020002] 
struct AT1GameInfo_execLogout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PCIndex;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1GameInfo.PostLogin
// [0x00020802] ( FUNC_Event )
struct AT1GameInfo_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function T1Game.T1GameInfo.Login
// [0x00C20802] ( FUNC_Event )
struct AT1GameInfo_eventLogin_Parms
{
	struct FString                                     Portal;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Options;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class APlayerController*                           ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         StartSpot;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        NewPlayer;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function T1Game.T1GameInfo.PreLogin
// [0x00420800] ( FUNC_Event )
struct AT1GameInfo_eventPreLogin_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Address;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function T1Game.T1GameInfo.GetDefaultPlayerClass
// [0x00020002] 
struct AT1GameInfo_execGetDefaultPlayerClass_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function T1Game.T1GameInfo.SpawnDefaultPawnFor
// [0x00820002] 
struct AT1GameInfo_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   DefaultPlayerClass;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 StartRotation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AT1Pawn*                                  ResultPawn;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1GameInfo.RestartPlayer
// [0x00020002] 
struct AT1GameInfo_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function T1Game.T1GameInfo.T1FindPlayerStart
// [0x00024002] 
struct AT1GameInfo_execT1FindPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     IncomingName;                                     		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         N;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         BestStart;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATeleporter*                              Tel;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif