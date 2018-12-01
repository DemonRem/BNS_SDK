/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UnrealEd_classes.cpp
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

// Function UnrealEd.CurveEdPresetBase.GenerateCurveData
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm )

bool UCurveEdPresetBase::eventGenerateCurveData ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurveData = NULL;

	if ( ! pFnGenerateCurveData )
		pFnGenerateCurveData = (UFunction*) UObject::GObjObjects()->Data[ 33836 ];

	UCurveEdPresetBase_eventGenerateCurveData_Parms GenerateCurveData_Parms;

	this->ProcessEvent ( pFnGenerateCurveData, &GenerateCurveData_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurveData_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurveData_Parms.GeneratedPoints, 0xC );

	return GenerateCurveData_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.FetchRequiredKeyInTimes
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )

bool UCurveEdPresetBase::eventFetchRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnFetchRequiredKeyInTimes = NULL;

	if ( ! pFnFetchRequiredKeyInTimes )
		pFnFetchRequiredKeyInTimes = (UFunction*) UObject::GObjObjects()->Data[ 33832 ];

	UCurveEdPresetBase_eventFetchRequiredKeyInTimes_Parms FetchRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnFetchRequiredKeyInTimes, &FetchRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &FetchRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return FetchRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.CheckAreSettingsValid
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPresetBase::eventCheckAreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnCheckAreSettingsValid = NULL;

	if ( ! pFnCheckAreSettingsValid )
		pFnCheckAreSettingsValid = (UFunction*) UObject::GObjObjects()->Data[ 33829 ];

	UCurveEdPresetBase_eventCheckAreSettingsValid_Parms CheckAreSettingsValid_Parms;
	CheckAreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnCheckAreSettingsValid, &CheckAreSettingsValid_Parms, NULL );

	return CheckAreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.FetchDisplayName
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FString                 OutName                        ( CPF_Parm | CPF_OutParm )

void UCurveEdPresetBase::eventFetchDisplayName ( struct FString* OutName )
{
	static UFunction* pFnFetchDisplayName = NULL;

	if ( ! pFnFetchDisplayName )
		pFnFetchDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 33827 ];

	UCurveEdPresetBase_eventFetchDisplayName_Parms FetchDisplayName_Parms;

	this->ProcessEvent ( pFnFetchDisplayName, &FetchDisplayName_Parms, NULL );

	if ( OutName )
		memcpy ( OutName, &FetchDisplayName_Parms.OutName, 0xC );
};

// Function UnrealEd.CurveEdPresetBase.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm )

bool UCurveEdPresetBase::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = (UFunction*) UObject::GObjObjects()->Data[ 33820 ];

	UCurveEdPresetBase_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )

bool UCurveEdPresetBase::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = (UFunction*) UObject::GObjObjects()->Data[ 33816 ];

	UCurveEdPresetBase_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPresetBase::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = (UFunction*) UObject::GObjObjects()->Data[ 33813 ];

	UCurveEdPresetBase_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FString UCurveEdPresetBase::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 33810 ];

	UCurveEdPresetBase_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_CosWave::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = (UFunction*) UObject::GObjObjects()->Data[ 33861 ];

	UCurveEdPreset_CosWave_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_CosWave::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = (UFunction*) UObject::GObjObjects()->Data[ 33851 ];

	UCurveEdPreset_CosWave_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_CosWave::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = (UFunction*) UObject::GObjObjects()->Data[ 33848 ];

	UCurveEdPreset_CosWave_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FString UCurveEdPreset_CosWave::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 33845 ];

	UCurveEdPreset_CosWave_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_LinearDecay::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = (UFunction*) UObject::GObjObjects()->Data[ 33889 ];

	UCurveEdPreset_LinearDecay_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_LinearDecay::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = (UFunction*) UObject::GObjObjects()->Data[ 33882 ];

	UCurveEdPreset_LinearDecay_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_LinearDecay::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = (UFunction*) UObject::GObjObjects()->Data[ 33879 ];

	UCurveEdPreset_LinearDecay_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FString UCurveEdPreset_LinearDecay::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 33876 ];

	UCurveEdPreset_LinearDecay_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_Nothing.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FString UCurveEdPreset_Nothing::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 33901 ];

	UCurveEdPreset_Nothing_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_SineWave::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = (UFunction*) UObject::GObjObjects()->Data[ 33923 ];

	UCurveEdPreset_SineWave_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_SineWave::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = (UFunction*) UObject::GObjObjects()->Data[ 33913 ];

	UCurveEdPreset_SineWave_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_SineWave::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = (UFunction*) UObject::GObjObjects()->Data[ 33910 ];

	UCurveEdPreset_SineWave_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FString UCurveEdPreset_SineWave::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 33907 ];

	UCurveEdPreset_SineWave_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.SaveUserSetPointFile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCurveEdPreset_UserSet::SaveUserSetPointFile ( )
{
	static UFunction* pFnSaveUserSetPointFile = NULL;

	if ( ! pFnSaveUserSetPointFile )
		pFnSaveUserSetPointFile = (UFunction*) UObject::GObjObjects()->Data[ 33966 ];

	UCurveEdPreset_UserSet_execSaveUserSetPointFile_Parms SaveUserSetPointFile_Parms;

	this->ProcessEvent ( pFnSaveUserSetPointFile, &SaveUserSetPointFile_Parms, NULL );

	return SaveUserSetPointFile_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.LoadUserSetPointFile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCurveEdPreset_UserSet::LoadUserSetPointFile ( )
{
	static UFunction* pFnLoadUserSetPointFile = NULL;

	if ( ! pFnLoadUserSetPointFile )
		pFnLoadUserSetPointFile = (UFunction*) UObject::GObjObjects()->Data[ 33963 ];

	UCurveEdPreset_UserSet_execLoadUserSetPointFile_Parms LoadUserSetPointFile_Parms;

	this->ProcessEvent ( pFnLoadUserSetPointFile, &LoadUserSetPointFile_Parms, NULL );

	return LoadUserSetPointFile_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.SetCurve
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm )

bool UCurveEdPreset_UserSet::SetCurve ( TArray< struct FPresetGeneratedPoint > GeneratedPoints )
{
	static UFunction* pFnSetCurve = NULL;

	if ( ! pFnSetCurve )
		pFnSetCurve = (UFunction*) UObject::GObjObjects()->Data[ 33958 ];

	UCurveEdPreset_UserSet_execSetCurve_Parms SetCurve_Parms;
	memcpy ( &SetCurve_Parms.GeneratedPoints, &GeneratedPoints, 0xC );

	this->ProcessEvent ( pFnSetCurve, &SetCurve_Parms, NULL );

	return SetCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_UserSet::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = (UFunction*) UObject::GObjObjects()->Data[ 33948 ];

	UCurveEdPreset_UserSet_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm )

bool UCurveEdPreset_UserSet::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = (UFunction*) UObject::GObjObjects()->Data[ 33941 ];

	UCurveEdPreset_UserSet_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_UserSet::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = (UFunction*) UObject::GObjObjects()->Data[ 33938 ];

	UCurveEdPreset_UserSet_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FString UCurveEdPreset_UserSet::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 33935 ];

	UCurveEdPreset_UserSet_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.EditorUISceneClient.ShowDockingStacks
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UEditorUISceneClient::ShowDockingStacks ( )
{
	static UFunction* pFnShowDockingStacks = NULL;

	if ( ! pFnShowDockingStacks )
		pFnShowDockingStacks = (UFunction*) UObject::GObjObjects()->Data[ 34015 ];

	UEditorUISceneClient_execShowDockingStacks_Parms ShowDockingStacks_Parms;

	this->ProcessEvent ( pFnShowDockingStacks, &ShowDockingStacks_Parms, NULL );
};

// Function UnrealEd.UISceneManager.GetSupportedUIStates
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  WidgetClass                    ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FUIStateResourceInfo > out_SupportedStates            ( CPF_Parm | CPF_OutParm )

void UUISceneManager::GetSupportedUIStates ( class UClass* WidgetClass, TArray< struct FUIStateResourceInfo >* out_SupportedStates )
{
	static UFunction* pFnGetSupportedUIStates = NULL;

	if ( ! pFnGetSupportedUIStates )
		pFnGetSupportedUIStates = (UFunction*) UObject::GObjObjects()->Data[ 34418 ];

	UUISceneManager_execGetSupportedUIStates_Parms GetSupportedUIStates_Parms;
	GetSupportedUIStates_Parms.WidgetClass = WidgetClass;

	pFnGetSupportedUIStates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSupportedUIStates, &GetSupportedUIStates_Parms, NULL );

	pFnGetSupportedUIStates->FunctionFlags |= 0x400;

	if ( out_SupportedStates )
		memcpy ( out_SupportedStates, &GetSupportedUIStates_Parms.out_SupportedStates, 0xC );
};

// Function UnrealEd.UILayer.FindNodeIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 NodeObject                     ( CPF_Const | CPF_Parm )

int UUILayer::FindNodeIndex ( class UObject* NodeObject )
{
	static UFunction* pFnFindNodeIndex = NULL;

	if ( ! pFnFindNodeIndex )
		pFnFindNodeIndex = (UFunction*) UObject::GObjObjects()->Data[ 34366 ];

	UUILayer_execFindNodeIndex_Parms FindNodeIndex_Parms;
	FindNodeIndex_Parms.NodeObject = NodeObject;

	pFnFindNodeIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindNodeIndex, &FindNodeIndex_Parms, NULL );

	pFnFindNodeIndex->FunctionFlags |= 0x400;

	return FindNodeIndex_Parms.ReturnValue;
};

// Function UnrealEd.UILayer.RemoveNode
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUILayerNode            ExistingNode                   ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUILayer::RemoveNode ( struct FUILayerNode* ExistingNode )
{
	static UFunction* pFnRemoveNode = NULL;

	if ( ! pFnRemoveNode )
		pFnRemoveNode = (UFunction*) UObject::GObjObjects()->Data[ 34363 ];

	UUILayer_execRemoveNode_Parms RemoveNode_Parms;

	pFnRemoveNode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveNode, &RemoveNode_Parms, NULL );

	pFnRemoveNode->FunctionFlags |= 0x400;

	if ( ExistingNode )
		memcpy ( ExistingNode, &RemoveNode_Parms.ExistingNode, 0xC );

	return RemoveNode_Parms.ReturnValue;
};

// Function UnrealEd.UILayer.InsertNode
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            InsertIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FUILayerNode            NodeToInsert                   ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUILayer::InsertNode ( int InsertIndex, struct FUILayerNode* NodeToInsert )
{
	static UFunction* pFnInsertNode = NULL;

	if ( ! pFnInsertNode )
		pFnInsertNode = (UFunction*) UObject::GObjObjects()->Data[ 34359 ];

	UUILayer_execInsertNode_Parms InsertNode_Parms;
	InsertNode_Parms.InsertIndex = InsertIndex;

	pFnInsertNode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInsertNode, &InsertNode_Parms, NULL );

	pFnInsertNode->FunctionFlags |= 0x400;

	if ( NodeToInsert )
		memcpy ( NodeToInsert, &InsertNode_Parms.NodeToInsert, 0xC );

	return InsertNode_Parms.ReturnValue;
};


/*
# ========================================================================================= #
# Class Pointers
# ========================================================================================= #
*/

UClass* UAnimNodeEditInfo::pClassPointer = NULL;
UClass* UAnimNodeEditInfo_AimOffset::pClassPointer = NULL;
UClass* UThumbnailLabelRenderer::pClassPointer = NULL;
UClass* UAnimSetLabelRenderer::pClassPointer = NULL;
UClass* UAnimTreeEdSkelComponent::pClassPointer = NULL;
UClass* UAnimTreeLabelRenderer::pClassPointer = NULL;
UClass* UThumbnailRenderer::pClassPointer = NULL;
UClass* UIconThumbnailRenderer::pClassPointer = NULL;
UClass* UArchetypeThumbnailRenderer::pClassPointer = NULL;
UClass* UASVSkelComponent::pClassPointer = NULL;
UClass* UBrowserManager::pClassPointer = NULL;
UClass* UCascadeOptions::pClassPointer = NULL;
UClass* UCascadePreviewComponent::pClassPointer = NULL;
UClass* UCurveEdOptions::pClassPointer = NULL;
UClass* UCurveEdPresetBase::pClassPointer = NULL;
UClass* UCurveEdPreset_CosWave::pClassPointer = NULL;
UClass* UCurveEdPreset_LinearDecay::pClassPointer = NULL;
UClass* UCurveEdPreset_Nothing::pClassPointer = NULL;
UClass* UCurveEdPreset_SineWave::pClassPointer = NULL;
UClass* UCurveEdPreset_UserSet::pClassPointer = NULL;
UClass* UPropertyInputProxy::pClassPointer = NULL;
UClass* UCustomInputProxy_Base::pClassPointer = NULL;
UClass* UDefaultSizedThumbnailRenderer::pClassPointer = NULL;
UClass* UEditorUISceneClient::pClassPointer = NULL;
UClass* UFaceFXStudioSkelComponent::pClassPointer = NULL;
UClass* UFontAttributeThumbnailRenderer::pClassPointer = NULL;
UClass* UFontColorThumbnailRenderer::pClassPointer = NULL;
UClass* UFontFaceThumbnailRenderer::pClassPointer = NULL;
UClass* UFontResourceThumbnailRenderer::pClassPointer = NULL;
UClass* UFontSetThumbnailRenderer::pClassPointer = NULL;
UClass* UTextureThumbnailRenderer::pClassPointer = NULL;
UClass* UFontThumbnailRenderer::pClassPointer = NULL;
UClass* UStaticMeshLabelRenderer::pClassPointer = NULL;
UClass* UFracturedStaticMeshLabelRenderer::pClassPointer = NULL;
UClass* UGenericBrowserType::pClassPointer = NULL;
UClass* UGenericBrowserType_Custom::pClassPointer = NULL;
UClass* UGenericBrowserType_All::pClassPointer = NULL;
UClass* UGenericBrowserType_Animation::pClassPointer = NULL;
UClass* UGenericBrowserType_AnimTree::pClassPointer = NULL;
UClass* UGenericBrowserType_Archetype::pClassPointer = NULL;
UClass* UGenericBrowserType_CameraAnim::pClassPointer = NULL;
UClass* UGenericBrowserType_CurveEdPresetCurve::pClassPointer = NULL;
UClass* UGenericBrowserType_DecalMaterial::pClassPointer = NULL;
UClass* UGenericBrowserType_DialogueSet::pClassPointer = NULL;
UClass* UGenericBrowserType_DistributionFloatConstantCurve::pClassPointer = NULL;
UClass* UGenericBrowserType_EventJumpTemplate::pClassPointer = NULL;
UClass* UGenericBrowserType_FaceFXAnimSet::pClassPointer = NULL;
UClass* UGenericBrowserType_FaceFXAsset::pClassPointer = NULL;
UClass* UGenericBrowserType_Font::pClassPointer = NULL;
UClass* UGenericBrowserType_FontAttribute::pClassPointer = NULL;
UClass* UGenericBrowserType_FontColor::pClassPointer = NULL;
UClass* UGenericBrowserType_FontFace::pClassPointer = NULL;
UClass* UGenericBrowserType_FontResource::pClassPointer = NULL;
UClass* UGenericBrowserType_FontSet::pClassPointer = NULL;
UClass* UGenericBrowserType_StaticMesh::pClassPointer = NULL;
UClass* UGenericBrowserType_FracturedStaticMesh::pClassPointer = NULL;
UClass* UGenericBrowserType_ImageSet::pClassPointer = NULL;
UClass* UGenericBrowserType_LensFlare::pClassPointer = NULL;
UClass* UGenericBrowserType_Material::pClassPointer = NULL;
UClass* UGenericBrowserType_MaterialInstanceConstant::pClassPointer = NULL;
UClass* UGenericBrowserType_MaterialInstanceTimeVarying::pClassPointer = NULL;
UClass* UGenericBrowserType_MaterialLackingPhysMat::pClassPointer = NULL;
UClass* UGenericBrowserType_MorphTargetSet::pClassPointer = NULL;
UClass* UGenericBrowserType_MorphWeightSequence::pClassPointer = NULL;
UClass* UGenericBrowserType_ObjectNote::pClassPointer = NULL;
UClass* UGenericBrowserType_ParticleSet::pClassPointer = NULL;
UClass* UGenericBrowserType_ParticleSystem::pClassPointer = NULL;
UClass* UGenericBrowserType_PhysicalMaterial::pClassPointer = NULL;
UClass* UGenericBrowserType_PhysicsAsset::pClassPointer = NULL;
UClass* UGenericBrowserType_PhysXDestructible::pClassPointer = NULL;
UClass* UGenericBrowserType_PhysXParticleSystem::pClassPointer = NULL;
UClass* UGenericBrowserType_PlayerCameraAnim::pClassPointer = NULL;
UClass* UGenericBrowserType_PostProcess::pClassPointer = NULL;
UClass* UGenericBrowserType_PostProcessParameter::pClassPointer = NULL;
UClass* UGenericBrowserType_Prefab::pClassPointer = NULL;
UClass* UGenericBrowserType_ProgressEffect::pClassPointer = NULL;
UClass* UGenericBrowserType_Texture::pClassPointer = NULL;
UClass* UGenericBrowserType_RenderTexture::pClassPointer = NULL;
UClass* UGenericBrowserType_Sequence::pClassPointer = NULL;
UClass* UGenericBrowserType_ShowObject::pClassPointer = NULL;
UClass* UGenericBrowserType_SignalInfo::pClassPointer = NULL;
UClass* UGenericBrowserType_SkeletalMesh::pClassPointer = NULL;
UClass* UGenericBrowserType_SkeletalMeshCustomizeSet::pClassPointer = NULL;
UClass* UGenericBrowserType_SkeletalMeshFactorSet::pClassPointer = NULL;
UClass* UGenericBrowserType_Sounds::pClassPointer = NULL;
UClass* UGenericBrowserType_SoundCue::pClassPointer = NULL;
UClass* UGenericBrowserType_SoundMode::pClassPointer = NULL;
UClass* UGenericBrowserType_SoundSet::pClassPointer = NULL;
UClass* UGenericBrowserType_SoundWave::pClassPointer = NULL;
UClass* UGenericBrowserType_SpeechRecognition::pClassPointer = NULL;
UClass* UGenericBrowserType_TerrainLayer::pClassPointer = NULL;
UClass* UGenericBrowserType_TerrainMaterial::pClassPointer = NULL;
UClass* UGenericBrowserType_TextureWithAlpha::pClassPointer = NULL;
UClass* UGenericBrowserType_TrailTemplate::pClassPointer = NULL;
UClass* UGenericBrowserType_UIActionData::pClassPointer = NULL;
UClass* UGenericBrowserType_UIActionGroupData::pClassPointer = NULL;
UClass* UGenericBrowserType_UIArchetype::pClassPointer = NULL;
UClass* UGenericBrowserType_UIScene::pClassPointer = NULL;
UClass* UGenericBrowserType_UISkin::pClassPointer = NULL;
UClass* UGenericBrowserType_VoiceSet::pClassPointer = NULL;
UClass* UGenericThumbnailLabelRenderer::pClassPointer = NULL;
UClass* UImageSetThumbnailRenderer::pClassPointer = NULL;
UClass* UInterpEdOptions::pClassPointer = NULL;
UClass* UInterpTrackHelper::pClassPointer = NULL;
UClass* UInterpTrackAnimControlHelper::pClassPointer = NULL;
UClass* UInterpTrackVectorPropHelper::pClassPointer = NULL;
UClass* UInterpTrackColorPropHelper::pClassPointer = NULL;
UClass* UInterpTrackDirectorHelper::pClassPointer = NULL;
UClass* UInterpTrackEventHelper::pClassPointer = NULL;
UClass* UInterpTrackFaceFXHelper::pClassPointer = NULL;
UClass* UInterpTrackFloatPropHelper::pClassPointer = NULL;
UClass* UInterpTrackParticleReplayHelper::pClassPointer = NULL;
UClass* UInterpTrackParticleSystemToggleHelper::pClassPointer = NULL;
UClass* UInterpTrackSoundHelper::pClassPointer = NULL;
UClass* UInterpTrackToggleHelper::pClassPointer = NULL;
UClass* UInterpTrackVisibilityHelper::pClassPointer = NULL;
UClass* UInterpTrackVoiceHelper::pClassPointer = NULL;
UClass* UKismetBindings::pClassPointer = NULL;
UClass* ULensFlareEditorOptions::pClassPointer = NULL;
UClass* ULensFlareEditorPropertyWrapper::pClassPointer = NULL;
UClass* ULensFlarePreviewComponent::pClassPointer = NULL;
UClass* ULensFlareThumbnailRenderer::pClassPointer = NULL;
UClass* UMaterialEditorInstanceConstant::pClassPointer = NULL;
UClass* UMaterialEditorInstanceTimeVarying::pClassPointer = NULL;
UClass* UMaterialEditorMeshComponent::pClassPointer = NULL;
UClass* UMaterialEditorOptions::pClassPointer = NULL;
UClass* UMaterialEditorSkeletalMeshComponent::pClassPointer = NULL;
UClass* UMaterialInstanceLabelRenderer::pClassPointer = NULL;
UClass* UMaterialInstanceThumbnailRenderer::pClassPointer = NULL;
UClass* UMemCountThumbnailLabelRenderer::pClassPointer = NULL;
UClass* UParticleSystemLabelRenderer::pClassPointer = NULL;
UClass* UParticleSystemThumbnailRenderer::pClassPointer = NULL;
UClass* UPhATSimOptions::pClassPointer = NULL;
UClass* UPhATSkeletalMeshComponent::pClassPointer = NULL;
UClass* UPhysicsAssetLabelRenderer::pClassPointer = NULL;
UClass* UPhysXDestructibleLabelRenderer::pClassPointer = NULL;
UClass* UPhysXFractureOptions::pClassPointer = NULL;
UClass* UPropertyDrawProxy::pClassPointer = NULL;
UClass* UPlayerInputMask_CustomDrawProxy::pClassPointer = NULL;
UClass* UPropertyInputArrayItemBase::pClassPointer = NULL;
UClass* UPropertyInputBool::pClassPointer = NULL;
UClass* UPlayerInputMask_CustomInputProxy::pClassPointer = NULL;
UClass* UPostProcessLabelRenderer::pClassPointer = NULL;
UClass* UPrefabThumbnailRenderer::pClassPointer = NULL;
UClass* UPropertyInputCombo::pClassPointer = NULL;
UClass* UPropertyInputEditInline::pClassPointer = NULL;
UClass* UPropertyInputText::pClassPointer = NULL;
UClass* USequenceObjectHelper::pClassPointer = NULL;
UClass* USkeletalMeshLabelRenderer::pClassPointer = NULL;
UClass* USkeletalMeshThumbnailRenderer::pClassPointer = NULL;
UClass* USoundLabelRenderer::pClassPointer = NULL;
UClass* USoundNodeHelper::pClassPointer = NULL;
UClass* UStaticMeshEditorComponent::pClassPointer = NULL;
UClass* UStaticMeshThumbnailRenderer::pClassPointer = NULL;
UClass* UTerrainEditOptions::pClassPointer = NULL;
UClass* UTextureCubeThumbnailRenderer::pClassPointer = NULL;
UClass* UThumbnailManager::pClassPointer = NULL;
UClass* ATopRenderVolumeActor::pClassPointer = NULL;
UClass* UUIActionDataThumbnailRenderer::pClassPointer = NULL;
UClass* UUIActionGroupDataThumbnailRenderer::pClassPointer = NULL;
UClass* UUIEvent_MetaObjectHelper::pClassPointer = NULL;
UClass* UUISceneExporter::pClassPointer = NULL;
UClass* UUISceneFactory::pClassPointer = NULL;
UClass* UUISceneFactoryNew::pClassPointer = NULL;
UClass* UUISceneFactoryText::pClassPointer = NULL;
UClass* UUISceneManager::pClassPointer = NULL;
UClass* UUISceneThumbnailRenderer::pClassPointer = NULL;
UClass* UUISequenceHelper::pClassPointer = NULL;
UClass* UUISequenceObjectHelper::pClassPointer = NULL;
UClass* UUIState_CustomInputProxy::pClassPointer = NULL;
UClass* UUIStateClass_CustomInputProxy::pClassPointer = NULL;
UClass* UUITexture_CustomDrawProxy::pClassPointer = NULL;
UClass* UUITexture_CustomInputProxy::pClassPointer = NULL;
UClass* UUnrealEdEngine::pClassPointer = NULL;
UClass* UUnrealEdKeyBindings::pClassPointer = NULL;
UClass* UUnrealEdOptions::pClassPointer = NULL;
UClass* UCascadeParticleSystemComponent::pClassPointer = NULL;
UClass* UCustomPropertyItemBindings::pClassPointer = NULL;
UClass* UObjectEditorViewportInput::pClassPointer = NULL;
UClass* USequenceOpHelper_CalloutInputProxy::pClassPointer = NULL;
UClass* UUIEditorOptions::pClassPointer = NULL;
UClass* UUILayer::pClassPointer = NULL;
UClass* UUILayerRoot::pClassPointer = NULL;
UClass* UUIPreviewString::pClassPointer = NULL;

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif