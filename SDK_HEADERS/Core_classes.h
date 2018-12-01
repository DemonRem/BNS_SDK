#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
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

#define CONST_INDEX_NONE                                         -1
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EFilterTickType
/*enum EFilterTickType
{
	FTT_Always                                         = 0,
	FTT_None                                           = 1,
	FTT_MAX                                            = 2
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_MAX                                             = 4
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Component.AnimAttachHideType
/*enum AnimAttachHideType
{
	AH_None                                            = 0,
	AH_Gadget                                          = 1,
	AH_MAX                                             = 2
};*/

// Enum Core.Component.CommonPhysicsUseType
/*enum CommonPhysicsUseType
{
	CPHYSICS_Self                                      = 0,
	CPHYSICS_TwoLegs                                   = 1,
	CPHYSICS_FourLegs                                  = 2,
	CPHYSICS_MAX                                       = 3
};*/

// Enum Core.Component.Sound_Dialogues
/*enum Sound_Dialogues
{
	Dialogue_None                                      = 0,
	Dialogue_Type1                                     = 1,
	Dialogue_Type2                                     = 2,
	Dialogue_Type3                                     = 3,
	Dialogue_MAX                                       = 4
};*/

// Enum Core.Component.Sound_Weapons
/*enum Sound_Weapons
{
	Weapon_None                                        = 0,
	Weapon_Sword                                       = 1,
	Weapon_BigSword                                    = 2,
	Weapon_GreatSword                                  = 3,
	Weapon_Dagger                                      = 4,
	Weapon_Forceshot                                   = 5,
	Weapon_Blunt_S                                     = 6,
	Weapon_Blunt_M                                     = 7,
	Weapon_BigHarp                                     = 8,
	Weapon_Column                                      = 9,
	Weapon_Axe                                         = 10,
	Weapon_Shot                                        = 11,
	Weapon_BigShot                                     = 12,
	Weapon_Arrow                                       = 13,
	Weapon_Bomber                                      = 14,
	Weapon_Hammer                                      = 15,
	Weapon_WoodStick                                   = 16,
	Weapon_Whip                                        = 17,
	Weapon_ChainSickle                                 = 18,
	Weapon_SoulBooster                                 = 19,
	Weapon_Vajra                                       = 20,
	Weapon_MAX                                         = 21
};*/

// Enum Core.Component.Sound_Materials
/*enum Sound_Materials
{
	Material_None                                      = 0,
	Material_1_Fiber                                   = 1,
	Material_2_Leather                                 = 2,
	Material_3_Hardleather                             = 3,
	Material_4_Metal                                   = 4,
	Material_5_Heavymetal                              = 5,
	Material_6_Chain                                   = 6,
	Material_7_Wood                                    = 7,
	Material_8_Bone                                    = 8,
	Material_9_Stone                                   = 9,
	Material_10_Glass                                  = 10,
	Material_11_Slime                                  = 11,
	Material_12_Liquid                                 = 12,
	Material_13_Flame                                  = 13,
	Material_MAX                                       = 14
};*/

// Enum Core.Component.Sound_AttachItems
/*enum Sound_AttachItems
{
	AttachItem_None                                    = 0,
	AttachItem_Chain                                   = 1,
	AttachItem_Wood                                    = 2,
	AttachItem_Shell                                   = 3,
	AttachItem_Fabric                                  = 4,
	AttachItem_HeavyFabric                             = 5,
	AttachItem_Armor                                   = 6,
	AttachItem_HeavyArmor                              = 7,
	AttachItem_SimpleAcc                               = 8,
	AttachItem_HeavyAcc                                = 9,
	AttachItem_SimpleRing                              = 10,
	AttachItem_HeavyRing                               = 11,
	AttachItem_MAX                                     = 12
};*/

// Enum Core.Component.Sound_Steps
/*enum Sound_Steps
{
	Step_None                                          = 0,
	Step_Grass                                         = 1,
	Step_Wood                                          = 2,
	Step_Stone                                         = 3,
	Step_Straw                                         = 4,
	Step_ShallowWater                                  = 5,
	Step_Water                                         = 6,
	Step_Mud                                           = 7,
	Step_StoneBroken                                   = 8,
	Step_HardWood                                      = 9,
	Step_Metal                                         = 10,
	Step_Fabric                                        = 11,
	Step_Sand                                          = 12,
	Step_Ice                                           = 13,
	Step_Snow                                          = 14,
	Step_MAX                                           = 15
};*/

// Enum Core.Component.Sound_Damages
/*enum Sound_Damages
{
	Damage_None                                        = 0,
	Damage_Type1                                       = 1,
	Damage_Type2                                       = 2,
	Damage_Type3                                       = 3,
	Damage_MAX                                         = 4
};*/

// Enum Core.Component.Sound_FootPrintPos
/*enum Sound_FootPrintPos
{
	FPPos_Left                                         = 0,
	FPPos_Right                                        = 1,
	FPPos_MAX                                          = 2
};*/

// Enum Core.Component.Sound_FootPrintData
/*enum Sound_FootPrintData
{
	FPData_None                                        = 0,
	FPData_Decal                                       = 1,
	FPData_Effect                                      = 2,
	FPData_MAX                                         = 3
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x003C
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ObjectInternalInteger;                            		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    HashNext;                                         		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    HashOuterNext;                                    		// 0x0014 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    StateFrame;                                       		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UObject*                                     Linker;                                           		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    LinkerIndex;                                      		// 0x0020 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000001003]              ( CPF_Edit | CPF_Const | CPF_Native )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000001003]              ( CPF_Edit | CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3 ];

		return pClassPointer;
	};

	struct FVector TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse );
	struct FName GetPackageName ( );
	bool IsPendingKill ( );
	float ByteToFloat ( unsigned char inputByte, unsigned long bSigned );
	unsigned char FloatToByte ( float inputFloat, unsigned long bSigned );
	float UnwindHeading ( float A );
	float FindDeltaAngle ( float A1, float A2 );
	float GetHeadingAngle ( struct FVector Dir );
	void GetAngularDegreesFromRadians ( struct FVector2D* OutFOV );
	void GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist );
	bool GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist );
	bool GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist );
	bool PointInBox ( struct FVector Point, struct FVector Location, struct FVector Extent );
	float PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint );
	float PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint );
	float PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint );
	bool GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	class UObject* FindObject ( struct FString ObjectName, class UClass* ObjectClass );
	class UObject* DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail );
	struct FName GetEnum ( class UObject* E, int I );
	void Disable ( struct FName ProbeFunc );
	void Enable ( struct FName ProbeFunc );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( struct FName NextStateName );
	void eventBeginState ( struct FName PreviousStateName );
	void DumpStateStack ( );
	void PopState ( unsigned long bPopAll );
	void PushState ( struct FName NewState, struct FName NewLabel );
	struct FName GetStateName ( );
	bool IsChildState ( struct FName TestState, struct FName TestParentState );
	bool IsInState ( struct FName TestState, unsigned long bTestStateStack );
	void GotoState ( struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack );
	bool IsUTracing ( );
	void SetUTracing ( unsigned long bShouldUTrace );
	struct FName GetFuncName ( );
	void ScriptTrace ( );
	struct FString Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName );
	void WarnInternal ( struct FString S );
	void LogInternal ( struct FString S, struct FName Tag );
	struct FLinearColor Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B );
	struct FLinearColor Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult );
	struct FLinearColor ColorToLinearColor ( struct FColor OldColor );
	struct FLinearColor MakeLinearColor ( float R, float G, float B, float A );
	struct FColor MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A );
	struct FColor Add_ColorColor ( struct FColor A, struct FColor B );
	struct FColor Multiply_ColorFloat ( struct FColor A, float B );
	struct FColor Multiply_FloatColor ( float A, struct FColor B );
	struct FColor Subtract_ColorColor ( struct FColor A, struct FColor B );
	struct FVector2D vect2d ( float InX, float InY );
	float GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value );
	float GetRangePctByValue ( struct FVector2D Range, float Value );
	float GetRangeValueByPct ( struct FVector2D Range, float Pct );
	struct FQuat Subtract_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat Add_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath );
	struct FRotator QuatToRotator ( struct FQuat A );
	struct FQuat QuatFromRotator ( struct FRotator A );
	struct FQuat QuatFromAxisAndAngle ( struct FVector Axis, float Angle );
	struct FQuat QuatFindBetween ( struct FVector A, struct FVector B );
	struct FVector QuatRotateVector ( struct FQuat A, struct FVector B );
	struct FQuat QuatInvert ( struct FQuat A );
	float QuatDot ( struct FQuat A, struct FQuat B );
	struct FQuat QuatProduct ( struct FQuat A, struct FQuat B );
	struct FVector MatrixGetOrigin ( struct FMatrix TM );
	struct FRotator MatrixGetRotator ( struct FMatrix TM );
	struct FMatrix MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation );
	struct FVector InverseTransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector TransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector InverseTransformVector ( struct FMatrix TM, struct FVector A );
	struct FVector TransformVector ( struct FMatrix TM, struct FVector A );
	struct FMatrix Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B );
	bool NotEqual_NameName ( struct FName A, struct FName B );
	bool EqualEqual_NameName ( struct FName A, struct FName B );
	bool IsA ( struct FName ClassName );
	bool ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass );
	bool NotEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool EqualEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool NotEqual_ObjectObject ( class UObject* A, class UObject* B );
	bool EqualEqual_ObjectObject ( class UObject* A, class UObject* B );
	struct FString PathName ( class UObject* CheckObject );
	TArray< struct FString > SplitString ( struct FString Source, struct FString Delimiter, unsigned long bCullEmpty );
	void ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces );
	void JoinArray ( TArray< struct FString > StringArray, struct FString delim, unsigned long bIgnoreBlanks, struct FString* out_Result );
	struct FString GetRightMost ( struct FString Text );
	struct FString Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr );
	struct FString Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive );
	int Asc ( struct FString S );
	struct FString Chr ( int I );
	struct FString Locs ( struct FString S );
	struct FString Caps ( struct FString S );
	struct FString Right ( struct FString S, int I );
	struct FString Left ( struct FString S, int I );
	struct FString Mid ( struct FString S, int I, int J );
	int InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight );
	int Len ( struct FString S );
	struct FString SubtractEqual_StrStr ( struct FString B, struct FString* A );
	struct FString AtEqual_StrStr ( struct FString B, struct FString* A );
	struct FString ConcatEqual_StrStr ( struct FString B, struct FString* A );
	bool ComplementEqual_StrStr ( struct FString A, struct FString B );
	bool NotEqual_StrStr ( struct FString A, struct FString B );
	bool EqualEqual_StrStr ( struct FString A, struct FString B );
	bool GreaterEqual_StrStr ( struct FString A, struct FString B );
	bool LessEqual_StrStr ( struct FString A, struct FString B );
	bool Greater_StrStr ( struct FString A, struct FString B );
	bool Less_StrStr ( struct FString A, struct FString B );
	struct FString At_StrStr ( struct FString A, struct FString B );
	struct FString Concat_StrStr ( struct FString A, struct FString B );
	bool SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis );
	int ClampRotAxisFromRange ( int Current, int Min, int Max );
	int ClampRotAxisFromBase ( int Current, int Center, int MaxDelta );
	void ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis );
	float RSize ( struct FRotator R );
	float RDiff ( struct FRotator A, struct FRotator B );
	int NormalizeRotAxis ( int Angle );
	struct FRotator RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed );
	struct FRotator RSmerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator Normalize ( struct FRotator Rot );
	struct FRotator OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z );
	struct FRotator RotRand ( unsigned long bRoll );
	void GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	void GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	bool ClockwiseFrom_IntInt ( int A, int B );
	struct FRotator SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator Subtract_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator Add_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator DivideEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator MultiplyEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator Divide_RotatorFloat ( struct FRotator A, float B );
	struct FRotator Multiply_FloatRotator ( float A, struct FRotator B );
	struct FRotator Multiply_RotatorFloat ( struct FRotator A, float B );
	bool NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FVector ClampLength ( struct FVector V, float MaxLength );
	struct FVector VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	bool IsZero ( struct FVector A );
	struct FVector ProjectOnTo ( struct FVector X, struct FVector Y );
	struct FVector MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal );
	struct FVector VRand ( );
	struct FVector VSmerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector VLerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector Normal ( struct FVector A );
	float VSizeSq2D ( struct FVector A );
	float VSizeSq ( struct FVector A );
	float VSize2D ( struct FVector A );
	float VSize ( struct FVector A );
	struct FVector SubtractEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector AddEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector DivideEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector MultiplyEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector Cross_VectorVector ( struct FVector A, struct FVector B );
	float Dot_VectorVector ( struct FVector A, struct FVector B );
	bool NotEqual_VectorVector ( struct FVector A, struct FVector B );
	bool EqualEqual_VectorVector ( struct FVector A, struct FVector B );
	struct FVector GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector LessLess_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector Subtract_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Add_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Divide_VectorFloat ( struct FVector A, float B );
	struct FVector Multiply_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Multiply_FloatVector ( float A, struct FVector B );
	struct FVector Multiply_VectorFloat ( struct FVector A, float B );
	struct FVector Subtract_PreVector ( struct FVector A );
	float FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FPctByRange ( float Value, float InMin, float InMax );
	float RandRange ( float InMin, float InMax );
	float FInterpEaseInOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseIn ( float A, float B, float Alpha, float Exp );
	float FCubicInterp ( float P0, float T0, float P1, float T1, float A );
	int FCeil ( float A );
	int FFloor ( float A );
	int Round ( float A );
	float Lerp ( float A, float B, float Alpha );
	float FClamp ( float V, float A, float B );
	float FMax ( float A, float B );
	float FMin ( float A, float B );
	float FRand ( );
	float Square ( float A );
	float Sqrt ( float A );
	float Loge ( float A );
	float Exp ( float A );
	float Atan ( float A, float B );
	float Tan ( float A );
	float Acos ( float A );
	float Cos ( float A );
	float Asin ( float A );
	float Sin ( float A );
	float Abs ( float A );
	float SubtractEqual_FloatFloat ( float B, float* A );
	float AddEqual_FloatFloat ( float B, float* A );
	float DivideEqual_FloatFloat ( float B, float* A );
	float MultiplyEqual_FloatFloat ( float B, float* A );
	bool NotEqual_FloatFloat ( float A, float B );
	bool ComplementEqual_FloatFloat ( float A, float B );
	bool EqualEqual_FloatFloat ( float A, float B );
	bool GreaterEqual_FloatFloat ( float A, float B );
	bool LessEqual_FloatFloat ( float A, float B );
	bool Greater_FloatFloat ( float A, float B );
	bool Less_FloatFloat ( float A, float B );
	float Subtract_FloatFloat ( float A, float B );
	float Add_FloatFloat ( float A, float B );
	float Percent_FloatFloat ( float A, float B );
	float Divide_FloatFloat ( float A, float B );
	float Multiply_FloatFloat ( float A, float B );
	float MultiplyMultiply_FloatFloat ( float Base, float Exp );
	float Subtract_PreFloat ( float A );
	struct FString ToHex ( int A );
	int Clamp ( int V, int A, int B );
	int Max ( int A, int B );
	int Min ( int A, int B );
	int Rand ( int Max );
	int SubtractSubtract_Int ( int* A );
	int AddAdd_Int ( int* A );
	int SubtractSubtract_PreInt ( int* A );
	int AddAdd_PreInt ( int* A );
	int SubtractEqual_IntInt ( int B, int* A );
	int AddEqual_IntInt ( int B, int* A );
	int DivideEqual_IntFloat ( float B, int* A );
	int MultiplyEqual_IntFloat ( float B, int* A );
	int Or_IntInt ( int A, int B );
	int Xor_IntInt ( int A, int B );
	int And_IntInt ( int A, int B );
	bool NotEqual_IntInt ( int A, int B );
	bool EqualEqual_IntInt ( int A, int B );
	bool GreaterEqual_IntInt ( int A, int B );
	bool LessEqual_IntInt ( int A, int B );
	bool Greater_IntInt ( int A, int B );
	bool Less_IntInt ( int A, int B );
	int GreaterGreaterGreater_IntInt ( int A, int B );
	int GreaterGreater_IntInt ( int A, int B );
	int LessLess_IntInt ( int A, int B );
	int Subtract_IntInt ( int A, int B );
	int Add_IntInt ( int A, int B );
	int Divide_IntInt ( int A, int B );
	int Multiply_IntInt ( int A, int B );
	int Subtract_PreInt ( int A );
	int Complement_PreInt ( int A );
	unsigned char SubtractSubtract_Byte ( unsigned char* A );
	unsigned char AddAdd_Byte ( unsigned char* A );
	unsigned char SubtractSubtract_PreByte ( unsigned char* A );
	unsigned char AddAdd_PreByte ( unsigned char* A );
	unsigned char SubtractEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char AddEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char DivideEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char MultiplyEqual_ByteFloat ( float B, unsigned char* A );
	unsigned char MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A );
	bool OrOr_BoolBool ( unsigned long A, unsigned long B );
	bool XorXor_BoolBool ( unsigned long A, unsigned long B );
	bool AndAnd_BoolBool ( unsigned long A, unsigned long B );
	bool NotEqual_BoolBool ( unsigned long A, unsigned long B );
	bool EqualEqual_BoolBool ( unsigned long A, unsigned long B );
	bool Not_PreBool ( unsigned long A );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x085BA7C0 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x07DD1240 (0x04)
	virtual void VirtualFunction02 ( );																			// 0x07DCFAF0 (0x08)
	virtual void VirtualFunction03 ( );																			// 0x0871C5F0 (0x0C)
	virtual void VirtualFunction04 ( );																			// 0x0856E950 (0x10)
	virtual void VirtualFunction05 ( );																			// 0x086648E0 (0x14)
	virtual void VirtualFunction06 ( );																			// 0x07E1C910 (0x18)
	virtual void VirtualFunction07 ( );																			// 0x07DC55D0 (0x1C)
	virtual void VirtualFunction08 ( );																			// 0x07E1D800 (0x20)
	virtual void VirtualFunction09 ( );																			// 0x085BA7C0 (0x24)
	virtual void VirtualFunction10 ( );																			// 0x07E1C820 (0x28)
	virtual void VirtualFunction11 ( );																			// 0x07DCA800 (0x2C)
	virtual void VirtualFunction12 ( );																			// 0x07DD3F30 (0x30)
	virtual void VirtualFunction13 ( );																			// 0x07E182F0 (0x34)
	virtual void VirtualFunction14 ( );																			// 0x07C825C0 (0x38)
	virtual void VirtualFunction15 ( );																			// 0x086648E0 (0x3C)
	virtual void VirtualFunction16 ( );																			// 0x07E1D230 (0x40)
	virtual void VirtualFunction17 ( );																			// 0x07E18130 (0x44)
	virtual void VirtualFunction18 ( );																			// 0x07E1D300 (0x48)
	virtual void VirtualFunction19 ( );																			// 0x07E18140 (0x4C)
	virtual void VirtualFunction20 ( );																			// 0x07E18180 (0x50)
	virtual void VirtualFunction21 ( );																			// 0x07E18170 (0x54)
	virtual void VirtualFunction22 ( );																			// 0x086648E0 (0x58)
	virtual void VirtualFunction23 ( );																			// 0x086648E0 (0x5C)
	virtual void VirtualFunction24 ( );																			// 0x07E18160 (0x60)
	virtual void VirtualFunction25 ( );																			// 0x07E18180 (0x64)
	virtual void VirtualFunction26 ( );																			// 0x07E18170 (0x68)
	virtual void VirtualFunction27 ( );																			// 0x07E18180 (0x6C)
	virtual void VirtualFunction28 ( );																			// 0x07E18170 (0x70)
	virtual void VirtualFunction29 ( );																			// 0x07E1D3D0 (0x74)
	virtual void VirtualFunction30 ( );																			// 0x07E1D5C0 (0x78)
	virtual void VirtualFunction31 ( );																			// 0x07E1D6E0 (0x7C)
	virtual void VirtualFunction32 ( );																			// 0x07DC86C0 (0x80)
	virtual void VirtualFunction33 ( );																			// 0x07E28D00 (0x84)
	virtual void VirtualFunction34 ( );																			// 0x07C825E0 (0x88)
	virtual void VirtualFunction35 ( );																			// 0x07C82610 (0x8C)
	virtual void VirtualFunction36 ( );																			// 0x07C82640 (0x90)
	virtual void VirtualFunction37 ( );																			// 0x07C826D0 (0x94)
	virtual void VirtualFunction38 ( );																			// 0x07CEABD0 (0x98)
	virtual void VirtualFunction39 ( );																			// 0x07DD6590 (0x9C)
	virtual void VirtualFunction40 ( );																			// 0x07DD6590 (0xA0)
	virtual void VirtualFunction41 ( );																			// 0x086648E0 (0xA4)
	virtual void VirtualFunction42 ( );																			// 0x082BE020 (0xA8)
	virtual void VirtualFunction43 ( );																			// 0x082C3B20 (0xAC)
	virtual void VirtualFunction44 ( );																			// 0x07E299A0 (0xB0)
	virtual void VirtualFunction45 ( );																			// 0x07DCCE50 (0xB4)
	virtual void VirtualFunction46 ( );																			// 0x0856E950 (0xB8)
	virtual void VirtualFunction47 ( );																			// 0x0856E950 (0xBC)
	virtual void VirtualFunction48 ( );																			// 0x07DC53F0 (0xC0)
	virtual void VirtualFunction49 ( );																			// 0x07DCF820 (0xC4)
	virtual void VirtualFunction50 ( );																			// 0x07E1CC50 (0xC8)
	virtual void VirtualFunction51 ( );																			// 0x084DE0A0 (0xCC)
	virtual void VirtualFunction52 ( );																			// 0x07E18110 (0xD0)
	virtual void VirtualFunction53 ( );																			// 0x07E298E0 (0xD4)
	virtual void VirtualFunction54 ( );																			// 0x07E28620 (0xD8)
	virtual void VirtualFunction55 ( );																			// 0x086648E0 (0xDC)
	virtual void VirtualFunction56 ( );																			// 0x07CEABD0 (0xE0)
	virtual void VirtualFunction57 ( );																			// 0x07C82580 (0xE4)
	virtual void VirtualFunction58 ( );																			// 0x07C825A0 (0xE8)
	virtual void VirtualFunction59 ( );																			// 0x07E29D60 (0xEC)
	virtual void VirtualFunction60 ( );																			// 0x07E18490 (0xF0)
	virtual void VirtualFunction61 ( );																			// 0x07DCDCE0 (0xF4)
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );				// 0x07DE66A0 (0xF8)
};

//UClass* UObject::pClassPointer = NULL;

// Class Core.Factory
// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET
	struct FString                                     Description;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           Formats;                                          		// 0x0050 (0x000C) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x14 ];                            		// 0x005C (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2 ];

		return pClassPointer;
	};

};

//UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1 ];

		return pClassPointer;
	};

};

//UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x001C (0x0058 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x003C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 10 ];

		return pClassPointer;
	};

};

//UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 13 ];

		return pClassPointer;
	};

};

//UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x0170 (0x01B0 - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     LocalPackagePCPath;                               		// 0x0050 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     LocalSeekFreePCPath;                              		// 0x005C (0x000C) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x006C (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CachePath;                                        		// 0x0078 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CacheExt;                                         		// 0x0084 (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData00[ 0x34 ];                            		// 0x0090 (0x0034) MISSED OFFSET
	struct FString                                     ScreenShotPath;                                   		// 0x00C4 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CharacterShotPath;                                		// 0x00D0 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SummonedShotPath;                                 		// 0x00DC (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CustomizeShotPath;                                		// 0x00E8 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           Paths;                                            		// 0x00F4 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           FirstPaths;                                       		// 0x0100 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x010C (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x0118 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x0124 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           ClientScriptPaths;                                		// 0x0130 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           ClientFRScriptPaths;                              		// 0x013C (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           CookerScriptPaths;                                		// 0x0148 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           CookerFRScriptPaths;                              		// 0x0154 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x0160 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FName >                             Suppress;                                         		// 0x016C (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           Extensions;                                       		// 0x0178 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x0184 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x0190 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     TextureFileCacheExtension;                        		// 0x019C (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bUseAppCompat : 1;                                		// 0x01A8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bEvaluateAppCompatEverytime : 1;                  		// 0x01AC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 12 ];

		return pClassPointer;
	};

};

//UClass* USystem::pClassPointer = NULL;

// Class Core.Field
// 0x0008 (0x0044 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      SuperField;                                       		// NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63 ];

		return pClassPointer;
	};

};

//UClass* UField::pClassPointer = NULL;

// Class Core.Property
// 0x0040 (0x0084 - 0x0044)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x0044 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62 ];

		return pClassPointer;
	};

};

//UClass* UProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0004 (0x0088 - 0x0084)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61 ];

		return pClassPointer;
	};

};

//UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x0084 - 0x0084)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 67 ];

		return pClassPointer;
	};

};

//UClass* UStrProperty::pClassPointer = NULL;

// Class Core.Struct
// 0x004C (0x0090 - 0x0044)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x0044 (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70 ];

		return pClassPointer;
	};

};

//UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x001C (0x00AC - 0x0090)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0090 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69 ];

		return pClassPointer;
	};

};

//UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x003C (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73 ];

		return pClassPointer;
	};

};

//UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75 ];

		return pClassPointer;
	};

};

//UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77 ];

		return pClassPointer;
	};

};

//UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x0084 - 0x0084)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79 ];

		return pClassPointer;
	};

};

//UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81 ];

		return pClassPointer;
	};

};

//UClass* UMetaData::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0008 (0x008C - 0x0084)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0084 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83 ];

		return pClassPointer;
	};

};

//UClass* UMapProperty::pClassPointer = NULL;

// Class Core.Linker
// 0x00C4 (0x0100 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC4 ];                            		// 0x003C (0x00C4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86 ];

		return pClassPointer;
	};

};

//UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x0090 (0x0190 - 0x0100)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x90 ];                            		// 0x0100 (0x0090) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 85 ];

		return pClassPointer;
	};

};

//UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x05A0 (0x06A0 - 0x0100)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5A0 ];                           		// 0x0100 (0x05A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89 ];

		return pClassPointer;
	};

};

//UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x0084 - 0x0084)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91 ];

		return pClassPointer;
	};

};

//UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0004 (0x0088 - 0x0084)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93 ];

		return pClassPointer;
	};

};

//UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 95 ];

		return pClassPointer;
	};

};

//UClass* UInterface::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000008002]              ( CPF_Const | CPF_Localized | CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink | CPF_NoExport | CPF_NoClear | CPF_EditInline | CPF_EdFindable | CPF_EditInlineUse | CPF_Deprecated | CPF_EditInlineNotify | CPF_RepNotify | CPF_Interp | CPF_NonTransactional )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

//UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

//UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.Function
// 0x0020 (0x00B0 - 0x0090)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                    		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      iNative;                                          		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      RepOffset;                                        		// NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      OperPrecedence;                                   		// NOT AUTO-GENERATED PROPERTY 
	struct FName                                       FriendlyName;                                     		// NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      NumParms;                                         		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ParmsSize;                                        		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ReturnValueOffset;                                		// NOT AUTO-GENERATED PROPERTY 
	void*                                              Func;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101 ];

		return pClassPointer;
	};

};

//UClass* UFunction::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x0084 - 0x0084)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103 ];

		return pClassPointer;
	};

};

//UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105 ];

		return pClassPointer;
	};

};

//UClass* UExporter::pClassPointer = NULL;

// Class Core.Enum
// 0x000C (0x0050 - 0x0044)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0044 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111 ];

		return pClassPointer;
	};

};

//UClass* UEnum::pClassPointer = NULL;

// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114 ];

		return pClassPointer;
	};

};

//UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113 ];

		return pClassPointer;
	};

};

//UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 117 ];

		return pClassPointer;
	};

};

//UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0008 (0x008C - 0x0084)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0084 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119 ];

		return pClassPointer;
	};

};

//UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.Const
// 0x000C (0x0050 - 0x0044)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0044 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121 ];

		return pClassPointer;
	};

};

//UClass* UConst::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0004 (0x0088 - 0x0084)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124 ];

		return pClassPointer;
	};

};

//UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x0088 - 0x0088)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123 ];

		return pClassPointer;
	};

};

//UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0004 (0x008C - 0x0088)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127 ];

		return pClassPointer;
	};

};

//UClass* UClassProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0004 (0x0088 - 0x0084)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129 ];

		return pClassPointer;
	};

};

//UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x0088 - 0x0084)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 131 ];

		return pClassPointer;
	};

};

//UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0004 (0x0088 - 0x0084)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 133 ];

		return pClassPointer;
	};

};

//UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Package
// 0x0064 (0x00A0 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x64 ];                            		// 0x003C (0x0064) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 206 ];

		return pClassPointer;
	};

};

//UClass* UPackage::pClassPointer = NULL;

// Class Core.State
// 0x0054 (0x00E4 - 0x0090)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x0090 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208 ];

		return pClassPointer;
	};

};

//UClass* UState::pClassPointer = NULL;

// Class Core.Class
// 0x0110 (0x01F4 - 0x00E4)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0x110 ];                           		// 0x00E4 (0x0110) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210 ];

		return pClassPointer;
	};

};

//UClass* UClass::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif