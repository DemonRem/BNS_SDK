/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Editor_classes.cpp
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

// Function Editor.BrushBuilder.Build
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBrushBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33400 ];

	UBrushBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.PolyEnd
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UBrushBuilder::PolyEnd ( )
{
	static UFunction* pFnPolyEnd = NULL;

	if ( ! pFnPolyEnd )
		pFnPolyEnd = (UFunction*) UObject::GObjObjects()->Data[ 33399 ];

	UBrushBuilder_execPolyEnd_Parms PolyEnd_Parms;

	pFnPolyEnd->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPolyEnd, &PolyEnd_Parms, NULL );

	pFnPolyEnd->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Polyi
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            I                              ( CPF_Parm )

void UBrushBuilder::Polyi ( int I )
{
	static UFunction* pFnPolyi = NULL;

	if ( ! pFnPolyi )
		pFnPolyi = (UFunction*) UObject::GObjObjects()->Data[ 33397 ];

	UBrushBuilder_execPolyi_Parms Polyi_Parms;
	Polyi_Parms.I = I;

	pFnPolyi->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPolyi, &Polyi_Parms, NULL );

	pFnPolyi->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.PolyBegin
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// struct FName                   ItemName                       ( CPF_OptionalParm | CPF_Parm )

void UBrushBuilder::PolyBegin ( int Direction, struct FName ItemName )
{
	static UFunction* pFnPolyBegin = NULL;

	if ( ! pFnPolyBegin )
		pFnPolyBegin = (UFunction*) UObject::GObjObjects()->Data[ 33394 ];

	UBrushBuilder_execPolyBegin_Parms PolyBegin_Parms;
	PolyBegin_Parms.Direction = Direction;
	memcpy ( &PolyBegin_Parms.ItemName, &ItemName, 0x8 );

	pFnPolyBegin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPolyBegin, &PolyBegin_Parms, NULL );

	pFnPolyBegin->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Poly4i
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// int                            I                              ( CPF_Parm )
// int                            J                              ( CPF_Parm )
// int                            K                              ( CPF_Parm )
// int                            L                              ( CPF_Parm )
// struct FName                   ItemName                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsTwoSidedNonSolid            ( CPF_OptionalParm | CPF_Parm )

void UBrushBuilder::Poly4i ( int Direction, int I, int J, int K, int L, struct FName ItemName, unsigned long bIsTwoSidedNonSolid )
{
	static UFunction* pFnPoly4i = NULL;

	if ( ! pFnPoly4i )
		pFnPoly4i = (UFunction*) UObject::GObjObjects()->Data[ 33386 ];

	UBrushBuilder_execPoly4i_Parms Poly4i_Parms;
	Poly4i_Parms.Direction = Direction;
	Poly4i_Parms.I = I;
	Poly4i_Parms.J = J;
	Poly4i_Parms.K = K;
	Poly4i_Parms.L = L;
	memcpy ( &Poly4i_Parms.ItemName, &ItemName, 0x8 );
	Poly4i_Parms.bIsTwoSidedNonSolid = bIsTwoSidedNonSolid;

	pFnPoly4i->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPoly4i, &Poly4i_Parms, NULL );

	pFnPoly4i->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Poly3i
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// int                            I                              ( CPF_Parm )
// int                            J                              ( CPF_Parm )
// int                            K                              ( CPF_Parm )
// struct FName                   ItemName                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsTwoSidedNonSolid            ( CPF_OptionalParm | CPF_Parm )

void UBrushBuilder::Poly3i ( int Direction, int I, int J, int K, struct FName ItemName, unsigned long bIsTwoSidedNonSolid )
{
	static UFunction* pFnPoly3i = NULL;

	if ( ! pFnPoly3i )
		pFnPoly3i = (UFunction*) UObject::GObjObjects()->Data[ 33379 ];

	UBrushBuilder_execPoly3i_Parms Poly3i_Parms;
	Poly3i_Parms.Direction = Direction;
	Poly3i_Parms.I = I;
	Poly3i_Parms.J = J;
	Poly3i_Parms.K = K;
	memcpy ( &Poly3i_Parms.ItemName, &ItemName, 0x8 );
	Poly3i_Parms.bIsTwoSidedNonSolid = bIsTwoSidedNonSolid;

	pFnPoly3i->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPoly3i, &Poly3i_Parms, NULL );

	pFnPoly3i->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Vertex3f
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Z                              ( CPF_Parm )

int UBrushBuilder::Vertex3f ( float X, float Y, float Z )
{
	static UFunction* pFnVertex3f = NULL;

	if ( ! pFnVertex3f )
		pFnVertex3f = (UFunction*) UObject::GObjObjects()->Data[ 33374 ];

	UBrushBuilder_execVertex3f_Parms Vertex3f_Parms;
	Vertex3f_Parms.X = X;
	Vertex3f_Parms.Y = Y;
	Vertex3f_Parms.Z = Z;

	pFnVertex3f->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVertex3f, &Vertex3f_Parms, NULL );

	pFnVertex3f->FunctionFlags |= 0x400;

	return Vertex3f_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.Vertexv
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 V                              ( CPF_Parm )

int UBrushBuilder::Vertexv ( struct FVector V )
{
	static UFunction* pFnVertexv = NULL;

	if ( ! pFnVertexv )
		pFnVertexv = (UFunction*) UObject::GObjObjects()->Data[ 33371 ];

	UBrushBuilder_execVertexv_Parms Vertexv_Parms;
	memcpy ( &Vertexv_Parms.V, &V, 0xC );

	pFnVertexv->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVertexv, &Vertexv_Parms, NULL );

	pFnVertexv->FunctionFlags |= 0x400;

	return Vertexv_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.BadParameters
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 msg                            ( CPF_OptionalParm | CPF_Parm )

bool UBrushBuilder::BadParameters ( struct FString msg )
{
	static UFunction* pFnBadParameters = NULL;

	if ( ! pFnBadParameters )
		pFnBadParameters = (UFunction*) UObject::GObjObjects()->Data[ 33368 ];

	UBrushBuilder_execBadParameters_Parms BadParameters_Parms;
	memcpy ( &BadParameters_Parms.msg, &msg, 0xC );

	pFnBadParameters->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBadParameters, &BadParameters_Parms, NULL );

	pFnBadParameters->FunctionFlags |= 0x400;

	return BadParameters_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.GetPolyCount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBrushBuilder::GetPolyCount ( )
{
	static UFunction* pFnGetPolyCount = NULL;

	if ( ! pFnGetPolyCount )
		pFnGetPolyCount = (UFunction*) UObject::GObjObjects()->Data[ 33366 ];

	UBrushBuilder_execGetPolyCount_Parms GetPolyCount_Parms;

	pFnGetPolyCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPolyCount, &GetPolyCount_Parms, NULL );

	pFnGetPolyCount->FunctionFlags |= 0x400;

	return GetPolyCount_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.GetVertex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

struct FVector UBrushBuilder::GetVertex ( int I )
{
	static UFunction* pFnGetVertex = NULL;

	if ( ! pFnGetVertex )
		pFnGetVertex = (UFunction*) UObject::GObjObjects()->Data[ 33363 ];

	UBrushBuilder_execGetVertex_Parms GetVertex_Parms;
	GetVertex_Parms.I = I;

	pFnGetVertex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVertex, &GetVertex_Parms, NULL );

	pFnGetVertex->FunctionFlags |= 0x400;

	return GetVertex_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.GetVertexCount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBrushBuilder::GetVertexCount ( )
{
	static UFunction* pFnGetVertexCount = NULL;

	if ( ! pFnGetVertexCount )
		pFnGetVertexCount = (UFunction*) UObject::GObjObjects()->Data[ 33361 ];

	UBrushBuilder_execGetVertexCount_Parms GetVertexCount_Parms;

	pFnGetVertexCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVertexCount, &GetVertexCount_Parms, NULL );

	pFnGetVertexCount->FunctionFlags |= 0x400;

	return GetVertexCount_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.EndBrush
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBrushBuilder::EndBrush ( )
{
	static UFunction* pFnEndBrush = NULL;

	if ( ! pFnEndBrush )
		pFnEndBrush = (UFunction*) UObject::GObjObjects()->Data[ 33359 ];

	UBrushBuilder_execEndBrush_Parms EndBrush_Parms;

	pFnEndBrush->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndBrush, &EndBrush_Parms, NULL );

	pFnEndBrush->FunctionFlags |= 0x400;

	return EndBrush_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.BeginBrush
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  InMergeCoplanars               ( CPF_Parm )
// struct FName                   InGroup                        ( CPF_Parm )

void UBrushBuilder::BeginBrush ( unsigned long InMergeCoplanars, struct FName InGroup )
{
	static UFunction* pFnBeginBrush = NULL;

	if ( ! pFnBeginBrush )
		pFnBeginBrush = (UFunction*) UObject::GObjObjects()->Data[ 33356 ];

	UBrushBuilder_execBeginBrush_Parms BeginBrush_Parms;
	BeginBrush_Parms.InMergeCoplanars = InMergeCoplanars;
	memcpy ( &BeginBrush_Parms.InGroup, &InGroup, 0x8 );

	pFnBeginBrush->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBeginBrush, &BeginBrush_Parms, NULL );

	pFnBeginBrush->FunctionFlags |= 0x400;
};

// Function Editor.CubeBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCubeBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33458 ];

	UCubeBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.CubeBuilder.BuildCube
// [0x00020002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// float                          DX                             ( CPF_Parm )
// float                          DY                             ( CPF_Parm )
// float                          dz                             ( CPF_Parm )
// unsigned long                  _tessellated                   ( CPF_Parm )

void UCubeBuilder::BuildCube ( int Direction, float DX, float DY, float dz, unsigned long _tessellated )
{
	static UFunction* pFnBuildCube = NULL;

	if ( ! pFnBuildCube )
		pFnBuildCube = (UFunction*) UObject::GObjObjects()->Data[ 33448 ];

	UCubeBuilder_execBuildCube_Parms BuildCube_Parms;
	BuildCube_Parms.Direction = Direction;
	BuildCube_Parms.DX = DX;
	BuildCube_Parms.DY = DY;
	BuildCube_Parms.dz = dz;
	BuildCube_Parms._tessellated = _tessellated;

	this->ProcessEvent ( pFnBuildCube, &BuildCube_Parms, NULL );
};

// Function Editor.ConeBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UConeBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33421 ];

	UConeBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.ConeBuilder.BuildCone
// [0x00020002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// unsigned long                  InAlignToSide                  ( CPF_Parm )
// int                            InSides                        ( CPF_Parm )
// float                          InZ                            ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// struct FName                   Item                           ( CPF_Parm )

void UConeBuilder::BuildCone ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius, struct FName Item )
{
	static UFunction* pFnBuildCone = NULL;

	if ( ! pFnBuildCone )
		pFnBuildCone = (UFunction*) UObject::GObjObjects()->Data[ 33411 ];

	UConeBuilder_execBuildCone_Parms BuildCone_Parms;
	BuildCone_Parms.Direction = Direction;
	BuildCone_Parms.InAlignToSide = InAlignToSide;
	BuildCone_Parms.InSides = InSides;
	BuildCone_Parms.InZ = InZ;
	BuildCone_Parms.Radius = Radius;
	memcpy ( &BuildCone_Parms.Item, &Item, 0x8 );

	this->ProcessEvent ( pFnBuildCone, &BuildCone_Parms, NULL );
};

// Function Editor.CurvedStairBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCurvedStairBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33480 ];

	UCurvedStairBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.CurvedStairBuilder.BuildCurvedStair
// [0x00820002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )

void UCurvedStairBuilder::BuildCurvedStair ( int Direction )
{
	static UFunction* pFnBuildCurvedStair = NULL;

	if ( ! pFnBuildCurvedStair )
		pFnBuildCurvedStair = (UFunction*) UObject::GObjObjects()->Data[ 33469 ];

	UCurvedStairBuilder_execBuildCurvedStair_Parms BuildCurvedStair_Parms;
	BuildCurvedStair_Parms.Direction = Direction;

	this->ProcessEvent ( pFnBuildCurvedStair, &BuildCurvedStair_Parms, NULL );
};

// Function Editor.CylinderBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCylinderBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33501 ];

	UCylinderBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.CylinderBuilder.BuildCylinder
// [0x00020002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// unsigned long                  InAlignToSide                  ( CPF_Parm )
// int                            InSides                        ( CPF_Parm )
// float                          InZ                            ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )

void UCylinderBuilder::BuildCylinder ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius )
{
	static UFunction* pFnBuildCylinder = NULL;

	if ( ! pFnBuildCylinder )
		pFnBuildCylinder = (UFunction*) UObject::GObjObjects()->Data[ 33491 ];

	UCylinderBuilder_execBuildCylinder_Parms BuildCylinder_Parms;
	BuildCylinder_Parms.Direction = Direction;
	BuildCylinder_Parms.InAlignToSide = InAlignToSide;
	BuildCylinder_Parms.InSides = InSides;
	BuildCylinder_Parms.InZ = InZ;
	BuildCylinder_Parms.Radius = Radius;

	this->ProcessEvent ( pFnBuildCylinder, &BuildCylinder_Parms, NULL );
};

// Function Editor.LinearStairBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ULinearStairBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33630 ];

	ULinearStairBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.SheetBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USheetBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33647 ];

	USheetBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.SpiralStairBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USpiralStairBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33676 ];

	USpiralStairBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.SpiralStairBuilder.BuildCurvedStair
// [0x00820002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )

void USpiralStairBuilder::BuildCurvedStair ( int Direction )
{
	static UFunction* pFnBuildCurvedStair = NULL;

	if ( ! pFnBuildCurvedStair )
		pFnBuildCurvedStair = (UFunction*) UObject::GObjObjects()->Data[ 33666 ];

	USpiralStairBuilder_execBuildCurvedStair_Parms BuildCurvedStair_Parms;
	BuildCurvedStair_Parms.Direction = Direction;

	this->ProcessEvent ( pFnBuildCurvedStair, &BuildCurvedStair_Parms, NULL );
};

// Function Editor.TetrahedronBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTetrahedronBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33695 ];

	UTetrahedronBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.TetrahedronBuilder.BuildTetrahedron
// [0x00020002] 
// Parameters infos:
// float                          R                              ( CPF_Parm )
// int                            InSphereExtrapolation          ( CPF_Parm )

void UTetrahedronBuilder::BuildTetrahedron ( float R, int InSphereExtrapolation )
{
	static UFunction* pFnBuildTetrahedron = NULL;

	if ( ! pFnBuildTetrahedron )
		pFnBuildTetrahedron = (UFunction*) UObject::GObjObjects()->Data[ 33692 ];

	UTetrahedronBuilder_execBuildTetrahedron_Parms BuildTetrahedron_Parms;
	BuildTetrahedron_Parms.R = R;
	BuildTetrahedron_Parms.InSphereExtrapolation = InSphereExtrapolation;

	this->ProcessEvent ( pFnBuildTetrahedron, &BuildTetrahedron_Parms, NULL );
};

// Function Editor.TetrahedronBuilder.Extrapolate
// [0x00020002] 
// Parameters infos:
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )
// int                            C                              ( CPF_Parm )
// int                            Count                          ( CPF_Parm )
// float                          InRadius                       ( CPF_Parm )

void UTetrahedronBuilder::Extrapolate ( int A, int B, int C, int Count, float InRadius )
{
	static UFunction* pFnExtrapolate = NULL;

	if ( ! pFnExtrapolate )
		pFnExtrapolate = (UFunction*) UObject::GObjObjects()->Data[ 33683 ];

	UTetrahedronBuilder_execExtrapolate_Parms Extrapolate_Parms;
	Extrapolate_Parms.A = A;
	Extrapolate_Parms.B = B;
	Extrapolate_Parms.C = C;
	Extrapolate_Parms.Count = Count;
	Extrapolate_Parms.InRadius = InRadius;

	this->ProcessEvent ( pFnExtrapolate, &Extrapolate_Parms, NULL );
};

// Function Editor.VolumetricBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UVolumetricBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = (UFunction*) UObject::GObjObjects()->Data[ 33714 ];

	UVolumetricBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.VolumetricBuilder.BuildVolumetric
// [0x00820002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// int                            InNumSheets                    ( CPF_Parm )
// float                          InZ                            ( CPF_Parm )
// float                          InRadius                       ( CPF_Parm )

void UVolumetricBuilder::BuildVolumetric ( int Direction, int InNumSheets, float InZ, float InRadius )
{
	static UFunction* pFnBuildVolumetric = NULL;

	if ( ! pFnBuildVolumetric )
		pFnBuildVolumetric = (UFunction*) UObject::GObjObjects()->Data[ 33703 ];

	UVolumetricBuilder_execBuildVolumetric_Parms BuildVolumetric_Parms;
	BuildVolumetric_Parms.Direction = Direction;
	BuildVolumetric_Parms.InNumSheets = InNumSheets;
	BuildVolumetric_Parms.InZ = InZ;
	BuildVolumetric_Parms.InRadius = InRadius;

	this->ProcessEvent ( pFnBuildVolumetric, &BuildVolumetric_Parms, NULL );
};


/*
# ========================================================================================= #
# Class Pointers
# ========================================================================================= #
*/

UClass* UAnalyzeContentCommandlet::pClassPointer = NULL;
UClass* UAnalyzeCookedContentCommandlet::pClassPointer = NULL;
UClass* UAnalyzeCookedPackagesCommandlet::pClassPointer = NULL;
UClass* UAnalyzeFallbackMaterialsCommandlet::pClassPointer = NULL;
UClass* UAnalyzeReferencedContentCommandlet::pClassPointer = NULL;
UClass* UAnalyzeScriptCommandlet::pClassPointer = NULL;
UClass* UAnimSetFactoryNew::pClassPointer = NULL;
UClass* UAnimTreeFactoryNew::pClassPointer = NULL;
UClass* UBatchExportCommandlet::pClassPointer = NULL;
UClass* UBrushBuilder::pClassPointer = NULL;
UClass* UBuildContentTagIndexCommandlet::pClassPointer = NULL;
UClass* UCameraAnimFactory::pClassPointer = NULL;
UClass* UResavePackagesCommandlet::pClassPointer = NULL;
UClass* UChangePrefabSequenceClassCommandlet::pClassPointer = NULL;
UClass* UCheckClassOffsetCommandlet::pClassPointer = NULL;
UClass* UCheckFileDependencyCommandlet::pClassPointer = NULL;
UClass* UClassExporterUC::pClassPointer = NULL;
UClass* UClassFactoryUC::pClassPointer = NULL;
UClass* UColladaFactory::pClassPointer = NULL;
UClass* UConfigComponent::pClassPointer = NULL;
UClass* UConformCommandlet::pClassPointer = NULL;
UClass* UContentTagIndex::pClassPointer = NULL;
UClass* UCookPackagesCommandlet::pClassPointer = NULL;
UClass* UCreateCacheCollectiveCommandlet::pClassPointer = NULL;
UClass* UCreateDefaultStyleCommandlet::pClassPointer = NULL;
UClass* UCubeBuilder::pClassPointer = NULL;
UClass* UCurveEdPresetCurveFactoryNew::pClassPointer = NULL;
UClass* UCutDownContentCommandlet::pClassPointer = NULL;
UClass* UDebugShaderCompileDataCommandlet::pClassPointer = NULL;
UClass* UDecalMaterialFactoryNew::pClassPointer = NULL;
UClass* UDialogueSetFactory::pClassPointer = NULL;
UClass* UDiffPackagesCommandlet::pClassPointer = NULL;
UClass* UDistributionFloatConstantCurveFactory::pClassPointer = NULL;
UClass* UDumpEmittersCommandlet::pClassPointer = NULL;
UClass* UDumpLightmapInfoCommandlet::pClassPointer = NULL;
UClass* UDumpShadersCommandlet::pClassPointer = NULL;
UClass* UEditorComponent::pClassPointer = NULL;
UClass* UEditorEngine::pClassPointer = NULL;
UClass* UEditorPlayer::pClassPointer = NULL;
UClass* UEditorUserSettings::pClassPointer = NULL;
UClass* UEditorViewportInput::pClassPointer = NULL;
UClass* UEdModeComponent::pClassPointer = NULL;
UClass* UEventJumpTemplateFactory::pClassPointer = NULL;
UClass* UExamineOutersCommandlet::pClassPointer = NULL;
UClass* UExportLocCommandlet::pClassPointer = NULL;
UClass* UFindDuplicateKismetObjectsCommandlet::pClassPointer = NULL;
UClass* UFindEmitterMismatchedLODsCommandlet::pClassPointer = NULL;
UClass* UFindEmitterModifiedLODsCommandlet::pClassPointer = NULL;
UClass* UFindEmitterModuleLODErrorsCommandlet::pClassPointer = NULL;
UClass* UFindQuestionableTexturesCommandlet::pClassPointer = NULL;
UClass* UPerformMapCheckCommandlet::pClassPointer = NULL;
UClass* UFindRenamedPrefabSequencesCommandlet::pClassPointer = NULL;
UClass* UFindSoundCuesWithMissingGroupsCommandlet::pClassPointer = NULL;
UClass* UFindStaticActorsRefsCommandlet::pClassPointer = NULL;
UClass* UFindTexturesWithMissingPhysicalMaterialsCommandlet::pClassPointer = NULL;
UClass* UFixAmbiguousMaterialParametersCommandlet::pClassPointer = NULL;
UClass* UFixupEmittersCommandlet::pClassPointer = NULL;
UClass* UFixupRedirectsCommandlet::pClassPointer = NULL;
UClass* UFixupSourceUVsCommandlet::pClassPointer = NULL;
UClass* UFonixFactory::pClassPointer = NULL;
UClass* UFontAttributeFactory::pClassPointer = NULL;
UClass* UFontColorFactory::pClassPointer = NULL;
UClass* UFontFaceFactory::pClassPointer = NULL;
UClass* UTextureFactory::pClassPointer = NULL;
UClass* UFontFactory::pClassPointer = NULL;
UClass* UFontResourceFactory::pClassPointer = NULL;
UClass* UFontSetFactory::pClassPointer = NULL;
UClass* UGeomModifier::pClassPointer = NULL;
UClass* UGeomModifier_Edit::pClassPointer = NULL;
UClass* UGeomModifier_AutoFix::pClassPointer = NULL;
UClass* UGeomModifier_Clip::pClassPointer = NULL;
UClass* UGeomModifier_Create::pClassPointer = NULL;
UClass* UGeomModifier_Delete::pClassPointer = NULL;
UClass* UGeomModifier_Extrude::pClassPointer = NULL;
UClass* UGeomModifier_Find::pClassPointer = NULL;
UClass* UGeomModifier_Flip::pClassPointer = NULL;
UClass* UGeomModifier_Lathe::pClassPointer = NULL;
UClass* UGeomModifier_Split::pClassPointer = NULL;
UClass* UGeomModifier_Triangulate::pClassPointer = NULL;
UClass* UGeomModifier_Turn::pClassPointer = NULL;
UClass* UGeomModifier_Weld::pClassPointer = NULL;
UClass* UImageSetFactory::pClassPointer = NULL;
UClass* ULensFlareFactoryNew::pClassPointer = NULL;
UClass* ULevelExporterOBJ::pClassPointer = NULL;
UClass* ULevelExporterSTL::pClassPointer = NULL;
UClass* ULevelExporterT3D::pClassPointer = NULL;
UClass* ULevelFactory::pClassPointer = NULL;
UClass* ULightingChannelsObject::pClassPointer = NULL;
UClass* UListCorruptedComponentsCommandlet::pClassPointer = NULL;
UClass* UListDistanceCrossFadeNodesCommandlet::pClassPointer = NULL;
UClass* UListEmittersUsingModuleCommandlet::pClassPointer = NULL;
UClass* UListLoopingEmittersCommandlet::pClassPointer = NULL;
UClass* UListPackagesReferencingCommandlet::pClassPointer = NULL;
UClass* UListPSysFixedBoundSettingCommandlet::pClassPointer = NULL;
UClass* UListScriptReferencedContentCommandlet::pClassPointer = NULL;
UClass* UListSoundNodeWavesCommandlet::pClassPointer = NULL;
UClass* ULoadPackageCommandlet::pClassPointer = NULL;
UClass* ULocSoundInfoCommandlet::pClassPointer = NULL;
UClass* UMakeCommandlet::pClassPointer = NULL;
UClass* UMaterialFactoryNew::pClassPointer = NULL;
UClass* UMaterialInstanceConstantFactoryNew::pClassPointer = NULL;
UClass* UMaterialInstanceTimeVaryingFactoryNew::pClassPointer = NULL;
UClass* UMergePackagesCommandlet::pClassPointer = NULL;
UClass* UMineCookedPackagesCommandlet::pClassPointer = NULL;
UClass* UModelExporterT3D::pClassPointer = NULL;
UClass* UModelFactory::pClassPointer = NULL;
UClass* UObjectExporterT3D::pClassPointer = NULL;
UClass* UObjectNoteFactory::pClassPointer = NULL;
UClass* UParticleSetFactory::pClassPointer = NULL;
UClass* UParticleSystemFactoryNew::pClassPointer = NULL;
UClass* UPatchScriptCommandlet::pClassPointer = NULL;
UClass* UPerformTerrainMaterialDumpCommandlet::pClassPointer = NULL;
UClass* UPersistentCookerData::pClassPointer = NULL;
UClass* UPersistentShaderCompileData::pClassPointer = NULL;
UClass* UPhysicalMaterialFactoryNew::pClassPointer = NULL;
UClass* UPhysXParticleSystemFactoryNew::pClassPointer = NULL;
UClass* UPIEToNormalCommandlet::pClassPointer = NULL;
UClass* UPkgInfoCommandlet::pClassPointer = NULL;
UClass* UPlayerCameraAnimFactory::pClassPointer = NULL;
UClass* UPolysExporterT3D::pClassPointer = NULL;
UClass* UPolysFactory::pClassPointer = NULL;
UClass* UPostProcessFactoryNew::pClassPointer = NULL;
UClass* UPostProcessParameterFactory::pClassPointer = NULL;
UClass* UPrecompileJobData::pClassPointer = NULL;
UClass* UPrecompileShadersCommandlet::pClassPointer = NULL;
UClass* UProgressEffectFactory::pClassPointer = NULL;
UClass* URebuildMapCommandlet::pClassPointer = NULL;
UClass* URenderTargetCubeExporterTGA::pClassPointer = NULL;
UClass* URenderTargetExporterTGA::pClassPointer = NULL;
UClass* UReplaceActorCommandlet::pClassPointer = NULL;
UClass* UScaleAudioVolumeCommandlet::pClassPointer = NULL;
UClass* USequenceExporterT3D::pClassPointer = NULL;
UClass* USequenceFactory::pClassPointer = NULL;
UClass* USetMaterialUsageCommandlet::pClassPointer = NULL;
UClass* USetPackageFlagsCommandlet::pClassPointer = NULL;
UClass* USetTextureLODGroupCommandlet::pClassPointer = NULL;
UClass* UShaderCacheCollectiveData::pClassPointer = NULL;
UClass* UShowObjectCountCommandlet::pClassPointer = NULL;
UClass* UShowObjectFactory::pClassPointer = NULL;
UClass* UShowStylesCommandlet::pClassPointer = NULL;
UClass* UShowTaggedPropsCommandlet::pClassPointer = NULL;
UClass* USignalInfoFactory::pClassPointer = NULL;
UClass* USkeletalMeshCustomizeSetFactory::pClassPointer = NULL;
UClass* USkeletalMeshFactorSetFactory::pClassPointer = NULL;
UClass* USkeletalMeshFactory::pClassPointer = NULL;
UClass* USoundCueFactoryNew::pClassPointer = NULL;
UClass* USoundExporterWAV::pClassPointer = NULL;
UClass* USoundFactory::pClassPointer = NULL;
UClass* USoundGroupInfoCommandlet::pClassPointer = NULL;
UClass* USoundModeFactory::pClassPointer = NULL;
UClass* USoundSetFactory::pClassPointer = NULL;
UClass* USoundSurroundExporterWAV::pClassPointer = NULL;
UClass* USoundSurroundFactory::pClassPointer = NULL;
UClass* USoundTTSFactory::pClassPointer = NULL;
UClass* UStaticMeshExporterOBJ::pClassPointer = NULL;
UClass* UStaticMeshFactory::pClassPointer = NULL;
UClass* UStripSourceCommandlet::pClassPointer = NULL;
UClass* UTerrainExporterT3D::pClassPointer = NULL;
UClass* UTerrainFactory::pClassPointer = NULL;
UClass* UTerrainHeightMapExporter::pClassPointer = NULL;
UClass* UTerrainHeightMapExporterARGB8BMP::pClassPointer = NULL;
UClass* UTerrainHeightMapExporterG16BMPT3D::pClassPointer = NULL;
UClass* UTerrainHeightMapExporterTextT3D::pClassPointer = NULL;
UClass* UTerrainHeightMapFactory::pClassPointer = NULL;
UClass* UTerrainHeightMapFactoryG16BMP::pClassPointer = NULL;
UClass* UTerrainHeightMapFactoryG16BMPT3D::pClassPointer = NULL;
UClass* UTerrainHeightMapFactoryTextT3D::pClassPointer = NULL;
UClass* UTerrainLayerSetupFactoryNew::pClassPointer = NULL;
UClass* UTerrainMaterialFactoryNew::pClassPointer = NULL;
UClass* UTestCompressionCommandlet::pClassPointer = NULL;
UClass* UTestWordWrapCommandlet::pClassPointer = NULL;
UClass* UTextBufferExporterTXT::pClassPointer = NULL;
UClass* UTextureCubeFactoryNew::pClassPointer = NULL;
UClass* UTextureExporterBMP::pClassPointer = NULL;
UClass* UTextureExporterPCX::pClassPointer = NULL;
UClass* UTextureExporterTGA::pClassPointer = NULL;
UClass* UTextureMovieFactory::pClassPointer = NULL;
UClass* UTextureRenderTargetCubeFactoryNew::pClassPointer = NULL;
UClass* UTextureRenderTargetFactoryNew::pClassPointer = NULL;
UClass* UTrailTemplateFactory::pClassPointer = NULL;
UClass* UTransactor::pClassPointer = NULL;
UClass* UTransBuffer::pClassPointer = NULL;
UClass* UTrueTypeFontFactory::pClassPointer = NULL;
UClass* UTrueTypeMultiFontFactory::pClassPointer = NULL;
UClass* UUIActionDataFactory::pClassPointer = NULL;
UClass* UUIActionGroupDataFactory::pClassPointer = NULL;
UClass* UUT3MapStatsCommandlet::pClassPointer = NULL;
UClass* UVoiceSetFactory::pClassPointer = NULL;
UClass* UWrangleContentCommandlet::pClassPointer = NULL;
UClass* UConeBuilder::pClassPointer = NULL;
UClass* UCurvedStairBuilder::pClassPointer = NULL;
UClass* UCylinderBuilder::pClassPointer = NULL;
UClass* ULinearStairBuilder::pClassPointer = NULL;
UClass* USheetBuilder::pClassPointer = NULL;
UClass* USpiralStairBuilder::pClassPointer = NULL;
UClass* UTetrahedronBuilder::pClassPointer = NULL;
UClass* UVolumetricBuilder::pClassPointer = NULL;

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif