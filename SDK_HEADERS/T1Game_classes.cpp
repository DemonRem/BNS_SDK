/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: T1Game_classes.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
# Mentions: Ant.
#############################################################################################
*/

#include "..\SdkHeaders.h"

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function T1Game.T1GameViewportClient.DrawTransition
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UT1GameViewportClient::DrawTransition ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawTransition = NULL;

	if ( ! pFnDrawTransition )
		pFnDrawTransition = (UFunction*) UObject::GObjObjects()->Data[ 36293 ];

	UT1GameViewportClient_execDrawTransition_Parms DrawTransition_Parms;
	DrawTransition_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawTransition, &DrawTransition_Parms, NULL );
};

// Function T1Game.T1GameViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UT1GameViewportClient::eventPostRender ( class UCanvas* Canvas )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 36291 ];

	UT1GameViewportClient_eventPostRender_Parms PostRender_Parms;
	PostRender_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function T1Game.T1GameViewportClient.Init
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 OutError                       ( CPF_Parm | CPF_OutParm )

bool UT1GameViewportClient::eventInit ( struct FString* OutError )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 36288 ];

	UT1GameViewportClient_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	if ( OutError )
		memcpy ( OutError, &Init_Parms.OutError, 0xC );

	return Init_Parms.ReturnValue;
};

// Function T1Game.T1GameViewportClient.PostRenderT1
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UT1GameViewportClient::PostRenderT1 ( class UCanvas* Canvas )
{
	static UFunction* pFnPostRenderT1 = NULL;

	if ( ! pFnPostRenderT1 )
		pFnPostRenderT1 = (UFunction*) UObject::GObjObjects()->Data[ 36286 ];

	UT1GameViewportClient_execPostRenderT1_Parms PostRenderT1_Parms;
	PostRenderT1_Parms.Canvas = Canvas;

	pFnPostRenderT1->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostRenderT1, &PostRenderT1_Parms, NULL );

	pFnPostRenderT1->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerController.AlignPlayerPawnToCameraDirection
// [0x00820202] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::AlignPlayerPawnToCameraDirection ( )
{
	static UFunction* pFnAlignPlayerPawnToCameraDirection = NULL;

	if ( ! pFnAlignPlayerPawnToCameraDirection )
		pFnAlignPlayerPawnToCameraDirection = (UFunction*) UObject::GObjObjects()->Data[ 36912 ];

	AT1PlayerController_execAlignPlayerPawnToCameraDirection_Parms AlignPlayerPawnToCameraDirection_Parms;

	this->ProcessEvent ( pFnAlignPlayerPawnToCameraDirection, &AlignPlayerPawnToCameraDirection_Parms, NULL );
};

// Function T1Game.T1PlayerController.CameraMove
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// float                          Pct                            ( CPF_Parm )
// struct FRawDistributionVector  newRotAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRawDistributionVector  newLocAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRawDistributionFloat   newFovAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void AT1PlayerController::eventCameraMove ( float Duration, float Pct, struct FRawDistributionVector* newRotAdjust, struct FRawDistributionVector* newLocAdjust, struct FRawDistributionFloat* newFovAdjust )
{
	static UFunction* pFnCameraMove = NULL;

	if ( ! pFnCameraMove )
		pFnCameraMove = (UFunction*) UObject::GObjObjects()->Data[ 36906 ];

	AT1PlayerController_eventCameraMove_Parms CameraMove_Parms;
	CameraMove_Parms.Duration = Duration;
	CameraMove_Parms.Pct = Pct;

	this->ProcessEvent ( pFnCameraMove, &CameraMove_Parms, NULL );

	if ( newRotAdjust )
		memcpy ( newRotAdjust, &CameraMove_Parms.newRotAdjust, 0x1C );

	if ( newLocAdjust )
		memcpy ( newLocAdjust, &CameraMove_Parms.newLocAdjust, 0x1C );

	if ( newFovAdjust )
		memcpy ( newFovAdjust, &CameraMove_Parms.newFovAdjust, 0x1C );
};

// Function T1Game.T1PlayerController.CameraShake
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// struct FVector                 newRotAmplitude                ( CPF_Parm )
// struct FVector                 newRotFrequency                ( CPF_Parm )
// struct FVector                 newLocAmplitude                ( CPF_Parm )
// struct FVector                 newLocFrequency                ( CPF_Parm )
// float                          newFOVAmplitude                ( CPF_Parm )
// float                          newFOVFrequency                ( CPF_Parm )
// unsigned long                  bRotRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLocRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFOVRandom                     ( CPF_OptionalParm | CPF_Parm )

void AT1PlayerController::eventCameraShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom )
{
	static UFunction* pFnCameraShake = NULL;

	if ( ! pFnCameraShake )
		pFnCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 36891 ];

	AT1PlayerController_eventCameraShake_Parms CameraShake_Parms;
	CameraShake_Parms.Duration = Duration;
	memcpy ( &CameraShake_Parms.newRotAmplitude, &newRotAmplitude, 0xC );
	memcpy ( &CameraShake_Parms.newRotFrequency, &newRotFrequency, 0xC );
	memcpy ( &CameraShake_Parms.newLocAmplitude, &newLocAmplitude, 0xC );
	memcpy ( &CameraShake_Parms.newLocFrequency, &newLocFrequency, 0xC );
	CameraShake_Parms.newFOVAmplitude = newFOVAmplitude;
	CameraShake_Parms.newFOVFrequency = newFOVFrequency;
	CameraShake_Parms.bRotRandom = bRotRandom;
	CameraShake_Parms.bLocRandom = bLocRandom;
	CameraShake_Parms.bFOVRandom = bFOVRandom;

	this->ProcessEvent ( pFnCameraShake, &CameraShake_Parms, NULL );
};

// Function T1Game.T1PlayerController.PlayerMove
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AT1PlayerController::PlayerMove ( float DeltaTime )
{
	static UFunction* pFnPlayerMove = NULL;

	if ( ! pFnPlayerMove )
		pFnPlayerMove = (UFunction*) UObject::GObjObjects()->Data[ 36885 ];

	AT1PlayerController_execPlayerMove_Parms PlayerMove_Parms;
	PlayerMove_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerMove, &PlayerMove_Parms, NULL );
};

// Function T1Game.T1PlayerController.CheckJumpOrDuck
// [0x00020002] 
// Parameters infos:

void AT1PlayerController::CheckJumpOrDuck ( )
{
	static UFunction* pFnCheckJumpOrDuck = NULL;

	if ( ! pFnCheckJumpOrDuck )
		pFnCheckJumpOrDuck = (UFunction*) UObject::GObjObjects()->Data[ 36883 ];

	AT1PlayerController_execCheckJumpOrDuck_Parms CheckJumpOrDuck_Parms;

	this->ProcessEvent ( pFnCheckJumpOrDuck, &CheckJumpOrDuck_Parms, NULL );
};

// Function T1Game.T1PlayerController.PlayerTick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AT1PlayerController::PlayerTick ( float DeltaTime )
{
	static UFunction* pFnPlayerTick = NULL;

	if ( ! pFnPlayerTick )
		pFnPlayerTick = (UFunction*) UObject::GObjObjects()->Data[ 36879 ];

	AT1PlayerController_execPlayerTick_Parms PlayerTick_Parms;
	PlayerTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerTick, &PlayerTick_Parms, NULL );
};

// Function T1Game.T1PlayerController.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                DeltaRot                       ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )

void AT1PlayerController::ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 36875 ];

	AT1PlayerController_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	memcpy ( &ProcessViewRotation_Parms.DeltaRot, &DeltaRot, 0xC );

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );
};

// Function T1Game.T1PlayerController.UpdateRotation
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AT1PlayerController::UpdateRotation ( float DeltaTime )
{
	static UFunction* pFnUpdateRotation = NULL;

	if ( ! pFnUpdateRotation )
		pFnUpdateRotation = (UFunction*) UObject::GObjObjects()->Data[ 36870 ];

	AT1PlayerController_execUpdateRotation_Parms UpdateRotation_Parms;
	UpdateRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateRotation, &UpdateRotation_Parms, NULL );
};

// Function T1Game.T1PlayerController.ShoulderPosCamDist
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerController::ShoulderPosCamDist ( float fDist )
{
	static UFunction* pFnShoulderPosCamDist = NULL;

	if ( ! pFnShoulderPosCamDist )
		pFnShoulderPosCamDist = (UFunction*) UObject::GObjObjects()->Data[ 36868 ];

	AT1PlayerController_execShoulderPosCamDist_Parms ShoulderPosCamDist_Parms;
	ShoulderPosCamDist_Parms.fDist = fDist;

	this->ProcessEvent ( pFnShoulderPosCamDist, &ShoulderPosCamDist_Parms, NULL );
};

// Function T1Game.T1PlayerController.ShoulderPosY
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fY                             ( CPF_Parm )

void AT1PlayerController::ShoulderPosY ( float fY )
{
	static UFunction* pFnShoulderPosY = NULL;

	if ( ! pFnShoulderPosY )
		pFnShoulderPosY = (UFunction*) UObject::GObjObjects()->Data[ 36866 ];

	AT1PlayerController_execShoulderPosY_Parms ShoulderPosY_Parms;
	ShoulderPosY_Parms.fY = fY;

	this->ProcessEvent ( pFnShoulderPosY, &ShoulderPosY_Parms, NULL );
};

// Function T1Game.T1PlayerController.ShoulderPosX
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fX                             ( CPF_Parm )

void AT1PlayerController::ShoulderPosX ( float fX )
{
	static UFunction* pFnShoulderPosX = NULL;

	if ( ! pFnShoulderPosX )
		pFnShoulderPosX = (UFunction*) UObject::GObjObjects()->Data[ 36864 ];

	AT1PlayerController_execShoulderPosX_Parms ShoulderPosX_Parms;
	ShoulderPosX_Parms.fX = fX;

	this->ProcessEvent ( pFnShoulderPosX, &ShoulderPosX_Parms, NULL );
};

// Function T1Game.T1PlayerController.ShoulderPos
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fX                             ( CPF_Parm )
// float                          fY                             ( CPF_Parm )
// float                          fDist                          ( CPF_Parm )

void AT1PlayerController::ShoulderPos ( float fX, float fY, float fDist )
{
	static UFunction* pFnShoulderPos = NULL;

	if ( ! pFnShoulderPos )
		pFnShoulderPos = (UFunction*) UObject::GObjObjects()->Data[ 36860 ];

	AT1PlayerController_execShoulderPos_Parms ShoulderPos_Parms;
	ShoulderPos_Parms.fX = fX;
	ShoulderPos_Parms.fY = fY;
	ShoulderPos_Parms.fDist = fDist;

	this->ProcessEvent ( pFnShoulderPos, &ShoulderPos_Parms, NULL );
};

// Function T1Game.T1PlayerController.TargetZoom
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fTargetZoom                    ( CPF_Parm )

void AT1PlayerController::TargetZoom ( float fTargetZoom )
{
	static UFunction* pFnTargetZoom = NULL;

	if ( ! pFnTargetZoom )
		pFnTargetZoom = (UFunction*) UObject::GObjObjects()->Data[ 36858 ];

	AT1PlayerController_execTargetZoom_Parms TargetZoom_Parms;
	TargetZoom_Parms.fTargetZoom = fTargetZoom;

	this->ProcessEvent ( pFnTargetZoom, &TargetZoom_Parms, NULL );
};

// Function T1Game.T1PlayerController.TargetRot
// [0x00820202] ( FUNC_Exec )
// Parameters infos:
// float                          fPitch                         ( CPF_Parm )
// float                          fYaw                           ( CPF_Parm )

void AT1PlayerController::TargetRot ( float fPitch, float fYaw )
{
	static UFunction* pFnTargetRot = NULL;

	if ( ! pFnTargetRot )
		pFnTargetRot = (UFunction*) UObject::GObjObjects()->Data[ 36854 ];

	AT1PlayerController_execTargetRot_Parms TargetRot_Parms;
	TargetRot_Parms.fPitch = fPitch;
	TargetRot_Parms.fYaw = fYaw;

	this->ProcessEvent ( pFnTargetRot, &TargetRot_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetCamTargetHeightNear
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fHeight                        ( CPF_Parm )

void AT1PlayerController::SetCamTargetHeightNear ( float fHeight )
{
	static UFunction* pFnSetCamTargetHeightNear = NULL;

	if ( ! pFnSetCamTargetHeightNear )
		pFnSetCamTargetHeightNear = (UFunction*) UObject::GObjObjects()->Data[ 36852 ];

	AT1PlayerController_execSetCamTargetHeightNear_Parms SetCamTargetHeightNear_Parms;
	SetCamTargetHeightNear_Parms.fHeight = fHeight;

	this->ProcessEvent ( pFnSetCamTargetHeightNear, &SetCamTargetHeightNear_Parms, NULL );
};

// Function T1Game.T1PlayerController.CamTargetHeightNearDown
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::CamTargetHeightNearDown ( )
{
	static UFunction* pFnCamTargetHeightNearDown = NULL;

	if ( ! pFnCamTargetHeightNearDown )
		pFnCamTargetHeightNearDown = (UFunction*) UObject::GObjObjects()->Data[ 36851 ];

	AT1PlayerController_execCamTargetHeightNearDown_Parms CamTargetHeightNearDown_Parms;

	this->ProcessEvent ( pFnCamTargetHeightNearDown, &CamTargetHeightNearDown_Parms, NULL );
};

// Function T1Game.T1PlayerController.CamTargetHeightNearUp
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::CamTargetHeightNearUp ( )
{
	static UFunction* pFnCamTargetHeightNearUp = NULL;

	if ( ! pFnCamTargetHeightNearUp )
		pFnCamTargetHeightNearUp = (UFunction*) UObject::GObjObjects()->Data[ 36850 ];

	AT1PlayerController_execCamTargetHeightNearUp_Parms CamTargetHeightNearUp_Parms;

	this->ProcessEvent ( pFnCamTargetHeightNearUp, &CamTargetHeightNearUp_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetCamTargetHeight
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fHeight                        ( CPF_Parm )

void AT1PlayerController::SetCamTargetHeight ( float fHeight )
{
	static UFunction* pFnSetCamTargetHeight = NULL;

	if ( ! pFnSetCamTargetHeight )
		pFnSetCamTargetHeight = (UFunction*) UObject::GObjObjects()->Data[ 36848 ];

	AT1PlayerController_execSetCamTargetHeight_Parms SetCamTargetHeight_Parms;
	SetCamTargetHeight_Parms.fHeight = fHeight;

	this->ProcessEvent ( pFnSetCamTargetHeight, &SetCamTargetHeight_Parms, NULL );
};

// Function T1Game.T1PlayerController.CamTargetHeightDown
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::CamTargetHeightDown ( )
{
	static UFunction* pFnCamTargetHeightDown = NULL;

	if ( ! pFnCamTargetHeightDown )
		pFnCamTargetHeightDown = (UFunction*) UObject::GObjObjects()->Data[ 36847 ];

	AT1PlayerController_execCamTargetHeightDown_Parms CamTargetHeightDown_Parms;

	this->ProcessEvent ( pFnCamTargetHeightDown, &CamTargetHeightDown_Parms, NULL );
};

// Function T1Game.T1PlayerController.CamTargetHeightUp
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::CamTargetHeightUp ( )
{
	static UFunction* pFnCamTargetHeightUp = NULL;

	if ( ! pFnCamTargetHeightUp )
		pFnCamTargetHeightUp = (UFunction*) UObject::GObjObjects()->Data[ 36846 ];

	AT1PlayerController_execCamTargetHeightUp_Parms CamTargetHeightUp_Parms;

	this->ProcessEvent ( pFnCamTargetHeightUp, &CamTargetHeightUp_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetCharacterShowMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bFlag                          ( CPF_Parm )

void AT1PlayerController::SetCharacterShowMode ( unsigned long bFlag )
{
	static UFunction* pFnSetCharacterShowMode = NULL;

	if ( ! pFnSetCharacterShowMode )
		pFnSetCharacterShowMode = (UFunction*) UObject::GObjObjects()->Data[ 36844 ];

	AT1PlayerController_execSetCharacterShowMode_Parms SetCharacterShowMode_Parms;
	SetCharacterShowMode_Parms.bFlag = bFlag;

	pFnSetCharacterShowMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCharacterShowMode, &SetCharacterShowMode_Parms, NULL );

	pFnSetCharacterShowMode->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerController.NativeAccel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 X                              ( CPF_Parm )
// struct FVector                 Y                              ( CPF_Parm )
// struct FVector                 Z                              ( CPF_Parm )

struct FVector AT1PlayerController::NativeAccel ( struct FVector X, struct FVector Y, struct FVector Z )
{
	static UFunction* pFnNativeAccel = NULL;

	if ( ! pFnNativeAccel )
		pFnNativeAccel = (UFunction*) UObject::GObjObjects()->Data[ 36839 ];

	AT1PlayerController_execNativeAccel_Parms NativeAccel_Parms;
	memcpy ( &NativeAccel_Parms.X, &X, 0xC );
	memcpy ( &NativeAccel_Parms.Y, &Y, 0xC );
	memcpy ( &NativeAccel_Parms.Z, &Z, 0xC );

	pFnNativeAccel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeAccel, &NativeAccel_Parms, NULL );

	pFnNativeAccel->FunctionFlags |= 0x400;

	return NativeAccel_Parms.ReturnValue;
};

// Function T1Game.T1PlayerController.ToggleCamInfo
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void AT1PlayerController::ToggleCamInfo ( )
{
	static UFunction* pFnToggleCamInfo = NULL;

	if ( ! pFnToggleCamInfo )
		pFnToggleCamInfo = (UFunction*) UObject::GObjObjects()->Data[ 36838 ];

	AT1PlayerController_execToggleCamInfo_Parms ToggleCamInfo_Parms;

	pFnToggleCamInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleCamInfo, &ToggleCamInfo_Parms, NULL );

	pFnToggleCamInfo->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerController.SetFovAtMax
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          FOV                            ( CPF_Parm )

void AT1PlayerController::SetFovAtMax ( float FOV )
{
	static UFunction* pFnSetFovAtMax = NULL;

	if ( ! pFnSetFovAtMax )
		pFnSetFovAtMax = (UFunction*) UObject::GObjObjects()->Data[ 36836 ];

	AT1PlayerController_execSetFovAtMax_Parms SetFovAtMax_Parms;
	SetFovAtMax_Parms.FOV = FOV;

	this->ProcessEvent ( pFnSetFovAtMax, &SetFovAtMax_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetFovAtZero
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          FOV                            ( CPF_Parm )

void AT1PlayerController::SetFovAtZero ( float FOV )
{
	static UFunction* pFnSetFovAtZero = NULL;

	if ( ! pFnSetFovAtZero )
		pFnSetFovAtZero = (UFunction*) UObject::GObjObjects()->Data[ 36834 ];

	AT1PlayerController_execSetFovAtZero_Parms SetFovAtZero_Parms;
	SetFovAtZero_Parms.FOV = FOV;

	this->ProcessEvent ( pFnSetFovAtZero, &SetFovAtZero_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetCamNearDist
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerController::SetCamNearDist ( float fDist )
{
	static UFunction* pFnSetCamNearDist = NULL;

	if ( ! pFnSetCamNearDist )
		pFnSetCamNearDist = (UFunction*) UObject::GObjObjects()->Data[ 36832 ];

	AT1PlayerController_execSetCamNearDist_Parms SetCamNearDist_Parms;
	SetCamNearDist_Parms.fDist = fDist;

	this->ProcessEvent ( pFnSetCamNearDist, &SetCamNearDist_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetCamMaxDist
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerController::SetCamMaxDist ( float fDist )
{
	static UFunction* pFnSetCamMaxDist = NULL;

	if ( ! pFnSetCamMaxDist )
		pFnSetCamMaxDist = (UFunction*) UObject::GObjObjects()->Data[ 36830 ];

	AT1PlayerController_execSetCamMaxDist_Parms SetCamMaxDist_Parms;
	SetCamMaxDist_Parms.fDist = fDist;

	this->ProcessEvent ( pFnSetCamMaxDist, &SetCamMaxDist_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetCamMinDist
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerController::SetCamMinDist ( float fDist )
{
	static UFunction* pFnSetCamMinDist = NULL;

	if ( ! pFnSetCamMinDist )
		pFnSetCamMinDist = (UFunction*) UObject::GObjObjects()->Data[ 36828 ];

	AT1PlayerController_execSetCamMinDist_Parms SetCamMinDist_Parms;
	SetCamMinDist_Parms.fDist = fDist;

	this->ProcessEvent ( pFnSetCamMinDist, &SetCamMinDist_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetCamHeightTransDist
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerController::SetCamHeightTransDist ( float fDist )
{
	static UFunction* pFnSetCamHeightTransDist = NULL;

	if ( ! pFnSetCamHeightTransDist )
		pFnSetCamHeightTransDist = (UFunction*) UObject::GObjObjects()->Data[ 36826 ];

	AT1PlayerController_execSetCamHeightTransDist_Parms SetCamHeightTransDist_Parms;
	SetCamHeightTransDist_Parms.fDist = fDist;

	this->ProcessEvent ( pFnSetCamHeightTransDist, &SetCamHeightTransDist_Parms, NULL );
};

// Function T1Game.T1PlayerController.SetDollyFactor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// float                          fNewDollyFactor                ( CPF_Parm )

void AT1PlayerController::SetDollyFactor ( float fNewDollyFactor )
{
	static UFunction* pFnSetDollyFactor = NULL;

	if ( ! pFnSetDollyFactor )
		pFnSetDollyFactor = (UFunction*) UObject::GObjObjects()->Data[ 36824 ];

	AT1PlayerController_execSetDollyFactor_Parms SetDollyFactor_Parms;
	SetDollyFactor_Parms.fNewDollyFactor = fNewDollyFactor;

	pFnSetDollyFactor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDollyFactor, &SetDollyFactor_Parms, NULL );

	pFnSetDollyFactor->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerController.Dolly
// [0x00020002] 
// Parameters infos:
// float                          fDollyFactor                   ( CPF_Parm )

void AT1PlayerController::Dolly ( float fDollyFactor )
{
	static UFunction* pFnDolly = NULL;

	if ( ! pFnDolly )
		pFnDolly = (UFunction*) UObject::GObjObjects()->Data[ 36821 ];

	AT1PlayerController_execDolly_Parms Dolly_Parms;
	Dolly_Parms.fDollyFactor = fDollyFactor;

	this->ProcessEvent ( pFnDolly, &Dolly_Parms, NULL );
};

// Function T1Game.T1PlayerController.CharacterFitDolly
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDollyFactor                   ( CPF_Parm )

bool AT1PlayerController::CharacterFitDolly ( float fDollyFactor )
{
	static UFunction* pFnCharacterFitDolly = NULL;

	if ( ! pFnCharacterFitDolly )
		pFnCharacterFitDolly = (UFunction*) UObject::GObjObjects()->Data[ 36817 ];

	AT1PlayerController_execCharacterFitDolly_Parms CharacterFitDolly_Parms;
	CharacterFitDolly_Parms.fDollyFactor = fDollyFactor;

	this->ProcessEvent ( pFnCharacterFitDolly, &CharacterFitDolly_Parms, NULL );

	return CharacterFitDolly_Parms.ReturnValue;
};

// Function T1Game.T1PlayerController.DollyOut
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::DollyOut ( )
{
	static UFunction* pFnDollyOut = NULL;

	if ( ! pFnDollyOut )
		pFnDollyOut = (UFunction*) UObject::GObjObjects()->Data[ 36816 ];

	AT1PlayerController_execDollyOut_Parms DollyOut_Parms;

	this->ProcessEvent ( pFnDollyOut, &DollyOut_Parms, NULL );
};

// Function T1Game.T1PlayerController.DollyIn
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::DollyIn ( )
{
	static UFunction* pFnDollyIn = NULL;

	if ( ! pFnDollyIn )
		pFnDollyIn = (UFunction*) UObject::GObjObjects()->Data[ 36814 ];

	AT1PlayerController_execDollyIn_Parms DollyIn_Parms;

	this->ProcessEvent ( pFnDollyIn, &DollyIn_Parms, NULL );
};

// Function T1Game.T1PlayerController.Face
// [0x00020200] ( FUNC_Exec )
// Parameters infos:
// int                            a_Type                         ( CPF_Parm )

void AT1PlayerController::Face ( int a_Type )
{
	static UFunction* pFnFace = NULL;

	if ( ! pFnFace )
		pFnFace = (UFunction*) UObject::GObjObjects()->Data[ 36812 ];

	AT1PlayerController_execFace_Parms Face_Parms;
	Face_Parms.a_Type = a_Type;

	this->ProcessEvent ( pFnFace, &Face_Parms, NULL );
};

// Function T1Game.T1PlayerController.Hair
// [0x00020200] ( FUNC_Exec )
// Parameters infos:
// int                            a_Type                         ( CPF_Parm )

void AT1PlayerController::Hair ( int a_Type )
{
	static UFunction* pFnHair = NULL;

	if ( ! pFnHair )
		pFnHair = (UFunction*) UObject::GObjObjects()->Data[ 36810 ];

	AT1PlayerController_execHair_Parms Hair_Parms;
	Hair_Parms.a_Type = a_Type;

	this->ProcessEvent ( pFnHair, &Hair_Parms, NULL );
};

// Function T1Game.T1PlayerController.Costume
// [0x00020200] ( FUNC_Exec )
// Parameters infos:
// int                            a_Type                         ( CPF_Parm )

void AT1PlayerController::Costume ( int a_Type )
{
	static UFunction* pFnCostume = NULL;

	if ( ! pFnCostume )
		pFnCostume = (UFunction*) UObject::GObjObjects()->Data[ 36808 ];

	AT1PlayerController_execCostume_Parms Costume_Parms;
	Costume_Parms.a_Type = a_Type;

	this->ProcessEvent ( pFnCostume, &Costume_Parms, NULL );
};

// Function T1Game.T1PlayerController.ChangeSet
// [0x00020200] ( FUNC_Exec )
// Parameters infos:
// int                            a_Type                         ( CPF_Parm )

void AT1PlayerController::ChangeSet ( int a_Type )
{
	static UFunction* pFnChangeSet = NULL;

	if ( ! pFnChangeSet )
		pFnChangeSet = (UFunction*) UObject::GObjObjects()->Data[ 36806 ];

	AT1PlayerController_execChangeSet_Parms ChangeSet_Parms;
	ChangeSet_Parms.a_Type = a_Type;

	this->ProcessEvent ( pFnChangeSet, &ChangeSet_Parms, NULL );
};

// Function T1Game.T1PlayerController.execAttackReq
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void AT1PlayerController::execAttackReq ( )
{
	static UFunction* pFnexecAttackReq = NULL;

	if ( ! pFnexecAttackReq )
		pFnexecAttackReq = (UFunction*) UObject::GObjObjects()->Data[ 36805 ];

	AT1PlayerController_execexecAttackReq_Parms execAttackReq_Parms;

	this->ProcessEvent ( pFnexecAttackReq, &execAttackReq_Parms, NULL );
};

// Function T1Game.T1PlayerInput.ToggleRotateTypeForJoypad
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::ToggleRotateTypeForJoypad ( )
{
	static UFunction* pFnToggleRotateTypeForJoypad = NULL;

	if ( ! pFnToggleRotateTypeForJoypad )
		pFnToggleRotateTypeForJoypad = (UFunction*) UObject::GObjObjects()->Data[ 36972 ];

	UT1PlayerInput_execToggleRotateTypeForJoypad_Parms ToggleRotateTypeForJoypad_Parms;

	this->ProcessEvent ( pFnToggleRotateTypeForJoypad, &ToggleRotateTypeForJoypad_Parms, NULL );
};

// Function T1Game.T1PlayerInput.DisableRotateForJoypad
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::DisableRotateForJoypad ( )
{
	static UFunction* pFnDisableRotateForJoypad = NULL;

	if ( ! pFnDisableRotateForJoypad )
		pFnDisableRotateForJoypad = (UFunction*) UObject::GObjObjects()->Data[ 36971 ];

	UT1PlayerInput_execDisableRotateForJoypad_Parms DisableRotateForJoypad_Parms;

	this->ProcessEvent ( pFnDisableRotateForJoypad, &DisableRotateForJoypad_Parms, NULL );
};

// Function T1Game.T1PlayerInput.EnableRotateForJoypad
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::EnableRotateForJoypad ( )
{
	static UFunction* pFnEnableRotateForJoypad = NULL;

	if ( ! pFnEnableRotateForJoypad )
		pFnEnableRotateForJoypad = (UFunction*) UObject::GObjObjects()->Data[ 36970 ];

	UT1PlayerInput_execEnableRotateForJoypad_Parms EnableRotateForJoypad_Parms;

	this->ProcessEvent ( pFnEnableRotateForJoypad, &EnableRotateForJoypad_Parms, NULL );
};

// Function T1Game.T1PlayerInput.ToggleKeepWalking
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::ToggleKeepWalking ( )
{
	static UFunction* pFnToggleKeepWalking = NULL;

	if ( ! pFnToggleKeepWalking )
		pFnToggleKeepWalking = (UFunction*) UObject::GObjObjects()->Data[ 36969 ];

	UT1PlayerInput_execToggleKeepWalking_Parms ToggleKeepWalking_Parms;

	this->ProcessEvent ( pFnToggleKeepWalking, &ToggleKeepWalking_Parms, NULL );
};

// Function T1Game.T1PlayerInput.QuickTurn
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::QuickTurn ( )
{
	static UFunction* pFnQuickTurn = NULL;

	if ( ! pFnQuickTurn )
		pFnQuickTurn = (UFunction*) UObject::GObjObjects()->Data[ 36968 ];

	UT1PlayerInput_execQuickTurn_Parms QuickTurn_Parms;

	this->ProcessEvent ( pFnQuickTurn, &QuickTurn_Parms, NULL );
};

// Function T1Game.T1PlayerInput.ResetCamera
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::ResetCamera ( )
{
	static UFunction* pFnResetCamera = NULL;

	if ( ! pFnResetCamera )
		pFnResetCamera = (UFunction*) UObject::GObjObjects()->Data[ 36967 ];

	UT1PlayerInput_execResetCamera_Parms ResetCamera_Parms;

	this->ProcessEvent ( pFnResetCamera, &ResetCamera_Parms, NULL );
};

// Function T1Game.T1PlayerInput.GlideDrop
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::GlideDrop ( )
{
	static UFunction* pFnGlideDrop = NULL;

	if ( ! pFnGlideDrop )
		pFnGlideDrop = (UFunction*) UObject::GObjObjects()->Data[ 36966 ];

	UT1PlayerInput_execGlideDrop_Parms GlideDrop_Parms;

	this->ProcessEvent ( pFnGlideDrop, &GlideDrop_Parms, NULL );
};

// Function T1Game.T1PlayerInput.UnDash
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::UnDash ( )
{
	static UFunction* pFnUnDash = NULL;

	if ( ! pFnUnDash )
		pFnUnDash = (UFunction*) UObject::GObjObjects()->Data[ 36965 ];

	UT1PlayerInput_execUnDash_Parms UnDash_Parms;

	this->ProcessEvent ( pFnUnDash, &UnDash_Parms, NULL );
};

// Function T1Game.T1PlayerInput.Dash
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1PlayerInput::Dash ( )
{
	static UFunction* pFnDash = NULL;

	if ( ! pFnDash )
		pFnDash = (UFunction*) UObject::GObjObjects()->Data[ 36964 ];

	UT1PlayerInput_execDash_Parms Dash_Parms;

	this->ProcessEvent ( pFnDash, &Dash_Parms, NULL );
};

// Function T1Game.T1PlayerInput.SetTPSInnerMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  InMode                         ( CPF_Parm )

void UT1PlayerInput::SetTPSInnerMode ( unsigned char InMode )
{
	static UFunction* pFnSetTPSInnerMode = NULL;

	if ( ! pFnSetTPSInnerMode )
		pFnSetTPSInnerMode = (UFunction*) UObject::GObjObjects()->Data[ 36962 ];

	UT1PlayerInput_execSetTPSInnerMode_Parms SetTPSInnerMode_Parms;
	SetTPSInnerMode_Parms.InMode = InMode;

	pFnSetTPSInnerMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTPSInnerMode, &SetTPSInnerMode_Parms, NULL );

	pFnSetTPSInnerMode->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerInput.IsRotateCamOnly
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UT1PlayerInput::IsRotateCamOnly ( )
{
	static UFunction* pFnIsRotateCamOnly = NULL;

	if ( ! pFnIsRotateCamOnly )
		pFnIsRotateCamOnly = (UFunction*) UObject::GObjObjects()->Data[ 36960 ];

	UT1PlayerInput_execIsRotateCamOnly_Parms IsRotateCamOnly_Parms;

	pFnIsRotateCamOnly->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRotateCamOnly, &IsRotateCamOnly_Parms, NULL );

	pFnIsRotateCamOnly->FunctionFlags |= 0x400;

	return IsRotateCamOnly_Parms.ReturnValue;
};

// Function T1Game.T1PlayerInput.IsRotatePlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UT1PlayerInput::IsRotatePlayer ( )
{
	static UFunction* pFnIsRotatePlayer = NULL;

	if ( ! pFnIsRotatePlayer )
		pFnIsRotatePlayer = (UFunction*) UObject::GObjObjects()->Data[ 36958 ];

	UT1PlayerInput_execIsRotatePlayer_Parms IsRotatePlayer_Parms;

	pFnIsRotatePlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRotatePlayer, &IsRotatePlayer_Parms, NULL );

	pFnIsRotatePlayer->FunctionFlags |= 0x400;

	return IsRotatePlayer_Parms.ReturnValue;
};

// Function T1Game.T1PlayerInput.PlayerInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UT1PlayerInput::eventPlayerInput ( float DeltaTime )
{
	static UFunction* pFnPlayerInput = NULL;

	if ( ! pFnPlayerInput )
		pFnPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 36951 ];

	UT1PlayerInput_eventPlayerInput_Parms PlayerInput_Parms;
	PlayerInput_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerInput, &PlayerInput_Parms, NULL );
};

// Function T1Game.T1SceneCaptureMapVolumeActor.GetRenderedResult
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UTexture2D*              ResultTexture                  ( CPF_Parm )

bool AT1SceneCaptureMapVolumeActor::GetRenderedResult ( class UTexture2D* ResultTexture )
{
	static UFunction* pFnGetRenderedResult = NULL;

	if ( ! pFnGetRenderedResult )
		pFnGetRenderedResult = (UFunction*) UObject::GObjObjects()->Data[ 36982 ];

	AT1SceneCaptureMapVolumeActor_execGetRenderedResult_Parms GetRenderedResult_Parms;
	GetRenderedResult_Parms.ResultTexture = ResultTexture;

	pFnGetRenderedResult->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRenderedResult, &GetRenderedResult_Parms, NULL );

	pFnGetRenderedResult->FunctionFlags |= 0x400;

	return GetRenderedResult_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.IsActorPlayingFaceFXAnim
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::IsActorPlayingFaceFXAnim ( )
{
	static UFunction* pFnIsActorPlayingFaceFXAnim = NULL;

	if ( ! pFnIsActorPlayingFaceFXAnim )
		pFnIsActorPlayingFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 35867 ];

	AT1CustomPawn_execIsActorPlayingFaceFXAnim_Parms IsActorPlayingFaceFXAnim_Parms;

	this->ProcessEvent ( pFnIsActorPlayingFaceFXAnim, &IsActorPlayingFaceFXAnim_Parms, NULL );

	return IsActorPlayingFaceFXAnim_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.GetActorFaceFXAsset
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UFaceFXAsset*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UFaceFXAsset* AT1CustomPawn::eventGetActorFaceFXAsset ( )
{
	static UFunction* pFnGetActorFaceFXAsset = NULL;

	if ( ! pFnGetActorFaceFXAsset )
		pFnGetActorFaceFXAsset = (UFunction*) UObject::GObjObjects()->Data[ 35865 ];

	AT1CustomPawn_eventGetActorFaceFXAsset_Parms GetActorFaceFXAsset_Parms;

	this->ProcessEvent ( pFnGetActorFaceFXAsset, &GetActorFaceFXAsset_Parms, NULL );

	return GetActorFaceFXAsset_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.OnPlayFaceFXAnim
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayFaceFXAnim*  inAction                       ( CPF_Parm )

void AT1CustomPawn::OnPlayFaceFXAnim ( class USeqAct_PlayFaceFXAnim* inAction )
{
	static UFunction* pFnOnPlayFaceFXAnim = NULL;

	if ( ! pFnOnPlayFaceFXAnim )
		pFnOnPlayFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 35862 ];

	AT1CustomPawn_execOnPlayFaceFXAnim_Parms OnPlayFaceFXAnim_Parms;
	OnPlayFaceFXAnim_Parms.inAction = inAction;

	this->ProcessEvent ( pFnOnPlayFaceFXAnim, &OnPlayFaceFXAnim_Parms, NULL );
};

// Function T1Game.T1CustomPawn.FinishAnimControl
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AT1CustomPawn::eventFinishAnimControl ( )
{
	static UFunction* pFnFinishAnimControl = NULL;

	if ( ! pFnFinishAnimControl )
		pFnFinishAnimControl = (UFunction*) UObject::GObjObjects()->Data[ 35861 ];

	AT1CustomPawn_eventFinishAnimControl_Parms FinishAnimControl_Parms;

	this->ProcessEvent ( pFnFinishAnimControl, &FinishAnimControl_Parms, NULL );
};

// Function T1Game.T1CustomPawn.StartPawnFadeIn
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AT1CustomPawn::eventStartPawnFadeIn ( )
{
	static UFunction* pFnStartPawnFadeIn = NULL;

	if ( ! pFnStartPawnFadeIn )
		pFnStartPawnFadeIn = (UFunction*) UObject::GObjObjects()->Data[ 35860 ];

	AT1CustomPawn_eventStartPawnFadeIn_Parms StartPawnFadeIn_Parms;

	this->ProcessEvent ( pFnStartPawnFadeIn, &StartPawnFadeIn_Parms, NULL );
};

// Function T1Game.T1CustomPawn.BeginAnimControl
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// TArray< class UAnimSet* >      InAnimSets                     ( CPF_Parm )

void AT1CustomPawn::eventBeginAnimControl ( TArray< class UAnimSet* > InAnimSets )
{
	static UFunction* pFnBeginAnimControl = NULL;

	if ( ! pFnBeginAnimControl )
		pFnBeginAnimControl = (UFunction*) UObject::GObjObjects()->Data[ 35856 ];

	AT1CustomPawn_eventBeginAnimControl_Parms BeginAnimControl_Parms;
	memcpy ( &BeginAnimControl_Parms.InAnimSets, &InAnimSets, 0xC );

	this->ProcessEvent ( pFnBeginAnimControl, &BeginAnimControl_Parms, NULL );
};

// Function T1Game.T1CustomPawn.GetFaceFXAudioComponent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UAudioComponent* AT1CustomPawn::eventGetFaceFXAudioComponent ( )
{
	static UFunction* pFnGetFaceFXAudioComponent = NULL;

	if ( ! pFnGetFaceFXAudioComponent )
		pFnGetFaceFXAudioComponent = (UFunction*) UObject::GObjObjects()->Data[ 35854 ];

	AT1CustomPawn_eventGetFaceFXAudioComponent_Parms GetFaceFXAudioComponent_Parms;

	this->ProcessEvent ( pFnGetFaceFXAudioComponent, &GetFaceFXAudioComponent_Parms, NULL );

	return GetFaceFXAudioComponent_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.StopActorFaceFXAnim
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AT1CustomPawn::eventStopActorFaceFXAnim ( )
{
	static UFunction* pFnStopActorFaceFXAnim = NULL;

	if ( ! pFnStopActorFaceFXAnim )
		pFnStopActorFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 35853 ];

	AT1CustomPawn_eventStopActorFaceFXAnim_Parms StopActorFaceFXAnim_Parms;

	this->ProcessEvent ( pFnStopActorFaceFXAnim, &StopActorFaceFXAnim_Parms, NULL );
};

// Function T1Game.T1CustomPawn.IsPlayingFaceFXAnim
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::eventIsPlayingFaceFXAnim ( )
{
	static UFunction* pFnIsPlayingFaceFXAnim = NULL;

	if ( ! pFnIsPlayingFaceFXAnim )
		pFnIsPlayingFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 35851 ];

	AT1CustomPawn_eventIsPlayingFaceFXAnim_Parms IsPlayingFaceFXAnim_Parms;

	this->ProcessEvent ( pFnIsPlayingFaceFXAnim, &IsPlayingFaceFXAnim_Parms, NULL );

	return IsPlayingFaceFXAnim_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.PlayActorFaceFXAnim
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFaceFXAnimSet*          AnimSet                        ( CPF_Parm )
// struct FString                 GroupName                      ( CPF_Parm )
// struct FString                 SeqName                        ( CPF_Parm )
// int                            SoundTrackType                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  InStopPrevious                 ( CPF_OptionalParm | CPF_Parm )

bool AT1CustomPawn::eventPlayActorFaceFXAnim ( class UFaceFXAnimSet* AnimSet, struct FString GroupName, struct FString SeqName, int SoundTrackType, unsigned long InStopPrevious )
{
	static UFunction* pFnPlayActorFaceFXAnim = NULL;

	if ( ! pFnPlayActorFaceFXAnim )
		pFnPlayActorFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 35844 ];

	AT1CustomPawn_eventPlayActorFaceFXAnim_Parms PlayActorFaceFXAnim_Parms;
	PlayActorFaceFXAnim_Parms.AnimSet = AnimSet;
	memcpy ( &PlayActorFaceFXAnim_Parms.GroupName, &GroupName, 0xC );
	memcpy ( &PlayActorFaceFXAnim_Parms.SeqName, &SeqName, 0xC );
	PlayActorFaceFXAnim_Parms.SoundTrackType = SoundTrackType;
	PlayActorFaceFXAnim_Parms.InStopPrevious = InStopPrevious;

	this->ProcessEvent ( pFnPlayActorFaceFXAnim, &PlayActorFaceFXAnim_Parms, NULL );

	return PlayActorFaceFXAnim_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.GetHitPosition
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 StartBone                      ( CPF_Parm )
// class AT1CustomPawn*           TargetPawn                     ( CPF_Parm )
// struct FString                 TargetBone                     ( CPF_Parm )
// float                          fMoveDist                      ( CPF_OptionalParm | CPF_Parm )

struct FVector AT1CustomPawn::GetHitPosition ( struct FString StartBone, class AT1CustomPawn* TargetPawn, struct FString TargetBone, float fMoveDist )
{
	static UFunction* pFnGetHitPosition = NULL;

	if ( ! pFnGetHitPosition )
		pFnGetHitPosition = (UFunction*) UObject::GObjObjects()->Data[ 35838 ];

	AT1CustomPawn_execGetHitPosition_Parms GetHitPosition_Parms;
	memcpy ( &GetHitPosition_Parms.StartBone, &StartBone, 0xC );
	GetHitPosition_Parms.TargetPawn = TargetPawn;
	memcpy ( &GetHitPosition_Parms.TargetBone, &TargetBone, 0xC );
	GetHitPosition_Parms.fMoveDist = fMoveDist;

	pFnGetHitPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHitPosition, &GetHitPosition_Parms, NULL );

	pFnGetHitPosition->FunctionFlags |= 0x400;

	return GetHitPosition_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.GetVehicleState
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AT1CustomPawn::eventGetVehicleState ( )
{
	static UFunction* pFnGetVehicleState = NULL;

	if ( ! pFnGetVehicleState )
		pFnGetVehicleState = (UFunction*) UObject::GObjObjects()->Data[ 35836 ];

	AT1CustomPawn_eventGetVehicleState_Parms GetVehicleState_Parms;

	this->ProcessEvent ( pFnGetVehicleState, &GetVehicleState_Parms, NULL );

	return GetVehicleState_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetMyVehicle
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AT1CustomPawn*           Vehicle                        ( CPF_Parm )

void AT1CustomPawn::eventSetMyVehicle ( class AT1CustomPawn* Vehicle )
{
	static UFunction* pFnSetMyVehicle = NULL;

	if ( ! pFnSetMyVehicle )
		pFnSetMyVehicle = (UFunction*) UObject::GObjObjects()->Data[ 35834 ];

	AT1CustomPawn_eventSetMyVehicle_Parms SetMyVehicle_Parms;
	SetMyVehicle_Parms.Vehicle = Vehicle;

	this->ProcessEvent ( pFnSetMyVehicle, &SetMyVehicle_Parms, NULL );
};

// Function T1Game.T1CustomPawn.PostKismet
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::PostKismet ( )
{
	static UFunction* pFnPostKismet = NULL;

	if ( ! pFnPostKismet )
		pFnPostKismet = (UFunction*) UObject::GObjObjects()->Data[ 35833 ];

	AT1CustomPawn_execPostKismet_Parms PostKismet_Parms;

	pFnPostKismet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostKismet, &PostKismet_Parms, NULL );

	pFnPostKismet->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.IsValidDriver
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::IsValidDriver ( )
{
	static UFunction* pFnIsValidDriver = NULL;

	if ( ! pFnIsValidDriver )
		pFnIsValidDriver = (UFunction*) UObject::GObjObjects()->Data[ 35831 ];

	AT1CustomPawn_execIsValidDriver_Parms IsValidDriver_Parms;

	pFnIsValidDriver->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsValidDriver, &IsValidDriver_Parms, NULL );

	pFnIsValidDriver->FunctionFlags |= 0x400;

	return IsValidDriver_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.IsRideDriver
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AT1CustomPawn*           Driver                         ( CPF_Parm )

bool AT1CustomPawn::IsRideDriver ( class AT1CustomPawn* Driver )
{
	static UFunction* pFnIsRideDriver = NULL;

	if ( ! pFnIsRideDriver )
		pFnIsRideDriver = (UFunction*) UObject::GObjObjects()->Data[ 35828 ];

	AT1CustomPawn_execIsRideDriver_Parms IsRideDriver_Parms;
	IsRideDriver_Parms.Driver = Driver;

	pFnIsRideDriver->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRideDriver, &IsRideDriver_Parms, NULL );

	pFnIsRideDriver->FunctionFlags |= 0x400;

	return IsRideDriver_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.CanEnterVehicle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 BoneName                       ( CPF_Parm )

bool AT1CustomPawn::CanEnterVehicle ( struct FString BoneName )
{
	static UFunction* pFnCanEnterVehicle = NULL;

	if ( ! pFnCanEnterVehicle )
		pFnCanEnterVehicle = (UFunction*) UObject::GObjObjects()->Data[ 35825 ];

	AT1CustomPawn_execCanEnterVehicle_Parms CanEnterVehicle_Parms;
	memcpy ( &CanEnterVehicle_Parms.BoneName, &BoneName, 0xC );

	pFnCanEnterVehicle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanEnterVehicle, &CanEnterVehicle_Parms, NULL );

	pFnCanEnterVehicle->FunctionFlags |= 0x400;

	return CanEnterVehicle_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetVehicleAni
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 strAnimName                    ( CPF_Parm )
// float                          fAnimSpeed                     ( CPF_Parm )
// float                          fAnimBlendIn                   ( CPF_Parm )
// float                          fAnimBlendOut                  ( CPF_Parm )
// unsigned long                  Loop                           ( CPF_Parm )

bool AT1CustomPawn::SetVehicleAni ( struct FString strAnimName, float fAnimSpeed, float fAnimBlendIn, float fAnimBlendOut, unsigned long Loop )
{
	static UFunction* pFnSetVehicleAni = NULL;

	if ( ! pFnSetVehicleAni )
		pFnSetVehicleAni = (UFunction*) UObject::GObjObjects()->Data[ 35818 ];

	AT1CustomPawn_execSetVehicleAni_Parms SetVehicleAni_Parms;
	memcpy ( &SetVehicleAni_Parms.strAnimName, &strAnimName, 0xC );
	SetVehicleAni_Parms.fAnimSpeed = fAnimSpeed;
	SetVehicleAni_Parms.fAnimBlendIn = fAnimBlendIn;
	SetVehicleAni_Parms.fAnimBlendOut = fAnimBlendOut;
	SetVehicleAni_Parms.Loop = Loop;

	pFnSetVehicleAni->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVehicleAni, &SetVehicleAni_Parms, NULL );

	pFnSetVehicleAni->FunctionFlags |= 0x400;

	return SetVehicleAni_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.IsVehicleRide
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::IsVehicleRide ( )
{
	static UFunction* pFnIsVehicleRide = NULL;

	if ( ! pFnIsVehicleRide )
		pFnIsVehicleRide = (UFunction*) UObject::GObjObjects()->Data[ 35816 ];

	AT1CustomPawn_execIsVehicleRide_Parms IsVehicleRide_Parms;

	pFnIsVehicleRide->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsVehicleRide, &IsVehicleRide_Parms, NULL );

	pFnIsVehicleRide->FunctionFlags |= 0x400;

	return IsVehicleRide_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.IsReadyVehicleLeave
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::IsReadyVehicleLeave ( )
{
	static UFunction* pFnIsReadyVehicleLeave = NULL;

	if ( ! pFnIsReadyVehicleLeave )
		pFnIsReadyVehicleLeave = (UFunction*) UObject::GObjObjects()->Data[ 35814 ];

	AT1CustomPawn_execIsReadyVehicleLeave_Parms IsReadyVehicleLeave_Parms;

	pFnIsReadyVehicleLeave->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsReadyVehicleLeave, &IsReadyVehicleLeave_Parms, NULL );

	pFnIsReadyVehicleLeave->FunctionFlags |= 0x400;

	return IsReadyVehicleLeave_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.IsReadyVehicleRide
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::IsReadyVehicleRide ( )
{
	static UFunction* pFnIsReadyVehicleRide = NULL;

	if ( ! pFnIsReadyVehicleRide )
		pFnIsReadyVehicleRide = (UFunction*) UObject::GObjObjects()->Data[ 35812 ];

	AT1CustomPawn_execIsReadyVehicleRide_Parms IsReadyVehicleRide_Parms;

	pFnIsReadyVehicleRide->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsReadyVehicleRide, &IsReadyVehicleRide_Parms, NULL );

	pFnIsReadyVehicleRide->FunctionFlags |= 0x400;

	return IsReadyVehicleRide_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.CanDriving
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 BoneName                       ( CPF_Parm )

bool AT1CustomPawn::CanDriving ( struct FString BoneName )
{
	static UFunction* pFnCanDriving = NULL;

	if ( ! pFnCanDriving )
		pFnCanDriving = (UFunction*) UObject::GObjObjects()->Data[ 35809 ];

	AT1CustomPawn_execCanDriving_Parms CanDriving_Parms;
	memcpy ( &CanDriving_Parms.BoneName, &BoneName, 0xC );

	pFnCanDriving->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanDriving, &CanDriving_Parms, NULL );

	pFnCanDriving->FunctionFlags |= 0x400;

	return CanDriving_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.GetBoundBoxForRender
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FBox                    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AT1CustomPawn*           Pawn                           ( CPF_Parm )

struct FBox AT1CustomPawn::GetBoundBoxForRender ( class AT1CustomPawn* Pawn )
{
	static UFunction* pFnGetBoundBoxForRender = NULL;

	if ( ! pFnGetBoundBoxForRender )
		pFnGetBoundBoxForRender = (UFunction*) UObject::GObjObjects()->Data[ 35806 ];

	AT1CustomPawn_execGetBoundBoxForRender_Parms GetBoundBoxForRender_Parms;
	GetBoundBoxForRender_Parms.Pawn = Pawn;

	pFnGetBoundBoxForRender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundBoxForRender, &GetBoundBoxForRender_Parms, NULL );

	pFnGetBoundBoxForRender->FunctionFlags |= 0x400;

	return GetBoundBoxForRender_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SwapPawnController
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AT1CustomPawn*           FirstPawn                      ( CPF_Parm )
// class AT1CustomPawn*           SecondPawn                     ( CPF_Parm )

bool AT1CustomPawn::SwapPawnController ( class AT1CustomPawn* FirstPawn, class AT1CustomPawn* SecondPawn )
{
	static UFunction* pFnSwapPawnController = NULL;

	if ( ! pFnSwapPawnController )
		pFnSwapPawnController = (UFunction*) UObject::GObjObjects()->Data[ 35802 ];

	AT1CustomPawn_execSwapPawnController_Parms SwapPawnController_Parms;
	SwapPawnController_Parms.FirstPawn = FirstPawn;
	SwapPawnController_Parms.SecondPawn = SecondPawn;

	pFnSwapPawnController->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSwapPawnController, &SwapPawnController_Parms, NULL );

	pFnSwapPawnController->FunctionFlags |= 0x400;

	return SwapPawnController_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.DetachToVehicle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::DetachToVehicle ( )
{
	static UFunction* pFnDetachToVehicle = NULL;

	if ( ! pFnDetachToVehicle )
		pFnDetachToVehicle = (UFunction*) UObject::GObjObjects()->Data[ 35800 ];

	AT1CustomPawn_execDetachToVehicle_Parms DetachToVehicle_Parms;

	pFnDetachToVehicle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDetachToVehicle, &DetachToVehicle_Parms, NULL );

	pFnDetachToVehicle->FunctionFlags |= 0x400;

	return DetachToVehicle_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.AttachToVehicle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 DriveBoneName                  ( CPF_Parm )
// struct FString                 VehicleBoneName                ( CPF_Parm )
// struct FVector                 Offset                         ( CPF_Parm )

bool AT1CustomPawn::AttachToVehicle ( struct FString DriveBoneName, struct FString VehicleBoneName, struct FVector Offset )
{
	static UFunction* pFnAttachToVehicle = NULL;

	if ( ! pFnAttachToVehicle )
		pFnAttachToVehicle = (UFunction*) UObject::GObjObjects()->Data[ 35795 ];

	AT1CustomPawn_execAttachToVehicle_Parms AttachToVehicle_Parms;
	memcpy ( &AttachToVehicle_Parms.DriveBoneName, &DriveBoneName, 0xC );
	memcpy ( &AttachToVehicle_Parms.VehicleBoneName, &VehicleBoneName, 0xC );
	memcpy ( &AttachToVehicle_Parms.Offset, &Offset, 0xC );

	pFnAttachToVehicle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachToVehicle, &AttachToVehicle_Parms, NULL );

	pFnAttachToVehicle->FunctionFlags |= 0x400;

	return AttachToVehicle_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.RideVehicle
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 strAnimName                    ( CPF_Parm )
// int                            iPriority                      ( CPF_Parm )
// float                          fAnimSpeed                     ( CPF_Parm )
// float                          fAnimBlendIn                   ( CPF_OptionalParm | CPF_Parm )
// float                          fAnimBlendOut                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBlockMove                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBlockRotate                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNextAnim                      ( CPF_OptionalParm | CPF_Parm )

bool AT1CustomPawn::RideVehicle ( struct FString strAnimName, int iPriority, float fAnimSpeed, float fAnimBlendIn, float fAnimBlendOut, unsigned long bLoop, unsigned long bBlockMove, unsigned long bBlockRotate, unsigned long bNextAnim )
{
	static UFunction* pFnRideVehicle = NULL;

	if ( ! pFnRideVehicle )
		pFnRideVehicle = (UFunction*) UObject::GObjObjects()->Data[ 35784 ];

	AT1CustomPawn_execRideVehicle_Parms RideVehicle_Parms;
	memcpy ( &RideVehicle_Parms.strAnimName, &strAnimName, 0xC );
	RideVehicle_Parms.iPriority = iPriority;
	RideVehicle_Parms.fAnimSpeed = fAnimSpeed;
	RideVehicle_Parms.fAnimBlendIn = fAnimBlendIn;
	RideVehicle_Parms.fAnimBlendOut = fAnimBlendOut;
	RideVehicle_Parms.bLoop = bLoop;
	RideVehicle_Parms.bBlockMove = bBlockMove;
	RideVehicle_Parms.bBlockRotate = bBlockRotate;
	RideVehicle_Parms.bNextAnim = bNextAnim;

	pFnRideVehicle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRideVehicle, &RideVehicle_Parms, NULL );

	pFnRideVehicle->FunctionFlags |= 0x400;

	return RideVehicle_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.ChildParticleRelativePos
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class AEmitter*                Particle                       ( CPF_Parm )
// float                          fRelX                          ( CPF_OptionalParm | CPF_Parm )
// float                          fRelY                          ( CPF_OptionalParm | CPF_Parm )
// float                          fRelZ                          ( CPF_OptionalParm | CPF_Parm )
// int                            BoneUseType                    ( CPF_OptionalParm | CPF_Parm )
// struct FName                   BoneName                       ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::ChildParticleRelativePos ( class AEmitter* Particle, float fRelX, float fRelY, float fRelZ, int BoneUseType, struct FName BoneName )
{
	static UFunction* pFnChildParticleRelativePos = NULL;

	if ( ! pFnChildParticleRelativePos )
		pFnChildParticleRelativePos = (UFunction*) UObject::GObjObjects()->Data[ 35777 ];

	AT1CustomPawn_execChildParticleRelativePos_Parms ChildParticleRelativePos_Parms;
	ChildParticleRelativePos_Parms.Particle = Particle;
	ChildParticleRelativePos_Parms.fRelX = fRelX;
	ChildParticleRelativePos_Parms.fRelY = fRelY;
	ChildParticleRelativePos_Parms.fRelZ = fRelZ;
	ChildParticleRelativePos_Parms.BoneUseType = BoneUseType;
	memcpy ( &ChildParticleRelativePos_Parms.BoneName, &BoneName, 0x8 );

	pFnChildParticleRelativePos->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChildParticleRelativePos, &ChildParticleRelativePos_Parms, NULL );

	pFnChildParticleRelativePos->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ChildParticleDetach
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AEmitter*                Particle                       ( CPF_Parm )

void AT1CustomPawn::ChildParticleDetach ( class AEmitter* Particle )
{
	static UFunction* pFnChildParticleDetach = NULL;

	if ( ! pFnChildParticleDetach )
		pFnChildParticleDetach = (UFunction*) UObject::GObjObjects()->Data[ 35775 ];

	AT1CustomPawn_execChildParticleDetach_Parms ChildParticleDetach_Parms;
	ChildParticleDetach_Parms.Particle = Particle;

	pFnChildParticleDetach->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChildParticleDetach, &ChildParticleDetach_Parms, NULL );

	pFnChildParticleDetach->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ChildParticleAttach
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class AEmitter*                Particle                       ( CPF_Parm )
// float                          fRelX                          ( CPF_OptionalParm | CPF_Parm )
// float                          fRelY                          ( CPF_OptionalParm | CPF_Parm )
// float                          fRelZ                          ( CPF_OptionalParm | CPF_Parm )
// int                            BoneUseType                    ( CPF_OptionalParm | CPF_Parm )
// struct FName                   BoneName                       ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::ChildParticleAttach ( class AEmitter* Particle, float fRelX, float fRelY, float fRelZ, int BoneUseType, struct FName BoneName )
{
	static UFunction* pFnChildParticleAttach = NULL;

	if ( ! pFnChildParticleAttach )
		pFnChildParticleAttach = (UFunction*) UObject::GObjObjects()->Data[ 35768 ];

	AT1CustomPawn_execChildParticleAttach_Parms ChildParticleAttach_Parms;
	ChildParticleAttach_Parms.Particle = Particle;
	ChildParticleAttach_Parms.fRelX = fRelX;
	ChildParticleAttach_Parms.fRelY = fRelY;
	ChildParticleAttach_Parms.fRelZ = fRelZ;
	ChildParticleAttach_Parms.BoneUseType = BoneUseType;
	memcpy ( &ChildParticleAttach_Parms.BoneName, &BoneName, 0x8 );

	pFnChildParticleAttach->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChildParticleAttach, &ChildParticleAttach_Parms, NULL );

	pFnChildParticleAttach->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.MakeFootPrint
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )
// int                            iFootPrintInfoId               ( CPF_Parm )
// struct FVector                 FootLocation                   ( CPF_Parm )
// struct FRotator                FootRotation                   ( CPF_Parm )

void AT1CustomPawn::MakeFootPrint ( class UPhysicalMaterial* PhysMaterial, int iFootPrintInfoId, struct FVector FootLocation, struct FRotator FootRotation )
{
	static UFunction* pFnMakeFootPrint = NULL;

	if ( ! pFnMakeFootPrint )
		pFnMakeFootPrint = (UFunction*) UObject::GObjObjects()->Data[ 35763 ];

	AT1CustomPawn_execMakeFootPrint_Parms MakeFootPrint_Parms;
	MakeFootPrint_Parms.PhysMaterial = PhysMaterial;
	MakeFootPrint_Parms.iFootPrintInfoId = iFootPrintInfoId;
	memcpy ( &MakeFootPrint_Parms.FootLocation, &FootLocation, 0xC );
	memcpy ( &MakeFootPrint_Parms.FootRotation, &FootRotation, 0xC );

	pFnMakeFootPrint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeFootPrint, &MakeFootPrint_Parms, NULL );

	pFnMakeFootPrint->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.UpdateWaterPrint
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )

void AT1CustomPawn::UpdateWaterPrint ( class UPhysicalMaterial* PhysMaterial )
{
	static UFunction* pFnUpdateWaterPrint = NULL;

	if ( ! pFnUpdateWaterPrint )
		pFnUpdateWaterPrint = (UFunction*) UObject::GObjObjects()->Data[ 35761 ];

	AT1CustomPawn_execUpdateWaterPrint_Parms UpdateWaterPrint_Parms;
	UpdateWaterPrint_Parms.PhysMaterial = PhysMaterial;

	pFnUpdateWaterPrint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateWaterPrint, &UpdateWaterPrint_Parms, NULL );

	pFnUpdateWaterPrint->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.UpdateFootPrint
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )

void AT1CustomPawn::UpdateFootPrint ( class UPhysicalMaterial* PhysMaterial )
{
	static UFunction* pFnUpdateFootPrint = NULL;

	if ( ! pFnUpdateFootPrint )
		pFnUpdateFootPrint = (UFunction*) UObject::GObjObjects()->Data[ 35759 ];

	AT1CustomPawn_execUpdateFootPrint_Parms UpdateFootPrint_Parms;
	UpdateFootPrint_Parms.PhysMaterial = PhysMaterial;

	pFnUpdateFootPrint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFootPrint, &UpdateFootPrint_Parms, NULL );

	pFnUpdateFootPrint->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ChangeAnimSpeed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// float                          fCustomAnimSpeed               ( CPF_Parm )
// float                          fPlayTime                      ( CPF_Parm )

void AT1CustomPawn::ChangeAnimSpeed ( int iMeshIndex, float fCustomAnimSpeed, float fPlayTime )
{
	static UFunction* pFnChangeAnimSpeed = NULL;

	if ( ! pFnChangeAnimSpeed )
		pFnChangeAnimSpeed = (UFunction*) UObject::GObjObjects()->Data[ 35755 ];

	AT1CustomPawn_execChangeAnimSpeed_Parms ChangeAnimSpeed_Parms;
	ChangeAnimSpeed_Parms.iMeshIndex = iMeshIndex;
	ChangeAnimSpeed_Parms.fCustomAnimSpeed = fCustomAnimSpeed;
	ChangeAnimSpeed_Parms.fPlayTime = fPlayTime;

	pFnChangeAnimSpeed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeAnimSpeed, &ChangeAnimSpeed_Parms, NULL );

	pFnChangeAnimSpeed->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.LogForMoveAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::LogForMoveAnimName ( )
{
	static UFunction* pFnLogForMoveAnimName = NULL;

	if ( ! pFnLogForMoveAnimName )
		pFnLogForMoveAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35754 ];

	AT1CustomPawn_execLogForMoveAnimName_Parms LogForMoveAnimName_Parms;

	pFnLogForMoveAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogForMoveAnimName, &LogForMoveAnimName_Parms, NULL );

	pFnLogForMoveAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetFadingAlpha
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// float                          fAlpha                         ( CPF_Parm )

void AT1CustomPawn::SetFadingAlpha ( int iMeshIndex, float fAlpha )
{
	static UFunction* pFnSetFadingAlpha = NULL;

	if ( ! pFnSetFadingAlpha )
		pFnSetFadingAlpha = (UFunction*) UObject::GObjObjects()->Data[ 35751 ];

	AT1CustomPawn_execSetFadingAlpha_Parms SetFadingAlpha_Parms;
	SetFadingAlpha_Parms.iMeshIndex = iMeshIndex;
	SetFadingAlpha_Parms.fAlpha = fAlpha;

	pFnSetFadingAlpha->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFadingAlpha, &SetFadingAlpha_Parms, NULL );

	pFnSetFadingAlpha->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetFadingState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// int                            iType                          ( CPF_Parm )

void AT1CustomPawn::SetFadingState ( int iMeshIndex, int iType )
{
	static UFunction* pFnSetFadingState = NULL;

	if ( ! pFnSetFadingState )
		pFnSetFadingState = (UFunction*) UObject::GObjObjects()->Data[ 35748 ];

	AT1CustomPawn_execSetFadingState_Parms SetFadingState_Parms;
	SetFadingState_Parms.iMeshIndex = iMeshIndex;
	SetFadingState_Parms.iType = iType;

	pFnSetFadingState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFadingState, &SetFadingState_Parms, NULL );

	pFnSetFadingState->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.UpdateResetPhysicsBones
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::UpdateResetPhysicsBones ( )
{
	static UFunction* pFnUpdateResetPhysicsBones = NULL;

	if ( ! pFnUpdateResetPhysicsBones )
		pFnUpdateResetPhysicsBones = (UFunction*) UObject::GObjObjects()->Data[ 35747 ];

	AT1CustomPawn_execUpdateResetPhysicsBones_Parms UpdateResetPhysicsBones_Parms;

	pFnUpdateResetPhysicsBones->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateResetPhysicsBones, &UpdateResetPhysicsBones_Parms, NULL );

	pFnUpdateResetPhysicsBones->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetResetPhysicsBoneFlag
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            Flag                           ( CPF_Parm )
// int                            iMaxResetBonesCount            ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetResetPhysicsBoneFlag ( int Flag, int iMaxResetBonesCount )
{
	static UFunction* pFnSetResetPhysicsBoneFlag = NULL;

	if ( ! pFnSetResetPhysicsBoneFlag )
		pFnSetResetPhysicsBoneFlag = (UFunction*) UObject::GObjObjects()->Data[ 35744 ];

	AT1CustomPawn_execSetResetPhysicsBoneFlag_Parms SetResetPhysicsBoneFlag_Parms;
	SetResetPhysicsBoneFlag_Parms.Flag = Flag;
	SetResetPhysicsBoneFlag_Parms.iMaxResetBonesCount = iMaxResetBonesCount;

	pFnSetResetPhysicsBoneFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetResetPhysicsBoneFlag, &SetResetPhysicsBoneFlag_Parms, NULL );

	pFnSetResetPhysicsBoneFlag->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetOutLineBloomInfo
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// unsigned long                  bOutLineBloom                  ( CPF_Parm )
// int                            Red                            ( CPF_Parm )
// int                            Green                          ( CPF_Parm )
// int                            Blue                           ( CPF_Parm )
// int                            Alpha                          ( CPF_Parm )
// int                            iAlphaAnimType                 ( CPF_OptionalParm | CPF_Parm )
// int                            iMinAlpha                      ( CPF_OptionalParm | CPF_Parm )
// int                            iMaxAlpha                      ( CPF_OptionalParm | CPF_Parm )
// float                          fAlphaAnimTime                 ( CPF_OptionalParm | CPF_Parm )
// float                          fScale                         ( CPF_OptionalParm | CPF_Parm )
// float                          fMinScale                      ( CPF_OptionalParm | CPF_Parm )
// float                          fMaxScale                      ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetOutLineBloomInfo ( int iMeshIndex, unsigned long bOutLineBloom, int Red, int Green, int Blue, int Alpha, int iAlphaAnimType, int iMinAlpha, int iMaxAlpha, float fAlphaAnimTime, float fScale, float fMinScale, float fMaxScale )
{
	static UFunction* pFnSetOutLineBloomInfo = NULL;

	if ( ! pFnSetOutLineBloomInfo )
		pFnSetOutLineBloomInfo = (UFunction*) UObject::GObjObjects()->Data[ 35730 ];

	AT1CustomPawn_execSetOutLineBloomInfo_Parms SetOutLineBloomInfo_Parms;
	SetOutLineBloomInfo_Parms.iMeshIndex = iMeshIndex;
	SetOutLineBloomInfo_Parms.bOutLineBloom = bOutLineBloom;
	SetOutLineBloomInfo_Parms.Red = Red;
	SetOutLineBloomInfo_Parms.Green = Green;
	SetOutLineBloomInfo_Parms.Blue = Blue;
	SetOutLineBloomInfo_Parms.Alpha = Alpha;
	SetOutLineBloomInfo_Parms.iAlphaAnimType = iAlphaAnimType;
	SetOutLineBloomInfo_Parms.iMinAlpha = iMinAlpha;
	SetOutLineBloomInfo_Parms.iMaxAlpha = iMaxAlpha;
	SetOutLineBloomInfo_Parms.fAlphaAnimTime = fAlphaAnimTime;
	SetOutLineBloomInfo_Parms.fScale = fScale;
	SetOutLineBloomInfo_Parms.fMinScale = fMinScale;
	SetOutLineBloomInfo_Parms.fMaxScale = fMaxScale;

	pFnSetOutLineBloomInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOutLineBloomInfo, &SetOutLineBloomInfo_Parms, NULL );

	pFnSetOutLineBloomInfo->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.UpdatePolyHeight
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void AT1CustomPawn::UpdatePolyHeight ( float fDeltaTime )
{
	static UFunction* pFnUpdatePolyHeight = NULL;

	if ( ! pFnUpdatePolyHeight )
		pFnUpdatePolyHeight = (UFunction*) UObject::GObjObjects()->Data[ 35728 ];

	AT1CustomPawn_execUpdatePolyHeight_Parms UpdatePolyHeight_Parms;
	UpdatePolyHeight_Parms.fDeltaTime = fDeltaTime;

	pFnUpdatePolyHeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePolyHeight, &UpdatePolyHeight_Parms, NULL );

	pFnUpdatePolyHeight->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetVehicleAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strIdle                        ( CPF_Parm )
// int                            iSetType                       ( CPF_Parm )

void AT1CustomPawn::SetVehicleAnimName ( struct FString strIdle, int iSetType )
{
	static UFunction* pFnSetVehicleAnimName = NULL;

	if ( ! pFnSetVehicleAnimName )
		pFnSetVehicleAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35725 ];

	AT1CustomPawn_execSetVehicleAnimName_Parms SetVehicleAnimName_Parms;
	memcpy ( &SetVehicleAnimName_Parms.strIdle, &strIdle, 0xC );
	SetVehicleAnimName_Parms.iSetType = iSetType;

	pFnSetVehicleAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVehicleAnimName, &SetVehicleAnimName_Parms, NULL );

	pFnSetVehicleAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMoveAnimRate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fRate                          ( CPF_Parm )

void AT1CustomPawn::SetMoveAnimRate ( float fRate )
{
	static UFunction* pFnSetMoveAnimRate = NULL;

	if ( ! pFnSetMoveAnimRate )
		pFnSetMoveAnimRate = (UFunction*) UObject::GObjObjects()->Data[ 35723 ];

	AT1CustomPawn_execSetMoveAnimRate_Parms SetMoveAnimRate_Parms;
	SetMoveAnimRate_Parms.fRate = fRate;

	pFnSetMoveAnimRate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMoveAnimRate, &SetMoveAnimRate_Parms, NULL );

	pFnSetMoveAnimRate->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetWalkRunCheckSpeed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fWalkSpeed                     ( CPF_Parm )
// float                          fRunSpeed                      ( CPF_Parm )

void AT1CustomPawn::SetWalkRunCheckSpeed ( float fWalkSpeed, float fRunSpeed )
{
	static UFunction* pFnSetWalkRunCheckSpeed = NULL;

	if ( ! pFnSetWalkRunCheckSpeed )
		pFnSetWalkRunCheckSpeed = (UFunction*) UObject::GObjObjects()->Data[ 35720 ];

	AT1CustomPawn_execSetWalkRunCheckSpeed_Parms SetWalkRunCheckSpeed_Parms;
	SetWalkRunCheckSpeed_Parms.fWalkSpeed = fWalkSpeed;
	SetWalkRunCheckSpeed_Parms.fRunSpeed = fRunSpeed;

	pFnSetWalkRunCheckSpeed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWalkRunCheckSpeed, &SetWalkRunCheckSpeed_Parms, NULL );

	pFnSetWalkRunCheckSpeed->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetHighJumpAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strJumpStart                   ( CPF_Parm )
// struct FString                 strJumpIng                     ( CPF_Parm )
// struct FString                 strJumpEnd                     ( CPF_Parm )
// struct FString                 strJumpCancel                  ( CPF_Parm )

void AT1CustomPawn::SetHighJumpAnimName ( struct FString strJumpStart, struct FString strJumpIng, struct FString strJumpEnd, struct FString strJumpCancel )
{
	static UFunction* pFnSetHighJumpAnimName = NULL;

	if ( ! pFnSetHighJumpAnimName )
		pFnSetHighJumpAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35715 ];

	AT1CustomPawn_execSetHighJumpAnimName_Parms SetHighJumpAnimName_Parms;
	memcpy ( &SetHighJumpAnimName_Parms.strJumpStart, &strJumpStart, 0xC );
	memcpy ( &SetHighJumpAnimName_Parms.strJumpIng, &strJumpIng, 0xC );
	memcpy ( &SetHighJumpAnimName_Parms.strJumpEnd, &strJumpEnd, 0xC );
	memcpy ( &SetHighJumpAnimName_Parms.strJumpCancel, &strJumpCancel, 0xC );

	pFnSetHighJumpAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHighJumpAnimName, &SetHighJumpAnimName_Parms, NULL );

	pFnSetHighJumpAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetLongJumpAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strJumpStart                   ( CPF_Parm )
// struct FString                 strJumpIng                     ( CPF_Parm )
// struct FString                 strJumpEnd                     ( CPF_Parm )
// struct FString                 strJumpCancel                  ( CPF_Parm )

void AT1CustomPawn::SetLongJumpAnimName ( struct FString strJumpStart, struct FString strJumpIng, struct FString strJumpEnd, struct FString strJumpCancel )
{
	static UFunction* pFnSetLongJumpAnimName = NULL;

	if ( ! pFnSetLongJumpAnimName )
		pFnSetLongJumpAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35710 ];

	AT1CustomPawn_execSetLongJumpAnimName_Parms SetLongJumpAnimName_Parms;
	memcpy ( &SetLongJumpAnimName_Parms.strJumpStart, &strJumpStart, 0xC );
	memcpy ( &SetLongJumpAnimName_Parms.strJumpIng, &strJumpIng, 0xC );
	memcpy ( &SetLongJumpAnimName_Parms.strJumpEnd, &strJumpEnd, 0xC );
	memcpy ( &SetLongJumpAnimName_Parms.strJumpCancel, &strJumpCancel, 0xC );

	pFnSetLongJumpAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLongJumpAnimName, &SetLongJumpAnimName_Parms, NULL );

	pFnSetLongJumpAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.GetChangeMoveAnimNamesFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iUpper                         ( CPF_Parm )

bool AT1CustomPawn::GetChangeMoveAnimNamesFlag ( int iUpper )
{
	static UFunction* pFnGetChangeMoveAnimNamesFlag = NULL;

	if ( ! pFnGetChangeMoveAnimNamesFlag )
		pFnGetChangeMoveAnimNamesFlag = (UFunction*) UObject::GObjObjects()->Data[ 35707 ];

	AT1CustomPawn_execGetChangeMoveAnimNamesFlag_Parms GetChangeMoveAnimNamesFlag_Parms;
	GetChangeMoveAnimNamesFlag_Parms.iUpper = iUpper;

	pFnGetChangeMoveAnimNamesFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetChangeMoveAnimNamesFlag, &GetChangeMoveAnimNamesFlag_Parms, NULL );

	pFnGetChangeMoveAnimNamesFlag->FunctionFlags |= 0x400;

	return GetChangeMoveAnimNamesFlag_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetChangeMoveAnimNamesFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iUpper                         ( CPF_Parm )
// unsigned long                  bFlag                          ( CPF_Parm )

void AT1CustomPawn::SetChangeMoveAnimNamesFlag ( int iUpper, unsigned long bFlag )
{
	static UFunction* pFnSetChangeMoveAnimNamesFlag = NULL;

	if ( ! pFnSetChangeMoveAnimNamesFlag )
		pFnSetChangeMoveAnimNamesFlag = (UFunction*) UObject::GObjObjects()->Data[ 35704 ];

	AT1CustomPawn_execSetChangeMoveAnimNamesFlag_Parms SetChangeMoveAnimNamesFlag_Parms;
	SetChangeMoveAnimNamesFlag_Parms.iUpper = iUpper;
	SetChangeMoveAnimNamesFlag_Parms.bFlag = bFlag;

	pFnSetChangeMoveAnimNamesFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetChangeMoveAnimNamesFlag, &SetChangeMoveAnimNamesFlag_Parms, NULL );

	pFnSetChangeMoveAnimNamesFlag->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetInterpolAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strJToI                        ( CPF_Parm )
// struct FString                 strJToMFront                   ( CPF_Parm )
// struct FString                 strJToMRight                   ( CPF_Parm )
// struct FString                 strJToMLeft                    ( CPF_Parm )
// struct FString                 strJToMBack                    ( CPF_Parm )
// struct FString                 strMToJFront                   ( CPF_Parm )
// struct FString                 strMToJRight                   ( CPF_Parm )
// struct FString                 strMToJLeft                    ( CPF_Parm )
// struct FString                 strMtoI                        ( CPF_Parm )
// struct FString                 strLtoR                        ( CPF_Parm )
// struct FString                 strRtoL                        ( CPF_Parm )
// int                            iSetType                       ( CPF_Parm )

void AT1CustomPawn::SetInterpolAnimName ( struct FString strJToI, struct FString strJToMFront, struct FString strJToMRight, struct FString strJToMLeft, struct FString strJToMBack, struct FString strMToJFront, struct FString strMToJRight, struct FString strMToJLeft, struct FString strMtoI, struct FString strLtoR, struct FString strRtoL, int iSetType )
{
	static UFunction* pFnSetInterpolAnimName = NULL;

	if ( ! pFnSetInterpolAnimName )
		pFnSetInterpolAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35691 ];

	AT1CustomPawn_execSetInterpolAnimName_Parms SetInterpolAnimName_Parms;
	memcpy ( &SetInterpolAnimName_Parms.strJToI, &strJToI, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strJToMFront, &strJToMFront, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strJToMRight, &strJToMRight, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strJToMLeft, &strJToMLeft, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strJToMBack, &strJToMBack, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strMToJFront, &strMToJFront, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strMToJRight, &strMToJRight, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strMToJLeft, &strMToJLeft, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strMtoI, &strMtoI, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strLtoR, &strLtoR, 0xC );
	memcpy ( &SetInterpolAnimName_Parms.strRtoL, &strRtoL, 0xC );
	SetInterpolAnimName_Parms.iSetType = iSetType;

	pFnSetInterpolAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetInterpolAnimName, &SetInterpolAnimName_Parms, NULL );

	pFnSetInterpolAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetCustomAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iUpper                         ( CPF_Parm )
// struct FString                 strCustom                      ( CPF_Parm )

void AT1CustomPawn::SetCustomAnimName ( int iUpper, struct FString strCustom )
{
	static UFunction* pFnSetCustomAnimName = NULL;

	if ( ! pFnSetCustomAnimName )
		pFnSetCustomAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35688 ];

	AT1CustomPawn_execSetCustomAnimName_Parms SetCustomAnimName_Parms;
	SetCustomAnimName_Parms.iUpper = iUpper;
	memcpy ( &SetCustomAnimName_Parms.strCustom, &strCustom, 0xC );

	pFnSetCustomAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCustomAnimName, &SetCustomAnimName_Parms, NULL );

	pFnSetCustomAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetIdleAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strIdle                        ( CPF_Parm )
// int                            iSetType                       ( CPF_Parm )

void AT1CustomPawn::SetIdleAnimName ( struct FString strIdle, int iSetType )
{
	static UFunction* pFnSetIdleAnimName = NULL;

	if ( ! pFnSetIdleAnimName )
		pFnSetIdleAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35685 ];

	AT1CustomPawn_execSetIdleAnimName_Parms SetIdleAnimName_Parms;
	memcpy ( &SetIdleAnimName_Parms.strIdle, &strIdle, 0xC );
	SetIdleAnimName_Parms.iSetType = iSetType;

	pFnSetIdleAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetIdleAnimName, &SetIdleAnimName_Parms, NULL );

	pFnSetIdleAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetJumpAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strFront                       ( CPF_Parm )
// struct FString                 strRight                       ( CPF_Parm )
// struct FString                 strLeft                        ( CPF_Parm )
// int                            iSetType                       ( CPF_Parm )

void AT1CustomPawn::SetJumpAnimName ( struct FString strFront, struct FString strRight, struct FString strLeft, int iSetType )
{
	static UFunction* pFnSetJumpAnimName = NULL;

	if ( ! pFnSetJumpAnimName )
		pFnSetJumpAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35680 ];

	AT1CustomPawn_execSetJumpAnimName_Parms SetJumpAnimName_Parms;
	memcpy ( &SetJumpAnimName_Parms.strFront, &strFront, 0xC );
	memcpy ( &SetJumpAnimName_Parms.strRight, &strRight, 0xC );
	memcpy ( &SetJumpAnimName_Parms.strLeft, &strLeft, 0xC );
	SetJumpAnimName_Parms.iSetType = iSetType;

	pFnSetJumpAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetJumpAnimName, &SetJumpAnimName_Parms, NULL );

	pFnSetJumpAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetRunAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strFront                       ( CPF_Parm )
// struct FString                 strRight                       ( CPF_Parm )
// struct FString                 strLeft                        ( CPF_Parm )
// struct FString                 strBack                        ( CPF_Parm )
// struct FString                 strRightBack                   ( CPF_Parm )
// struct FString                 strLeftBack                    ( CPF_Parm )
// int                            iSetType                       ( CPF_Parm )

void AT1CustomPawn::SetRunAnimName ( struct FString strFront, struct FString strRight, struct FString strLeft, struct FString strBack, struct FString strRightBack, struct FString strLeftBack, int iSetType )
{
	static UFunction* pFnSetRunAnimName = NULL;

	if ( ! pFnSetRunAnimName )
		pFnSetRunAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35672 ];

	AT1CustomPawn_execSetRunAnimName_Parms SetRunAnimName_Parms;
	memcpy ( &SetRunAnimName_Parms.strFront, &strFront, 0xC );
	memcpy ( &SetRunAnimName_Parms.strRight, &strRight, 0xC );
	memcpy ( &SetRunAnimName_Parms.strLeft, &strLeft, 0xC );
	memcpy ( &SetRunAnimName_Parms.strBack, &strBack, 0xC );
	memcpy ( &SetRunAnimName_Parms.strRightBack, &strRightBack, 0xC );
	memcpy ( &SetRunAnimName_Parms.strLeftBack, &strLeftBack, 0xC );
	SetRunAnimName_Parms.iSetType = iSetType;

	pFnSetRunAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRunAnimName, &SetRunAnimName_Parms, NULL );

	pFnSetRunAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetWalkAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 strFront                       ( CPF_Parm )
// struct FString                 strRight                       ( CPF_Parm )
// struct FString                 strLeft                        ( CPF_Parm )
// struct FString                 strBack                        ( CPF_Parm )
// struct FString                 strRightBack                   ( CPF_Parm )
// struct FString                 strLeftBack                    ( CPF_Parm )
// int                            iSetType                       ( CPF_Parm )

void AT1CustomPawn::SetWalkAnimName ( struct FString strFront, struct FString strRight, struct FString strLeft, struct FString strBack, struct FString strRightBack, struct FString strLeftBack, int iSetType )
{
	static UFunction* pFnSetWalkAnimName = NULL;

	if ( ! pFnSetWalkAnimName )
		pFnSetWalkAnimName = (UFunction*) UObject::GObjObjects()->Data[ 35664 ];

	AT1CustomPawn_execSetWalkAnimName_Parms SetWalkAnimName_Parms;
	memcpy ( &SetWalkAnimName_Parms.strFront, &strFront, 0xC );
	memcpy ( &SetWalkAnimName_Parms.strRight, &strRight, 0xC );
	memcpy ( &SetWalkAnimName_Parms.strLeft, &strLeft, 0xC );
	memcpy ( &SetWalkAnimName_Parms.strBack, &strBack, 0xC );
	memcpy ( &SetWalkAnimName_Parms.strRightBack, &strRightBack, 0xC );
	memcpy ( &SetWalkAnimName_Parms.strLeftBack, &strLeftBack, 0xC );
	SetWalkAnimName_Parms.iSetType = iSetType;

	pFnSetWalkAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWalkAnimName, &SetWalkAnimName_Parms, NULL );

	pFnSetWalkAnimName->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ApplyMeshCustomizeInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::ApplyMeshCustomizeInfo ( int iMeshIndex )
{
	static UFunction* pFnApplyMeshCustomizeInfo = NULL;

	if ( ! pFnApplyMeshCustomizeInfo )
		pFnApplyMeshCustomizeInfo = (UFunction*) UObject::GObjObjects()->Data[ 35662 ];

	AT1CustomPawn_execApplyMeshCustomizeInfo_Parms ApplyMeshCustomizeInfo_Parms;
	ApplyMeshCustomizeInfo_Parms.iMeshIndex = iMeshIndex;

	pFnApplyMeshCustomizeInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnApplyMeshCustomizeInfo, &ApplyMeshCustomizeInfo_Parms, NULL );

	pFnApplyMeshCustomizeInfo->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.IsUseCustomizeDefaultType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Type                           ( CPF_Parm )

bool AT1CustomPawn::IsUseCustomizeDefaultType ( int Type )
{
	static UFunction* pFnIsUseCustomizeDefaultType = NULL;

	if ( ! pFnIsUseCustomizeDefaultType )
		pFnIsUseCustomizeDefaultType = (UFunction*) UObject::GObjObjects()->Data[ 35659 ];

	AT1CustomPawn_execIsUseCustomizeDefaultType_Parms IsUseCustomizeDefaultType_Parms;
	IsUseCustomizeDefaultType_Parms.Type = Type;

	pFnIsUseCustomizeDefaultType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsUseCustomizeDefaultType, &IsUseCustomizeDefaultType_Parms, NULL );

	pFnIsUseCustomizeDefaultType->FunctionFlags |= 0x400;

	return IsUseCustomizeDefaultType_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetCustomizeDefaultType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Type                           ( CPF_Parm )
// unsigned long                  bUse                           ( CPF_Parm )

void AT1CustomPawn::SetCustomizeDefaultType ( int Type, unsigned long bUse )
{
	static UFunction* pFnSetCustomizeDefaultType = NULL;

	if ( ! pFnSetCustomizeDefaultType )
		pFnSetCustomizeDefaultType = (UFunction*) UObject::GObjObjects()->Data[ 35656 ];

	AT1CustomPawn_execSetCustomizeDefaultType_Parms SetCustomizeDefaultType_Parms;
	SetCustomizeDefaultType_Parms.Type = Type;
	SetCustomizeDefaultType_Parms.bUse = bUse;

	pFnSetCustomizeDefaultType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCustomizeDefaultType, &SetCustomizeDefaultType_Parms, NULL );

	pFnSetCustomizeDefaultType->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.PlayParticleMaterials
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::PlayParticleMaterials ( )
{
	static UFunction* pFnPlayParticleMaterials = NULL;

	if ( ! pFnPlayParticleMaterials )
		pFnPlayParticleMaterials = (UFunction*) UObject::GObjObjects()->Data[ 35655 ];

	AT1CustomPawn_execPlayParticleMaterials_Parms PlayParticleMaterials_Parms;

	pFnPlayParticleMaterials->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayParticleMaterials, &PlayParticleMaterials_Parms, NULL );

	pFnPlayParticleMaterials->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.GetHitParticleMaterial
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  InWeaponSize                   ( CPF_Parm )
// TArray< class UParticleSystem* > InParticleMaterialArray        ( CPF_Parm | CPF_OutParm )

void AT1CustomPawn::GetHitParticleMaterial ( unsigned char InWeaponSize, TArray< class UParticleSystem* >* InParticleMaterialArray )
{
	static UFunction* pFnGetHitParticleMaterial = NULL;

	if ( ! pFnGetHitParticleMaterial )
		pFnGetHitParticleMaterial = (UFunction*) UObject::GObjObjects()->Data[ 35651 ];

	AT1CustomPawn_execGetHitParticleMaterial_Parms GetHitParticleMaterial_Parms;
	GetHitParticleMaterial_Parms.InWeaponSize = InWeaponSize;

	pFnGetHitParticleMaterial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHitParticleMaterial, &GetHitParticleMaterial_Parms, NULL );

	pFnGetHitParticleMaterial->FunctionFlags |= 0x400;

	if ( InParticleMaterialArray )
		memcpy ( InParticleMaterialArray, &GetHitParticleMaterial_Parms.InParticleMaterialArray, 0xC );
};

// Function T1Game.T1CustomPawn.PlayPhysTempParticle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 BoneName                       ( CPF_Parm )
// struct FVector                 ReleativeLoc                   ( CPF_Parm )

void AT1CustomPawn::PlayPhysTempParticle ( struct FString BoneName, struct FVector ReleativeLoc )
{
	static UFunction* pFnPlayPhysTempParticle = NULL;

	if ( ! pFnPlayPhysTempParticle )
		pFnPlayPhysTempParticle = (UFunction*) UObject::GObjObjects()->Data[ 35648 ];

	AT1CustomPawn_execPlayPhysTempParticle_Parms PlayPhysTempParticle_Parms;
	memcpy ( &PlayPhysTempParticle_Parms.BoneName, &BoneName, 0xC );
	memcpy ( &PlayPhysTempParticle_Parms.ReleativeLoc, &ReleativeLoc, 0xC );

	pFnPlayPhysTempParticle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayPhysTempParticle, &PlayPhysTempParticle_Parms, NULL );

	pFnPlayPhysTempParticle->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.GetPawnStepType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AT1CustomPawn::GetPawnStepType ( )
{
	static UFunction* pFnGetPawnStepType = NULL;

	if ( ! pFnGetPawnStepType )
		pFnGetPawnStepType = (UFunction*) UObject::GObjObjects()->Data[ 35646 ];

	AT1CustomPawn_execGetPawnStepType_Parms GetPawnStepType_Parms;

	pFnGetPawnStepType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPawnStepType, &GetPawnStepType_Parms, NULL );

	pFnGetPawnStepType->FunctionFlags |= 0x400;

	return GetPawnStepType_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.UpdateSoundInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::UpdateSoundInfo ( )
{
	static UFunction* pFnUpdateSoundInfo = NULL;

	if ( ! pFnUpdateSoundInfo )
		pFnUpdateSoundInfo = (UFunction*) UObject::GObjObjects()->Data[ 35645 ];

	AT1CustomPawn_execUpdateSoundInfo_Parms UpdateSoundInfo_Parms;

	pFnUpdateSoundInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSoundInfo, &UpdateSoundInfo_Parms, NULL );

	pFnUpdateSoundInfo->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetPawnSoundInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FSoundNotiType          SoundInfo                      ( CPF_Const | CPF_Parm )

void AT1CustomPawn::SetPawnSoundInfo ( struct FSoundNotiType SoundInfo )
{
	static UFunction* pFnSetPawnSoundInfo = NULL;

	if ( ! pFnSetPawnSoundInfo )
		pFnSetPawnSoundInfo = (UFunction*) UObject::GObjObjects()->Data[ 35643 ];

	AT1CustomPawn_execSetPawnSoundInfo_Parms SetPawnSoundInfo_Parms;
	memcpy ( &SetPawnSoundInfo_Parms.SoundInfo, &SoundInfo, 0x8 );

	pFnSetPawnSoundInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPawnSoundInfo, &SetPawnSoundInfo_Parms, NULL );

	pFnSetPawnSoundInfo->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetCalcFootLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bFlag                          ( CPF_Parm )

void AT1CustomPawn::SetCalcFootLocation ( unsigned long bFlag )
{
	static UFunction* pFnSetCalcFootLocation = NULL;

	if ( ! pFnSetCalcFootLocation )
		pFnSetCalcFootLocation = (UFunction*) UObject::GObjObjects()->Data[ 35641 ];

	AT1CustomPawn_execSetCalcFootLocation_Parms SetCalcFootLocation_Parms;
	SetCalcFootLocation_Parms.bFlag = bFlag;

	pFnSetCalcFootLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCalcFootLocation, &SetCalcFootLocation_Parms, NULL );

	pFnSetCalcFootLocation->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.GetMaxSlotNum
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AT1CustomPawn::GetMaxSlotNum ( )
{
	static UFunction* pFnGetMaxSlotNum = NULL;

	if ( ! pFnGetMaxSlotNum )
		pFnGetMaxSlotNum = (UFunction*) UObject::GObjObjects()->Data[ 35639 ];

	AT1CustomPawn_execGetMaxSlotNum_Parms GetMaxSlotNum_Parms;

	pFnGetMaxSlotNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxSlotNum, &GetMaxSlotNum_Parms, NULL );

	pFnGetMaxSlotNum->FunctionFlags |= 0x400;

	return GetMaxSlotNum_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.PlayAnimSeq
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::PlayAnimSeq ( int iMeshIndex, unsigned long bLoop )
{
	static UFunction* pFnPlayAnimSeq = NULL;

	if ( ! pFnPlayAnimSeq )
		pFnPlayAnimSeq = (UFunction*) UObject::GObjObjects()->Data[ 35636 ];

	AT1CustomPawn_execPlayAnimSeq_Parms PlayAnimSeq_Parms;
	PlayAnimSeq_Parms.iMeshIndex = iMeshIndex;
	PlayAnimSeq_Parms.bLoop = bLoop;

	pFnPlayAnimSeq->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayAnimSeq, &PlayAnimSeq_Parms, NULL );

	pFnPlayAnimSeq->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.StopAnimSeq
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::StopAnimSeq ( int iMeshIndex )
{
	static UFunction* pFnStopAnimSeq = NULL;

	if ( ! pFnStopAnimSeq )
		pFnStopAnimSeq = (UFunction*) UObject::GObjObjects()->Data[ 35634 ];

	AT1CustomPawn_execStopAnimSeq_Parms StopAnimSeq_Parms;
	StopAnimSeq_Parms.iMeshIndex = iMeshIndex;

	pFnStopAnimSeq->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAnimSeq, &StopAnimSeq_Parms, NULL );

	pFnStopAnimSeq->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetAnim
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FName                   Seq                            ( CPF_Const | CPF_Parm )
// unsigned long                  bInitialTime                   ( CPF_OptionalParm | CPF_Parm )
// float                          InitialTime                    ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetAnim ( int iMeshIndex, struct FName Seq, unsigned long bInitialTime, float InitialTime )
{
	static UFunction* pFnSetAnim = NULL;

	if ( ! pFnSetAnim )
		pFnSetAnim = (UFunction*) UObject::GObjObjects()->Data[ 35629 ];

	AT1CustomPawn_execSetAnim_Parms SetAnim_Parms;
	SetAnim_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetAnim_Parms.Seq, &Seq, 0x8 );
	SetAnim_Parms.bInitialTime = bInitialTime;
	SetAnim_Parms.InitialTime = InitialTime;

	pFnSetAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAnim, &SetAnim_Parms, NULL );

	pFnSetAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.IsAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iMeshIndex                     ( CPF_Parm )
// struct FName                   Seq                            ( CPF_Const | CPF_Parm )

bool AT1CustomPawn::IsAnim ( int iMeshIndex, struct FName Seq )
{
	static UFunction* pFnIsAnim = NULL;

	if ( ! pFnIsAnim )
		pFnIsAnim = (UFunction*) UObject::GObjObjects()->Data[ 35625 ];

	AT1CustomPawn_execIsAnim_Parms IsAnim_Parms;
	IsAnim_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &IsAnim_Parms.Seq, &Seq, 0x8 );

	pFnIsAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsAnim, &IsAnim_Parms, NULL );

	pFnIsAnim->FunctionFlags |= 0x400;

	return IsAnim_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetWrinkle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// float                          fFadeIn                        ( CPF_Parm )
// float                          fExpTime                       ( CPF_Parm )
// float                          fFadeOut                       ( CPF_Parm )
// float                          fWeightX                       ( CPF_Parm )
// float                          fWeightY                       ( CPF_Parm )
// float                          fWeightZ                       ( CPF_Parm )
// float                          fWeightW                       ( CPF_Parm )

void AT1CustomPawn::SetWrinkle ( int iMeshIndex, float fFadeIn, float fExpTime, float fFadeOut, float fWeightX, float fWeightY, float fWeightZ, float fWeightW )
{
	static UFunction* pFnSetWrinkle = NULL;

	if ( ! pFnSetWrinkle )
		pFnSetWrinkle = (UFunction*) UObject::GObjObjects()->Data[ 35616 ];

	AT1CustomPawn_execSetWrinkle_Parms SetWrinkle_Parms;
	SetWrinkle_Parms.iMeshIndex = iMeshIndex;
	SetWrinkle_Parms.fFadeIn = fFadeIn;
	SetWrinkle_Parms.fExpTime = fExpTime;
	SetWrinkle_Parms.fFadeOut = fFadeOut;
	SetWrinkle_Parms.fWeightX = fWeightX;
	SetWrinkle_Parms.fWeightY = fWeightY;
	SetWrinkle_Parms.fWeightZ = fWeightZ;
	SetWrinkle_Parms.fWeightW = fWeightW;

	pFnSetWrinkle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWrinkle, &SetWrinkle_Parms, NULL );

	pFnSetWrinkle->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ApplyAttachMatColorWeight
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::ApplyAttachMatColorWeight ( int iMeshIndex )
{
	static UFunction* pFnApplyAttachMatColorWeight = NULL;

	if ( ! pFnApplyAttachMatColorWeight )
		pFnApplyAttachMatColorWeight = (UFunction*) UObject::GObjObjects()->Data[ 35614 ];

	AT1CustomPawn_execApplyAttachMatColorWeight_Parms ApplyAttachMatColorWeight_Parms;
	ApplyAttachMatColorWeight_Parms.iMeshIndex = iMeshIndex;

	pFnApplyAttachMatColorWeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnApplyAttachMatColorWeight, &ApplyAttachMatColorWeight_Parms, NULL );

	pFnApplyAttachMatColorWeight->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetAttachAnim
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 Seq                            ( CPF_Parm )
// float                          fFadeIn                        ( CPF_Parm )
// float                          fExpTime                       ( CPF_Parm )
// float                          fFadeOut                       ( CPF_Parm )
// int                            bForce                         ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetAttachAnim ( int iMeshIndex, struct FString Seq, float fFadeIn, float fExpTime, float fFadeOut, int bForce )
{
	static UFunction* pFnSetAttachAnim = NULL;

	if ( ! pFnSetAttachAnim )
		pFnSetAttachAnim = (UFunction*) UObject::GObjObjects()->Data[ 35607 ];

	AT1CustomPawn_execSetAttachAnim_Parms SetAttachAnim_Parms;
	SetAttachAnim_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetAttachAnim_Parms.Seq, &Seq, 0xC );
	SetAttachAnim_Parms.fFadeIn = fFadeIn;
	SetAttachAnim_Parms.fExpTime = fExpTime;
	SetAttachAnim_Parms.fFadeOut = fFadeOut;
	SetAttachAnim_Parms.bForce = bForce;

	pFnSetAttachAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAttachAnim, &SetAttachAnim_Parms, NULL );

	pFnSetAttachAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetExpression
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// int                            iExpression                    ( CPF_Parm )
// float                          fFadeIn                        ( CPF_Parm )
// float                          fExpTime                       ( CPF_Parm )
// float                          fFadeOut                       ( CPF_Parm )
// int                            bForce                         ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetExpression ( int iMeshIndex, int iExpression, float fFadeIn, float fExpTime, float fFadeOut, int bForce )
{
	static UFunction* pFnSetExpression = NULL;

	if ( ! pFnSetExpression )
		pFnSetExpression = (UFunction*) UObject::GObjObjects()->Data[ 35600 ];

	AT1CustomPawn_execSetExpression_Parms SetExpression_Parms;
	SetExpression_Parms.iMeshIndex = iMeshIndex;
	SetExpression_Parms.iExpression = iExpression;
	SetExpression_Parms.fFadeIn = fFadeIn;
	SetExpression_Parms.fExpTime = fExpTime;
	SetExpression_Parms.fFadeOut = fFadeOut;
	SetExpression_Parms.bForce = bForce;

	pFnSetExpression->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetExpression, &SetExpression_Parms, NULL );

	pFnSetExpression->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetPhysicsWeight
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// float                          fPhysicsWeight                 ( CPF_Parm )

void AT1CustomPawn::SetPhysicsWeight ( int iMeshIndex, float fPhysicsWeight )
{
	static UFunction* pFnSetPhysicsWeight = NULL;

	if ( ! pFnSetPhysicsWeight )
		pFnSetPhysicsWeight = (UFunction*) UObject::GObjObjects()->Data[ 35597 ];

	AT1CustomPawn_execSetPhysicsWeight_Parms SetPhysicsWeight_Parms;
	SetPhysicsWeight_Parms.iMeshIndex = iMeshIndex;
	SetPhysicsWeight_Parms.fPhysicsWeight = fPhysicsWeight;

	pFnSetPhysicsWeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPhysicsWeight, &SetPhysicsWeight_Parms, NULL );

	pFnSetPhysicsWeight->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.AddPhysicsForce
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 vecPowerDir                    ( CPF_Parm )
// float                          fForce                         ( CPF_Parm )

void AT1CustomPawn::AddPhysicsForce ( struct FVector vecPowerDir, float fForce )
{
	static UFunction* pFnAddPhysicsForce = NULL;

	if ( ! pFnAddPhysicsForce )
		pFnAddPhysicsForce = (UFunction*) UObject::GObjObjects()->Data[ 35594 ];

	AT1CustomPawn_execAddPhysicsForce_Parms AddPhysicsForce_Parms;
	memcpy ( &AddPhysicsForce_Parms.vecPowerDir, &vecPowerDir, 0xC );
	AddPhysicsForce_Parms.fForce = fForce;

	pFnAddPhysicsForce->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddPhysicsForce, &AddPhysicsForce_Parms, NULL );

	pFnAddPhysicsForce->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.PlayPhysicNoise
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FVector                 NoiseDir                       ( CPF_Parm )
// float                          NoiseScale                     ( CPF_Parm )
// float                          NoisePlayTime                  ( CPF_Parm )
// float                          NoiseDuration                  ( CPF_Parm )
// float                          NoiseDurationScale             ( CPF_Parm )
// int                            NoiseSpace                     ( CPF_Parm )

void AT1CustomPawn::PlayPhysicNoise ( int iMeshIndex, struct FVector NoiseDir, float NoiseScale, float NoisePlayTime, float NoiseDuration, float NoiseDurationScale, int NoiseSpace )
{
	static UFunction* pFnPlayPhysicNoise = NULL;

	if ( ! pFnPlayPhysicNoise )
		pFnPlayPhysicNoise = (UFunction*) UObject::GObjObjects()->Data[ 35586 ];

	AT1CustomPawn_execPlayPhysicNoise_Parms PlayPhysicNoise_Parms;
	PlayPhysicNoise_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &PlayPhysicNoise_Parms.NoiseDir, &NoiseDir, 0xC );
	PlayPhysicNoise_Parms.NoiseScale = NoiseScale;
	PlayPhysicNoise_Parms.NoisePlayTime = NoisePlayTime;
	PlayPhysicNoise_Parms.NoiseDuration = NoiseDuration;
	PlayPhysicNoise_Parms.NoiseDurationScale = NoiseDurationScale;
	PlayPhysicNoise_Parms.NoiseSpace = NoiseSpace;

	pFnPlayPhysicNoise->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayPhysicNoise, &PlayPhysicNoise_Parms, NULL );

	pFnPlayPhysicNoise->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMatVectorParameterValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 ValueName                      ( CPF_Parm )
// struct FVector                 vecValue                       ( CPF_Parm )

void AT1CustomPawn::SetMatVectorParameterValue ( int iMeshIndex, struct FString ValueName, struct FVector vecValue )
{
	static UFunction* pFnSetMatVectorParameterValue = NULL;

	if ( ! pFnSetMatVectorParameterValue )
		pFnSetMatVectorParameterValue = (UFunction*) UObject::GObjObjects()->Data[ 35582 ];

	AT1CustomPawn_execSetMatVectorParameterValue_Parms SetMatVectorParameterValue_Parms;
	SetMatVectorParameterValue_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetMatVectorParameterValue_Parms.ValueName, &ValueName, 0xC );
	memcpy ( &SetMatVectorParameterValue_Parms.vecValue, &vecValue, 0xC );

	pFnSetMatVectorParameterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMatVectorParameterValue, &SetMatVectorParameterValue_Parms, NULL );

	pFnSetMatVectorParameterValue->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMatScalarParameterValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 ValueName                      ( CPF_Parm )
// float                          fValue                         ( CPF_Parm )

void AT1CustomPawn::SetMatScalarParameterValue ( int iMeshIndex, struct FString ValueName, float fValue )
{
	static UFunction* pFnSetMatScalarParameterValue = NULL;

	if ( ! pFnSetMatScalarParameterValue )
		pFnSetMatScalarParameterValue = (UFunction*) UObject::GObjObjects()->Data[ 35578 ];

	AT1CustomPawn_execSetMatScalarParameterValue_Parms SetMatScalarParameterValue_Parms;
	SetMatScalarParameterValue_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetMatScalarParameterValue_Parms.ValueName, &ValueName, 0xC );
	SetMatScalarParameterValue_Parms.fValue = fValue;

	pFnSetMatScalarParameterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMatScalarParameterValue, &SetMatScalarParameterValue_Parms, NULL );

	pFnSetMatScalarParameterValue->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.UpdateFacial
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void AT1CustomPawn::UpdateFacial ( float fDeltaTime )
{
	static UFunction* pFnUpdateFacial = NULL;

	if ( ! pFnUpdateFacial )
		pFnUpdateFacial = (UFunction*) UObject::GObjObjects()->Data[ 35576 ];

	AT1CustomPawn_execUpdateFacial_Parms UpdateFacial_Parms;
	UpdateFacial_Parms.fDeltaTime = fDeltaTime;

	pFnUpdateFacial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFacial, &UpdateFacial_Parms, NULL );

	pFnUpdateFacial->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.Update
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fViewDistance                  ( CPF_Parm )
// float                          fDeltaTime                     ( CPF_Parm )

void AT1CustomPawn::Update ( float fViewDistance, float fDeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 35573 ];

	AT1CustomPawn_execUpdate_Parms Update_Parms;
	Update_Parms.fViewDistance = fViewDistance;
	Update_Parms.fDeltaTime = fDeltaTime;

	pFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	pFnUpdate->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.PlayAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::PlayAnim ( int iMeshIndex )
{
	static UFunction* pFnPlayAnim = NULL;

	if ( ! pFnPlayAnim )
		pFnPlayAnim = (UFunction*) UObject::GObjObjects()->Data[ 35571 ];

	AT1CustomPawn_execPlayAnim_Parms PlayAnim_Parms;
	PlayAnim_Parms.iMeshIndex = iMeshIndex;

	pFnPlayAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayAnim, &PlayAnim_Parms, NULL );

	pFnPlayAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.StopAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::StopAnim ( int iMeshIndex )
{
	static UFunction* pFnStopAnim = NULL;

	if ( ! pFnStopAnim )
		pFnStopAnim = (UFunction*) UObject::GObjObjects()->Data[ 35569 ];

	AT1CustomPawn_execStopAnim_Parms StopAnim_Parms;
	StopAnim_Parms.iMeshIndex = iMeshIndex;

	pFnStopAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAnim, &StopAnim_Parms, NULL );

	pFnStopAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.EndAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::EndAnim ( int iMeshIndex )
{
	static UFunction* pFnEndAnim = NULL;

	if ( ! pFnEndAnim )
		pFnEndAnim = (UFunction*) UObject::GObjObjects()->Data[ 35567 ];

	AT1CustomPawn_execEndAnim_Parms EndAnim_Parms;
	EndAnim_Parms.iMeshIndex = iMeshIndex;

	pFnEndAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndAnim, &EndAnim_Parms, NULL );

	pFnEndAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.BeginAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::BeginAnim ( int iMeshIndex )
{
	static UFunction* pFnBeginAnim = NULL;

	if ( ! pFnBeginAnim )
		pFnBeginAnim = (UFunction*) UObject::GObjObjects()->Data[ 35565 ];

	AT1CustomPawn_execBeginAnim_Parms BeginAnim_Parms;
	BeginAnim_Parms.iMeshIndex = iMeshIndex;

	pFnBeginAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBeginAnim, &BeginAnim_Parms, NULL );

	pFnBeginAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMeshDenpendencyParticle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// unsigned long                  bSet                           ( CPF_Parm )

void AT1CustomPawn::SetMeshDenpendencyParticle ( int iMeshIndex, unsigned long bSet )
{
	static UFunction* pFnSetMeshDenpendencyParticle = NULL;

	if ( ! pFnSetMeshDenpendencyParticle )
		pFnSetMeshDenpendencyParticle = (UFunction*) UObject::GObjObjects()->Data[ 35562 ];

	AT1CustomPawn_execSetMeshDenpendencyParticle_Parms SetMeshDenpendencyParticle_Parms;
	SetMeshDenpendencyParticle_Parms.iMeshIndex = iMeshIndex;
	SetMeshDenpendencyParticle_Parms.bSet = bSet;

	pFnSetMeshDenpendencyParticle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMeshDenpendencyParticle, &SetMeshDenpendencyParticle_Parms, NULL );

	pFnSetMeshDenpendencyParticle->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetVisible
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// int                            iVisible                       ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetVisible ( int iMeshIndex, int iVisible )
{
	static UFunction* pFnSetVisible = NULL;

	if ( ! pFnSetVisible )
		pFnSetVisible = (UFunction*) UObject::GObjObjects()->Data[ 35559 ];

	AT1CustomPawn_execSetVisible_Parms SetVisible_Parms;
	SetVisible_Parms.iMeshIndex = iMeshIndex;
	SetVisible_Parms.iVisible = iVisible;

	pFnSetVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVisible, &SetVisible_Parms, NULL );

	pFnSetVisible->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.CopyMesh
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class AT1Pawn*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iSrcMeshIndex                  ( CPF_Parm )
// int                            iDestMeshIndex                 ( CPF_Parm )
// class AT1CustomPawn*           ParentP                        ( CPF_OptionalParm | CPF_Parm )
// class AT1CustomPawn*           ChildP                         ( CPF_OptionalParm | CPF_Parm )

class AT1Pawn* AT1CustomPawn::CopyMesh ( int iSrcMeshIndex, int iDestMeshIndex, class AT1CustomPawn* ParentP, class AT1CustomPawn* ChildP )
{
	static UFunction* pFnCopyMesh = NULL;

	if ( ! pFnCopyMesh )
		pFnCopyMesh = (UFunction*) UObject::GObjObjects()->Data[ 35553 ];

	AT1CustomPawn_execCopyMesh_Parms CopyMesh_Parms;
	CopyMesh_Parms.iSrcMeshIndex = iSrcMeshIndex;
	CopyMesh_Parms.iDestMeshIndex = iDestMeshIndex;
	CopyMesh_Parms.ParentP = ParentP;
	CopyMesh_Parms.ChildP = ChildP;

	pFnCopyMesh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCopyMesh, &CopyMesh_Parms, NULL );

	pFnCopyMesh->FunctionFlags |= 0x400;

	return CopyMesh_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.EndPhysics
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::EndPhysics ( int iMeshIndex )
{
	static UFunction* pFnEndPhysics = NULL;

	if ( ! pFnEndPhysics )
		pFnEndPhysics = (UFunction*) UObject::GObjObjects()->Data[ 35551 ];

	AT1CustomPawn_execEndPhysics_Parms EndPhysics_Parms;
	EndPhysics_Parms.iMeshIndex = iMeshIndex;

	pFnEndPhysics->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndPhysics, &EndPhysics_Parms, NULL );

	pFnEndPhysics->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.BeginPhysics
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::BeginPhysics ( int iMeshIndex )
{
	static UFunction* pFnBeginPhysics = NULL;

	if ( ! pFnBeginPhysics )
		pFnBeginPhysics = (UFunction*) UObject::GObjObjects()->Data[ 35549 ];

	AT1CustomPawn_execBeginPhysics_Parms BeginPhysics_Parms;
	BeginPhysics_Parms.iMeshIndex = iMeshIndex;

	pFnBeginPhysics->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBeginPhysics, &BeginPhysics_Parms, NULL );

	pFnBeginPhysics->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ClearDashingSpecialEffect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::ClearDashingSpecialEffect ( )
{
	static UFunction* pFnClearDashingSpecialEffect = NULL;

	if ( ! pFnClearDashingSpecialEffect )
		pFnClearDashingSpecialEffect = (UFunction*) UObject::GObjObjects()->Data[ 35548 ];

	AT1CustomPawn_execClearDashingSpecialEffect_Parms ClearDashingSpecialEffect_Parms;

	pFnClearDashingSpecialEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDashingSpecialEffect, &ClearDashingSpecialEffect_Parms, NULL );

	pFnClearDashingSpecialEffect->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ClearMeshInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::ClearMeshInfo ( int iMeshIndex )
{
	static UFunction* pFnClearMeshInfo = NULL;

	if ( ! pFnClearMeshInfo )
		pFnClearMeshInfo = (UFunction*) UObject::GObjObjects()->Data[ 35546 ];

	AT1CustomPawn_execClearMeshInfo_Parms ClearMeshInfo_Parms;
	ClearMeshInfo_Parms.iMeshIndex = iMeshIndex;

	pFnClearMeshInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearMeshInfo, &ClearMeshInfo_Parms, NULL );

	pFnClearMeshInfo->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.Clear
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::Clear ( )
{
	static UFunction* pFnClear = NULL;

	if ( ! pFnClear )
		pFnClear = (UFunction*) UObject::GObjObjects()->Data[ 35545 ];

	AT1CustomPawn_execClear_Parms Clear_Parms;

	pFnClear->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClear, &Clear_Parms, NULL );

	pFnClear->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMeshPhysicsAsset
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// class UPhysicsAsset*           MeshPhysics                    ( CPF_Parm )

void AT1CustomPawn::SetMeshPhysicsAsset ( int iMeshIndex, class UPhysicsAsset* MeshPhysics )
{
	static UFunction* pFnSetMeshPhysicsAsset = NULL;

	if ( ! pFnSetMeshPhysicsAsset )
		pFnSetMeshPhysicsAsset = (UFunction*) UObject::GObjObjects()->Data[ 35542 ];

	AT1CustomPawn_execSetMeshPhysicsAsset_Parms SetMeshPhysicsAsset_Parms;
	SetMeshPhysicsAsset_Parms.iMeshIndex = iMeshIndex;
	SetMeshPhysicsAsset_Parms.MeshPhysics = MeshPhysics;

	pFnSetMeshPhysicsAsset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMeshPhysicsAsset, &SetMeshPhysicsAsset_Parms, NULL );

	pFnSetMeshPhysicsAsset->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMeshAnimTree
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// class UAnimTree*               MeshAnimTree                   ( CPF_Parm )

void AT1CustomPawn::SetMeshAnimTree ( int iMeshIndex, class UAnimTree* MeshAnimTree )
{
	static UFunction* pFnSetMeshAnimTree = NULL;

	if ( ! pFnSetMeshAnimTree )
		pFnSetMeshAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 35539 ];

	AT1CustomPawn_execSetMeshAnimTree_Parms SetMeshAnimTree_Parms;
	SetMeshAnimTree_Parms.iMeshIndex = iMeshIndex;
	SetMeshAnimTree_Parms.MeshAnimTree = MeshAnimTree;

	pFnSetMeshAnimTree->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMeshAnimTree, &SetMeshAnimTree_Parms, NULL );

	pFnSetMeshAnimTree->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMeshAnimset
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// class UAnimSet*                MeshAnimSet                    ( CPF_Parm )

void AT1CustomPawn::SetMeshAnimset ( int iMeshIndex, class UAnimSet* MeshAnimSet )
{
	static UFunction* pFnSetMeshAnimset = NULL;

	if ( ! pFnSetMeshAnimset )
		pFnSetMeshAnimset = (UFunction*) UObject::GObjObjects()->Data[ 35536 ];

	AT1CustomPawn_execSetMeshAnimset_Parms SetMeshAnimset_Parms;
	SetMeshAnimset_Parms.iMeshIndex = iMeshIndex;
	SetMeshAnimset_Parms.MeshAnimSet = MeshAnimSet;

	pFnSetMeshAnimset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMeshAnimset, &SetMeshAnimset_Parms, NULL );

	pFnSetMeshAnimset->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.MeshCompBeginDeferredReattach
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )

void AT1CustomPawn::MeshCompBeginDeferredReattach ( int iMeshIndex )
{
	static UFunction* pFnMeshCompBeginDeferredReattach = NULL;

	if ( ! pFnMeshCompBeginDeferredReattach )
		pFnMeshCompBeginDeferredReattach = (UFunction*) UObject::GObjObjects()->Data[ 35534 ];

	AT1CustomPawn_execMeshCompBeginDeferredReattach_Parms MeshCompBeginDeferredReattach_Parms;
	MeshCompBeginDeferredReattach_Parms.iMeshIndex = iMeshIndex;

	pFnMeshCompBeginDeferredReattach->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMeshCompBeginDeferredReattach, &MeshCompBeginDeferredReattach_Parms, NULL );

	pFnMeshCompBeginDeferredReattach->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMaterialVectorParameterValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 ParamName                      ( CPF_Parm )
// struct FLinearColor            InColor                        ( CPF_Parm )
// struct FName                   MaterialName                   ( CPF_Parm )

void AT1CustomPawn::SetMaterialVectorParameterValue ( int iMeshIndex, struct FString ParamName, struct FLinearColor InColor, struct FName MaterialName )
{
	static UFunction* pFnSetMaterialVectorParameterValue = NULL;

	if ( ! pFnSetMaterialVectorParameterValue )
		pFnSetMaterialVectorParameterValue = (UFunction*) UObject::GObjObjects()->Data[ 35529 ];

	AT1CustomPawn_execSetMaterialVectorParameterValue_Parms SetMaterialVectorParameterValue_Parms;
	SetMaterialVectorParameterValue_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetMaterialVectorParameterValue_Parms.ParamName, &ParamName, 0xC );
	memcpy ( &SetMaterialVectorParameterValue_Parms.InColor, &InColor, 0x10 );
	memcpy ( &SetMaterialVectorParameterValue_Parms.MaterialName, &MaterialName, 0x8 );

	pFnSetMaterialVectorParameterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaterialVectorParameterValue, &SetMaterialVectorParameterValue_Parms, NULL );

	pFnSetMaterialVectorParameterValue->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMaterialTextureParameterValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 ParamName                      ( CPF_Parm )
// class UTexture*                InTexture                      ( CPF_Parm )
// struct FName                   MaterialName                   ( CPF_Parm )

void AT1CustomPawn::SetMaterialTextureParameterValue ( int iMeshIndex, struct FString ParamName, class UTexture* InTexture, struct FName MaterialName )
{
	static UFunction* pFnSetMaterialTextureParameterValue = NULL;

	if ( ! pFnSetMaterialTextureParameterValue )
		pFnSetMaterialTextureParameterValue = (UFunction*) UObject::GObjObjects()->Data[ 35524 ];

	AT1CustomPawn_execSetMaterialTextureParameterValue_Parms SetMaterialTextureParameterValue_Parms;
	SetMaterialTextureParameterValue_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetMaterialTextureParameterValue_Parms.ParamName, &ParamName, 0xC );
	SetMaterialTextureParameterValue_Parms.InTexture = InTexture;
	memcpy ( &SetMaterialTextureParameterValue_Parms.MaterialName, &MaterialName, 0x8 );

	pFnSetMaterialTextureParameterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaterialTextureParameterValue, &SetMaterialTextureParameterValue_Parms, NULL );

	pFnSetMaterialTextureParameterValue->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMaterialScalarParameterValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 ParamName                      ( CPF_Parm )
// float                          fValue                         ( CPF_Parm )
// struct FName                   MaterialName                   ( CPF_Parm )

void AT1CustomPawn::SetMaterialScalarParameterValue ( int iMeshIndex, struct FString ParamName, float fValue, struct FName MaterialName )
{
	static UFunction* pFnSetMaterialScalarParameterValue = NULL;

	if ( ! pFnSetMaterialScalarParameterValue )
		pFnSetMaterialScalarParameterValue = (UFunction*) UObject::GObjObjects()->Data[ 35519 ];

	AT1CustomPawn_execSetMaterialScalarParameterValue_Parms SetMaterialScalarParameterValue_Parms;
	SetMaterialScalarParameterValue_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetMaterialScalarParameterValue_Parms.ParamName, &ParamName, 0xC );
	SetMaterialScalarParameterValue_Parms.fValue = fValue;
	memcpy ( &SetMaterialScalarParameterValue_Parms.MaterialName, &MaterialName, 0x8 );

	pFnSetMaterialScalarParameterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaterialScalarParameterValue, &SetMaterialScalarParameterValue_Parms, NULL );

	pFnSetMaterialScalarParameterValue->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.IsGuildPropDiry
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1CustomPawn::IsGuildPropDiry ( )
{
	static UFunction* pFnIsGuildPropDiry = NULL;

	if ( ! pFnIsGuildPropDiry )
		pFnIsGuildPropDiry = (UFunction*) UObject::GObjObjects()->Data[ 35517 ];

	AT1CustomPawn_execIsGuildPropDiry_Parms IsGuildPropDiry_Parms;

	pFnIsGuildPropDiry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsGuildPropDiry, &IsGuildPropDiry_Parms, NULL );

	pFnIsGuildPropDiry->FunctionFlags |= 0x400;

	return IsGuildPropDiry_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetGuildCustomizeMesh
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            GuildItemType                  ( CPF_Parm )
// unsigned long                  bFlag                          ( CPF_Parm )

void AT1CustomPawn::SetGuildCustomizeMesh ( int GuildItemType, unsigned long bFlag )
{
	static UFunction* pFnSetGuildCustomizeMesh = NULL;

	if ( ! pFnSetGuildCustomizeMesh )
		pFnSetGuildCustomizeMesh = (UFunction*) UObject::GObjObjects()->Data[ 35514 ];

	AT1CustomPawn_execSetGuildCustomizeMesh_Parms SetGuildCustomizeMesh_Parms;
	SetGuildCustomizeMesh_Parms.GuildItemType = GuildItemType;
	SetGuildCustomizeMesh_Parms.bFlag = bFlag;

	pFnSetGuildCustomizeMesh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGuildCustomizeMesh, &SetGuildCustomizeMesh_Parms, NULL );

	pFnSetGuildCustomizeMesh->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.UpdateGuildCustomize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::UpdateGuildCustomize ( )
{
	static UFunction* pFnUpdateGuildCustomize = NULL;

	if ( ! pFnUpdateGuildCustomize )
		pFnUpdateGuildCustomize = (UFunction*) UObject::GObjObjects()->Data[ 35513 ];

	AT1CustomPawn_execUpdateGuildCustomize_Parms UpdateGuildCustomize_Parms;

	pFnUpdateGuildCustomize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGuildCustomize, &UpdateGuildCustomize_Parms, NULL );

	pFnUpdateGuildCustomize->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMeshMaterialColor
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FName                   MaterialName                   ( CPF_Parm )
// struct FString                 ParamName                      ( CPF_Parm )
// struct FLinearColor            changeColor                    ( CPF_Parm )

void AT1CustomPawn::SetMeshMaterialColor ( int iMeshIndex, struct FName MaterialName, struct FString ParamName, struct FLinearColor changeColor )
{
	static UFunction* pFnSetMeshMaterialColor = NULL;

	if ( ! pFnSetMeshMaterialColor )
		pFnSetMeshMaterialColor = (UFunction*) UObject::GObjObjects()->Data[ 35508 ];

	AT1CustomPawn_execSetMeshMaterialColor_Parms SetMeshMaterialColor_Parms;
	SetMeshMaterialColor_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetMeshMaterialColor_Parms.MaterialName, &MaterialName, 0x8 );
	memcpy ( &SetMeshMaterialColor_Parms.ParamName, &ParamName, 0xC );
	memcpy ( &SetMeshMaterialColor_Parms.changeColor, &changeColor, 0x10 );

	pFnSetMeshMaterialColor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMeshMaterialColor, &SetMeshMaterialColor_Parms, NULL );

	pFnSetMeshMaterialColor->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.GetMeshMaterialInstanceConstant
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UMaterialInstanceConstant* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iMeshIndex                     ( CPF_Parm )
// struct FName                   MaterialName                   ( CPF_Parm )

class UMaterialInstanceConstant* AT1CustomPawn::GetMeshMaterialInstanceConstant ( int iMeshIndex, struct FName MaterialName )
{
	static UFunction* pFnGetMeshMaterialInstanceConstant = NULL;

	if ( ! pFnGetMeshMaterialInstanceConstant )
		pFnGetMeshMaterialInstanceConstant = (UFunction*) UObject::GObjObjects()->Data[ 35504 ];

	AT1CustomPawn_execGetMeshMaterialInstanceConstant_Parms GetMeshMaterialInstanceConstant_Parms;
	GetMeshMaterialInstanceConstant_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &GetMeshMaterialInstanceConstant_Parms.MaterialName, &MaterialName, 0x8 );

	pFnGetMeshMaterialInstanceConstant->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMeshMaterialInstanceConstant, &GetMeshMaterialInstanceConstant_Parms, NULL );

	pFnGetMeshMaterialInstanceConstant->FunctionFlags |= 0x400;

	return GetMeshMaterialInstanceConstant_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetMeshMaterial
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// class UMaterialInstanceConstant* Material                       ( CPF_Parm )

void AT1CustomPawn::SetMeshMaterial ( int iMeshIndex, class UMaterialInstanceConstant* Material )
{
	static UFunction* pFnSetMeshMaterial = NULL;

	if ( ! pFnSetMeshMaterial )
		pFnSetMeshMaterial = (UFunction*) UObject::GObjObjects()->Data[ 35501 ];

	AT1CustomPawn_execSetMeshMaterial_Parms SetMeshMaterial_Parms;
	SetMeshMaterial_Parms.iMeshIndex = iMeshIndex;
	SetMeshMaterial_Parms.Material = Material;

	pFnSetMeshMaterial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMeshMaterial, &SetMeshMaterial_Parms, NULL );

	pFnSetMeshMaterial->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMesh
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// class USkeletalMeshComponent*  InMesh                         ( CPF_Parm )

void AT1CustomPawn::SetMesh ( int iMeshIndex, class USkeletalMeshComponent* InMesh )
{
	static UFunction* pFnSetMesh = NULL;

	if ( ! pFnSetMesh )
		pFnSetMesh = (UFunction*) UObject::GObjObjects()->Data[ 35498 ];

	AT1CustomPawn_execSetMesh_Parms SetMesh_Parms;
	SetMesh_Parms.iMeshIndex = iMeshIndex;
	SetMesh_Parms.InMesh = InMesh;

	pFnSetMesh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMesh, &SetMesh_Parms, NULL );

	pFnSetMesh->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.GetMesh
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USkeletalMeshComponent*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iMeshIndex                     ( CPF_Parm )

class USkeletalMeshComponent* AT1CustomPawn::GetMesh ( int iMeshIndex )
{
	static UFunction* pFnGetMesh = NULL;

	if ( ! pFnGetMesh )
		pFnGetMesh = (UFunction*) UObject::GObjObjects()->Data[ 35495 ];

	AT1CustomPawn_execGetMesh_Parms GetMesh_Parms;
	GetMesh_Parms.iMeshIndex = iMeshIndex;

	pFnGetMesh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMesh, &GetMesh_Parms, NULL );

	pFnGetMesh->FunctionFlags |= 0x400;

	return GetMesh_Parms.ReturnValue;
};

// Function T1Game.T1CustomPawn.SetFullPhysics
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 BoneName                       ( CPF_OptionalParm | CPF_Parm )
// int                            iNum                           ( CPF_OptionalParm | CPF_Parm )
// int                            iFixed                         ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetFullPhysics ( int iMeshIndex, struct FString BoneName, int iNum, int iFixed )
{
	static UFunction* pFnSetFullPhysics = NULL;

	if ( ! pFnSetFullPhysics )
		pFnSetFullPhysics = (UFunction*) UObject::GObjObjects()->Data[ 35490 ];

	AT1CustomPawn_execSetFullPhysics_Parms SetFullPhysics_Parms;
	SetFullPhysics_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetFullPhysics_Parms.BoneName, &BoneName, 0xC );
	SetFullPhysics_Parms.iNum = iNum;
	SetFullPhysics_Parms.iFixed = iFixed;

	pFnSetFullPhysics->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFullPhysics, &SetFullPhysics_Parms, NULL );

	pFnSetFullPhysics->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetMeshInfo
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// struct FString                 SkeletalMesh                   ( CPF_OptionalParm | CPF_Parm )
// struct FString                 AnimSet                        ( CPF_OptionalParm | CPF_Parm )
// struct FString                 PhysicsAsset                   ( CPF_OptionalParm | CPF_Parm )
// struct FString                 AnimTree                       ( CPF_OptionalParm | CPF_Parm )
// int                            iParentIndex                   ( CPF_OptionalParm | CPF_Parm )
// int                            iParentBoneIndex               ( CPF_OptionalParm | CPF_Parm )
// int                            iPosOnly                       ( CPF_OptionalParm | CPF_Parm )
// int                            iCheckSameMesh                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUsingDependencyRope           ( CPF_OptionalParm | CPF_Parm )
// struct FString                 SubAnimTree                    ( CPF_OptionalParm | CPF_Parm )
// float                          InScale                        ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetMeshInfo ( int iMeshIndex, struct FString SkeletalMesh, struct FString AnimSet, struct FString PhysicsAsset, struct FString AnimTree, int iParentIndex, int iParentBoneIndex, int iPosOnly, int iCheckSameMesh, unsigned long bUsingDependencyRope, struct FString SubAnimTree, float InScale )
{
	static UFunction* pFnSetMeshInfo = NULL;

	if ( ! pFnSetMeshInfo )
		pFnSetMeshInfo = (UFunction*) UObject::GObjObjects()->Data[ 35477 ];

	AT1CustomPawn_execSetMeshInfo_Parms SetMeshInfo_Parms;
	SetMeshInfo_Parms.iMeshIndex = iMeshIndex;
	memcpy ( &SetMeshInfo_Parms.SkeletalMesh, &SkeletalMesh, 0xC );
	memcpy ( &SetMeshInfo_Parms.AnimSet, &AnimSet, 0xC );
	memcpy ( &SetMeshInfo_Parms.PhysicsAsset, &PhysicsAsset, 0xC );
	memcpy ( &SetMeshInfo_Parms.AnimTree, &AnimTree, 0xC );
	SetMeshInfo_Parms.iParentIndex = iParentIndex;
	SetMeshInfo_Parms.iParentBoneIndex = iParentBoneIndex;
	SetMeshInfo_Parms.iPosOnly = iPosOnly;
	SetMeshInfo_Parms.iCheckSameMesh = iCheckSameMesh;
	SetMeshInfo_Parms.bUsingDependencyRope = bUsingDependencyRope;
	memcpy ( &SetMeshInfo_Parms.SubAnimTree, &SubAnimTree, 0xC );
	SetMeshInfo_Parms.InScale = InScale;

	pFnSetMeshInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMeshInfo, &SetMeshInfo_Parms, NULL );

	pFnSetMeshInfo->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.MoveMeshSocket
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iMeshIndex                     ( CPF_Parm )
// int                            iBoneIndex                     ( CPF_Parm )

void AT1CustomPawn::MoveMeshSocket ( int iMeshIndex, int iBoneIndex )
{
	static UFunction* pFnMoveMeshSocket = NULL;

	if ( ! pFnMoveMeshSocket )
		pFnMoveMeshSocket = (UFunction*) UObject::GObjObjects()->Data[ 35474 ];

	AT1CustomPawn_execMoveMeshSocket_Parms MoveMeshSocket_Parms;
	MoveMeshSocket_Parms.iMeshIndex = iMeshIndex;
	MoveMeshSocket_Parms.iBoneIndex = iBoneIndex;

	pFnMoveMeshSocket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveMeshSocket, &MoveMeshSocket_Parms, NULL );

	pFnMoveMeshSocket->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.MoveMeshSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iSrcMeshIndex                  ( CPF_Parm )
// int                            iDestMeshIndex                 ( CPF_Parm )
// int                            iDestBoneIndex                 ( CPF_Parm )

void AT1CustomPawn::MoveMeshSlot ( int iSrcMeshIndex, int iDestMeshIndex, int iDestBoneIndex )
{
	static UFunction* pFnMoveMeshSlot = NULL;

	if ( ! pFnMoveMeshSlot )
		pFnMoveMeshSlot = (UFunction*) UObject::GObjObjects()->Data[ 35470 ];

	AT1CustomPawn_execMoveMeshSlot_Parms MoveMeshSlot_Parms;
	MoveMeshSlot_Parms.iSrcMeshIndex = iSrcMeshIndex;
	MoveMeshSlot_Parms.iDestMeshIndex = iDestMeshIndex;
	MoveMeshSlot_Parms.iDestBoneIndex = iDestBoneIndex;

	pFnMoveMeshSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveMeshSlot, &MoveMeshSlot_Parms, NULL );

	pFnMoveMeshSlot->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.ReleaseLink
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iParentMeshIndex               ( CPF_Parm )
// int                            iChildMeshIndex                ( CPF_Parm )

void AT1CustomPawn::ReleaseLink ( int iParentMeshIndex, int iChildMeshIndex )
{
	static UFunction* pFnReleaseLink = NULL;

	if ( ! pFnReleaseLink )
		pFnReleaseLink = (UFunction*) UObject::GObjObjects()->Data[ 35467 ];

	AT1CustomPawn_execReleaseLink_Parms ReleaseLink_Parms;
	ReleaseLink_Parms.iParentMeshIndex = iParentMeshIndex;
	ReleaseLink_Parms.iChildMeshIndex = iChildMeshIndex;

	pFnReleaseLink->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReleaseLink, &ReleaseLink_Parms, NULL );

	pFnReleaseLink->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetLink
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iParentMeshIndex               ( CPF_Parm )
// int                            iParentBoneIndex               ( CPF_Parm )
// int                            iChildMeshIndex                ( CPF_Parm )
// int                            PosOnly                        ( CPF_OptionalParm | CPF_Parm )

void AT1CustomPawn::SetLink ( int iParentMeshIndex, int iParentBoneIndex, int iChildMeshIndex, int PosOnly )
{
	static UFunction* pFnSetLink = NULL;

	if ( ! pFnSetLink )
		pFnSetLink = (UFunction*) UObject::GObjObjects()->Data[ 35462 ];

	AT1CustomPawn_execSetLink_Parms SetLink_Parms;
	SetLink_Parms.iParentMeshIndex = iParentMeshIndex;
	SetLink_Parms.iParentBoneIndex = iParentBoneIndex;
	SetLink_Parms.iChildMeshIndex = iChildMeshIndex;
	SetLink_Parms.PosOnly = PosOnly;

	pFnSetLink->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLink, &SetLink_Parms, NULL );

	pFnSetLink->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SetAutoPhyiscs
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  AutoPhysics                    ( CPF_Parm )

void AT1CustomPawn::SetAutoPhyiscs ( unsigned long AutoPhysics )
{
	static UFunction* pFnSetAutoPhyiscs = NULL;

	if ( ! pFnSetAutoPhyiscs )
		pFnSetAutoPhyiscs = (UFunction*) UObject::GObjObjects()->Data[ 35460 ];

	AT1CustomPawn_execSetAutoPhyiscs_Parms SetAutoPhyiscs_Parms;
	SetAutoPhyiscs_Parms.AutoPhysics = AutoPhysics;

	pFnSetAutoPhyiscs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAutoPhyiscs, &SetAutoPhyiscs_Parms, NULL );

	pFnSetAutoPhyiscs->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.SwitchPhysicsAssetPair
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1CustomPawn::SwitchPhysicsAssetPair ( )
{
	static UFunction* pFnSwitchPhysicsAssetPair = NULL;

	if ( ! pFnSwitchPhysicsAssetPair )
		pFnSwitchPhysicsAssetPair = (UFunction*) UObject::GObjObjects()->Data[ 35459 ];

	AT1CustomPawn_execSwitchPhysicsAssetPair_Parms SwitchPhysicsAssetPair_Parms;

	pFnSwitchPhysicsAssetPair->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSwitchPhysicsAssetPair, &SwitchPhysicsAssetPair_Parms, NULL );

	pFnSwitchPhysicsAssetPair->FunctionFlags |= 0x400;
};

// Function T1Game.T1CustomPawn.EnableGroundParticle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          InGroundParticleDuration       ( CPF_Parm )
// float                          InRandomFactor                 ( CPF_Parm )
// struct FName                   InFollowBoneName               ( CPF_Parm )
// float                          InVerticalOffset               ( CPF_Parm )
// float                          InRate                         ( CPF_Parm )

void AT1CustomPawn::EnableGroundParticle ( float InGroundParticleDuration, float InRandomFactor, struct FName InFollowBoneName, float InVerticalOffset, float InRate )
{
	static UFunction* pFnEnableGroundParticle = NULL;

	if ( ! pFnEnableGroundParticle )
		pFnEnableGroundParticle = (UFunction*) UObject::GObjObjects()->Data[ 35453 ];

	AT1CustomPawn_execEnableGroundParticle_Parms EnableGroundParticle_Parms;
	EnableGroundParticle_Parms.InGroundParticleDuration = InGroundParticleDuration;
	EnableGroundParticle_Parms.InRandomFactor = InRandomFactor;
	memcpy ( &EnableGroundParticle_Parms.InFollowBoneName, &InFollowBoneName, 0x8 );
	EnableGroundParticle_Parms.InVerticalOffset = InVerticalOffset;
	EnableGroundParticle_Parms.InRate = InRate;

	pFnEnableGroundParticle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableGroundParticle, &EnableGroundParticle_Parms, NULL );

	pFnEnableGroundParticle->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetAnimPosition
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   SlotName                       ( CPF_Parm )
// int                            ChannelIndex                   ( CPF_Parm )
// struct FName                   InAnimSeqName                  ( CPF_Parm )
// float                          InPosition                     ( CPF_Parm )
// unsigned long                  bFireNotifies                  ( CPF_Parm )
// unsigned long                  bLooping                       ( CPF_Parm )

void AT1Pawn::eventSetAnimPosition ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping )
{
	static UFunction* pFnSetAnimPosition = NULL;

	if ( ! pFnSetAnimPosition )
		pFnSetAnimPosition = (UFunction*) UObject::GObjObjects()->Data[ 36596 ];

	AT1Pawn_eventSetAnimPosition_Parms SetAnimPosition_Parms;
	memcpy ( &SetAnimPosition_Parms.SlotName, &SlotName, 0x8 );
	SetAnimPosition_Parms.ChannelIndex = ChannelIndex;
	memcpy ( &SetAnimPosition_Parms.InAnimSeqName, &InAnimSeqName, 0x8 );
	SetAnimPosition_Parms.InPosition = InPosition;
	SetAnimPosition_Parms.bFireNotifies = bFireNotifies;
	SetAnimPosition_Parms.bLooping = bLooping;

	this->ProcessEvent ( pFnSetAnimPosition, &SetAnimPosition_Parms, NULL );
};

// Function T1Game.T1Pawn.Destroyed
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AT1Pawn::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 36595 ];

	AT1Pawn_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function T1Game.T1Pawn.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AT1Pawn::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36594 ];

	AT1Pawn_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function T1Game.T1Pawn.DoJumpCommand
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AT1Pawn::eventDoJumpCommand ( )
{
	static UFunction* pFnDoJumpCommand = NULL;

	if ( ! pFnDoJumpCommand )
		pFnDoJumpCommand = (UFunction*) UObject::GObjObjects()->Data[ 36593 ];

	AT1Pawn_eventDoJumpCommand_Parms DoJumpCommand_Parms;

	this->ProcessEvent ( pFnDoJumpCommand, &DoJumpCommand_Parms, NULL );
};

// Function T1Game.T1Pawn.ResetToDefaults
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::ResetToDefaults ( )
{
	static UFunction* pFnResetToDefaults = NULL;

	if ( ! pFnResetToDefaults )
		pFnResetToDefaults = (UFunction*) UObject::GObjObjects()->Data[ 36592 ];

	AT1Pawn_execResetToDefaults_Parms ResetToDefaults_Parms;

	pFnResetToDefaults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetToDefaults, &ResetToDefaults_Parms, NULL );

	pFnResetToDefaults->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.GetLastNonRuleMoveLocationAndRotation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 LNRM_Location                  ( CPF_Parm | CPF_OutParm )
// struct FRotator                LNRM_Rotation                  ( CPF_Parm | CPF_OutParm )

void AT1Pawn::GetLastNonRuleMoveLocationAndRotation ( struct FVector* LNRM_Location, struct FRotator* LNRM_Rotation )
{
	static UFunction* pFnGetLastNonRuleMoveLocationAndRotation = NULL;

	if ( ! pFnGetLastNonRuleMoveLocationAndRotation )
		pFnGetLastNonRuleMoveLocationAndRotation = (UFunction*) UObject::GObjObjects()->Data[ 36589 ];

	AT1Pawn_execGetLastNonRuleMoveLocationAndRotation_Parms GetLastNonRuleMoveLocationAndRotation_Parms;

	pFnGetLastNonRuleMoveLocationAndRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLastNonRuleMoveLocationAndRotation, &GetLastNonRuleMoveLocationAndRotation_Parms, NULL );

	pFnGetLastNonRuleMoveLocationAndRotation->FunctionFlags |= 0x400;

	if ( LNRM_Location )
		memcpy ( LNRM_Location, &GetLastNonRuleMoveLocationAndRotation_Parms.LNRM_Location, 0xC );

	if ( LNRM_Rotation )
		memcpy ( LNRM_Rotation, &GetLastNonRuleMoveLocationAndRotation_Parms.LNRM_Rotation, 0xC );
};

// Function T1Game.T1Pawn.UpdateLastNonRuleMoveLocationAndRotation
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::UpdateLastNonRuleMoveLocationAndRotation ( )
{
	static UFunction* pFnUpdateLastNonRuleMoveLocationAndRotation = NULL;

	if ( ! pFnUpdateLastNonRuleMoveLocationAndRotation )
		pFnUpdateLastNonRuleMoveLocationAndRotation = (UFunction*) UObject::GObjObjects()->Data[ 36588 ];

	AT1Pawn_execUpdateLastNonRuleMoveLocationAndRotation_Parms UpdateLastNonRuleMoveLocationAndRotation_Parms;

	pFnUpdateLastNonRuleMoveLocationAndRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateLastNonRuleMoveLocationAndRotation, &UpdateLastNonRuleMoveLocationAndRotation_Parms, NULL );

	pFnUpdateLastNonRuleMoveLocationAndRotation->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.IsWallJumpOtherPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::IsWallJumpOtherPlayer ( )
{
	static UFunction* pFnIsWallJumpOtherPlayer = NULL;

	if ( ! pFnIsWallJumpOtherPlayer )
		pFnIsWallJumpOtherPlayer = (UFunction*) UObject::GObjObjects()->Data[ 36586 ];

	AT1Pawn_execIsWallJumpOtherPlayer_Parms IsWallJumpOtherPlayer_Parms;

	pFnIsWallJumpOtherPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsWallJumpOtherPlayer, &IsWallJumpOtherPlayer_Parms, NULL );

	pFnIsWallJumpOtherPlayer->FunctionFlags |= 0x400;

	return IsWallJumpOtherPlayer_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.IsWallRunOtherPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::IsWallRunOtherPlayer ( )
{
	static UFunction* pFnIsWallRunOtherPlayer = NULL;

	if ( ! pFnIsWallRunOtherPlayer )
		pFnIsWallRunOtherPlayer = (UFunction*) UObject::GObjObjects()->Data[ 36584 ];

	AT1Pawn_execIsWallRunOtherPlayer_Parms IsWallRunOtherPlayer_Parms;

	pFnIsWallRunOtherPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsWallRunOtherPlayer, &IsWallRunOtherPlayer_Parms, NULL );

	pFnIsWallRunOtherPlayer->FunctionFlags |= 0x400;

	return IsWallRunOtherPlayer_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.MakeVelocityMoveToAction
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::MakeVelocityMoveToAction ( )
{
	static UFunction* pFnMakeVelocityMoveToAction = NULL;

	if ( ! pFnMakeVelocityMoveToAction )
		pFnMakeVelocityMoveToAction = (UFunction*) UObject::GObjObjects()->Data[ 36583 ];

	AT1Pawn_execMakeVelocityMoveToAction_Parms MakeVelocityMoveToAction_Parms;

	pFnMakeVelocityMoveToAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeVelocityMoveToAction, &MakeVelocityMoveToAction_Parms, NULL );

	pFnMakeVelocityMoveToAction->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.MakeVelocityRuleMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::MakeVelocityRuleMove ( )
{
	static UFunction* pFnMakeVelocityRuleMove = NULL;

	if ( ! pFnMakeVelocityRuleMove )
		pFnMakeVelocityRuleMove = (UFunction*) UObject::GObjObjects()->Data[ 36582 ];

	AT1Pawn_execMakeVelocityRuleMove_Parms MakeVelocityRuleMove_Parms;

	pFnMakeVelocityRuleMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeVelocityRuleMove, &MakeVelocityRuleMove_Parms, NULL );

	pFnMakeVelocityRuleMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.MakeVelocity
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::MakeVelocity ( )
{
	static UFunction* pFnMakeVelocity = NULL;

	if ( ! pFnMakeVelocity )
		pFnMakeVelocity = (UFunction*) UObject::GObjObjects()->Data[ 36581 ];

	AT1Pawn_execMakeVelocity_Parms MakeVelocity_Parms;

	pFnMakeVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeVelocity, &MakeVelocity_Parms, NULL );

	pFnMakeVelocity->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.MakeVelocity2D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::MakeVelocity2D ( )
{
	static UFunction* pFnMakeVelocity2D = NULL;

	if ( ! pFnMakeVelocity2D )
		pFnMakeVelocity2D = (UFunction*) UObject::GObjObjects()->Data[ 36580 ];

	AT1Pawn_execMakeVelocity2D_Parms MakeVelocity2D_Parms;

	pFnMakeVelocity2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeVelocity2D, &MakeVelocity2D_Parms, NULL );

	pFnMakeVelocity2D->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.MakeVelocityZero
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::MakeVelocityZero ( )
{
	static UFunction* pFnMakeVelocityZero = NULL;

	if ( ! pFnMakeVelocityZero )
		pFnMakeVelocityZero = (UFunction*) UObject::GObjObjects()->Data[ 36579 ];

	AT1Pawn_execMakeVelocityZero_Parms MakeVelocityZero_Parms;

	pFnMakeVelocityZero->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeVelocityZero, &MakeVelocityZero_Parms, NULL );

	pFnMakeVelocityZero->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.ClearSummonedRunMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::ClearSummonedRunMove ( )
{
	static UFunction* pFnClearSummonedRunMove = NULL;

	if ( ! pFnClearSummonedRunMove )
		pFnClearSummonedRunMove = (UFunction*) UObject::GObjObjects()->Data[ 36578 ];

	AT1Pawn_execClearSummonedRunMove_Parms ClearSummonedRunMove_Parms;

	pFnClearSummonedRunMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSummonedRunMove, &ClearSummonedRunMove_Parms, NULL );

	pFnClearSummonedRunMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.StopSummoned
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::StopSummoned ( )
{
	static UFunction* pFnStopSummoned = NULL;

	if ( ! pFnStopSummoned )
		pFnStopSummoned = (UFunction*) UObject::GObjObjects()->Data[ 36577 ];

	AT1Pawn_execStopSummoned_Parms StopSummoned_Parms;

	pFnStopSummoned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSummoned, &StopSummoned_Parms, NULL );

	pFnStopSummoned->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetSummonedForceMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            MoveType                       ( CPF_Const | CPF_Parm )
// float                          DestX                          ( CPF_Const | CPF_Parm )
// float                          DestY                          ( CPF_Const | CPF_Parm )
// float                          DestZ                          ( CPF_Const | CPF_Parm )
// int                            nYaw                           ( CPF_Const | CPF_Parm )
// int                            ZoneID                         ( CPF_Const | CPF_Parm )
// int                            evtObjId                       ( CPF_Const | CPF_Parm )
// float                          fRunSpeed                      ( CPF_Const | CPF_Parm )

void AT1Pawn::SetSummonedForceMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, int ZoneID, int evtObjId, float fRunSpeed )
{
	static UFunction* pFnSetSummonedForceMove = NULL;

	if ( ! pFnSetSummonedForceMove )
		pFnSetSummonedForceMove = (UFunction*) UObject::GObjObjects()->Data[ 36568 ];

	AT1Pawn_execSetSummonedForceMove_Parms SetSummonedForceMove_Parms;
	SetSummonedForceMove_Parms.MoveType = MoveType;
	SetSummonedForceMove_Parms.DestX = DestX;
	SetSummonedForceMove_Parms.DestY = DestY;
	SetSummonedForceMove_Parms.DestZ = DestZ;
	SetSummonedForceMove_Parms.nYaw = nYaw;
	SetSummonedForceMove_Parms.ZoneID = ZoneID;
	SetSummonedForceMove_Parms.evtObjId = evtObjId;
	SetSummonedForceMove_Parms.fRunSpeed = fRunSpeed;

	pFnSetSummonedForceMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSummonedForceMove, &SetSummonedForceMove_Parms, NULL );

	pFnSetSummonedForceMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetSummonedNextMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::SetSummonedNextMove ( )
{
	static UFunction* pFnSetSummonedNextMove = NULL;

	if ( ! pFnSetSummonedNextMove )
		pFnSetSummonedNextMove = (UFunction*) UObject::GObjObjects()->Data[ 36567 ];

	AT1Pawn_execSetSummonedNextMove_Parms SetSummonedNextMove_Parms;

	pFnSetSummonedNextMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSummonedNextMove, &SetSummonedNextMove_Parms, NULL );

	pFnSetSummonedNextMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetSummonedMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MoveType                       ( CPF_Const | CPF_Parm )
// float                          DestX                          ( CPF_Const | CPF_Parm )
// float                          DestY                          ( CPF_Const | CPF_Parm )
// float                          DestZ                          ( CPF_Const | CPF_Parm )
// int                            nYaw                           ( CPF_Const | CPF_Parm )
// float                          fDuration                      ( CPF_Const | CPF_Parm )
// int                            ZoneID                         ( CPF_Const | CPF_Parm )
// int                            evtObjId                       ( CPF_Const | CPF_Parm )
// float                          fRunSpeed                      ( CPF_Const | CPF_Parm )

bool AT1Pawn::SetSummonedMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration, int ZoneID, int evtObjId, float fRunSpeed )
{
	static UFunction* pFnSetSummonedMove = NULL;

	if ( ! pFnSetSummonedMove )
		pFnSetSummonedMove = (UFunction*) UObject::GObjObjects()->Data[ 36556 ];

	AT1Pawn_execSetSummonedMove_Parms SetSummonedMove_Parms;
	SetSummonedMove_Parms.MoveType = MoveType;
	SetSummonedMove_Parms.DestX = DestX;
	SetSummonedMove_Parms.DestY = DestY;
	SetSummonedMove_Parms.DestZ = DestZ;
	SetSummonedMove_Parms.nYaw = nYaw;
	SetSummonedMove_Parms.fDuration = fDuration;
	SetSummonedMove_Parms.ZoneID = ZoneID;
	SetSummonedMove_Parms.evtObjId = evtObjId;
	SetSummonedMove_Parms.fRunSpeed = fRunSpeed;

	pFnSetSummonedMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSummonedMove, &SetSummonedMove_Parms, NULL );

	pFnSetSummonedMove->FunctionFlags |= 0x400;

	return SetSummonedMove_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.SetSummonedMoveLegacy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MoveType                       ( CPF_Const | CPF_Parm )
// float                          DestX                          ( CPF_Const | CPF_Parm )
// float                          DestY                          ( CPF_Const | CPF_Parm )
// float                          DestZ                          ( CPF_Const | CPF_Parm )
// int                            nYaw                           ( CPF_Const | CPF_Parm )
// float                          fDuration                      ( CPF_Const | CPF_Parm )
// int                            ZoneID                         ( CPF_Const | CPF_Parm )
// int                            evtObjId                       ( CPF_Const | CPF_Parm )
// float                          fRunSpeed                      ( CPF_Const | CPF_Parm )

bool AT1Pawn::SetSummonedMoveLegacy ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration, int ZoneID, int evtObjId, float fRunSpeed )
{
	static UFunction* pFnSetSummonedMoveLegacy = NULL;

	if ( ! pFnSetSummonedMoveLegacy )
		pFnSetSummonedMoveLegacy = (UFunction*) UObject::GObjObjects()->Data[ 36545 ];

	AT1Pawn_execSetSummonedMoveLegacy_Parms SetSummonedMoveLegacy_Parms;
	SetSummonedMoveLegacy_Parms.MoveType = MoveType;
	SetSummonedMoveLegacy_Parms.DestX = DestX;
	SetSummonedMoveLegacy_Parms.DestY = DestY;
	SetSummonedMoveLegacy_Parms.DestZ = DestZ;
	SetSummonedMoveLegacy_Parms.nYaw = nYaw;
	SetSummonedMoveLegacy_Parms.fDuration = fDuration;
	SetSummonedMoveLegacy_Parms.ZoneID = ZoneID;
	SetSummonedMoveLegacy_Parms.evtObjId = evtObjId;
	SetSummonedMoveLegacy_Parms.fRunSpeed = fRunSpeed;

	pFnSetSummonedMoveLegacy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSummonedMoveLegacy, &SetSummonedMoveLegacy_Parms, NULL );

	pFnSetSummonedMoveLegacy->FunctionFlags |= 0x400;

	return SetSummonedMoveLegacy_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.ObjResetMoveDestInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::ObjResetMoveDestInfo ( )
{
	static UFunction* pFnObjResetMoveDestInfo = NULL;

	if ( ! pFnObjResetMoveDestInfo )
		pFnObjResetMoveDestInfo = (UFunction*) UObject::GObjObjects()->Data[ 36543 ];

	AT1Pawn_execObjResetMoveDestInfo_Parms ObjResetMoveDestInfo_Parms;

	pFnObjResetMoveDestInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnObjResetMoveDestInfo, &ObjResetMoveDestInfo_Parms, NULL );

	pFnObjResetMoveDestInfo->FunctionFlags |= 0x400;

	return ObjResetMoveDestInfo_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.SetObjNextMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          PassedTime                     ( CPF_Const | CPF_Parm )

void AT1Pawn::SetObjNextMove ( float PassedTime )
{
	static UFunction* pFnSetObjNextMove = NULL;

	if ( ! pFnSetObjNextMove )
		pFnSetObjNextMove = (UFunction*) UObject::GObjObjects()->Data[ 36541 ];

	AT1Pawn_execSetObjNextMove_Parms SetObjNextMove_Parms;
	SetObjNextMove_Parms.PassedTime = PassedTime;

	pFnSetObjNextMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObjNextMove, &SetObjNextMove_Parms, NULL );

	pFnSetObjNextMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetObjSyncYaw
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nYaw                           ( CPF_Const | CPF_Parm )
// unsigned long                  bResetPhysics                  ( CPF_OptionalParm | CPF_Parm )

void AT1Pawn::SetObjSyncYaw ( int nYaw, unsigned long bResetPhysics )
{
	static UFunction* pFnSetObjSyncYaw = NULL;

	if ( ! pFnSetObjSyncYaw )
		pFnSetObjSyncYaw = (UFunction*) UObject::GObjObjects()->Data[ 36538 ];

	AT1Pawn_execSetObjSyncYaw_Parms SetObjSyncYaw_Parms;
	SetObjSyncYaw_Parms.nYaw = nYaw;
	SetObjSyncYaw_Parms.bResetPhysics = bResetPhysics;

	pFnSetObjSyncYaw->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObjSyncYaw, &SetObjSyncYaw_Parms, NULL );

	pFnSetObjSyncYaw->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetObjMove
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            MoveType                       ( CPF_Const | CPF_Parm )
// float                          DestX                          ( CPF_Const | CPF_Parm )
// float                          DestY                          ( CPF_Const | CPF_Parm )
// float                          DestZ                          ( CPF_Const | CPF_Parm )
// int                            nYaw                           ( CPF_Const | CPF_Parm )
// float                          fDuration                      ( CPF_Const | CPF_Parm )
// int                            ZoneID                         ( CPF_Const | CPF_Parm )
// int                            evtObjId                       ( CPF_Const | CPF_Parm )
// float                          fMoveAnimRate                  ( CPF_Const | CPF_OptionalParm | CPF_Parm )
// int                            ObjType                        ( CPF_Const | CPF_OptionalParm | CPF_Parm )

void AT1Pawn::SetObjMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration, int ZoneID, int evtObjId, float fMoveAnimRate, int ObjType )
{
	static UFunction* pFnSetObjMove = NULL;

	if ( ! pFnSetObjMove )
		pFnSetObjMove = (UFunction*) UObject::GObjObjects()->Data[ 36527 ];

	AT1Pawn_execSetObjMove_Parms SetObjMove_Parms;
	SetObjMove_Parms.MoveType = MoveType;
	SetObjMove_Parms.DestX = DestX;
	SetObjMove_Parms.DestY = DestY;
	SetObjMove_Parms.DestZ = DestZ;
	SetObjMove_Parms.nYaw = nYaw;
	SetObjMove_Parms.fDuration = fDuration;
	SetObjMove_Parms.ZoneID = ZoneID;
	SetObjMove_Parms.evtObjId = evtObjId;
	SetObjMove_Parms.fMoveAnimRate = fMoveAnimRate;
	SetObjMove_Parms.ObjType = ObjType;

	pFnSetObjMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObjMove, &SetObjMove_Parms, NULL );

	pFnSetObjMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.RemovePlayerMoveList
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::RemovePlayerMoveList ( )
{
	static UFunction* pFnRemovePlayerMoveList = NULL;

	if ( ! pFnRemovePlayerMoveList )
		pFnRemovePlayerMoveList = (UFunction*) UObject::GObjObjects()->Data[ 36526 ];

	AT1Pawn_execRemovePlayerMoveList_Parms RemovePlayerMoveList_Parms;

	pFnRemovePlayerMoveList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemovePlayerMoveList, &RemovePlayerMoveList_Parms, NULL );

	pFnRemovePlayerMoveList->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.PlayerMoveCancel
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::PlayerMoveCancel ( )
{
	static UFunction* pFnPlayerMoveCancel = NULL;

	if ( ! pFnPlayerMoveCancel )
		pFnPlayerMoveCancel = (UFunction*) UObject::GObjObjects()->Data[ 36525 ];

	AT1Pawn_execPlayerMoveCancel_Parms PlayerMoveCancel_Parms;

	pFnPlayerMoveCancel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerMoveCancel, &PlayerMoveCancel_Parms, NULL );

	pFnPlayerMoveCancel->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.PlayerStop
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::PlayerStop ( )
{
	static UFunction* pFnPlayerStop = NULL;

	if ( ! pFnPlayerStop )
		pFnPlayerStop = (UFunction*) UObject::GObjObjects()->Data[ 36524 ];

	AT1Pawn_execPlayerStop_Parms PlayerStop_Parms;

	pFnPlayerStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerStop, &PlayerStop_Parms, NULL );

	pFnPlayerStop->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetPlayerMoveToAction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DestX                          ( CPF_Const | CPF_Parm )
// float                          DestY                          ( CPF_Const | CPF_Parm )
// float                          DestZ                          ( CPF_Const | CPF_Parm )
// float                          fRadius                        ( CPF_Const | CPF_Parm )

bool AT1Pawn::SetPlayerMoveToAction ( float DestX, float DestY, float DestZ, float fRadius )
{
	static UFunction* pFnSetPlayerMoveToAction = NULL;

	if ( ! pFnSetPlayerMoveToAction )
		pFnSetPlayerMoveToAction = (UFunction*) UObject::GObjObjects()->Data[ 36518 ];

	AT1Pawn_execSetPlayerMoveToAction_Parms SetPlayerMoveToAction_Parms;
	SetPlayerMoveToAction_Parms.DestX = DestX;
	SetPlayerMoveToAction_Parms.DestY = DestY;
	SetPlayerMoveToAction_Parms.DestZ = DestZ;
	SetPlayerMoveToAction_Parms.fRadius = fRadius;

	pFnSetPlayerMoveToAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPlayerMoveToAction, &SetPlayerMoveToAction_Parms, NULL );

	pFnSetPlayerMoveToAction->FunctionFlags |= 0x400;

	return SetPlayerMoveToAction_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.SetPlayerMouseMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DestX                          ( CPF_Const | CPF_Parm )
// float                          DestY                          ( CPF_Const | CPF_Parm )
// float                          DestZ                          ( CPF_Const | CPF_Parm )

bool AT1Pawn::SetPlayerMouseMove ( float DestX, float DestY, float DestZ )
{
	static UFunction* pFnSetPlayerMouseMove = NULL;

	if ( ! pFnSetPlayerMouseMove )
		pFnSetPlayerMouseMove = (UFunction*) UObject::GObjObjects()->Data[ 36513 ];

	AT1Pawn_execSetPlayerMouseMove_Parms SetPlayerMouseMove_Parms;
	SetPlayerMouseMove_Parms.DestX = DestX;
	SetPlayerMouseMove_Parms.DestY = DestY;
	SetPlayerMouseMove_Parms.DestZ = DestZ;

	pFnSetPlayerMouseMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPlayerMouseMove, &SetPlayerMouseMove_Parms, NULL );

	pFnSetPlayerMouseMove->FunctionFlags |= 0x400;

	return SetPlayerMouseMove_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.SetPlayerRuleMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            MoveType                       ( CPF_Const | CPF_Parm )
// float                          DestX                          ( CPF_Const | CPF_Parm )
// float                          DestY                          ( CPF_Const | CPF_Parm )
// float                          DestZ                          ( CPF_Const | CPF_Parm )
// int                            nYaw                           ( CPF_Const | CPF_Parm )
// float                          fDuration                      ( CPF_Const | CPF_Parm )

void AT1Pawn::SetPlayerRuleMove ( int MoveType, float DestX, float DestY, float DestZ, int nYaw, float fDuration )
{
	static UFunction* pFnSetPlayerRuleMove = NULL;

	if ( ! pFnSetPlayerRuleMove )
		pFnSetPlayerRuleMove = (UFunction*) UObject::GObjObjects()->Data[ 36506 ];

	AT1Pawn_execSetPlayerRuleMove_Parms SetPlayerRuleMove_Parms;
	SetPlayerRuleMove_Parms.MoveType = MoveType;
	SetPlayerRuleMove_Parms.DestX = DestX;
	SetPlayerRuleMove_Parms.DestY = DestY;
	SetPlayerRuleMove_Parms.DestZ = DestZ;
	SetPlayerRuleMove_Parms.nYaw = nYaw;
	SetPlayerRuleMove_Parms.fDuration = fDuration;

	pFnSetPlayerRuleMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPlayerRuleMove, &SetPlayerRuleMove_Parms, NULL );

	pFnSetPlayerRuleMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.GetGravityZ
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AT1Pawn::GetGravityZ ( )
{
	static UFunction* pFnGetGravityZ = NULL;

	if ( ! pFnGetGravityZ )
		pFnGetGravityZ = (UFunction*) UObject::GObjObjects()->Data[ 36504 ];

	AT1Pawn_execGetGravityZ_Parms GetGravityZ_Parms;

	pFnGetGravityZ->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGravityZ, &GetGravityZ_Parms, NULL );

	pFnGetGravityZ->FunctionFlags |= 0x400;

	return GetGravityZ_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.IsTickSkippable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::IsTickSkippable ( )
{
	static UFunction* pFnIsTickSkippable = NULL;

	if ( ! pFnIsTickSkippable )
		pFnIsTickSkippable = (UFunction*) UObject::GObjObjects()->Data[ 36502 ];

	AT1Pawn_execIsTickSkippable_Parms IsTickSkippable_Parms;

	pFnIsTickSkippable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsTickSkippable, &IsTickSkippable_Parms, NULL );

	pFnIsTickSkippable->FunctionFlags |= 0x400;

	return IsTickSkippable_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.IsPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::IsPlayer ( )
{
	static UFunction* pFnIsPlayer = NULL;

	if ( ! pFnIsPlayer )
		pFnIsPlayer = (UFunction*) UObject::GObjObjects()->Data[ 36500 ];

	AT1Pawn_execIsPlayer_Parms IsPlayer_Parms;

	pFnIsPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlayer, &IsPlayer_Parms, NULL );

	pFnIsPlayer->FunctionFlags |= 0x400;

	return IsPlayer_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.NotifyJumpAction
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::NotifyJumpAction ( )
{
	static UFunction* pFnNotifyJumpAction = NULL;

	if ( ! pFnNotifyJumpAction )
		pFnNotifyJumpAction = (UFunction*) UObject::GObjObjects()->Data[ 36499 ];

	AT1Pawn_execNotifyJumpAction_Parms NotifyJumpAction_Parms;

	pFnNotifyJumpAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyJumpAction, &NotifyJumpAction_Parms, NULL );

	pFnNotifyJumpAction->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.MoveTo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 Loc                            ( CPF_Parm )
// struct FRotator                rotate                         ( CPF_Parm )

void AT1Pawn::MoveTo ( struct FVector Loc, struct FRotator rotate )
{
	static UFunction* pFnMoveTo = NULL;

	if ( ! pFnMoveTo )
		pFnMoveTo = (UFunction*) UObject::GObjObjects()->Data[ 36496 ];

	AT1Pawn_execMoveTo_Parms MoveTo_Parms;
	memcpy ( &MoveTo_Parms.Loc, &Loc, 0xC );
	memcpy ( &MoveTo_Parms.rotate, &rotate, 0xC );

	pFnMoveTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveTo, &MoveTo_Parms, NULL );

	pFnMoveTo->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetAnimPos
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   SlotName                       ( CPF_Parm )
// int                            ChannelIndex                   ( CPF_Parm )
// struct FName                   InAnimSeqName                  ( CPF_Parm )
// float                          InPosition                     ( CPF_Parm )
// unsigned long                  bFireNotifies                  ( CPF_Parm )
// unsigned long                  bLooping                       ( CPF_Parm )

void AT1Pawn::SetAnimPos ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping )
{
	static UFunction* pFnSetAnimPos = NULL;

	if ( ! pFnSetAnimPos )
		pFnSetAnimPos = (UFunction*) UObject::GObjObjects()->Data[ 36489 ];

	AT1Pawn_execSetAnimPos_Parms SetAnimPos_Parms;
	memcpy ( &SetAnimPos_Parms.SlotName, &SlotName, 0x8 );
	SetAnimPos_Parms.ChannelIndex = ChannelIndex;
	memcpy ( &SetAnimPos_Parms.InAnimSeqName, &InAnimSeqName, 0x8 );
	SetAnimPos_Parms.InPosition = InPosition;
	SetAnimPos_Parms.bFireNotifies = bFireNotifies;
	SetAnimPos_Parms.bLooping = bLooping;

	pFnSetAnimPos->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAnimPos, &SetAnimPos_Parms, NULL );

	pFnSetAnimPos->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.GetMoveForwardByInputValueFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::GetMoveForwardByInputValueFlag ( )
{
	static UFunction* pFnGetMoveForwardByInputValueFlag = NULL;

	if ( ! pFnGetMoveForwardByInputValueFlag )
		pFnGetMoveForwardByInputValueFlag = (UFunction*) UObject::GObjObjects()->Data[ 36487 ];

	AT1Pawn_execGetMoveForwardByInputValueFlag_Parms GetMoveForwardByInputValueFlag_Parms;

	pFnGetMoveForwardByInputValueFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMoveForwardByInputValueFlag, &GetMoveForwardByInputValueFlag_Parms, NULL );

	pFnGetMoveForwardByInputValueFlag->FunctionFlags |= 0x400;

	return GetMoveForwardByInputValueFlag_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.SetMoveForwardByInputValueFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            bFlag                          ( CPF_Parm )

void AT1Pawn::SetMoveForwardByInputValueFlag ( int bFlag )
{
	static UFunction* pFnSetMoveForwardByInputValueFlag = NULL;

	if ( ! pFnSetMoveForwardByInputValueFlag )
		pFnSetMoveForwardByInputValueFlag = (UFunction*) UObject::GObjObjects()->Data[ 36485 ];

	AT1Pawn_execSetMoveForwardByInputValueFlag_Parms SetMoveForwardByInputValueFlag_Parms;
	SetMoveForwardByInputValueFlag_Parms.bFlag = bFlag;

	pFnSetMoveForwardByInputValueFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMoveForwardByInputValueFlag, &SetMoveForwardByInputValueFlag_Parms, NULL );

	pFnSetMoveForwardByInputValueFlag->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.MoveForwardByInputValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::MoveForwardByInputValue ( )
{
	static UFunction* pFnMoveForwardByInputValue = NULL;

	if ( ! pFnMoveForwardByInputValue )
		pFnMoveForwardByInputValue = (UFunction*) UObject::GObjObjects()->Data[ 36484 ];

	AT1Pawn_execMoveForwardByInputValue_Parms MoveForwardByInputValue_Parms;

	pFnMoveForwardByInputValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveForwardByInputValue, &MoveForwardByInputValue_Parms, NULL );

	pFnMoveForwardByInputValue->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetBlockZoomFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bBlock                         ( CPF_Parm )

void AT1Pawn::SetBlockZoomFlag ( unsigned long bBlock )
{
	static UFunction* pFnSetBlockZoomFlag = NULL;

	if ( ! pFnSetBlockZoomFlag )
		pFnSetBlockZoomFlag = (UFunction*) UObject::GObjObjects()->Data[ 36482 ];

	AT1Pawn_execSetBlockZoomFlag_Parms SetBlockZoomFlag_Parms;
	SetBlockZoomFlag_Parms.bBlock = bBlock;

	pFnSetBlockZoomFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBlockZoomFlag, &SetBlockZoomFlag_Parms, NULL );

	pFnSetBlockZoomFlag->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetIgnoreRotateInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bIgnore                        ( CPF_Parm )

void AT1Pawn::SetIgnoreRotateInput ( unsigned long bIgnore )
{
	static UFunction* pFnSetIgnoreRotateInput = NULL;

	if ( ! pFnSetIgnoreRotateInput )
		pFnSetIgnoreRotateInput = (UFunction*) UObject::GObjObjects()->Data[ 36480 ];

	AT1Pawn_execSetIgnoreRotateInput_Parms SetIgnoreRotateInput_Parms;
	SetIgnoreRotateInput_Parms.bIgnore = bIgnore;

	pFnSetIgnoreRotateInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetIgnoreRotateInput, &SetIgnoreRotateInput_Parms, NULL );

	pFnSetIgnoreRotateInput->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetIgnoreMoveInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::SetIgnoreMoveInput ( )
{
	static UFunction* pFnSetIgnoreMoveInput = NULL;

	if ( ! pFnSetIgnoreMoveInput )
		pFnSetIgnoreMoveInput = (UFunction*) UObject::GObjObjects()->Data[ 36479 ];

	AT1Pawn_execSetIgnoreMoveInput_Parms SetIgnoreMoveInput_Parms;

	pFnSetIgnoreMoveInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetIgnoreMoveInput, &SetIgnoreMoveInput_Parms, NULL );

	pFnSetIgnoreMoveInput->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.IsDead
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::IsDead ( )
{
	static UFunction* pFnIsDead = NULL;

	if ( ! pFnIsDead )
		pFnIsDead = (UFunction*) UObject::GObjObjects()->Data[ 36477 ];

	AT1Pawn_execIsDead_Parms IsDead_Parms;

	pFnIsDead->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDead, &IsDead_Parms, NULL );

	pFnIsDead->FunctionFlags |= 0x400;

	return IsDead_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.SetDeadFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bDeadFlag                      ( CPF_Parm )

void AT1Pawn::SetDeadFlag ( unsigned long bDeadFlag )
{
	static UFunction* pFnSetDeadFlag = NULL;

	if ( ! pFnSetDeadFlag )
		pFnSetDeadFlag = (UFunction*) UObject::GObjObjects()->Data[ 36475 ];

	AT1Pawn_execSetDeadFlag_Parms SetDeadFlag_Parms;
	SetDeadFlag_Parms.bDeadFlag = bDeadFlag;

	pFnSetDeadFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDeadFlag, &SetDeadFlag_Parms, NULL );

	pFnSetDeadFlag->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.InterruptKeepWalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::InterruptKeepWalking ( )
{
	static UFunction* pFnInterruptKeepWalking = NULL;

	if ( ! pFnInterruptKeepWalking )
		pFnInterruptKeepWalking = (UFunction*) UObject::GObjObjects()->Data[ 36474 ];

	AT1Pawn_execInterruptKeepWalking_Parms InterruptKeepWalking_Parms;

	pFnInterruptKeepWalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInterruptKeepWalking, &InterruptKeepWalking_Parms, NULL );

	pFnInterruptKeepWalking->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.ToggleKeepWalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1Pawn::ToggleKeepWalking ( )
{
	static UFunction* pFnToggleKeepWalking = NULL;

	if ( ! pFnToggleKeepWalking )
		pFnToggleKeepWalking = (UFunction*) UObject::GObjObjects()->Data[ 36473 ];

	AT1Pawn_execToggleKeepWalking_Parms ToggleKeepWalking_Parms;

	pFnToggleKeepWalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleKeepWalking, &ToggleKeepWalking_Parms, NULL );

	pFnToggleKeepWalking->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.CanRotate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::CanRotate ( )
{
	static UFunction* pFnCanRotate = NULL;

	if ( ! pFnCanRotate )
		pFnCanRotate = (UFunction*) UObject::GObjObjects()->Data[ 36471 ];

	AT1Pawn_execCanRotate_Parms CanRotate_Parms;

	pFnCanRotate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanRotate, &CanRotate_Parms, NULL );

	pFnCanRotate->FunctionFlags |= 0x400;

	return CanRotate_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.SetBlockMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bNewBlockMove                  ( CPF_Parm )

void AT1Pawn::SetBlockMove ( unsigned long bNewBlockMove )
{
	static UFunction* pFnSetBlockMove = NULL;

	if ( ! pFnSetBlockMove )
		pFnSetBlockMove = (UFunction*) UObject::GObjObjects()->Data[ 36469 ];

	AT1Pawn_execSetBlockMove_Parms SetBlockMove_Parms;
	SetBlockMove_Parms.bNewBlockMove = bNewBlockMove;

	pFnSetBlockMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBlockMove, &SetBlockMove_Parms, NULL );

	pFnSetBlockMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.SetRuleMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bNewRuleMove                   ( CPF_Parm )

void AT1Pawn::SetRuleMove ( unsigned long bNewRuleMove )
{
	static UFunction* pFnSetRuleMove = NULL;

	if ( ! pFnSetRuleMove )
		pFnSetRuleMove = (UFunction*) UObject::GObjObjects()->Data[ 36467 ];

	AT1Pawn_execSetRuleMove_Parms SetRuleMove_Parms;
	SetRuleMove_Parms.bNewRuleMove = bNewRuleMove;

	pFnSetRuleMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRuleMove, &SetRuleMove_Parms, NULL );

	pFnSetRuleMove->FunctionFlags |= 0x400;
};

// Function T1Game.T1Pawn.IsMouseMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::IsMouseMove ( )
{
	static UFunction* pFnIsMouseMove = NULL;

	if ( ! pFnIsMouseMove )
		pFnIsMouseMove = (UFunction*) UObject::GObjObjects()->Data[ 36465 ];

	AT1Pawn_execIsMouseMove_Parms IsMouseMove_Parms;

	pFnIsMouseMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsMouseMove, &IsMouseMove_Parms, NULL );

	pFnIsMouseMove->FunctionFlags |= 0x400;

	return IsMouseMove_Parms.ReturnValue;
};

// Function T1Game.T1Pawn.IsRuleMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1Pawn::IsRuleMove ( )
{
	static UFunction* pFnIsRuleMove = NULL;

	if ( ! pFnIsRuleMove )
		pFnIsRuleMove = (UFunction*) UObject::GObjObjects()->Data[ 36463 ];

	AT1Pawn_execIsRuleMove_Parms IsRuleMove_Parms;

	pFnIsRuleMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRuleMove, &IsRuleMove_Parms, NULL );

	pFnIsRuleMove->FunctionFlags |= 0x400;

	return IsRuleMove_Parms.ReturnValue;
};

// Function T1Game.T1CamMod_ScreenMove.ModifyCameraEditor
// [0x00C20802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTPOV                   OutPOV                         ( CPF_Parm | CPF_OutParm )

void UT1CamMod_ScreenMove::eventModifyCameraEditor ( float DeltaTime, struct FTPOV* OutPOV )
{
	static UFunction* pFnModifyCameraEditor = NULL;

	if ( ! pFnModifyCameraEditor )
		pFnModifyCameraEditor = (UFunction*) UObject::GObjObjects()->Data[ 34697 ];

	UT1CamMod_ScreenMove_eventModifyCameraEditor_Parms ModifyCameraEditor_Parms;
	ModifyCameraEditor_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnModifyCameraEditor, &ModifyCameraEditor_Parms, NULL );

	if ( OutPOV )
		memcpy ( OutPOV, &ModifyCameraEditor_Parms.OutPOV, 0x1C );
};

// Function T1Game.T1CamMod_ScreenMove.ModifyCamera
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ACamera*                 Camera                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTPOV                   OutPOV                         ( CPF_Parm | CPF_OutParm )

bool UT1CamMod_ScreenMove::ModifyCamera ( class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV )
{
	static UFunction* pFnModifyCamera = NULL;

	if ( ! pFnModifyCamera )
		pFnModifyCamera = (UFunction*) UObject::GObjObjects()->Data[ 34690 ];

	UT1CamMod_ScreenMove_execModifyCamera_Parms ModifyCamera_Parms;
	ModifyCamera_Parms.Camera = Camera;
	ModifyCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnModifyCamera, &ModifyCamera_Parms, NULL );

	if ( OutPOV )
		memcpy ( OutPOV, &ModifyCamera_Parms.OutPOV, 0x1C );

	return ModifyCamera_Parms.ReturnValue;
};

// Function T1Game.T1CamMod_ScreenMove.UpdateScreenMove
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FScreenMoveStruct       Move                           ( CPF_Parm | CPF_OutParm )
// struct FTPOV                   OutPOV                         ( CPF_Parm | CPF_OutParm )

void UT1CamMod_ScreenMove::UpdateScreenMove ( float DeltaTime, struct FScreenMoveStruct* Move, struct FTPOV* OutPOV )
{
	static UFunction* pFnUpdateScreenMove = NULL;

	if ( ! pFnUpdateScreenMove )
		pFnUpdateScreenMove = (UFunction*) UObject::GObjObjects()->Data[ 34686 ];

	UT1CamMod_ScreenMove_execUpdateScreenMove_Parms UpdateScreenMove_Parms;
	UpdateScreenMove_Parms.DeltaTime = DeltaTime;

	pFnUpdateScreenMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateScreenMove, &UpdateScreenMove_Parms, NULL );

	pFnUpdateScreenMove->FunctionFlags |= 0x400;

	if ( Move )
		memcpy ( Move, &UpdateScreenMove_Parms.Move, 0x60 );

	if ( OutPOV )
		memcpy ( OutPOV, &UpdateScreenMove_Parms.OutPOV, 0x1C );
};

// Function T1Game.T1CamMod_ScreenMove.StartNewMoveEditor
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// float                          Pct                            ( CPF_Parm )
// struct FRawDistributionVector  newRotAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRawDistributionVector  newLocAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRawDistributionFloat   newFovAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UT1CamMod_ScreenMove::eventStartNewMoveEditor ( float Duration, float Pct, struct FRawDistributionVector* newRotAdjust, struct FRawDistributionVector* newLocAdjust, struct FRawDistributionFloat* newFovAdjust )
{
	static UFunction* pFnStartNewMoveEditor = NULL;

	if ( ! pFnStartNewMoveEditor )
		pFnStartNewMoveEditor = (UFunction*) UObject::GObjObjects()->Data[ 34680 ];

	UT1CamMod_ScreenMove_eventStartNewMoveEditor_Parms StartNewMoveEditor_Parms;
	StartNewMoveEditor_Parms.Duration = Duration;
	StartNewMoveEditor_Parms.Pct = Pct;

	this->ProcessEvent ( pFnStartNewMoveEditor, &StartNewMoveEditor_Parms, NULL );

	if ( newRotAdjust )
		memcpy ( newRotAdjust, &StartNewMoveEditor_Parms.newRotAdjust, 0x1C );

	if ( newLocAdjust )
		memcpy ( newLocAdjust, &StartNewMoveEditor_Parms.newLocAdjust, 0x1C );

	if ( newFovAdjust )
		memcpy ( newFovAdjust, &StartNewMoveEditor_Parms.newFovAdjust, 0x1C );
};

// Function T1Game.T1CamMod_ScreenMove.StartNewMove
// [0x00820002] 
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// float                          Pct                            ( CPF_Parm )
// struct FRawDistributionVector  newRotAdjust                   ( CPF_Const | CPF_Parm )
// struct FRawDistributionVector  newLocAdjust                   ( CPF_Const | CPF_Parm )
// struct FRawDistributionFloat   newFovAdjust                   ( CPF_Const | CPF_Parm )

void UT1CamMod_ScreenMove::StartNewMove ( float Duration, float Pct, struct FRawDistributionVector newRotAdjust, struct FRawDistributionVector newLocAdjust, struct FRawDistributionFloat newFovAdjust )
{
	static UFunction* pFnStartNewMove = NULL;

	if ( ! pFnStartNewMove )
		pFnStartNewMove = (UFunction*) UObject::GObjObjects()->Data[ 34673 ];

	UT1CamMod_ScreenMove_execStartNewMove_Parms StartNewMove_Parms;
	StartNewMove_Parms.Duration = Duration;
	StartNewMove_Parms.Pct = Pct;
	memcpy ( &StartNewMove_Parms.newRotAdjust, &newRotAdjust, 0x1C );
	memcpy ( &StartNewMove_Parms.newLocAdjust, &newLocAdjust, 0x1C );
	memcpy ( &StartNewMove_Parms.newFovAdjust, &newFovAdjust, 0x1C );

	this->ProcessEvent ( pFnStartNewMove, &StartNewMove_Parms, NULL );
};

// Function T1Game.T1CamMod_ScreenShake.ModifyCameraEditor
// [0x00C20802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTPOV                   OutPOV                         ( CPF_Parm | CPF_OutParm )

void UT1CamMod_ScreenShake::eventModifyCameraEditor ( float DeltaTime, struct FTPOV* OutPOV )
{
	static UFunction* pFnModifyCameraEditor = NULL;

	if ( ! pFnModifyCameraEditor )
		pFnModifyCameraEditor = (UFunction*) UObject::GObjObjects()->Data[ 34782 ];

	UT1CamMod_ScreenShake_eventModifyCameraEditor_Parms ModifyCameraEditor_Parms;
	ModifyCameraEditor_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnModifyCameraEditor, &ModifyCameraEditor_Parms, NULL );

	if ( OutPOV )
		memcpy ( OutPOV, &ModifyCameraEditor_Parms.OutPOV, 0x1C );
};

// Function T1Game.T1CamMod_ScreenShake.ModifyCamera
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ACamera*                 Camera                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTPOV                   OutPOV                         ( CPF_Parm | CPF_OutParm )

bool UT1CamMod_ScreenShake::ModifyCamera ( class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV )
{
	static UFunction* pFnModifyCamera = NULL;

	if ( ! pFnModifyCamera )
		pFnModifyCamera = (UFunction*) UObject::GObjObjects()->Data[ 34775 ];

	UT1CamMod_ScreenShake_execModifyCamera_Parms ModifyCamera_Parms;
	ModifyCamera_Parms.Camera = Camera;
	ModifyCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnModifyCamera, &ModifyCamera_Parms, NULL );

	if ( OutPOV )
		memcpy ( OutPOV, &ModifyCamera_Parms.OutPOV, 0x1C );

	return ModifyCamera_Parms.ReturnValue;
};

// Function T1Game.T1CamMod_ScreenShake.UpdateScreenShake
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FScreenShakeStruct      Shake                          ( CPF_Parm | CPF_OutParm )
// struct FTPOV                   OutPOV                         ( CPF_Parm | CPF_OutParm )

void UT1CamMod_ScreenShake::UpdateScreenShake ( float DeltaTime, struct FScreenShakeStruct* Shake, struct FTPOV* OutPOV )
{
	static UFunction* pFnUpdateScreenShake = NULL;

	if ( ! pFnUpdateScreenShake )
		pFnUpdateScreenShake = (UFunction*) UObject::GObjObjects()->Data[ 34771 ];

	UT1CamMod_ScreenShake_execUpdateScreenShake_Parms UpdateScreenShake_Parms;
	UpdateScreenShake_Parms.DeltaTime = DeltaTime;

	pFnUpdateScreenShake->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateScreenShake, &UpdateScreenShake_Parms, NULL );

	pFnUpdateScreenShake->FunctionFlags |= 0x400;

	if ( Shake )
		memcpy ( Shake, &UpdateScreenShake_Parms.Shake, 0x68 );

	if ( OutPOV )
		memcpy ( OutPOV, &UpdateScreenShake_Parms.OutPOV, 0x1C );
};

// Function T1Game.T1CamMod_ScreenShake.DumpShakeInfo
// [0x00020002] 
// Parameters infos:
// struct FScreenShakeStruct      Shake                          ( CPF_Parm )

void UT1CamMod_ScreenShake::DumpShakeInfo ( struct FScreenShakeStruct Shake )
{
	static UFunction* pFnDumpShakeInfo = NULL;

	if ( ! pFnDumpShakeInfo )
		pFnDumpShakeInfo = (UFunction*) UObject::GObjObjects()->Data[ 34769 ];

	UT1CamMod_ScreenShake_execDumpShakeInfo_Parms DumpShakeInfo_Parms;
	memcpy ( &DumpShakeInfo_Parms.Shake, &Shake, 0x68 );

	this->ProcessEvent ( pFnDumpShakeInfo, &DumpShakeInfo_Parms, NULL );
};

// Function T1Game.T1CamMod_ScreenShake.StartNewShakeEditor
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// struct FVector                 newRotAmplitude                ( CPF_Parm )
// struct FVector                 newRotFrequency                ( CPF_Parm )
// struct FVector                 newLocAmplitude                ( CPF_Parm )
// struct FVector                 newLocFrequency                ( CPF_Parm )
// float                          newFOVAmplitude                ( CPF_Parm )
// float                          newFOVFrequency                ( CPF_Parm )
// unsigned long                  bRotRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLocRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFOVRandom                     ( CPF_OptionalParm | CPF_Parm )

void UT1CamMod_ScreenShake::eventStartNewShakeEditor ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom )
{
	static UFunction* pFnStartNewShakeEditor = NULL;

	if ( ! pFnStartNewShakeEditor )
		pFnStartNewShakeEditor = (UFunction*) UObject::GObjObjects()->Data[ 34758 ];

	UT1CamMod_ScreenShake_eventStartNewShakeEditor_Parms StartNewShakeEditor_Parms;
	StartNewShakeEditor_Parms.Duration = Duration;
	memcpy ( &StartNewShakeEditor_Parms.newRotAmplitude, &newRotAmplitude, 0xC );
	memcpy ( &StartNewShakeEditor_Parms.newRotFrequency, &newRotFrequency, 0xC );
	memcpy ( &StartNewShakeEditor_Parms.newLocAmplitude, &newLocAmplitude, 0xC );
	memcpy ( &StartNewShakeEditor_Parms.newLocFrequency, &newLocFrequency, 0xC );
	StartNewShakeEditor_Parms.newFOVAmplitude = newFOVAmplitude;
	StartNewShakeEditor_Parms.newFOVFrequency = newFOVFrequency;
	StartNewShakeEditor_Parms.bRotRandom = bRotRandom;
	StartNewShakeEditor_Parms.bLocRandom = bLocRandom;
	StartNewShakeEditor_Parms.bFOVRandom = bFOVRandom;

	this->ProcessEvent ( pFnStartNewShakeEditor, &StartNewShakeEditor_Parms, NULL );
};

// Function T1Game.T1CamMod_ScreenShake.StartNewShake
// [0x00824002] 
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// struct FVector                 newRotAmplitude                ( CPF_Parm )
// struct FVector                 newRotFrequency                ( CPF_Parm )
// struct FVector                 newLocAmplitude                ( CPF_Parm )
// struct FVector                 newLocFrequency                ( CPF_Parm )
// float                          newFOVAmplitude                ( CPF_Parm )
// float                          newFOVFrequency                ( CPF_Parm )
// unsigned long                  bRotRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLocRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFOVRandom                     ( CPF_OptionalParm | CPF_Parm )

void UT1CamMod_ScreenShake::StartNewShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom )
{
	static UFunction* pFnStartNewShake = NULL;

	if ( ! pFnStartNewShake )
		pFnStartNewShake = (UFunction*) UObject::GObjObjects()->Data[ 34746 ];

	UT1CamMod_ScreenShake_execStartNewShake_Parms StartNewShake_Parms;
	StartNewShake_Parms.Duration = Duration;
	memcpy ( &StartNewShake_Parms.newRotAmplitude, &newRotAmplitude, 0xC );
	memcpy ( &StartNewShake_Parms.newRotFrequency, &newRotFrequency, 0xC );
	memcpy ( &StartNewShake_Parms.newLocAmplitude, &newLocAmplitude, 0xC );
	memcpy ( &StartNewShake_Parms.newLocFrequency, &newLocFrequency, 0xC );
	StartNewShake_Parms.newFOVAmplitude = newFOVAmplitude;
	StartNewShake_Parms.newFOVFrequency = newFOVFrequency;
	StartNewShake_Parms.bRotRandom = bRotRandom;
	StartNewShake_Parms.bLocRandom = bLocRandom;
	StartNewShake_Parms.bFOVRandom = bFOVRandom;

	this->ProcessEvent ( pFnStartNewShake, &StartNewShake_Parms, NULL );
};

// Function T1Game.T1CamMod_ScreenShake.ComposeNewShake
// [0x00820003] ( FUNC_Final )
// Parameters infos:
// struct FScreenShakeStruct      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Duration                       ( CPF_Parm )
// struct FVector                 newRotAmplitude                ( CPF_Parm )
// struct FVector                 newRotFrequency                ( CPF_Parm )
// struct FVector                 newLocAmplitude                ( CPF_Parm )
// struct FVector                 newLocFrequency                ( CPF_Parm )
// float                          newFOVAmplitude                ( CPF_Parm )
// float                          newFOVFrequency                ( CPF_Parm )
// unsigned long                  bRotRandom                     ( CPF_Parm )
// unsigned long                  bLocRandom                     ( CPF_Parm )
// unsigned long                  bFOVRandom                     ( CPF_Parm )

struct FScreenShakeStruct UT1CamMod_ScreenShake::ComposeNewShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom )
{
	static UFunction* pFnComposeNewShake = NULL;

	if ( ! pFnComposeNewShake )
		pFnComposeNewShake = (UFunction*) UObject::GObjObjects()->Data[ 34733 ];

	UT1CamMod_ScreenShake_execComposeNewShake_Parms ComposeNewShake_Parms;
	ComposeNewShake_Parms.Duration = Duration;
	memcpy ( &ComposeNewShake_Parms.newRotAmplitude, &newRotAmplitude, 0xC );
	memcpy ( &ComposeNewShake_Parms.newRotFrequency, &newRotFrequency, 0xC );
	memcpy ( &ComposeNewShake_Parms.newLocAmplitude, &newLocAmplitude, 0xC );
	memcpy ( &ComposeNewShake_Parms.newLocFrequency, &newLocFrequency, 0xC );
	ComposeNewShake_Parms.newFOVAmplitude = newFOVAmplitude;
	ComposeNewShake_Parms.newFOVFrequency = newFOVFrequency;
	ComposeNewShake_Parms.bRotRandom = bRotRandom;
	ComposeNewShake_Parms.bLocRandom = bLocRandom;
	ComposeNewShake_Parms.bFOVRandom = bFOVRandom;

	this->ProcessEvent ( pFnComposeNewShake, &ComposeNewShake_Parms, NULL );

	return ComposeNewShake_Parms.ReturnValue;
};

// Function T1Game.T1CamMod_ScreenShake.InitializeOffset
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Param                          ( CPF_Parm )

float UT1CamMod_ScreenShake::InitializeOffset ( unsigned char Param )
{
	static UFunction* pFnInitializeOffset = NULL;

	if ( ! pFnInitializeOffset )
		pFnInitializeOffset = (UFunction*) UObject::GObjObjects()->Data[ 34730 ];

	UT1CamMod_ScreenShake_execInitializeOffset_Parms InitializeOffset_Parms;
	InitializeOffset_Parms.Param = Param;

	this->ProcessEvent ( pFnInitializeOffset, &InitializeOffset_Parms, NULL );

	return InitializeOffset_Parms.ReturnValue;
};

// Function T1Game.T1CamMod_ScreenShake.InitializeShake
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FScreenShakeStruct      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScreenShakeStruct      NewShake                       ( CPF_Parm )

struct FScreenShakeStruct UT1CamMod_ScreenShake::InitializeShake ( struct FScreenShakeStruct NewShake )
{
	static UFunction* pFnInitializeShake = NULL;

	if ( ! pFnInitializeShake )
		pFnInitializeShake = (UFunction*) UObject::GObjObjects()->Data[ 34727 ];

	UT1CamMod_ScreenShake_execInitializeShake_Parms InitializeShake_Parms;
	memcpy ( &InitializeShake_Parms.NewShake, &NewShake, 0x68 );

	this->ProcessEvent ( pFnInitializeShake, &InitializeShake_Parms, NULL );

	return InitializeShake_Parms.ReturnValue;
};

// Function T1Game.T1CamMod_ScreenShake.AddScreenShake
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FScreenShakeStruct      NewShake                       ( CPF_Parm )

void UT1CamMod_ScreenShake::AddScreenShake ( struct FScreenShakeStruct NewShake )
{
	static UFunction* pFnAddScreenShake = NULL;

	if ( ! pFnAddScreenShake )
		pFnAddScreenShake = (UFunction*) UObject::GObjObjects()->Data[ 34725 ];

	UT1CamMod_ScreenShake_execAddScreenShake_Parms AddScreenShake_Parms;
	memcpy ( &AddScreenShake_Parms.NewShake, &NewShake, 0x68 );

	this->ProcessEvent ( pFnAddScreenShake, &AddScreenShake_Parms, NULL );
};

// Function T1Game.T1PlayerCamera.StartCameraMove
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// float                          Pct                            ( CPF_Parm )
// struct FRawDistributionVector  newRotAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRawDistributionVector  newLocAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRawDistributionFloat   newFovAdjust                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void AT1PlayerCamera::eventStartCameraMove ( float Duration, float Pct, struct FRawDistributionVector* newRotAdjust, struct FRawDistributionVector* newLocAdjust, struct FRawDistributionFloat* newFovAdjust )
{
	static UFunction* pFnStartCameraMove = NULL;

	if ( ! pFnStartCameraMove )
		pFnStartCameraMove = (UFunction*) UObject::GObjObjects()->Data[ 36768 ];

	AT1PlayerCamera_eventStartCameraMove_Parms StartCameraMove_Parms;
	StartCameraMove_Parms.Duration = Duration;
	StartCameraMove_Parms.Pct = Pct;

	this->ProcessEvent ( pFnStartCameraMove, &StartCameraMove_Parms, NULL );

	if ( newRotAdjust )
		memcpy ( newRotAdjust, &StartCameraMove_Parms.newRotAdjust, 0x1C );

	if ( newLocAdjust )
		memcpy ( newLocAdjust, &StartCameraMove_Parms.newLocAdjust, 0x1C );

	if ( newFovAdjust )
		memcpy ( newFovAdjust, &StartCameraMove_Parms.newFovAdjust, 0x1C );
};

// Function T1Game.T1PlayerCamera.StartCameraShake
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// struct FVector                 newRotAmplitude                ( CPF_Parm )
// struct FVector                 newRotFrequency                ( CPF_Parm )
// struct FVector                 newLocAmplitude                ( CPF_Parm )
// struct FVector                 newLocFrequency                ( CPF_Parm )
// float                          newFOVAmplitude                ( CPF_Parm )
// float                          newFOVFrequency                ( CPF_Parm )
// unsigned long                  bRotRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLocRandom                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFOVRandom                     ( CPF_OptionalParm | CPF_Parm )

void AT1PlayerCamera::eventStartCameraShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency, unsigned long bRotRandom, unsigned long bLocRandom, unsigned long bFOVRandom )
{
	static UFunction* pFnStartCameraShake = NULL;

	if ( ! pFnStartCameraShake )
		pFnStartCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 36757 ];

	AT1PlayerCamera_eventStartCameraShake_Parms StartCameraShake_Parms;
	StartCameraShake_Parms.Duration = Duration;
	memcpy ( &StartCameraShake_Parms.newRotAmplitude, &newRotAmplitude, 0xC );
	memcpy ( &StartCameraShake_Parms.newRotFrequency, &newRotFrequency, 0xC );
	memcpy ( &StartCameraShake_Parms.newLocAmplitude, &newLocAmplitude, 0xC );
	memcpy ( &StartCameraShake_Parms.newLocFrequency, &newLocFrequency, 0xC );
	StartCameraShake_Parms.newFOVAmplitude = newFOVAmplitude;
	StartCameraShake_Parms.newFOVFrequency = newFOVFrequency;
	StartCameraShake_Parms.bRotRandom = bRotRandom;
	StartCameraShake_Parms.bLocRandom = bLocRandom;
	StartCameraShake_Parms.bFOVRandom = bFOVRandom;

	this->ProcessEvent ( pFnStartCameraShake, &StartCameraShake_Parms, NULL );
};

// Function T1Game.T1PlayerCamera.InterPolateYaw
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Src                            ( CPF_Parm )
// float                          Dst                            ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          fInterpSpeed                   ( CPF_Parm )

float AT1PlayerCamera::InterPolateYaw ( float Src, float Dst, float DeltaTime, float fInterpSpeed )
{
	static UFunction* pFnInterPolateYaw = NULL;

	if ( ! pFnInterPolateYaw )
		pFnInterPolateYaw = (UFunction*) UObject::GObjObjects()->Data[ 36749 ];

	AT1PlayerCamera_execInterPolateYaw_Parms InterPolateYaw_Parms;
	InterPolateYaw_Parms.Src = Src;
	InterPolateYaw_Parms.Dst = Dst;
	InterPolateYaw_Parms.DeltaTime = DeltaTime;
	InterPolateYaw_Parms.fInterpSpeed = fInterpSpeed;

	this->ProcessEvent ( pFnInterPolateYaw, &InterPolateYaw_Parms, NULL );

	return InterPolateYaw_Parms.ReturnValue;
};

// Function T1Game.T1PlayerCamera.YawToRange
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Yaw                            ( CPF_Parm )

float AT1PlayerCamera::YawToRange ( float Yaw )
{
	static UFunction* pFnYawToRange = NULL;

	if ( ! pFnYawToRange )
		pFnYawToRange = (UFunction*) UObject::GObjObjects()->Data[ 36746 ];

	AT1PlayerCamera_execYawToRange_Parms YawToRange_Parms;
	YawToRange_Parms.Yaw = Yaw;

	this->ProcessEvent ( pFnYawToRange, &YawToRange_Parms, NULL );

	return YawToRange_Parms.ReturnValue;
};

// Function T1Game.T1PlayerCamera.UpdateViewTarget
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void AT1PlayerCamera::UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateViewTarget = NULL;

	if ( ! pFnUpdateViewTarget )
		pFnUpdateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 36743 ];

	AT1PlayerCamera_execUpdateViewTarget_Parms UpdateViewTarget_Parms;
	UpdateViewTarget_Parms.DeltaTime = DeltaTime;

	pFnUpdateViewTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateViewTarget, &UpdateViewTarget_Parms, NULL );

	pFnUpdateViewTarget->FunctionFlags |= 0x400;

	if ( OutVT )
		memcpy ( OutVT, &UpdateViewTarget_Parms.OutVT, 0x2C );
};

// Function T1Game.T1PlayerCamera.InitializeFor
// [0x00020002] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AT1PlayerCamera::InitializeFor ( class APlayerController* PC )
{
	static UFunction* pFnInitializeFor = NULL;

	if ( ! pFnInitializeFor )
		pFnInitializeFor = (UFunction*) UObject::GObjObjects()->Data[ 36741 ];

	AT1PlayerCamera_execInitializeFor_Parms InitializeFor_Parms;
	InitializeFor_Parms.PC = PC;

	this->ProcessEvent ( pFnInitializeFor, &InitializeFor_Parms, NULL );
};

// Function T1Game.T1PlayerCamera.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AT1PlayerCamera::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36740 ];

	AT1PlayerCamera_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function T1Game.T1PlayerCamera.PlayCameraInterpolTime
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  InInterpolMode                 ( CPF_Parm )
// float                          fFadeInTime                    ( CPF_Parm )
// float                          fPlayTime                      ( CPF_Parm )
// float                          fFadeOutTime                   ( CPF_Parm )

void AT1PlayerCamera::PlayCameraInterpolTime ( unsigned char InInterpolMode, float fFadeInTime, float fPlayTime, float fFadeOutTime )
{
	static UFunction* pFnPlayCameraInterpolTime = NULL;

	if ( ! pFnPlayCameraInterpolTime )
		pFnPlayCameraInterpolTime = (UFunction*) UObject::GObjObjects()->Data[ 36735 ];

	AT1PlayerCamera_execPlayCameraInterpolTime_Parms PlayCameraInterpolTime_Parms;
	PlayCameraInterpolTime_Parms.InInterpolMode = InInterpolMode;
	PlayCameraInterpolTime_Parms.fFadeInTime = fFadeInTime;
	PlayCameraInterpolTime_Parms.fPlayTime = fPlayTime;
	PlayCameraInterpolTime_Parms.fFadeOutTime = fFadeOutTime;

	pFnPlayCameraInterpolTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayCameraInterpolTime, &PlayCameraInterpolTime_Parms, NULL );

	pFnPlayCameraInterpolTime->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.SetT1MovieCameraMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            InCameraMode                   ( CPF_Parm )
// int                            InInterpolMode                 ( CPF_Parm )

void AT1PlayerCamera::SetT1MovieCameraMode ( int InCameraMode, int InInterpolMode )
{
	static UFunction* pFnSetT1MovieCameraMode = NULL;

	if ( ! pFnSetT1MovieCameraMode )
		pFnSetT1MovieCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 36732 ];

	AT1PlayerCamera_execSetT1MovieCameraMode_Parms SetT1MovieCameraMode_Parms;
	SetT1MovieCameraMode_Parms.InCameraMode = InCameraMode;
	SetT1MovieCameraMode_Parms.InInterpolMode = InInterpolMode;

	pFnSetT1MovieCameraMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetT1MovieCameraMode, &SetT1MovieCameraMode_Parms, NULL );

	pFnSetT1MovieCameraMode->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.T1Trace
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TraceEnd                       ( CPF_Parm )
// struct FVector                 TraceStart                     ( CPF_Parm )
// struct FVector                 Extent                         ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )

class AActor* AT1PlayerCamera::T1Trace ( struct FVector TraceEnd, struct FVector TraceStart, struct FVector Extent, struct FVector* HitLocation, struct FVector* HitNormal )
{
	static UFunction* pFnT1Trace = NULL;

	if ( ! pFnT1Trace )
		pFnT1Trace = (UFunction*) UObject::GObjObjects()->Data[ 36725 ];

	AT1PlayerCamera_execT1Trace_Parms T1Trace_Parms;
	memcpy ( &T1Trace_Parms.TraceEnd, &TraceEnd, 0xC );
	memcpy ( &T1Trace_Parms.TraceStart, &TraceStart, 0xC );
	memcpy ( &T1Trace_Parms.Extent, &Extent, 0xC );

	pFnT1Trace->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnT1Trace, &T1Trace_Parms, NULL );

	pFnT1Trace->FunctionFlags |= 0x400;

	if ( HitLocation )
		memcpy ( HitLocation, &T1Trace_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &T1Trace_Parms.HitNormal, 0xC );

	return T1Trace_Parms.ReturnValue;
};

// Function T1Game.T1PlayerCamera.IsLocked
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1PlayerCamera::IsLocked ( )
{
	static UFunction* pFnIsLocked = NULL;

	if ( ! pFnIsLocked )
		pFnIsLocked = (UFunction*) UObject::GObjObjects()->Data[ 36723 ];

	AT1PlayerCamera_execIsLocked_Parms IsLocked_Parms;

	pFnIsLocked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocked, &IsLocked_Parms, NULL );

	pFnIsLocked->FunctionFlags |= 0x400;

	return IsLocked_Parms.ReturnValue;
};

// Function T1Game.T1PlayerCamera.Unlock
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AT1PlayerCamera::Unlock ( )
{
	static UFunction* pFnUnlock = NULL;

	if ( ! pFnUnlock )
		pFnUnlock = (UFunction*) UObject::GObjObjects()->Data[ 36722 ];

	AT1PlayerCamera_execUnlock_Parms Unlock_Parms;

	pFnUnlock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlock, &Unlock_Parms, NULL );

	pFnUnlock->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.Lock
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 vecLockLocation                ( CPF_Parm )
// struct FVector                 vecLockViewDir                 ( CPF_Parm )
// float                          fViewDist                      ( CPF_Parm )
// int                            IsLocalSpace                   ( CPF_Parm )
// struct FVector                 vecLocalSpaceRot               ( CPF_Parm )
// struct FVector                 vecLockTargetLoc               ( CPF_Parm )

void AT1PlayerCamera::Lock ( struct FVector vecLockLocation, struct FVector vecLockViewDir, float fViewDist, int IsLocalSpace, struct FVector vecLocalSpaceRot, struct FVector vecLockTargetLoc )
{
	static UFunction* pFnLock = NULL;

	if ( ! pFnLock )
		pFnLock = (UFunction*) UObject::GObjObjects()->Data[ 36715 ];

	AT1PlayerCamera_execLock_Parms Lock_Parms;
	memcpy ( &Lock_Parms.vecLockLocation, &vecLockLocation, 0xC );
	memcpy ( &Lock_Parms.vecLockViewDir, &vecLockViewDir, 0xC );
	Lock_Parms.fViewDist = fViewDist;
	Lock_Parms.IsLocalSpace = IsLocalSpace;
	memcpy ( &Lock_Parms.vecLocalSpaceRot, &vecLocalSpaceRot, 0xC );
	memcpy ( &Lock_Parms.vecLockTargetLoc, &vecLockTargetLoc, 0xC );

	pFnLock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLock, &Lock_Parms, NULL );

	pFnLock->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.IsCameraAutoBlend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AT1PlayerCamera::IsCameraAutoBlend ( )
{
	static UFunction* pFnIsCameraAutoBlend = NULL;

	if ( ! pFnIsCameraAutoBlend )
		pFnIsCameraAutoBlend = (UFunction*) UObject::GObjObjects()->Data[ 36713 ];

	AT1PlayerCamera_execIsCameraAutoBlend_Parms IsCameraAutoBlend_Parms;

	pFnIsCameraAutoBlend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCameraAutoBlend, &IsCameraAutoBlend_Parms, NULL );

	pFnIsCameraAutoBlend->FunctionFlags |= 0x400;

	return IsCameraAutoBlend_Parms.ReturnValue;
};

// Function T1Game.T1PlayerCamera.SetCameraAutoBlendFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bFlag                          ( CPF_Parm )

void AT1PlayerCamera::SetCameraAutoBlendFlag ( unsigned long bFlag )
{
	static UFunction* pFnSetCameraAutoBlendFlag = NULL;

	if ( ! pFnSetCameraAutoBlendFlag )
		pFnSetCameraAutoBlendFlag = (UFunction*) UObject::GObjObjects()->Data[ 36711 ];

	AT1PlayerCamera_execSetCameraAutoBlendFlag_Parms SetCameraAutoBlendFlag_Parms;
	SetCameraAutoBlendFlag_Parms.bFlag = bFlag;

	pFnSetCameraAutoBlendFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCameraAutoBlendFlag, &SetCameraAutoBlendFlag_Parms, NULL );

	pFnSetCameraAutoBlendFlag->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.SetFovAtMax
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          FOV                            ( CPF_Parm )

void AT1PlayerCamera::SetFovAtMax ( float FOV )
{
	static UFunction* pFnSetFovAtMax = NULL;

	if ( ! pFnSetFovAtMax )
		pFnSetFovAtMax = (UFunction*) UObject::GObjObjects()->Data[ 36709 ];

	AT1PlayerCamera_execSetFovAtMax_Parms SetFovAtMax_Parms;
	SetFovAtMax_Parms.FOV = FOV;

	pFnSetFovAtMax->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFovAtMax, &SetFovAtMax_Parms, NULL );

	pFnSetFovAtMax->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.SetFovAtZero
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          FOV                            ( CPF_Parm )

void AT1PlayerCamera::SetFovAtZero ( float FOV )
{
	static UFunction* pFnSetFovAtZero = NULL;

	if ( ! pFnSetFovAtZero )
		pFnSetFovAtZero = (UFunction*) UObject::GObjObjects()->Data[ 36707 ];

	AT1PlayerCamera_execSetFovAtZero_Parms SetFovAtZero_Parms;
	SetFovAtZero_Parms.FOV = FOV;

	pFnSetFovAtZero->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFovAtZero, &SetFovAtZero_Parms, NULL );

	pFnSetFovAtZero->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.SetCamMaxDist
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerCamera::SetCamMaxDist ( float fDist )
{
	static UFunction* pFnSetCamMaxDist = NULL;

	if ( ! pFnSetCamMaxDist )
		pFnSetCamMaxDist = (UFunction*) UObject::GObjObjects()->Data[ 36705 ];

	AT1PlayerCamera_execSetCamMaxDist_Parms SetCamMaxDist_Parms;
	SetCamMaxDist_Parms.fDist = fDist;

	pFnSetCamMaxDist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCamMaxDist, &SetCamMaxDist_Parms, NULL );

	pFnSetCamMaxDist->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.SetCamNearDist
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerCamera::SetCamNearDist ( float fDist )
{
	static UFunction* pFnSetCamNearDist = NULL;

	if ( ! pFnSetCamNearDist )
		pFnSetCamNearDist = (UFunction*) UObject::GObjObjects()->Data[ 36703 ];

	AT1PlayerCamera_execSetCamNearDist_Parms SetCamNearDist_Parms;
	SetCamNearDist_Parms.fDist = fDist;

	pFnSetCamNearDist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCamNearDist, &SetCamNearDist_Parms, NULL );

	pFnSetCamNearDist->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.SetCamMinDist
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerCamera::SetCamMinDist ( float fDist )
{
	static UFunction* pFnSetCamMinDist = NULL;

	if ( ! pFnSetCamMinDist )
		pFnSetCamMinDist = (UFunction*) UObject::GObjObjects()->Data[ 36701 ];

	AT1PlayerCamera_execSetCamMinDist_Parms SetCamMinDist_Parms;
	SetCamMinDist_Parms.fDist = fDist;

	pFnSetCamMinDist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCamMinDist, &SetCamMinDist_Parms, NULL );

	pFnSetCamMinDist->FunctionFlags |= 0x400;
};

// Function T1Game.T1PlayerCamera.SetCamHeightTransDist
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDist                          ( CPF_Parm )

void AT1PlayerCamera::SetCamHeightTransDist ( float fDist )
{
	static UFunction* pFnSetCamHeightTransDist = NULL;

	if ( ! pFnSetCamHeightTransDist )
		pFnSetCamHeightTransDist = (UFunction*) UObject::GObjObjects()->Data[ 36699 ];

	AT1PlayerCamera_execSetCamHeightTransDist_Parms SetCamHeightTransDist_Parms;
	SetCamHeightTransDist_Parms.fDist = fDist;

	pFnSetCamHeightTransDist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCamHeightTransDist, &SetCamHeightTransDist_Parms, NULL );

	pFnSetCamHeightTransDist->FunctionFlags |= 0x400;
};

// Function T1Game.T1ConsoleCmd.NormalCam
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1ConsoleCmd::NormalCam ( )
{
	static UFunction* pFnNormalCam = NULL;

	if ( ! pFnNormalCam )
		pFnNormalCam = (UFunction*) UObject::GObjObjects()->Data[ 34796 ];

	UT1ConsoleCmd_execNormalCam_Parms NormalCam_Parms;

	this->ProcessEvent ( pFnNormalCam, &NormalCam_Parms, NULL );
};

// Function T1Game.T1ConsoleCmd.FreeCam
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UT1ConsoleCmd::FreeCam ( )
{
	static UFunction* pFnFreeCam = NULL;

	if ( ! pFnFreeCam )
		pFnFreeCam = (UFunction*) UObject::GObjObjects()->Data[ 34795 ];

	UT1ConsoleCmd_execFreeCam_Parms FreeCam_Parms;

	this->ProcessEvent ( pFnFreeCam, &FreeCam_Parms, NULL );
};

// Function T1Game.T1AnimNodeBlendPerBone.SetFullAnimation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  a_bFull                        ( CPF_Parm )

void UT1AnimNodeBlendPerBone::SetFullAnimation ( unsigned long a_bFull )
{
	static UFunction* pFnSetFullAnimation = NULL;

	if ( ! pFnSetFullAnimation )
		pFnSetFullAnimation = (UFunction*) UObject::GObjObjects()->Data[ 34539 ];

	UT1AnimNodeBlendPerBone_execSetFullAnimation_Parms SetFullAnimation_Parms;
	SetFullAnimation_Parms.a_bFull = a_bFull;

	pFnSetFullAnimation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFullAnimation, &SetFullAnimation_Parms, NULL );

	pFnSetFullAnimation->FunctionFlags |= 0x400;
};

// Function T1Game.T1AnimNodeBlendPerBone.GetCurAnimName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UT1AnimNodeBlendPerBone::GetCurAnimName ( )
{
	static UFunction* pFnGetCurAnimName = NULL;

	if ( ! pFnGetCurAnimName )
		pFnGetCurAnimName = (UFunction*) UObject::GObjObjects()->Data[ 34537 ];

	UT1AnimNodeBlendPerBone_execGetCurAnimName_Parms GetCurAnimName_Parms;

	pFnGetCurAnimName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurAnimName, &GetCurAnimName_Parms, NULL );

	pFnGetCurAnimName->FunctionFlags |= 0x400;

	return GetCurAnimName_Parms.ReturnValue;
};

// Function T1Game.T1AnimNodeBlendPerBone.IsAction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UT1AnimNodeBlendPerBone::IsAction ( )
{
	static UFunction* pFnIsAction = NULL;

	if ( ! pFnIsAction )
		pFnIsAction = (UFunction*) UObject::GObjObjects()->Data[ 34535 ];

	UT1AnimNodeBlendPerBone_execIsAction_Parms IsAction_Parms;

	pFnIsAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsAction, &IsAction_Parms, NULL );

	pFnIsAction->FunctionFlags |= 0x400;

	return IsAction_Parms.ReturnValue;
};

// Function T1Game.T1AnimNodeBlendPerBone.Action
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ActionName                     ( CPF_Parm )

void UT1AnimNodeBlendPerBone::Action ( struct FName ActionName )
{
	static UFunction* pFnAction = NULL;

	if ( ! pFnAction )
		pFnAction = (UFunction*) UObject::GObjObjects()->Data[ 34533 ];

	UT1AnimNodeBlendPerBone_execAction_Parms Action_Parms;
	memcpy ( &Action_Parms.ActionName, &ActionName, 0x8 );

	pFnAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAction, &Action_Parms, NULL );

	pFnAction->FunctionFlags |= 0x400;
};

// Function T1Game.T1AnimNodePlayCustomAnim.SetRootBoneAxisOption
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// unsigned char                  AxisX                          ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  AxisY                          ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  AxisZ                          ( CPF_OptionalParm | CPF_Parm )

void UT1AnimNodePlayCustomAnim::SetRootBoneAxisOption ( unsigned char AxisX, unsigned char AxisY, unsigned char AxisZ )
{
	static UFunction* pFnSetRootBoneAxisOption = NULL;

	if ( ! pFnSetRootBoneAxisOption )
		pFnSetRootBoneAxisOption = (UFunction*) UObject::GObjObjects()->Data[ 34622 ];

	UT1AnimNodePlayCustomAnim_execSetRootBoneAxisOption_Parms SetRootBoneAxisOption_Parms;
	SetRootBoneAxisOption_Parms.AxisX = AxisX;
	SetRootBoneAxisOption_Parms.AxisY = AxisY;
	SetRootBoneAxisOption_Parms.AxisZ = AxisZ;

	this->ProcessEvent ( pFnSetRootBoneAxisOption, &SetRootBoneAxisOption_Parms, NULL );
};

// Function T1Game.T1AnimNodePlayCustomAnim.GetCustomAnimNodeSeq
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UAnimNodeSequence*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UAnimNodeSequence* UT1AnimNodePlayCustomAnim::GetCustomAnimNodeSeq ( )
{
	static UFunction* pFnGetCustomAnimNodeSeq = NULL;

	if ( ! pFnGetCustomAnimNodeSeq )
		pFnGetCustomAnimNodeSeq = (UFunction*) UObject::GObjObjects()->Data[ 34620 ];

	UT1AnimNodePlayCustomAnim_execGetCustomAnimNodeSeq_Parms GetCustomAnimNodeSeq_Parms;

	this->ProcessEvent ( pFnGetCustomAnimNodeSeq, &GetCustomAnimNodeSeq_Parms, NULL );

	return GetCustomAnimNodeSeq_Parms.ReturnValue;
};

// Function T1Game.T1AnimNodePlayCustomAnim.SetActorAnimEndNotification
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bNewStatus                     ( CPF_Parm )

void UT1AnimNodePlayCustomAnim::SetActorAnimEndNotification ( unsigned long bNewStatus )
{
	static UFunction* pFnSetActorAnimEndNotification = NULL;

	if ( ! pFnSetActorAnimEndNotification )
		pFnSetActorAnimEndNotification = (UFunction*) UObject::GObjObjects()->Data[ 34617 ];

	UT1AnimNodePlayCustomAnim_execSetActorAnimEndNotification_Parms SetActorAnimEndNotification_Parms;
	SetActorAnimEndNotification_Parms.bNewStatus = bNewStatus;

	this->ProcessEvent ( pFnSetActorAnimEndNotification, &SetActorAnimEndNotification_Parms, NULL );
};

// Function T1Game.T1AnimNodePlayCustomAnim.SetCustomAnim
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FName                   AnimName                       ( CPF_Parm )

void UT1AnimNodePlayCustomAnim::SetCustomAnim ( struct FName AnimName )
{
	static UFunction* pFnSetCustomAnim = NULL;

	if ( ! pFnSetCustomAnim )
		pFnSetCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 34614 ];

	UT1AnimNodePlayCustomAnim_execSetCustomAnim_Parms SetCustomAnim_Parms;
	memcpy ( &SetCustomAnim_Parms.AnimName, &AnimName, 0x8 );

	this->ProcessEvent ( pFnSetCustomAnim, &SetCustomAnim_Parms, NULL );
};

// Function T1Game.T1AnimNodePlayCustomAnim.IsPauseLastFrame
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UT1AnimNodePlayCustomAnim::IsPauseLastFrame ( )
{
	static UFunction* pFnIsPauseLastFrame = NULL;

	if ( ! pFnIsPauseLastFrame )
		pFnIsPauseLastFrame = (UFunction*) UObject::GObjObjects()->Data[ 34612 ];

	UT1AnimNodePlayCustomAnim_execIsPauseLastFrame_Parms IsPauseLastFrame_Parms;

	pFnIsPauseLastFrame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPauseLastFrame, &IsPauseLastFrame_Parms, NULL );

	pFnIsPauseLastFrame->FunctionFlags |= 0x400;

	return IsPauseLastFrame_Parms.ReturnValue;
};

// Function T1Game.T1AnimNodePlayCustomAnim.UnPauseLastFrame
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UT1AnimNodePlayCustomAnim::UnPauseLastFrame ( )
{
	static UFunction* pFnUnPauseLastFrame = NULL;

	if ( ! pFnUnPauseLastFrame )
		pFnUnPauseLastFrame = (UFunction*) UObject::GObjObjects()->Data[ 34611 ];

	UT1AnimNodePlayCustomAnim_execUnPauseLastFrame_Parms UnPauseLastFrame_Parms;

	pFnUnPauseLastFrame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnPauseLastFrame, &UnPauseLastFrame_Parms, NULL );

	pFnUnPauseLastFrame->FunctionFlags |= 0x400;
};

// Function T1Game.T1AnimNodePlayCustomAnim.PauseLastFrame
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UT1AnimNodePlayCustomAnim::PauseLastFrame ( )
{
	static UFunction* pFnPauseLastFrame = NULL;

	if ( ! pFnPauseLastFrame )
		pFnPauseLastFrame = (UFunction*) UObject::GObjObjects()->Data[ 34610 ];

	UT1AnimNodePlayCustomAnim_execPauseLastFrame_Parms PauseLastFrame_Parms;

	pFnPauseLastFrame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPauseLastFrame, &PauseLastFrame_Parms, NULL );

	pFnPauseLastFrame->FunctionFlags |= 0x400;
};

// Function T1Game.T1AnimNodePlayCustomAnim.StopCustomAnim
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          BlendOutTime                   ( CPF_Parm )

void UT1AnimNodePlayCustomAnim::StopCustomAnim ( float BlendOutTime )
{
	static UFunction* pFnStopCustomAnim = NULL;

	if ( ! pFnStopCustomAnim )
		pFnStopCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 34608 ];

	UT1AnimNodePlayCustomAnim_execStopCustomAnim_Parms StopCustomAnim_Parms;
	StopCustomAnim_Parms.BlendOutTime = BlendOutTime;

	pFnStopCustomAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopCustomAnim, &StopCustomAnim_Parms, NULL );

	pFnStopCustomAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1AnimNodePlayCustomAnim.PlayCustomAnimByDuration
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   AnimName                       ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )
// float                          MovingBlendTime                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLooping                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )
// float                          StartTime                      ( CPF_OptionalParm | CPF_Parm )
// float                          EndTime                        ( CPF_OptionalParm | CPF_Parm )
// float                          MovingBlendFadeTime            ( CPF_OptionalParm | CPF_Parm )

void UT1AnimNodePlayCustomAnim::PlayCustomAnimByDuration ( struct FName AnimName, float Duration, float BlendInTime, float BlendOutTime, float MovingBlendTime, unsigned long bLooping, unsigned long bOverride, float StartTime, float EndTime, float MovingBlendFadeTime )
{
	static UFunction* pFnPlayCustomAnimByDuration = NULL;

	if ( ! pFnPlayCustomAnimByDuration )
		pFnPlayCustomAnimByDuration = (UFunction*) UObject::GObjObjects()->Data[ 34597 ];

	UT1AnimNodePlayCustomAnim_execPlayCustomAnimByDuration_Parms PlayCustomAnimByDuration_Parms;
	memcpy ( &PlayCustomAnimByDuration_Parms.AnimName, &AnimName, 0x8 );
	PlayCustomAnimByDuration_Parms.Duration = Duration;
	PlayCustomAnimByDuration_Parms.BlendInTime = BlendInTime;
	PlayCustomAnimByDuration_Parms.BlendOutTime = BlendOutTime;
	PlayCustomAnimByDuration_Parms.MovingBlendTime = MovingBlendTime;
	PlayCustomAnimByDuration_Parms.bLooping = bLooping;
	PlayCustomAnimByDuration_Parms.bOverride = bOverride;
	PlayCustomAnimByDuration_Parms.StartTime = StartTime;
	PlayCustomAnimByDuration_Parms.EndTime = EndTime;
	PlayCustomAnimByDuration_Parms.MovingBlendFadeTime = MovingBlendFadeTime;

	pFnPlayCustomAnimByDuration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayCustomAnimByDuration, &PlayCustomAnimByDuration_Parms, NULL );

	pFnPlayCustomAnimByDuration->FunctionFlags |= 0x400;
};

// Function T1Game.T1AnimNodePlayCustomAnim.PlayCustomAnim
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   AnimName                       ( CPF_Parm )
// float                          Rate                           ( CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )
// float                          MovingBlendTime                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLooping                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )
// float                          StartTime                      ( CPF_OptionalParm | CPF_Parm )
// float                          EndTime                        ( CPF_OptionalParm | CPF_Parm )
// float                          MovingBlendFadeTime            ( CPF_OptionalParm | CPF_Parm )

float UT1AnimNodePlayCustomAnim::PlayCustomAnim ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, float MovingBlendTime, unsigned long bLooping, unsigned long bOverride, float StartTime, float EndTime, float MovingBlendFadeTime )
{
	static UFunction* pFnPlayCustomAnim = NULL;

	if ( ! pFnPlayCustomAnim )
		pFnPlayCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 34585 ];

	UT1AnimNodePlayCustomAnim_execPlayCustomAnim_Parms PlayCustomAnim_Parms;
	memcpy ( &PlayCustomAnim_Parms.AnimName, &AnimName, 0x8 );
	PlayCustomAnim_Parms.Rate = Rate;
	PlayCustomAnim_Parms.BlendInTime = BlendInTime;
	PlayCustomAnim_Parms.BlendOutTime = BlendOutTime;
	PlayCustomAnim_Parms.MovingBlendTime = MovingBlendTime;
	PlayCustomAnim_Parms.bLooping = bLooping;
	PlayCustomAnim_Parms.bOverride = bOverride;
	PlayCustomAnim_Parms.StartTime = StartTime;
	PlayCustomAnim_Parms.EndTime = EndTime;
	PlayCustomAnim_Parms.MovingBlendFadeTime = MovingBlendFadeTime;

	pFnPlayCustomAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayCustomAnim, &PlayCustomAnim_Parms, NULL );

	pFnPlayCustomAnim->FunctionFlags |= 0x400;

	return PlayCustomAnim_Parms.ReturnValue;
};

// Function T1Game.T1AnimNodePlayCustomAnim.PlayCustomNextAnim
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   _AnimName                      ( CPF_Parm )
// float                          _Rate                          ( CPF_Parm )
// float                          _BlendInTime                   ( CPF_OptionalParm | CPF_Parm )
// float                          _BlendOutTime                  ( CPF_OptionalParm | CPF_Parm )
// float                          _MovingBlendTime               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  _bLooping                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  _bOverride                     ( CPF_OptionalParm | CPF_Parm )
// float                          StartTime                      ( CPF_OptionalParm | CPF_Parm )
// float                          EndTime                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  _bDuration                     ( CPF_OptionalParm | CPF_Parm )
// float                          _MovingBlendFadeTime           ( CPF_OptionalParm | CPF_Parm )

void UT1AnimNodePlayCustomAnim::PlayCustomNextAnim ( struct FName _AnimName, float _Rate, float _BlendInTime, float _BlendOutTime, float _MovingBlendTime, unsigned long _bLooping, unsigned long _bOverride, float StartTime, float EndTime, unsigned long _bDuration, float _MovingBlendFadeTime )
{
	static UFunction* pFnPlayCustomNextAnim = NULL;

	if ( ! pFnPlayCustomNextAnim )
		pFnPlayCustomNextAnim = (UFunction*) UObject::GObjObjects()->Data[ 34573 ];

	UT1AnimNodePlayCustomAnim_execPlayCustomNextAnim_Parms PlayCustomNextAnim_Parms;
	memcpy ( &PlayCustomNextAnim_Parms._AnimName, &_AnimName, 0x8 );
	PlayCustomNextAnim_Parms._Rate = _Rate;
	PlayCustomNextAnim_Parms._BlendInTime = _BlendInTime;
	PlayCustomNextAnim_Parms._BlendOutTime = _BlendOutTime;
	PlayCustomNextAnim_Parms._MovingBlendTime = _MovingBlendTime;
	PlayCustomNextAnim_Parms._bLooping = _bLooping;
	PlayCustomNextAnim_Parms._bOverride = _bOverride;
	PlayCustomNextAnim_Parms.StartTime = StartTime;
	PlayCustomNextAnim_Parms.EndTime = EndTime;
	PlayCustomNextAnim_Parms._bDuration = _bDuration;
	PlayCustomNextAnim_Parms._MovingBlendFadeTime = _MovingBlendFadeTime;

	pFnPlayCustomNextAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayCustomNextAnim, &PlayCustomNextAnim_Parms, NULL );

	pFnPlayCustomNextAnim->FunctionFlags |= 0x400;
};

// Function T1Game.T1DropItem.Initialize
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AT1DropItem::eventInitialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 35887 ];

	AT1DropItem_eventInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function T1Game.T1DropItem.Landed
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void AT1DropItem::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 35883 ];

	AT1DropItem_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function T1Game.T1EnvObject.SetOutlineBloom
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bBloomFlag                     ( CPF_Parm )
// struct FColor                  InColor                        ( CPF_Parm )
// int                            InAlpha                        ( CPF_Parm )

void AT1EnvObject::SetOutlineBloom ( unsigned long bBloomFlag, struct FColor InColor, int InAlpha )
{
	static UFunction* pFnSetOutlineBloom = NULL;

	if ( ! pFnSetOutlineBloom )
		pFnSetOutlineBloom = (UFunction*) UObject::GObjObjects()->Data[ 36228 ];

	AT1EnvObject_execSetOutlineBloom_Parms SetOutlineBloom_Parms;
	SetOutlineBloom_Parms.bBloomFlag = bBloomFlag;
	memcpy ( &SetOutlineBloom_Parms.InColor, &InColor, 0x4 );
	SetOutlineBloom_Parms.InAlpha = InAlpha;

	pFnSetOutlineBloom->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOutlineBloom, &SetOutlineBloom_Parms, NULL );

	pFnSetOutlineBloom->FunctionFlags |= 0x400;
};

// Function T1Game.T1EnvObject.SetEnvEnable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void AT1EnvObject::SetEnvEnable ( unsigned long bEnable )
{
	static UFunction* pFnSetEnvEnable = NULL;

	if ( ! pFnSetEnvEnable )
		pFnSetEnvEnable = (UFunction*) UObject::GObjObjects()->Data[ 36226 ];

	AT1EnvObject_execSetEnvEnable_Parms SetEnvEnable_Parms;
	SetEnvEnable_Parms.bEnable = bEnable;

	pFnSetEnvEnable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnvEnable, &SetEnvEnable_Parms, NULL );

	pFnSetEnvEnable->FunctionFlags |= 0x400;
};

// Function T1Game.T1AirDashPoint.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AT1AirDashPoint::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 34516 ];

	AT1AirDashPoint_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function T1Game.T1GatherObject.SetOutlineBloom
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bBloomFlag                     ( CPF_Parm )
// struct FColor                  InColor                        ( CPF_Parm )
// int                            InAlpha                        ( CPF_Parm )

void AT1GatherObject::SetOutlineBloom ( unsigned long bBloomFlag, struct FColor InColor, int InAlpha )
{
	static UFunction* pFnSetOutlineBloom = NULL;

	if ( ! pFnSetOutlineBloom )
		pFnSetOutlineBloom = (UFunction*) UObject::GObjObjects()->Data[ 36308 ];

	AT1GatherObject_execSetOutlineBloom_Parms SetOutlineBloom_Parms;
	SetOutlineBloom_Parms.bBloomFlag = bBloomFlag;
	memcpy ( &SetOutlineBloom_Parms.InColor, &InColor, 0x4 );
	SetOutlineBloom_Parms.InAlpha = InAlpha;

	pFnSetOutlineBloom->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOutlineBloom, &SetOutlineBloom_Parms, NULL );

	pFnSetOutlineBloom->FunctionFlags |= 0x400;
};

// Function T1Game.T1GameInfo.Logout
// [0x00020002] 
// Parameters infos:
// class AController*             Exiting                        ( CPF_Parm )

void AT1GameInfo::Logout ( class AController* Exiting )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 36280 ];

	AT1GameInfo_execLogout_Parms Logout_Parms;
	Logout_Parms.Exiting = Exiting;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );
};

// Function T1Game.T1GameInfo.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void AT1GameInfo::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 36278 ];

	AT1GameInfo_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function T1Game.T1GameInfo.Login
// [0x00C20802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Portal                         ( CPF_Parm )
// struct FString                 Options                        ( CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm )

class APlayerController* AT1GameInfo::eventLogin ( struct FString Portal, struct FString Options, struct FString* ErrorMessage )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 36270 ];

	AT1GameInfo_eventLogin_Parms Login_Parms;
	memcpy ( &Login_Parms.Portal, &Portal, 0xC );
	memcpy ( &Login_Parms.Options, &Options, 0xC );

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	if ( ErrorMessage )
		memcpy ( ErrorMessage, &Login_Parms.ErrorMessage, 0xC );

	return Login_Parms.ReturnValue;
};

// Function T1Game.T1GameInfo.PreLogin
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// struct FString                 Options                        ( CPF_Parm )
// struct FString                 Address                        ( CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm )

void AT1GameInfo::eventPreLogin ( struct FString Options, struct FString Address, struct FString* ErrorMessage )
{
	static UFunction* pFnPreLogin = NULL;

	if ( ! pFnPreLogin )
		pFnPreLogin = (UFunction*) UObject::GObjObjects()->Data[ 36266 ];

	AT1GameInfo_eventPreLogin_Parms PreLogin_Parms;
	memcpy ( &PreLogin_Parms.Options, &Options, 0xC );
	memcpy ( &PreLogin_Parms.Address, &Address, 0xC );

	this->ProcessEvent ( pFnPreLogin, &PreLogin_Parms, NULL );

	if ( ErrorMessage )
		memcpy ( ErrorMessage, &PreLogin_Parms.ErrorMessage, 0xC );
};

// Function T1Game.T1GameInfo.GetDefaultPlayerClass
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             C                              ( CPF_Parm )

class UClass* AT1GameInfo::GetDefaultPlayerClass ( class AController* C )
{
	static UFunction* pFnGetDefaultPlayerClass = NULL;

	if ( ! pFnGetDefaultPlayerClass )
		pFnGetDefaultPlayerClass = (UFunction*) UObject::GObjObjects()->Data[ 36263 ];

	AT1GameInfo_execGetDefaultPlayerClass_Parms GetDefaultPlayerClass_Parms;
	GetDefaultPlayerClass_Parms.C = C;

	this->ProcessEvent ( pFnGetDefaultPlayerClass, &GetDefaultPlayerClass_Parms, NULL );

	return GetDefaultPlayerClass_Parms.ReturnValue;
};

// Function T1Game.T1GameInfo.SpawnDefaultPawnFor
// [0x00820002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* AT1GameInfo::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 36256 ];

	AT1GameInfo_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function T1Game.T1GameInfo.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AT1GameInfo::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 36253 ];

	AT1GameInfo_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function T1Game.T1GameInfo.T1FindPlayerStart
// [0x00024002] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Player                         ( CPF_Parm )
// struct FString                 IncomingName                   ( CPF_OptionalParm | CPF_Parm )

class ANavigationPoint* AT1GameInfo::T1FindPlayerStart ( class AController* Player, struct FString IncomingName )
{
	static UFunction* pFnT1FindPlayerStart = NULL;

	if ( ! pFnT1FindPlayerStart )
		pFnT1FindPlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 36246 ];

	AT1GameInfo_execT1FindPlayerStart_Parms T1FindPlayerStart_Parms;
	T1FindPlayerStart_Parms.Player = Player;
	memcpy ( &T1FindPlayerStart_Parms.IncomingName, &IncomingName, 0xC );

	this->ProcessEvent ( pFnT1FindPlayerStart, &T1FindPlayerStart_Parms, NULL );

	return T1FindPlayerStart_Parms.ReturnValue;
};


/*
# ========================================================================================= #
# Class Pointers
# ========================================================================================= #
*/

UClass* UT1EnvObjCylinderComponent::pClassPointer = NULL;
UClass* UT1EnvObjPortalCylinderComponent::pClassPointer = NULL;
UClass* UT1GameClient::pClassPointer = NULL;
UClass* UT1GameUIUExporter::pClassPointer = NULL;
UClass* UT1GameViewportClient::pClassPointer = NULL;
UClass* AT1MapVolume::pClassPointer = NULL;
UClass* AT1PlayerController::pClassPointer = NULL;
UClass* UT1PlayerInput::pClassPointer = NULL;
UClass* AT1PlayerStart::pClassPointer = NULL;
UClass* AT1SceneCaptureMapVolumeActor::pClassPointer = NULL;
UClass* UT1SceneCaptureMapVolumeComponent::pClassPointer = NULL;
UClass* AT1TerrainProperty::pClassPointer = NULL;
UClass* AT1TerrainViewer::pClassPointer = NULL;
UClass* AT1ZoneProperty::pClassPointer = NULL;
UClass* AT1CustomPawn::pClassPointer = NULL;
UClass* AT1Pawn::pClassPointer = NULL;
UClass* UT1CamMod_ScreenMove::pClassPointer = NULL;
UClass* UT1CamMod_ScreenShake::pClassPointer = NULL;
UClass* AT1PlayerCamera::pClassPointer = NULL;
UClass* UT1ConsoleCmd::pClassPointer = NULL;
UClass* UT1AnimNodeAimOffset::pClassPointer = NULL;
UClass* UT1AnimNodeBlendByAirDash::pClassPointer = NULL;
UClass* UT1AnimNodeBlendByEnvObjState::pClassPointer = NULL;
UClass* UT1AnimNodeBlendByFalling::pClassPointer = NULL;
UClass* UT1AnimNodeBlendByGatherObjState::pClassPointer = NULL;
UClass* UT1AnimNodeBlendByPhysics::pClassPointer = NULL;
UClass* UT1AnimNodeBlendBySpeed::pClassPointer = NULL;
UClass* UT1AnimNodeBlendByState::pClassPointer = NULL;
UClass* UT1AnimNodeBlendByWalkMode::pClassPointer = NULL;
UClass* UT1AnimNodeBlendPerBone::pClassPointer = NULL;
UClass* UT1AnimNodeByDirection::pClassPointer = NULL;
UClass* UT1AnimNodeByState::pClassPointer = NULL;
UClass* UT1AnimNodePlayCustomAnim::pClassPointer = NULL;
UClass* UT1AnimNodeSequence::pClassPointer = NULL;
UClass* UT1AnimNotify_ChangeAttachSlot::pClassPointer = NULL;
UClass* UT1AnimNotify_ViewShake::pClassPointer = NULL;
UClass* UT1SkelControlArmWeaponPlacement::pClassPointer = NULL;
UClass* UT1AnimNotify_Emitter::pClassPointer = NULL;
UClass* AT1DropItem::pClassPointer = NULL;
UClass* AT1FieldItem::pClassPointer = NULL;
UClass* AT1Actor::pClassPointer = NULL;
UClass* AT1EnvObject::pClassPointer = NULL;
UClass* AT1NpcArea::pClassPointer = NULL;
UClass* AT1AirDashPoint::pClassPointer = NULL;
UClass* AT1AreaFlag::pClassPointer = NULL;
UClass* AT1CampFire::pClassPointer = NULL;
UClass* AT1GatherObject::pClassPointer = NULL;
UClass* AT1PCSpawnPoint::pClassPointer = NULL;
UClass* AT1WayPointActor::pClassPointer = NULL;
UClass* AT1GameInfo::pClassPointer = NULL;

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif