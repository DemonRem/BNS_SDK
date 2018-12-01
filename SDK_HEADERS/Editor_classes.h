#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Editor_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Editor.TextureFactory.TextureCompressionSettings
/*enum TextureCompressionSettings
{
	TC_Default                                         = 0,
	TC_Normalmap                                       = 1,
	TC_Displacementmap                                 = 2,
	TC_NormalmapAlpha                                  = 3,
	TC_Grayscale                                       = 4,
	TC_HighDynamicRange                                = 5,
	TC_NoCompression                                   = 6,
	TC_MAX                                             = 7
};*/

// Enum Editor.TextureFactory.LODGroup
/*enum LODGroup
{
	TEXTUREGROUP_World                                 = 0,
	TEXTUREGROUP_WorldNormalMap                        = 1,
	TEXTUREGROUP_WorldSpecular                         = 2,
	TEXTUREGROUP_Character                             = 3,
	TEXTUREGROUP_CharacterNormalMap                    = 4,
	TEXTUREGROUP_CharacterSpecular                     = 5,
	TEXTUREGROUP_Weapon                                = 6,
	TEXTUREGROUP_WeaponNormalMap                       = 7,
	TEXTUREGROUP_WeaponSpecular                        = 8,
	TEXTUREGROUP_Vehicle                               = 9,
	TEXTUREGROUP_VehicleNormalMap                      = 10,
	TEXTUREGROUP_VehicleSpecular                       = 11,
	TEXTUREGROUP_Cinematic                             = 12,
	TEXTUREGROUP_Effects                               = 13,
	TEXTUREGROUP_Skybox                                = 14,
	TEXTUREGROUP_UI                                    = 15,
	TEXTUREGROUP_LightAndShadowMap                     = 16,
	TEXTUREGROUP_RenderTarget                          = 17,
	TEXTUREGROUP_System                                = 18,
	TEXTUREGROUP_TerrainDiffuse                        = 19,
	TEXTUREGROUP_TerrainNormalMap                      = 20,
	TEXTUREGROUP_UniqueDiffuse                         = 21,
	TEXTUREGROUP_UniqueNormalMap                       = 22,
	TEXTUREGROUP_WorldMaskMap                          = 23,
	TEXTUREGROUP_WorldOcclusionMap                     = 24,
	TEXTUREGROUP_ColorLookupTable                      = 25,
	TEXTUREGROUP_MAX                                   = 26
};*/

// Enum Editor.TextureFactory.Blending
/*enum Blending
{
	BLEND_Opaque                                       = 0,
	BLEND_Masked                                       = 1,
	BLEND_Translucent                                  = 2,
	BLEND_Additive                                     = 3,
	BLEND_Modulate                                     = 4,
	BLEND_UI                                           = 5,
	BLEND_MAX                                          = 6
};*/

// Enum Editor.TextureFactory.LightingModel
/*enum LightingModel
{
	MLM_Phong                                          = 0,
	MLM_NonDirectional                                 = 1,
	MLM_Unlit                                          = 2,
	MLM_Custom                                         = 3,
	MLM_Anisotropic                                    = 4,
	MLM_MAX                                            = 5
};*/

// Enum Editor.RenderTargetCubeExporterTGA.CubeFace
/*enum CubeFace
{
	CubeFace_MAX                                       = 0
};*/

// Enum Editor.TextureMovieFactory.MovieStreamSource
/*enum MovieStreamSource
{
	MovieStream_File                                   = 0,
	MovieStream_Memory                                 = 1,
	MovieStream_MAX                                    = 2
};*/

// Enum Editor.TextureRenderTargetCubeFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	Format_MAX                                         = 1
};*/

// Enum Editor.TextureRenderTargetFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	Format_MAX                                         = 1
};*/

// Enum Editor.SheetBuilder.ESheetAxis
/*enum ESheetAxis
{
	AX_Horizontal                                      = 0,
	AX_XAxis                                           = 1,
	AX_YAxis                                           = 2,
	AX_MAX                                             = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Editor.AnalyzeContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2682 ];

		return pClassPointer;
	};

};

//UClass* UAnalyzeContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeCookedContentCommandlet
// 0x0018 (0x0094 - 0x007C)
class UAnalyzeCookedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2684 ];

		return pClassPointer;
	};

};

//UClass* UAnalyzeCookedContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2686 ];

		return pClassPointer;
	};

};

//UClass* UAnalyzeCookedPackagesCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeFallbackMaterialsCommandlet
// 0x003C (0x00B8 - 0x007C)
class UAnalyzeFallbackMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x007C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2688 ];

		return pClassPointer;
	};

};

//UClass* UAnalyzeFallbackMaterialsCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeReferencedContentCommandlet
// 0x01B0 (0x022C - 0x007C)
class UAnalyzeReferencedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x1B0 ];                           		// 0x007C (0x01B0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2690 ];

		return pClassPointer;
	};

};

//UClass* UAnalyzeReferencedContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeScriptCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeScriptCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2692 ];

		return pClassPointer;
	};

};

//UClass* UAnalyzeScriptCommandlet::pClassPointer = NULL;

// Class Editor.AnimSetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimSetFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2694 ];

		return pClassPointer;
	};

};

//UClass* UAnimSetFactoryNew::pClassPointer = NULL;

// Class Editor.AnimTreeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimTreeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2696 ];

		return pClassPointer;
	};

};

//UClass* UAnimTreeFactoryNew::pClassPointer = NULL;

// Class Editor.BatchExportCommandlet
// 0x0000 (0x007C - 0x007C)
class UBatchExportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2698 ];

		return pClassPointer;
	};

};

//UClass* UBatchExportCommandlet::pClassPointer = NULL;

// Class Editor.BrushBuilder
// 0x003C (0x0078 - 0x003C)
class UBrushBuilder : public UObject
{
public:
	struct FString                                     BitmapFilename;                                   		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ToolTip;                                          		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FVector >                           Vertices;                                         		// 0x0054 (0x000C) [0x0000000000000000]              
	TArray< struct FBuilderPoly >                      Polys;                                            		// 0x0060 (0x000C) [0x0000000000000000]              
	struct FName                                       Group;                                            		// 0x006C (0x0008) [0x0000000000000000]              
	unsigned long                                      MergeCoplanars : 1;                               		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2700 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void PolyEnd ( );
	void Polyi ( int I );
	void PolyBegin ( int Direction, struct FName ItemName );
	void Poly4i ( int Direction, int I, int J, int K, int L, struct FName ItemName, unsigned long bIsTwoSidedNonSolid );
	void Poly3i ( int Direction, int I, int J, int K, struct FName ItemName, unsigned long bIsTwoSidedNonSolid );
	int Vertex3f ( float X, float Y, float Z );
	int Vertexv ( struct FVector V );
	bool BadParameters ( struct FString msg );
	int GetPolyCount ( );
	struct FVector GetVertex ( int I );
	int GetVertexCount ( );
	bool EndBrush ( );
	void BeginBrush ( unsigned long InMergeCoplanars, struct FName InGroup );
};

//UClass* UBrushBuilder::pClassPointer = NULL;

// Class Editor.BuildContentTagIndexCommandlet
// 0x0000 (0x007C - 0x007C)
class UBuildContentTagIndexCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2702 ];

		return pClassPointer;
	};

};

//UClass* UBuildContentTagIndexCommandlet::pClassPointer = NULL;

// Class Editor.CameraAnimFactory
// 0x0000 (0x0070 - 0x0070)
class UCameraAnimFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2704 ];

		return pClassPointer;
	};

};

//UClass* UCameraAnimFactory::pClassPointer = NULL;

// Class Editor.ResavePackagesCommandlet
// 0x0050 (0x00CC - 0x007C)
class UResavePackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x50 ];                            		// 0x007C (0x0050) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2706 ];

		return pClassPointer;
	};

};

//UClass* UResavePackagesCommandlet::pClassPointer = NULL;

// Class Editor.ChangePrefabSequenceClassCommandlet
// 0x0000 (0x00CC - 0x00CC)
class UChangePrefabSequenceClassCommandlet : public UResavePackagesCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2708 ];

		return pClassPointer;
	};

};

//UClass* UChangePrefabSequenceClassCommandlet::pClassPointer = NULL;

// Class Editor.CheckClassOffsetCommandlet
// 0x0000 (0x007C - 0x007C)
class UCheckClassOffsetCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2710 ];

		return pClassPointer;
	};

};

//UClass* UCheckClassOffsetCommandlet::pClassPointer = NULL;

// Class Editor.CheckFileDependencyCommandlet
// 0x0000 (0x007C - 0x007C)
class UCheckFileDependencyCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2712 ];

		return pClassPointer;
	};

};

//UClass* UCheckFileDependencyCommandlet::pClassPointer = NULL;

// Class Editor.ClassExporterUC
// 0x0000 (0x0064 - 0x0064)
class UClassExporterUC : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2714 ];

		return pClassPointer;
	};

};

//UClass* UClassExporterUC::pClassPointer = NULL;

// Class Editor.ClassFactoryUC
// 0x0000 (0x0070 - 0x0070)
class UClassFactoryUC : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2716 ];

		return pClassPointer;
	};

};

//UClass* UClassFactoryUC::pClassPointer = NULL;

// Class Editor.ColladaFactory
// 0x0004 (0x0074 - 0x0070)
class UColladaFactory : public UFactory
{
public:
	unsigned long                                      bImportAsSkeletalMesh : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2718 ];

		return pClassPointer;
	};

};

//UClass* UColladaFactory::pClassPointer = NULL;

// Class Editor.ConfigComponent
// 0x0004 (0x004C - 0x0048)
class UConfigComponent : public UComponent
{
public:
	class UPostProcessParameter*                       PPParameter;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2721 ];

		return pClassPointer;
	};

};

//UClass* UConfigComponent::pClassPointer = NULL;

// Class Editor.ConformCommandlet
// 0x0000 (0x007C - 0x007C)
class UConformCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2723 ];

		return pClassPointer;
	};

};

//UClass* UConformCommandlet::pClassPointer = NULL;

// Class Editor.ContentTagIndex
// 0x001C (0x0058 - 0x003C)
class UContentTagIndex : public UObject
{
public:
	int                                                VersionInfo;                                      		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FTagInfo >                          DefaultTags;                                      		// 0x0040 (0x000C) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	TArray< struct FTagInfo >                          Tags;                                             		// 0x004C (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2725 ];

		return pClassPointer;
	};

};

//UClass* UContentTagIndex::pClassPointer = NULL;

// Class Editor.CookPackagesCommandlet
// 0x0D84 (0x0E00 - 0x007C)
class UCookPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xD84 ];                           		// 0x007C (0x0D84) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2727 ];

		return pClassPointer;
	};

};

//UClass* UCookPackagesCommandlet::pClassPointer = NULL;

// Class Editor.CreateCacheCollectiveCommandlet
// 0x0604 (0x0680 - 0x007C)
class UCreateCacheCollectiveCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x604 ];                           		// 0x007C (0x0604) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2729 ];

		return pClassPointer;
	};

};

//UClass* UCreateCacheCollectiveCommandlet::pClassPointer = NULL;

// Class Editor.CreateDefaultStyleCommandlet
// 0x0004 (0x0080 - 0x007C)
class UCreateDefaultStyleCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2731 ];

		return pClassPointer;
	};

};

//UClass* UCreateDefaultStyleCommandlet::pClassPointer = NULL;

// Class Editor.CubeBuilder
// 0x001C (0x0094 - 0x0078)
class UCubeBuilder : public UBrushBuilder
{
public:
	float                                              X;                                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WallThickness;                                    		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Hollow : 1;                                       		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Tessellated : 1;                                  		// 0x0090 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2733 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCube ( int Direction, float DX, float DY, float dz, unsigned long _tessellated );
};

//UClass* UCubeBuilder::pClassPointer = NULL;

// Class Editor.CurveEdPresetCurveFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UCurveEdPresetCurveFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2735 ];

		return pClassPointer;
	};

};

//UClass* UCurveEdPresetCurveFactoryNew::pClassPointer = NULL;

// Class Editor.CutDownContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UCutDownContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2737 ];

		return pClassPointer;
	};

};

//UClass* UCutDownContentCommandlet::pClassPointer = NULL;

// Class Editor.DebugShaderCompileDataCommandlet
// 0x0004 (0x0080 - 0x007C)
class UDebugShaderCompileDataCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2739 ];

		return pClassPointer;
	};

};

//UClass* UDebugShaderCompileDataCommandlet::pClassPointer = NULL;

// Class Editor.DecalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UDecalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2741 ];

		return pClassPointer;
	};

};

//UClass* UDecalMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.DialogueSetFactory
// 0x0000 (0x0070 - 0x0070)
class UDialogueSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2743 ];

		return pClassPointer;
	};

};

//UClass* UDialogueSetFactory::pClassPointer = NULL;

// Class Editor.DiffPackagesCommandlet
// 0x0018 (0x0094 - 0x007C)
class UDiffPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2745 ];

		return pClassPointer;
	};

};

//UClass* UDiffPackagesCommandlet::pClassPointer = NULL;

// Class Editor.DistributionFloatConstantCurveFactory
// 0x0000 (0x0070 - 0x0070)
class UDistributionFloatConstantCurveFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2747 ];

		return pClassPointer;
	};

};

//UClass* UDistributionFloatConstantCurveFactory::pClassPointer = NULL;

// Class Editor.DumpEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2749 ];

		return pClassPointer;
	};

};

//UClass* UDumpEmittersCommandlet::pClassPointer = NULL;

// Class Editor.DumpLightmapInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpLightmapInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2751 ];

		return pClassPointer;
	};

};

//UClass* UDumpLightmapInfoCommandlet::pClassPointer = NULL;

// Class Editor.DumpShadersCommandlet
// 0x000C (0x0088 - 0x007C)
class UDumpShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x007C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2753 ];

		return pClassPointer;
	};

};

//UClass* UDumpShadersCommandlet::pClassPointer = NULL;

// Class Editor.EditorComponent
// 0x001C (0x022C - 0x0210)
class UEditorComponent : public UPrimitiveComponent
{
public:
	unsigned long                                      bDrawGrid : 1;                                    		// 0x0210 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bDrawPivot : 1;                                   		// 0x0210 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bDrawBaseInfo : 1;                                		// 0x0210 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bDrawWorldBox : 1;                                		// 0x0210 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bDrawColoredOrigin : 1;                           		// 0x0210 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bDrawKillZ : 1;                                   		// 0x0210 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	struct FColor                                      GridColorHi;                                      		// 0x0214 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      GridColorLo;                                      		// 0x0218 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PerspectiveGridSize;                              		// 0x021C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      PivotColor;                                       		// 0x0220 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PivotSize;                                        		// 0x0224 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BaseBoxColor;                                     		// 0x0228 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2755 ];

		return pClassPointer;
	};

};

//UClass* UEditorComponent::pClassPointer = NULL;

// Class Editor.EditorEngine
// 0x01C0 (0x0734 - 0x0574)
class UEditorEngine : public UEngine
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0574 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UModel*                                      TempModel;                                        		// 0x0578 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTransBuffer*                                Trans;                                            		// 0x057C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTextBuffer*                                 Results;                                          		// 0x0580 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPointer >                          ActorProperties;                                  		// 0x0584 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    LevelProperties;                                  		// 0x0590 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  Bad;                                              		// 0x0594 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  Bkgnd;                                            		// 0x0598 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BkgndHi;                                          		// 0x059C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BadHighlight;                                     		// 0x05A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MaterialArrow;                                    		// 0x05A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MaterialBackdrop;                                 		// 0x05A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   PreviewSoundCue;                                  		// 0x05AC (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAudioComponent*                             PreviewAudioComponent;                            		// 0x05B0 (0x0004) [0x000000000000200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient )
	class UStaticMesh*                                 TexPropCube;                                      		// 0x05B4 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TexPropSphere;                                    		// 0x05B8 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TexPropPlane;                                     		// 0x05BC (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TexPropCylinder;                                  		// 0x05C0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFastRebuild : 1;                                 		// 0x05C4 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bBootstrapping : 1;                               		// 0x05C4 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bIsImportingT3D : 1;                              		// 0x05C4 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	int                                                TerrainEditBrush;                                 		// 0x05C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ClickFlags;                                       		// 0x05CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPackage*                                    ParentContext;                                    		// 0x05D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     ClickLocation;                                    		// 0x05D4 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FPlane                                      ClickPlane;                                       		// 0x05E0 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     MouseMovement;                                    		// 0x05F0 (0x000C) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPointer >                          ViewportClients;                                  		// 0x05FC (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              FarClippingPlane;                                 		// 0x0608 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DetailMode;                                       		// 0x060C (0x0001) [0x0000000000000000]              
	struct FPointer                                    ConstraintsVtbl;                                  		// 0x0610 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      GridEnabled : 1;                                  		// 0x0614 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      SnapScaleEnabled : 1;                             		// 0x0614 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      SnapVertices : 1;                                 		// 0x0614 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	int                                                ScaleGridSize;                                    		// 0x0618 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SnapDistance;                                     		// 0x061C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              GridSizes[ 0xB ];                                 		// 0x0620 (0x002C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                CurrentGridSz;                                    		// 0x064C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      RotGridEnabled : 1;                               		// 0x0650 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	struct FRotator                                    RotGridSize;                                      		// 0x0654 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      UseSizingBox : 1;                                 		// 0x0660 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      UseAxisIndicator : 1;                             		// 0x0660 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	float                                              FOVAngle;                                         		// 0x0664 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      GodMode : 1;                                      		// 0x0668 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	struct FString                                     AutoSaveDir;                                      		// 0x066C (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      InvertwidgetZAxis : 1;                            		// 0x0678 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	struct FString                                     GameCommandLine;                                  		// 0x067C (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FString >                           EditPackages;                                     		// 0x0688 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     EditPackagesInPath;                               		// 0x0694 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     EditPackagesOutPath;                              		// 0x06A0 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     FRScriptOutputPath;                               		// 0x06AC (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      AlwaysShowTerrain : 1;                            		// 0x06B8 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      UseActorRotationGizmo : 1;                        		// 0x06B8 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowBrushMarkerPolys : 1;                        		// 0x06B8 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseMayaCameraControls : 1;                       		// 0x06B8 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bPrefabsLocked : 1;                               		// 0x06B8 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bEnableSocketSnapping : 1;                        		// 0x06B8 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	struct FString                                     HeightMapExportClassName;                         		// 0x06BC (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< class UActorFactory* >                     ActorFactories;                                   		// 0x06C8 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     UserOpenedFile;                                   		// 0x06D4 (0x000C) [0x0000000000000000]              
	struct FString                                     InEditorGameURLOptions;                           		// 0x06E0 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UWorld*                                      PlayWorld;                                        		// 0x06EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     PlayWorldLocation;                                		// 0x06F0 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    PlayWorldRotation;                                		// 0x06FC (0x000C) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsPlayWorldQueued : 1;                           		// 0x0708 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bHasPlayWorldPlacement : 1;                       		// 0x0708 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bWorldPackageWasDirty : 1;                        		// 0x0708 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	int                                                PlayWorldDestination;                             		// 0x070C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                PlayInEditorViewportIndex;                        		// 0x0710 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    InEditorPropagator;                               		// 0x0714 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    RemotePropagator;                                 		// 0x0718 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsPushingView : 1;                               		// 0x071C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bColorPickModeEnabled : 1;                        		// 0x071C (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      bDecalUpdateRequested : 1;                        		// 0x071C (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	class UTextureRenderTarget2D*                      ScratchRenderTarget;                              		// 0x0720 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UTexture2D*                                  StreamingBoundsTexture;                           		// 0x0724 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UEditorUserSettings*                         UserSettings;                                     		// 0x0728 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                BSPViewModeIndex;                                 		// 0x072C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    AutoZoneBuilder;                                  		// 0x0730 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2757 ];

		return pClassPointer;
	};

};

//UClass* UEditorEngine::pClassPointer = NULL;

// Class Editor.EditorPlayer
// 0x0003 (0x0534 - 0x0531)
class UEditorPlayer : public ULocalPlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2759 ];

		return pClassPointer;
	};

};

//UClass* UEditorPlayer::pClassPointer = NULL;

// Class Editor.EditorUserSettings
// 0x0004 (0x0040 - 0x003C)
class UEditorUserSettings : public UObject
{
public:
	unsigned long                                      AllowFlightCameraToRemapKeys : 1;                 		// 0x003C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAllowSelectTranslucent : 1;                      		// 0x003C (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2761 ];

		return pClassPointer;
	};

};

//UClass* UEditorUserSettings::pClassPointer = NULL;

// Class Editor.EditorViewportInput
// 0x0004 (0x012C - 0x0128)
class UEditorViewportInput : public UInput
{
public:
	class UEditorEngine*                               Editor;                                           		// 0x0128 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2763 ];

		return pClassPointer;
	};

};

//UClass* UEditorViewportInput::pClassPointer = NULL;

// Class Editor.EdModeComponent
// 0x0000 (0x022C - 0x022C)
class UEdModeComponent : public UEditorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2765 ];

		return pClassPointer;
	};

};

//UClass* UEdModeComponent::pClassPointer = NULL;

// Class Editor.EventJumpTemplateFactory
// 0x0000 (0x0070 - 0x0070)
class UEventJumpTemplateFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2767 ];

		return pClassPointer;
	};

};

//UClass* UEventJumpTemplateFactory::pClassPointer = NULL;

// Class Editor.ExamineOutersCommandlet
// 0x0000 (0x007C - 0x007C)
class UExamineOutersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2769 ];

		return pClassPointer;
	};

};

//UClass* UExamineOutersCommandlet::pClassPointer = NULL;

// Class Editor.ExportLocCommandlet
// 0x0000 (0x007C - 0x007C)
class UExportLocCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2771 ];

		return pClassPointer;
	};

};

//UClass* UExportLocCommandlet::pClassPointer = NULL;

// Class Editor.FindDuplicateKismetObjectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindDuplicateKismetObjectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2773 ];

		return pClassPointer;
	};

};

//UClass* UFindDuplicateKismetObjectsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterMismatchedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterMismatchedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2775 ];

		return pClassPointer;
	};

};

//UClass* UFindEmitterMismatchedLODsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterModifiedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModifiedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2777 ];

		return pClassPointer;
	};

};

//UClass* UFindEmitterModifiedLODsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterModuleLODErrorsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModuleLODErrorsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2779 ];

		return pClassPointer;
	};

};

//UClass* UFindEmitterModuleLODErrorsCommandlet::pClassPointer = NULL;

// Class Editor.FindQuestionableTexturesCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindQuestionableTexturesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2781 ];

		return pClassPointer;
	};

};

//UClass* UFindQuestionableTexturesCommandlet::pClassPointer = NULL;

// Class Editor.PerformMapCheckCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPerformMapCheckCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2783 ];

		return pClassPointer;
	};

};

//UClass* UPerformMapCheckCommandlet::pClassPointer = NULL;

// Class Editor.FindRenamedPrefabSequencesCommandlet
// 0x0048 (0x00DC - 0x0094)
class UFindRenamedPrefabSequencesCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0094 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2785 ];

		return pClassPointer;
	};

};

//UClass* UFindRenamedPrefabSequencesCommandlet::pClassPointer = NULL;

// Class Editor.FindSoundCuesWithMissingGroupsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindSoundCuesWithMissingGroupsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2787 ];

		return pClassPointer;
	};

};

//UClass* UFindSoundCuesWithMissingGroupsCommandlet::pClassPointer = NULL;

// Class Editor.FindStaticActorsRefsCommandlet
// 0x00A0 (0x0134 - 0x0094)
class UFindStaticActorsRefsCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x0094 (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2789 ];

		return pClassPointer;
	};

};

//UClass* UFindStaticActorsRefsCommandlet::pClassPointer = NULL;

// Class Editor.FindTexturesWithMissingPhysicalMaterialsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindTexturesWithMissingPhysicalMaterialsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2791 ];

		return pClassPointer;
	};

};

//UClass* UFindTexturesWithMissingPhysicalMaterialsCommandlet::pClassPointer = NULL;

// Class Editor.FixAmbiguousMaterialParametersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixAmbiguousMaterialParametersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2793 ];

		return pClassPointer;
	};

};

//UClass* UFixAmbiguousMaterialParametersCommandlet::pClassPointer = NULL;

// Class Editor.FixupEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2795 ];

		return pClassPointer;
	};

};

//UClass* UFixupEmittersCommandlet::pClassPointer = NULL;

// Class Editor.FixupRedirectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupRedirectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2797 ];

		return pClassPointer;
	};

};

//UClass* UFixupRedirectsCommandlet::pClassPointer = NULL;

// Class Editor.FixupSourceUVsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupSourceUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2799 ];

		return pClassPointer;
	};

};

//UClass* UFixupSourceUVsCommandlet::pClassPointer = NULL;

// Class Editor.FonixFactory
// 0x0000 (0x0070 - 0x0070)
class UFonixFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2801 ];

		return pClassPointer;
	};

};

//UClass* UFonixFactory::pClassPointer = NULL;

// Class Editor.FontAttributeFactory
// 0x0000 (0x0070 - 0x0070)
class UFontAttributeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2803 ];

		return pClassPointer;
	};

};

//UClass* UFontAttributeFactory::pClassPointer = NULL;

// Class Editor.FontColorFactory
// 0x0000 (0x0070 - 0x0070)
class UFontColorFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2805 ];

		return pClassPointer;
	};

};

//UClass* UFontColorFactory::pClassPointer = NULL;

// Class Editor.FontFaceFactory
// 0x0000 (0x0070 - 0x0070)
class UFontFaceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2807 ];

		return pClassPointer;
	};

};

//UClass* UFontFaceFactory::pClassPointer = NULL;

// Class Editor.TextureFactory
// 0x004C (0x00BC - 0x0070)
class UTextureFactory : public UFactory
{
public:
	unsigned long                                      NoCompression : 1;                                		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CompressionNoAlpha : 1;                           		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DeferCompression : 1;                             		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CompressionSettings;                              		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Create_Material_ : 1;                             		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Diffuse : 1;                               		// 0x0084 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Emissive : 1;                              		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Specular : 1;                            		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Emissive : 1;                            		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity : 1;                             		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity_Mask : 1;                        		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Two_Sided_ : 1;                                   		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Blending;                                         		// 0x00A0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Lighting_Model;                                   		// 0x00A1 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LODGroup;                                         		// 0x00A2 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FlipBook : 1;                                     		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Dither_Mip_maps_alpha_ : 1;                       		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_R : 1;                            		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_G : 1;                            		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_B : 1;                            		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_A : 1;                            		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2809 ];

		return pClassPointer;
	};

};

//UClass* UTextureFactory::pClassPointer = NULL;

// Class Editor.FontFactory
// 0x0000 (0x00BC - 0x00BC)
class UFontFactory : public UTextureFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2836 ];

		return pClassPointer;
	};

};

//UClass* UFontFactory::pClassPointer = NULL;

// Class Editor.FontResourceFactory
// 0x0000 (0x0070 - 0x0070)
class UFontResourceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2838 ];

		return pClassPointer;
	};

};

//UClass* UFontResourceFactory::pClassPointer = NULL;

// Class Editor.FontSetFactory
// 0x0000 (0x0070 - 0x0070)
class UFontSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2840 ];

		return pClassPointer;
	};

};

//UClass* UFontSetFactory::pClassPointer = NULL;

// Class Editor.GeomModifier
// 0x0010 (0x004C - 0x003C)
class UGeomModifier : public UObject
{
public:
	struct FString                                     Description;                                      		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPushButton : 1;                                  		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInitialized : 1;                                 		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2842 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier::pClassPointer = NULL;

// Class Editor.GeomModifier_Edit
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Edit : public UGeomModifier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2844 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Edit::pClassPointer = NULL;

// Class Editor.GeomModifier_AutoFix
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_AutoFix : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2846 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_AutoFix::pClassPointer = NULL;

// Class Editor.GeomModifier_Clip
// 0x0004 (0x0050 - 0x004C)
class UGeomModifier_Clip : public UGeomModifier_Edit
{
public:
	unsigned long                                      bFlipNormal : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSplit : 1;                                       		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2848 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Clip::pClassPointer = NULL;

// Class Editor.GeomModifier_Create
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Create : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2850 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Create::pClassPointer = NULL;

// Class Editor.GeomModifier_Delete
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Delete : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2852 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Delete::pClassPointer = NULL;

// Class Editor.GeomModifier_Extrude
// 0x0008 (0x0054 - 0x004C)
class UGeomModifier_Extrude : public UGeomModifier_Edit
{
public:
	int                                                Length;                                           		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Segments;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2854 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Extrude::pClassPointer = NULL;

// Class Editor.GeomModifier_Find
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Find : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2856 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Find::pClassPointer = NULL;

// Class Editor.GeomModifier_Flip
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Flip : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2858 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Flip::pClassPointer = NULL;

// Class Editor.GeomModifier_Lathe
// 0x0009 (0x0055 - 0x004C)
class UGeomModifier_Lathe : public UGeomModifier_Edit
{
public:
	int                                                TotalSegments;                                    		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Segments;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Axis;                                             		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2860 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Lathe::pClassPointer = NULL;

// Class Editor.GeomModifier_Split
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Split : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2862 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Split::pClassPointer = NULL;

// Class Editor.GeomModifier_Triangulate
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Triangulate : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2864 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Triangulate::pClassPointer = NULL;

// Class Editor.GeomModifier_Turn
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Turn : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2866 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Turn::pClassPointer = NULL;

// Class Editor.GeomModifier_Weld
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Weld : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2868 ];

		return pClassPointer;
	};

};

//UClass* UGeomModifier_Weld::pClassPointer = NULL;

// Class Editor.ImageSetFactory
// 0x0000 (0x0070 - 0x0070)
class UImageSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2870 ];

		return pClassPointer;
	};

};

//UClass* UImageSetFactory::pClassPointer = NULL;

// Class Editor.LensFlareFactoryNew
// 0x0000 (0x0070 - 0x0070)
class ULensFlareFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2872 ];

		return pClassPointer;
	};

};

//UClass* ULensFlareFactoryNew::pClassPointer = NULL;

// Class Editor.LevelExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2874 ];

		return pClassPointer;
	};

};

//UClass* ULevelExporterOBJ::pClassPointer = NULL;

// Class Editor.LevelExporterSTL
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterSTL : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2876 ];

		return pClassPointer;
	};

};

//UClass* ULevelExporterSTL::pClassPointer = NULL;

// Class Editor.LevelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2878 ];

		return pClassPointer;
	};

};

//UClass* ULevelExporterT3D::pClassPointer = NULL;

// Class Editor.LevelFactory
// 0x0000 (0x0070 - 0x0070)
class ULevelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2880 ];

		return pClassPointer;
	};

};

//UClass* ULevelFactory::pClassPointer = NULL;

// Class Editor.LightingChannelsObject
// 0x0008 (0x0044 - 0x003C)
class ULightingChannelsObject : public UObject
{
public:
	struct FLightingChannelContainer                   LightingChannels;                                 		// 0x003C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2882 ];

		return pClassPointer;
	};

};

//UClass* ULightingChannelsObject::pClassPointer = NULL;

// Class Editor.ListCorruptedComponentsCommandlet
// 0x0000 (0x007C - 0x007C)
class UListCorruptedComponentsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2884 ];

		return pClassPointer;
	};

};

//UClass* UListCorruptedComponentsCommandlet::pClassPointer = NULL;

// Class Editor.ListDistanceCrossFadeNodesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListDistanceCrossFadeNodesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2886 ];

		return pClassPointer;
	};

};

//UClass* UListDistanceCrossFadeNodesCommandlet::pClassPointer = NULL;

// Class Editor.ListEmittersUsingModuleCommandlet
// 0x0000 (0x007C - 0x007C)
class UListEmittersUsingModuleCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2888 ];

		return pClassPointer;
	};

};

//UClass* UListEmittersUsingModuleCommandlet::pClassPointer = NULL;

// Class Editor.ListLoopingEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UListLoopingEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2890 ];

		return pClassPointer;
	};

};

//UClass* UListLoopingEmittersCommandlet::pClassPointer = NULL;

// Class Editor.ListPackagesReferencingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPackagesReferencingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2892 ];

		return pClassPointer;
	};

};

//UClass* UListPackagesReferencingCommandlet::pClassPointer = NULL;

// Class Editor.ListPSysFixedBoundSettingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPSysFixedBoundSettingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2894 ];

		return pClassPointer;
	};

};

//UClass* UListPSysFixedBoundSettingCommandlet::pClassPointer = NULL;

// Class Editor.ListScriptReferencedContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UListScriptReferencedContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2896 ];

		return pClassPointer;
	};

};

//UClass* UListScriptReferencedContentCommandlet::pClassPointer = NULL;

// Class Editor.ListSoundNodeWavesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListSoundNodeWavesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2898 ];

		return pClassPointer;
	};

};

//UClass* UListSoundNodeWavesCommandlet::pClassPointer = NULL;

// Class Editor.LoadPackageCommandlet
// 0x0000 (0x007C - 0x007C)
class ULoadPackageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2900 ];

		return pClassPointer;
	};

};

//UClass* ULoadPackageCommandlet::pClassPointer = NULL;

// Class Editor.LocSoundInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class ULocSoundInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2902 ];

		return pClassPointer;
	};

};

//UClass* ULocSoundInfoCommandlet::pClassPointer = NULL;

// Class Editor.MakeCommandlet
// 0x0000 (0x007C - 0x007C)
class UMakeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2904 ];

		return pClassPointer;
	};

};

//UClass* UMakeCommandlet::pClassPointer = NULL;

// Class Editor.MaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2906 ];

		return pClassPointer;
	};

};

//UClass* UMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.MaterialInstanceConstantFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceConstantFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2908 ];

		return pClassPointer;
	};

};

//UClass* UMaterialInstanceConstantFactoryNew::pClassPointer = NULL;

// Class Editor.MaterialInstanceTimeVaryingFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceTimeVaryingFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2910 ];

		return pClassPointer;
	};

};

//UClass* UMaterialInstanceTimeVaryingFactoryNew::pClassPointer = NULL;

// Class Editor.MergePackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMergePackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2912 ];

		return pClassPointer;
	};

};

//UClass* UMergePackagesCommandlet::pClassPointer = NULL;

// Class Editor.MineCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMineCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2914 ];

		return pClassPointer;
	};

};

//UClass* UMineCookedPackagesCommandlet::pClassPointer = NULL;

// Class Editor.ModelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UModelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2916 ];

		return pClassPointer;
	};

};

//UClass* UModelExporterT3D::pClassPointer = NULL;

// Class Editor.ModelFactory
// 0x0000 (0x0070 - 0x0070)
class UModelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2918 ];

		return pClassPointer;
	};

};

//UClass* UModelFactory::pClassPointer = NULL;

// Class Editor.ObjectExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UObjectExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2920 ];

		return pClassPointer;
	};

};

//UClass* UObjectExporterT3D::pClassPointer = NULL;

// Class Editor.ObjectNoteFactory
// 0x0000 (0x0070 - 0x0070)
class UObjectNoteFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2922 ];

		return pClassPointer;
	};

};

//UClass* UObjectNoteFactory::pClassPointer = NULL;

// Class Editor.ParticleSetFactory
// 0x0000 (0x0070 - 0x0070)
class UParticleSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2924 ];

		return pClassPointer;
	};

};

//UClass* UParticleSetFactory::pClassPointer = NULL;

// Class Editor.ParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2926 ];

		return pClassPointer;
	};

};

//UClass* UParticleSystemFactoryNew::pClassPointer = NULL;

// Class Editor.PatchScriptCommandlet
// 0x0004 (0x0080 - 0x007C)
class UPatchScriptCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2928 ];

		return pClassPointer;
	};

};

//UClass* UPatchScriptCommandlet::pClassPointer = NULL;

// Class Editor.PerformTerrainMaterialDumpCommandlet
// 0x0000 (0x007C - 0x007C)
class UPerformTerrainMaterialDumpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2930 ];

		return pClassPointer;
	};

};

//UClass* UPerformTerrainMaterialDumpCommandlet::pClassPointer = NULL;

// Class Editor.PersistentCookerData
// 0x014C (0x0188 - 0x003C)
class UPersistentCookerData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x003C (0x014C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2932 ];

		return pClassPointer;
	};

};

//UClass* UPersistentCookerData::pClassPointer = NULL;

// Class Editor.PersistentShaderCompileData
// 0x0044 (0x0080 - 0x003C)
class UPersistentShaderCompileData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x44 ];                            		// 0x003C (0x0044) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2934 ];

		return pClassPointer;
	};

};

//UClass* UPersistentShaderCompileData::pClassPointer = NULL;

// Class Editor.PhysicalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysicalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2936 ];

		return pClassPointer;
	};

};

//UClass* UPhysicalMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.PhysXParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysXParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2938 ];

		return pClassPointer;
	};

};

//UClass* UPhysXParticleSystemFactoryNew::pClassPointer = NULL;

// Class Editor.PIEToNormalCommandlet
// 0x0000 (0x007C - 0x007C)
class UPIEToNormalCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2940 ];

		return pClassPointer;
	};

};

//UClass* UPIEToNormalCommandlet::pClassPointer = NULL;

// Class Editor.PkgInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UPkgInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2942 ];

		return pClassPointer;
	};

};

//UClass* UPkgInfoCommandlet::pClassPointer = NULL;

// Class Editor.PlayerCameraAnimFactory
// 0x0000 (0x0070 - 0x0070)
class UPlayerCameraAnimFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2944 ];

		return pClassPointer;
	};

};

//UClass* UPlayerCameraAnimFactory::pClassPointer = NULL;

// Class Editor.PolysExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UPolysExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2946 ];

		return pClassPointer;
	};

};

//UClass* UPolysExporterT3D::pClassPointer = NULL;

// Class Editor.PolysFactory
// 0x0000 (0x0070 - 0x0070)
class UPolysFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2948 ];

		return pClassPointer;
	};

};

//UClass* UPolysFactory::pClassPointer = NULL;

// Class Editor.PostProcessFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPostProcessFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2950 ];

		return pClassPointer;
	};

};

//UClass* UPostProcessFactoryNew::pClassPointer = NULL;

// Class Editor.PostProcessParameterFactory
// 0x0000 (0x0070 - 0x0070)
class UPostProcessParameterFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2952 ];

		return pClassPointer;
	};

};

//UClass* UPostProcessParameterFactory::pClassPointer = NULL;

// Class Editor.PrecompileJobData
// 0x0024 (0x0060 - 0x003C)
class UPrecompileJobData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2954 ];

		return pClassPointer;
	};

};

//UClass* UPrecompileJobData::pClassPointer = NULL;

// Class Editor.PrecompileShadersCommandlet
// 0x004C (0x00C8 - 0x007C)
class UPrecompileShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x007C (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2956 ];

		return pClassPointer;
	};

};

//UClass* UPrecompileShadersCommandlet::pClassPointer = NULL;

// Class Editor.ProgressEffectFactory
// 0x0000 (0x0070 - 0x0070)
class UProgressEffectFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2958 ];

		return pClassPointer;
	};

};

//UClass* UProgressEffectFactory::pClassPointer = NULL;

// Class Editor.RebuildMapCommandlet
// 0x0000 (0x007C - 0x007C)
class URebuildMapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2960 ];

		return pClassPointer;
	};

};

//UClass* URebuildMapCommandlet::pClassPointer = NULL;

// Class Editor.RenderTargetCubeExporterTGA
// 0x0004 (0x0068 - 0x0064)
class URenderTargetCubeExporterTGA : public UExporter
{
public:
	unsigned char                                      CubeFace;                                         		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2962 ];

		return pClassPointer;
	};

};

//UClass* URenderTargetCubeExporterTGA::pClassPointer = NULL;

// Class Editor.RenderTargetExporterTGA
// 0x0000 (0x0064 - 0x0064)
class URenderTargetExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2966 ];

		return pClassPointer;
	};

};

//UClass* URenderTargetExporterTGA::pClassPointer = NULL;

// Class Editor.ReplaceActorCommandlet
// 0x0000 (0x007C - 0x007C)
class UReplaceActorCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2968 ];

		return pClassPointer;
	};

};

//UClass* UReplaceActorCommandlet::pClassPointer = NULL;

// Class Editor.ScaleAudioVolumeCommandlet
// 0x0000 (0x007C - 0x007C)
class UScaleAudioVolumeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2970 ];

		return pClassPointer;
	};

};

//UClass* UScaleAudioVolumeCommandlet::pClassPointer = NULL;

// Class Editor.SequenceExporterT3D
// 0x0000 (0x0064 - 0x0064)
class USequenceExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2972 ];

		return pClassPointer;
	};

};

//UClass* USequenceExporterT3D::pClassPointer = NULL;

// Class Editor.SequenceFactory
// 0x0000 (0x0070 - 0x0070)
class USequenceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2974 ];

		return pClassPointer;
	};

};

//UClass* USequenceFactory::pClassPointer = NULL;

// Class Editor.SetMaterialUsageCommandlet
// 0x0000 (0x007C - 0x007C)
class USetMaterialUsageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2976 ];

		return pClassPointer;
	};

};

//UClass* USetMaterialUsageCommandlet::pClassPointer = NULL;

// Class Editor.SetPackageFlagsCommandlet
// 0x0000 (0x007C - 0x007C)
class USetPackageFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2978 ];

		return pClassPointer;
	};

};

//UClass* USetPackageFlagsCommandlet::pClassPointer = NULL;

// Class Editor.SetTextureLODGroupCommandlet
// 0x0000 (0x007C - 0x007C)
class USetTextureLODGroupCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2980 ];

		return pClassPointer;
	};

};

//UClass* USetTextureLODGroupCommandlet::pClassPointer = NULL;

// Class Editor.ShaderCacheCollectiveData
// 0x02DC (0x0318 - 0x003C)
class UShaderCacheCollectiveData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x2DC ];                           		// 0x003C (0x02DC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2982 ];

		return pClassPointer;
	};

};

//UClass* UShaderCacheCollectiveData::pClassPointer = NULL;

// Class Editor.ShowObjectCountCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowObjectCountCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2984 ];

		return pClassPointer;
	};

};

//UClass* UShowObjectCountCommandlet::pClassPointer = NULL;

// Class Editor.ShowObjectFactory
// 0x0000 (0x0070 - 0x0070)
class UShowObjectFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2986 ];

		return pClassPointer;
	};

};

//UClass* UShowObjectFactory::pClassPointer = NULL;

// Class Editor.ShowStylesCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowStylesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2988 ];

		return pClassPointer;
	};

};

//UClass* UShowStylesCommandlet::pClassPointer = NULL;

// Class Editor.ShowTaggedPropsCommandlet
// 0x0090 (0x010C - 0x007C)
class UShowTaggedPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x90 ];                            		// 0x007C (0x0090) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2990 ];

		return pClassPointer;
	};

};

//UClass* UShowTaggedPropsCommandlet::pClassPointer = NULL;

// Class Editor.SignalInfoFactory
// 0x0000 (0x0070 - 0x0070)
class USignalInfoFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2992 ];

		return pClassPointer;
	};

};

//UClass* USignalInfoFactory::pClassPointer = NULL;

// Class Editor.SkeletalMeshCustomizeSetFactory
// 0x0000 (0x0070 - 0x0070)
class USkeletalMeshCustomizeSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2994 ];

		return pClassPointer;
	};

};

//UClass* USkeletalMeshCustomizeSetFactory::pClassPointer = NULL;

// Class Editor.SkeletalMeshFactorSetFactory
// 0x0000 (0x0070 - 0x0070)
class USkeletalMeshFactorSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2996 ];

		return pClassPointer;
	};

};

//UClass* USkeletalMeshFactorSetFactory::pClassPointer = NULL;

// Class Editor.SkeletalMeshFactory
// 0x0008 (0x0078 - 0x0070)
class USkeletalMeshFactory : public UFactory
{
public:
	unsigned long                                      bAssumeMayaCoordinates : 1;                       		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2998 ];

		return pClassPointer;
	};

};

//UClass* USkeletalMeshFactory::pClassPointer = NULL;

// Class Editor.SoundCueFactoryNew
// 0x0000 (0x0070 - 0x0070)
class USoundCueFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3001 ];

		return pClassPointer;
	};

};

//UClass* USoundCueFactoryNew::pClassPointer = NULL;

// Class Editor.SoundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3003 ];

		return pClassPointer;
	};

};

//UClass* USoundExporterWAV::pClassPointer = NULL;

// Class Editor.SoundFactory
// 0x001C (0x008C - 0x0070)
class USoundFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              LPFMaxRadius;                                     		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LPFMinRadius;                                     		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRadius;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinRadius;                                        		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CueVolume;                                        		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3005 ];

		return pClassPointer;
	};

};

//UClass* USoundFactory::pClassPointer = NULL;

// Class Editor.SoundGroupInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class USoundGroupInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3014 ];

		return pClassPointer;
	};

};

//UClass* USoundGroupInfoCommandlet::pClassPointer = NULL;

// Class Editor.SoundModeFactory
// 0x0000 (0x0070 - 0x0070)
class USoundModeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3016 ];

		return pClassPointer;
	};

};

//UClass* USoundModeFactory::pClassPointer = NULL;

// Class Editor.SoundSetFactory
// 0x0000 (0x0070 - 0x0070)
class USoundSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3018 ];

		return pClassPointer;
	};

};

//UClass* USoundSetFactory::pClassPointer = NULL;

// Class Editor.SoundSurroundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundSurroundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3020 ];

		return pClassPointer;
	};

};

//UClass* USoundSurroundExporterWAV::pClassPointer = NULL;

// Class Editor.SoundSurroundFactory
// 0x0004 (0x0074 - 0x0070)
class USoundSurroundFactory : public UFactory
{
public:
	float                                              CueVolume;                                        		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3022 ];

		return pClassPointer;
	};

};

//UClass* USoundSurroundFactory::pClassPointer = NULL;

// Class Editor.SoundTTSFactory
// 0x001C (0x008C - 0x0070)
class USoundTTSFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseTTS : 1;                                      		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     SpokenText;                                       		// 0x007C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CueVolume;                                        		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3025 ];

		return pClassPointer;
	};

};

//UClass* USoundTTSFactory::pClassPointer = NULL;

// Class Editor.StaticMeshExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class UStaticMeshExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3032 ];

		return pClassPointer;
	};

};

//UClass* UStaticMeshExporterOBJ::pClassPointer = NULL;

// Class Editor.StaticMeshFactory
// 0x0010 (0x0080 - 0x0070)
class UStaticMeshFactory : public UFactory
{
public:
	int                                                Pitch;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Roll;                                             		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOneConvexPerUCXObject : 1;                       		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3034 ];

		return pClassPointer;
	};

};

//UClass* UStaticMeshFactory::pClassPointer = NULL;

// Class Editor.StripSourceCommandlet
// 0x0000 (0x007C - 0x007C)
class UStripSourceCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3040 ];

		return pClassPointer;
	};

};

//UClass* UStripSourceCommandlet::pClassPointer = NULL;

// Class Editor.TerrainExporterT3D
// 0x0008 (0x006C - 0x0064)
class UTerrainExporterT3D : public UExporter
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0064 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3042 ];

		return pClassPointer;
	};

};

//UClass* UTerrainExporterT3D::pClassPointer = NULL;

// Class Editor.TerrainFactory
// 0x0004 (0x0074 - 0x0070)
class UTerrainFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3044 ];

		return pClassPointer;
	};

};

//UClass* UTerrainFactory::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporter
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3046 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapExporter::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporterARGB8BMP
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterARGB8BMP : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3048 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapExporterARGB8BMP::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporterG16BMPT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterG16BMPT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3050 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapExporterG16BMPT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporterTextT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterTextT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3052 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapExporterTextT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactory
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactory : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3054 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapFactory::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryG16BMP
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMP : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3056 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapFactoryG16BMP::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryG16BMPT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMPT3D : public UTerrainHeightMapFactoryG16BMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3058 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapFactoryG16BMPT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryTextT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryTextT3D : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3060 ];

		return pClassPointer;
	};

};

//UClass* UTerrainHeightMapFactoryTextT3D::pClassPointer = NULL;

// Class Editor.TerrainLayerSetupFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainLayerSetupFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3062 ];

		return pClassPointer;
	};

};

//UClass* UTerrainLayerSetupFactoryNew::pClassPointer = NULL;

// Class Editor.TerrainMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3064 ];

		return pClassPointer;
	};

};

//UClass* UTerrainMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.TestCompressionCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestCompressionCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3066 ];

		return pClassPointer;
	};

};

//UClass* UTestCompressionCommandlet::pClassPointer = NULL;

// Class Editor.TestWordWrapCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestWordWrapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3068 ];

		return pClassPointer;
	};

};

//UClass* UTestWordWrapCommandlet::pClassPointer = NULL;

// Class Editor.TextBufferExporterTXT
// 0x0000 (0x0064 - 0x0064)
class UTextBufferExporterTXT : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3070 ];

		return pClassPointer;
	};

};

//UClass* UTextBufferExporterTXT::pClassPointer = NULL;

// Class Editor.TextureCubeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTextureCubeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3072 ];

		return pClassPointer;
	};

};

//UClass* UTextureCubeFactoryNew::pClassPointer = NULL;

// Class Editor.TextureExporterBMP
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterBMP : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3074 ];

		return pClassPointer;
	};

};

//UClass* UTextureExporterBMP::pClassPointer = NULL;

// Class Editor.TextureExporterPCX
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterPCX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3076 ];

		return pClassPointer;
	};

};

//UClass* UTextureExporterPCX::pClassPointer = NULL;

// Class Editor.TextureExporterTGA
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3078 ];

		return pClassPointer;
	};

};

//UClass* UTextureExporterTGA::pClassPointer = NULL;

// Class Editor.TextureMovieFactory
// 0x0004 (0x0074 - 0x0070)
class UTextureMovieFactory : public UFactory
{
public:
	unsigned char                                      MovieStreamSource;                                		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3080 ];

		return pClassPointer;
	};

};

//UClass* UTextureMovieFactory::pClassPointer = NULL;

// Class Editor.TextureRenderTargetCubeFactoryNew
// 0x0008 (0x0078 - 0x0070)
class UTextureRenderTargetCubeFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x0074 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3084 ];

		return pClassPointer;
	};

};

//UClass* UTextureRenderTargetCubeFactoryNew::pClassPointer = NULL;

// Class Editor.TextureRenderTargetFactoryNew
// 0x000C (0x007C - 0x0070)
class UTextureRenderTargetFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x0078 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3089 ];

		return pClassPointer;
	};

};

//UClass* UTextureRenderTargetFactoryNew::pClassPointer = NULL;

// Class Editor.TrailTemplateFactory
// 0x0000 (0x0070 - 0x0070)
class UTrailTemplateFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3095 ];

		return pClassPointer;
	};

};

//UClass* UTrailTemplateFactory::pClassPointer = NULL;

// Class Editor.Transactor
// 0x0000 (0x003C - 0x003C)
class UTransactor : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3097 ];

		return pClassPointer;
	};

};

//UClass* UTransactor::pClassPointer = NULL;

// Class Editor.TransBuffer
// 0x0024 (0x0060 - 0x003C)
class UTransBuffer : public UTransactor
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3099 ];

		return pClassPointer;
	};

};

//UClass* UTransBuffer::pClassPointer = NULL;

// Class Editor.TrueTypeFontFactory
// 0x0004 (0x00C0 - 0x00BC)
class UTrueTypeFontFactory : public UFontFactory
{
public:
	class UFontImportOptions*                          ImportOptions;                                    		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3101 ];

		return pClassPointer;
	};

};

//UClass* UTrueTypeFontFactory::pClassPointer = NULL;

// Class Editor.TrueTypeMultiFontFactory
// 0x0024 (0x00E4 - 0x00C0)
class UTrueTypeMultiFontFactory : public UTrueTypeFontFactory
{
public:
	TArray< float >                                    ResTests;                                         		// 0x00C0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    ResHeights;                                       		// 0x00CC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UFont* >                             ResFonts;                                         		// 0x00D8 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3104 ];

		return pClassPointer;
	};

};

//UClass* UTrueTypeMultiFontFactory::pClassPointer = NULL;

// Class Editor.UIActionDataFactory
// 0x0000 (0x0070 - 0x0070)
class UUIActionDataFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3112 ];

		return pClassPointer;
	};

};

//UClass* UUIActionDataFactory::pClassPointer = NULL;

// Class Editor.UIActionGroupDataFactory
// 0x0000 (0x0070 - 0x0070)
class UUIActionGroupDataFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3114 ];

		return pClassPointer;
	};

};

//UClass* UUIActionGroupDataFactory::pClassPointer = NULL;

// Class Editor.UT3MapStatsCommandlet
// 0x0000 (0x007C - 0x007C)
class UUT3MapStatsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3116 ];

		return pClassPointer;
	};

};

//UClass* UUT3MapStatsCommandlet::pClassPointer = NULL;

// Class Editor.VoiceSetFactory
// 0x0000 (0x0070 - 0x0070)
class UVoiceSetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3118 ];

		return pClassPointer;
	};

};

//UClass* UVoiceSetFactory::pClassPointer = NULL;

// Class Editor.WrangleContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UWrangleContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3120 ];

		return pClassPointer;
	};

};

//UClass* UWrangleContentCommandlet::pClassPointer = NULL;

// Class Editor.ConeBuilder
// 0x0020 (0x0098 - 0x0078)
class UConeBuilder : public UBrushBuilder
{
public:
	float                                              Z;                                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CapZ;                                             		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OuterRadius;                                      		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InnerRadius;                                      		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Sides;                                            		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x008C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AlignToSide : 1;                                  		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Hollow : 1;                                       		// 0x0094 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33402 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCone ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius, struct FName Item );
};

//UClass* UConeBuilder::pClassPointer = NULL;

// Class Editor.CurvedStairBuilder
// 0x0024 (0x009C - 0x0078)
class UCurvedStairBuilder : public UBrushBuilder
{
public:
	int                                                InnerRadius;                                      		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepHeight;                                       		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepWidth;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AngleOfCurve;                                     		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSteps;                                         		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddToFirstStep;                                   		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CounterClockwise : 1;                             		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33460 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCurvedStair ( int Direction );
};

//UClass* UCurvedStairBuilder::pClassPointer = NULL;

// Class Editor.CylinderBuilder
// 0x001C (0x0094 - 0x0078)
class UCylinderBuilder : public UBrushBuilder
{
public:
	float                                              Z;                                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OuterRadius;                                      		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InnerRadius;                                      		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Sides;                                            		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AlignToSide : 1;                                  		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Hollow : 1;                                       		// 0x0090 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33483 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCylinder ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius );
};

//UClass* UCylinderBuilder::pClassPointer = NULL;

// Class Editor.LinearStairBuilder
// 0x001C (0x0094 - 0x0078)
class ULinearStairBuilder : public UBrushBuilder
{
public:
	int                                                StepLength;                                       		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepHeight;                                       		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepWidth;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSteps;                                         		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddToFirstStep;                                   		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x008C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33623 ];

		return pClassPointer;
	};

	bool eventBuild ( );
};

//UClass* ULinearStairBuilder::pClassPointer = NULL;

// Class Editor.SheetBuilder
// 0x001C (0x0094 - 0x0078)
class USheetBuilder : public UBrushBuilder
{
public:
	int                                                X;                                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Y;                                                		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                XSegments;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YSegments;                                        		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Axis;                                             		// 0x0088 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x008C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33639 ];

		return pClassPointer;
	};

	bool eventBuild ( );
};

//UClass* USheetBuilder::pClassPointer = NULL;

// Class Editor.SpiralStairBuilder
// 0x0024 (0x009C - 0x0078)
class USpiralStairBuilder : public UBrushBuilder
{
public:
	int                                                InnerRadius;                                      		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepWidth;                                        		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepHeight;                                       		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepThickness;                                    		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumStepsPer360;                                   		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSteps;                                         		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SlopedCeiling : 1;                                		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      SlopedFloor : 1;                                  		// 0x0098 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      CounterClockwise : 1;                             		// 0x0098 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33655 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCurvedStair ( int Direction );
};

//UClass* USpiralStairBuilder::pClassPointer = NULL;

// Class Editor.TetrahedronBuilder
// 0x0010 (0x0088 - 0x0078)
class UTetrahedronBuilder : public UBrushBuilder
{
public:
	float                                              Radius;                                           		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SphereExtrapolation;                              		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0080 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33679 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildTetrahedron ( float R, int InSphereExtrapolation );
	void Extrapolate ( int A, int B, int C, int Count, float InRadius );
};

//UClass* UTetrahedronBuilder::pClassPointer = NULL;

// Class Editor.VolumetricBuilder
// 0x0014 (0x008C - 0x0078)
class UVolumetricBuilder : public UBrushBuilder
{
public:
	float                                              Z;                                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSheets;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0084 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33698 ];

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildVolumetric ( int Direction, int InNumSheets, float InZ, float InRadius );
};

//UClass* UVolumetricBuilder::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif