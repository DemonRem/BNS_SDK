#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UnrealEd_classes.h
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

#define CONST_AUTOEXPAND_VALUE                                   0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum UnrealEd.ThumbnailManager.EThumbnailPrimType
/*enum EThumbnailPrimType
{
	TPT_None                                           = 0,
	TPT_Sphere                                         = 1,
	TPT_Cube                                           = 2,
	TPT_Plane                                          = 3,
	TPT_Cylinder                                       = 4,
	TPT_MAX                                            = 5
};*/

// Enum UnrealEd.ThumbnailManager.EThumbnailBackgroundType
/*enum EThumbnailBackgroundType
{
	TBT_None                                           = 0,
	TBT_DefaultBackground                              = 1,
	TBT_SolidBackground                                = 2,
	TBT_MAX                                            = 3
};*/

// Enum UnrealEd.TopRenderVolumeActor.TOPRENDERVOLUME_IMAGE_SIZE
/*enum TOPRENDERVOLUME_IMAGE_SIZE
{
	TRV_IMG_SIZE                                       = 0,
	TRV_IMG_SIZE01                                     = 1,
	TRV_IMG_SIZE02                                     = 2,
	TRV_IMG_SIZE03                                     = 3,
	TRV_IMG_SIZE04                                     = 4,
	TRV_IMG_SIZE05                                     = 5,
	TRV_IMG_SIZE06                                     = 6,
	TRV_IMG_SIZE07                                     = 7,
	TRV_IMG_SIZE_MAX                                   = 8
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UnrealEd.AnimNodeEditInfo
// 0x0004 (0x0040 - 0x003C)
class UAnimNodeEditInfo : public UObject
{
public:
	class UClass*                                      AnimNodeClass;                                    		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3123 ];

		return pClassPointer;
	};

};

//UClass* UAnimNodeEditInfo::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo_AimOffset
// 0x0008 (0x0048 - 0x0040)
class UAnimNodeEditInfo_AimOffset : public UAnimNodeEditInfo
{
public:
	struct FPointer                                    EditWindow;                                       		// 0x0040 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UAnimNodeAimOffset*                          EditNode;                                         		// 0x0044 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3125 ];

		return pClassPointer;
	};

};

//UClass* UAnimNodeEditInfo_AimOffset::pClassPointer = NULL;

// Class UnrealEd.ThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailLabelRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3127 ];

		return pClassPointer;
	};

};

//UClass* UThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimSetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimSetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3129 ];

		return pClassPointer;
	};

};

//UClass* UAnimSetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimTreeEdSkelComponent
// 0x0004 (0x155C - 0x1558)
class UAnimTreeEdSkelComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    AnimTreeEdPtr;                                    		// 0x1558 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3131 ];

		return pClassPointer;
	};

};

//UClass* UAnimTreeEdSkelComponent::pClassPointer = NULL;

// Class UnrealEd.AnimTreeLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimTreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3133 ];

		return pClassPointer;
	};

};

//UClass* UAnimTreeLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3135 ];

		return pClassPointer;
	};

};

//UClass* UThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.IconThumbnailRenderer
// 0x0010 (0x004C - 0x003C)
class UIconThumbnailRenderer : public UThumbnailRenderer
{
public:
	struct FString                                     IconName;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  Icon;                                             		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3137 ];

		return pClassPointer;
	};

};

//UClass* UIconThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ArchetypeThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UArchetypeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3139 ];

		return pClassPointer;
	};

};

//UClass* UArchetypeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ASVSkelComponent
// 0x000C (0x1564 - 0x1558)
class UASVSkelComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    AnimSetViewerPtr;                                 		// 0x1558 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      bRenderRawSkeleton : 1;                           		// 0x155C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowSoftBodyTetra : 1;                           		// 0x155C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDrawMesh : 1;                                    		// 0x155C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FColor                                      BoneColor;                                        		// 0x1560 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3141 ];

		return pClassPointer;
	};

};

//UClass* UASVSkelComponent::pClassPointer = NULL;

// Class UnrealEd.BrowserManager
// 0x0024 (0x0060 - 0x003C)
class UBrowserManager : public UObject
{
public:
	TArray< struct FBrowserPaneInfo >                  BrowserPanes;                                     		// 0x003C (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bHasCreatedPanes : 1;                             		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LastSelectedPaneID;                               		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    DockingContainerPtr;                              		// 0x0050 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    FloatingWindowsArrayPtr;                          		// 0x0054 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    BrowserMenuPtr;                                   		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UUISceneManager*                             UISceneManager;                                   		// 0x005C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3143 ];

		return pClassPointer;
	};

};

//UClass* UBrowserManager::pClassPointer = NULL;

// Class UnrealEd.CascadeOptions
// 0x00CC (0x0108 - 0x003C)
class UCascadeOptions : public UObject
{
public:
	unsigned long                                      bShowModuleDump : 1;                              		// 0x003C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSubMenus : 1;                                 		// 0x003C (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSpaceBarReset : 1;                            		// 0x003C (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSpaceBarResetInLevel : 1;                     		// 0x003C (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowGrid : 1;                                    		// 0x003C (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleCounts : 1;                          		// 0x003C (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleEvents : 1;                          		// 0x003C (0x0004) [0x0000000000004001] [0x00000040] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleTimes : 1;                           		// 0x003C (0x0004) [0x0000000000004001] [0x00000080] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleDistance : 1;                        		// 0x003C (0x0004) [0x0000000000004001] [0x00000100] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowFloor : 1;                                   		// 0x003C (0x0004) [0x0000000000004001] [0x00000200] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSlimCascadeDraw : 1;                          		// 0x003C (0x0004) [0x0000000000004001] [0x00000400] ( CPF_Edit | CPF_Config )
	unsigned long                                      bCenterCascadeModuleText : 1;                     		// 0x003C (0x0004) [0x0000000000004001] [0x00000800] ( CPF_Edit | CPF_Config )
	struct FColor                                      BackgroundColor;                                  		// 0x0040 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Empty_Background;                                 		// 0x0044 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Emitter_Background;                               		// 0x0048 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Emitter_Unselected;                               		// 0x004C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Emitter_Selected;                                 		// 0x0050 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_General_Unselected;                   		// 0x0054 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_General_Selected;                     		// 0x0058 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_TypeData_Unselected;                  		// 0x005C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_TypeData_Selected;                    		// 0x0060 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Beam_Unselected;                      		// 0x0064 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Beam_Selected;                        		// 0x0068 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Trail_Unselected;                     		// 0x006C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Trail_Selected;                       		// 0x0070 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Spawn_Unselected;                     		// 0x0074 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Spawn_Selected;                       		// 0x0078 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Required_Unselected;                  		// 0x007C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Required_Selected;                    		// 0x0080 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Event_Unselected;                     		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Event_Selected;                       		// 0x0088 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Hi;                                     		// 0x008C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Low;                                    		// 0x0090 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              GridPerspectiveSize;                              		// 0x0094 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     FloorMesh;                                        		// 0x0098 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector                                     FloorPosition;                                    		// 0x00A4 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FRotator                                    FloorRotation;                                    		// 0x00B0 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              FloorScale;                                       		// 0x00BC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector                                     FloorScale3D;                                     		// 0x00C0 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PostProcessChainName;                             		// 0x00CC (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                ShowPPFlags;                                      		// 0x00D8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SlimCascadeDrawHeight;                            		// 0x00DC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Cascade_MouseMoveThreshold;                       		// 0x00E0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FModuleMenuMapper >                 ModuleMenu_TypeDataToBaseModuleRejections;        		// 0x00E4 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FModuleMenuMapper >                 ModuleMenu_TypeDataToSpecificModuleRejections;    		// 0x00F0 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FString >                           ModuleMenu_ModuleRejections;                      		// 0x00FC (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3145 ];

		return pClassPointer;
	};

};

//UClass* UCascadeOptions::pClassPointer = NULL;

// Class UnrealEd.CascadePreviewComponent
// 0x0004 (0x0214 - 0x0210)
class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
	struct FPointer                                    CascadePtr;                                       		// 0x0210 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3147 ];

		return pClassPointer;
	};

};

//UClass* UCascadePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.CurveEdOptions
// 0x0078 (0x00B4 - 0x003C)
class UCurveEdOptions : public UObject
{
public:
	float                                              MinViewRange;                                     		// 0x003C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MaxViewRange;                                     		// 0x0040 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                BackgroundColor;                                  		// 0x0044 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LabelColor;                                       		// 0x0054 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                SelectedLabelColor;                               		// 0x0064 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                GridColor;                                        		// 0x0074 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                GridTextColor;                                    		// 0x0084 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LabelBlockBkgColor;                               		// 0x0094 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                SelectedKeyColor;                                 		// 0x00A4 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3149 ];

		return pClassPointer;
	};

};

//UClass* UCurveEdOptions::pClassPointer = NULL;

// Class UnrealEd.CurveEdPresetBase
// 0x0000 (0x003C - 0x003C)
class UCurveEdPresetBase : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3151 ];

		return pClassPointer;
	};

	bool eventGenerateCurveData ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool eventFetchRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool eventCheckAreSettingsValid ( unsigned long bIsSaving );
	void eventFetchDisplayName ( struct FString* OutName );
	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

//UClass* UCurveEdPresetBase::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_CosWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_CosWave : public UCurveEdPresetBase
{
public:
	float                                              Frequency;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3153 ];

		return pClassPointer;
	};

	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

//UClass* UCurveEdPreset_CosWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_LinearDecay
// 0x0010 (0x004C - 0x003C)
class UCurveEdPreset_LinearDecay : public UCurveEdPresetBase
{
public:
	float                                              StartDecay;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartValue;                                       		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndDecay;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndValue;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3155 ];

		return pClassPointer;
	};

	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

//UClass* UCurveEdPreset_LinearDecay::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_Nothing
// 0x0000 (0x003C - 0x003C)
class UCurveEdPreset_Nothing : public UCurveEdPresetBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3157 ];

		return pClassPointer;
	};

	struct FString GetDisplayName ( );
};

//UClass* UCurveEdPreset_Nothing::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_SineWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_SineWave : public UCurveEdPresetBase
{
public:
	float                                              Frequency;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3159 ];

		return pClassPointer;
	};

	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

//UClass* UCurveEdPreset_SineWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_UserSet
// 0x0004 (0x0040 - 0x003C)
class UCurveEdPreset_UserSet : public UCurveEdPresetBase
{
public:
	class UCurveEdPresetCurve*                         UserCurve;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3161 ];

		return pClassPointer;
	};

	bool SaveUserSetPointFile ( );
	bool LoadUserSetPointFile ( );
	bool SetCurve ( TArray< struct FPresetGeneratedPoint > GeneratedPoints );
	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

//UClass* UCurveEdPreset_UserSet::pClassPointer = NULL;

// Class UnrealEd.PropertyInputProxy
// 0x0010 (0x004C - 0x003C)
class UPropertyInputProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3163 ];

		return pClassPointer;
	};

};

//UClass* UPropertyInputProxy::pClassPointer = NULL;

// Class UnrealEd.CustomInputProxy_Base
// 0x0004 (0x0050 - 0x004C)
class UCustomInputProxy_Base : public UPropertyInputProxy
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3165 ];

		return pClassPointer;
	};

};

//UClass* UCustomInputProxy_Base::pClassPointer = NULL;

// Class UnrealEd.DefaultSizedThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UDefaultSizedThumbnailRenderer : public UThumbnailRenderer
{
public:
	int                                                DefaultSizeX;                                     		// 0x003C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultSizeY;                                     		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3167 ];

		return pClassPointer;
	};

};

//UClass* UDefaultSizedThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.EditorUISceneClient
// 0x0018 (0x0110 - 0x00F8)
class UEditorUISceneClient : public UUISceneClient
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x00F8 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UUIScene*                                    Scene;                                            		// 0x00FC (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UUISceneManager*                             SceneManager;                                     		// 0x0100 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    SceneWindow;                                      		// 0x0104 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    ClientCanvasScene;                                		// 0x0108 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      bIsUIPrimitiveSceneInitialized : 1;               		// 0x010C (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3169 ];

		return pClassPointer;
	};

	void ShowDockingStacks ( );
};

//UClass* UEditorUISceneClient::pClassPointer = NULL;

// Class UnrealEd.FaceFXStudioSkelComponent
// 0x0004 (0x155C - 0x1558)
class UFaceFXStudioSkelComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    RenderWidgetUE3Ptr;                               		// 0x1558 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3171 ];

		return pClassPointer;
	};

};

//UClass* UFaceFXStudioSkelComponent::pClassPointer = NULL;

// Class UnrealEd.FontAttributeThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UFontAttributeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3173 ];

		return pClassPointer;
	};

};

//UClass* UFontAttributeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontColorThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UFontColorThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3175 ];

		return pClassPointer;
	};

};

//UClass* UFontColorThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontFaceThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UFontFaceThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3177 ];

		return pClassPointer;
	};

};

//UClass* UFontFaceThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontResourceThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UFontResourceThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3179 ];

		return pClassPointer;
	};

};

//UClass* UFontResourceThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontSetThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UFontSetThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3181 ];

		return pClassPointer;
	};

};

//UClass* UFontSetThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TextureThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureThumbnailRenderer : public UThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3183 ];

		return pClassPointer;
	};

};

//UClass* UTextureThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UFontThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3185 ];

		return pClassPointer;
	};

};

//UClass* UFontThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.StaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UStaticMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3187 ];

		return pClassPointer;
	};

};

//UClass* UStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.FracturedStaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UFracturedStaticMeshLabelRenderer : public UStaticMeshLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3189 ];

		return pClassPointer;
	};

};

//UClass* UFracturedStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType
// 0x001C (0x0058 - 0x003C)
class UGenericBrowserType : public UObject
{
public:
	struct FString                                     Description;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	TArray< struct FGenericBrowserTypeInfo >           SupportInfo;                                      		// 0x0048 (0x000C) [0x0000000000001000]              ( CPF_Native )
	struct FColor                                      BorderColor;                                      		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3191 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Custom
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Custom : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3193 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Custom::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_All
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_All : public UGenericBrowserType_Custom
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3195 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_All::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Animation
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3197 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Animation::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AnimTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3199 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_AnimTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Archetype
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Archetype : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3201 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Archetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CameraAnim
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CameraAnim : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3203 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_CameraAnim::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CurveEdPresetCurve
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CurveEdPresetCurve : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3205 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_CurveEdPresetCurve::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DecalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DecalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3207 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_DecalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DialogueSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DialogueSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3209 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_DialogueSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DistributionFloatConstantCurve
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DistributionFloatConstantCurve : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3211 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_DistributionFloatConstantCurve::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_EventJumpTemplate
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_EventJumpTemplate : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3213 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_EventJumpTemplate::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAnimSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAnimSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3215 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FaceFXAnimSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3217 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FaceFXAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Font
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Font : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3219 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Font::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FontAttribute
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FontAttribute : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3221 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FontAttribute::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FontColor
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FontColor : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3223 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FontColor::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FontFace
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FontFace : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3225 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FontFace::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FontResource
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FontResource : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3227 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FontResource::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FontSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FontSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3229 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FontSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_StaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3231 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_StaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FracturedStaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FracturedStaticMesh : public UGenericBrowserType_StaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3233 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_FracturedStaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ImageSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ImageSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3235 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_ImageSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_LensFlare
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_LensFlare : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3237 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_LensFlare::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Material
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Material : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3239 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Material::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceConstant
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceConstant : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3241 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_MaterialInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceTimeVarying : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3243 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_MaterialInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialLackingPhysMat
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialLackingPhysMat : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3245 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_MaterialLackingPhysMat::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphTargetSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphTargetSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3247 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_MorphTargetSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphWeightSequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphWeightSequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3249 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_MorphWeightSequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ObjectNote
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ObjectNote : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3251 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_ObjectNote::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ParticleSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ParticleSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3253 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_ParticleSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3255 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_ParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3257 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_PhysicalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicsAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3259 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_PhysicsAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXDestructible
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXDestructible : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3261 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_PhysXDestructible::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3263 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_PhysXParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PlayerCameraAnim
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PlayerCameraAnim : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3265 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_PlayerCameraAnim::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PostProcess
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PostProcess : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3267 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_PostProcess::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PostProcessParameter
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PostProcessParameter : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3269 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_PostProcessParameter::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Prefab
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3271 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Prefab::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ProgressEffect
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ProgressEffect : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3273 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_ProgressEffect::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Texture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3275 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Texture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_RenderTexture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_RenderTexture : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3277 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_RenderTexture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3279 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Sequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ShowObject
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ShowObject : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3281 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_ShowObject::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SignalInfo
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SignalInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3283 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SignalInfo::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SkeletalMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3285 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SkeletalMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SkeletalMeshCustomizeSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SkeletalMeshCustomizeSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3287 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SkeletalMeshCustomizeSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SkeletalMeshFactorSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SkeletalMeshFactorSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3289 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SkeletalMeshFactorSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sounds
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3291 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_Sounds::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundCue
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundCue : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3293 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SoundCue::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundMode
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundMode : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3295 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SoundMode::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3297 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SoundSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundWave
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundWave : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3299 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SoundWave::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeechRecognition
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeechRecognition : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3301 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_SpeechRecognition::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainLayer
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3303 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_TerrainLayer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3305 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_TerrainMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TextureWithAlpha
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TextureWithAlpha : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3307 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_TextureWithAlpha::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TrailTemplate
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TrailTemplate : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3309 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_TrailTemplate::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIActionData
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UIActionData : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3311 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_UIActionData::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIActionGroupData
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UIActionGroupData : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3313 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_UIActionGroupData::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIArchetype
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIArchetype : public UGenericBrowserType_Archetype
{
public:
	class UUISceneManager*                             SceneManager;                                     		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3315 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_UIArchetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIScene
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIScene : public UGenericBrowserType
{
public:
	class UUISceneManager*                             SceneManager;                                     		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3317 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_UIScene::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UISkin
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UISkin : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3319 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_UISkin::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_VoiceSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_VoiceSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3321 ];

		return pClassPointer;
	};

};

//UClass* UGenericBrowserType_VoiceSet::pClassPointer = NULL;

// Class UnrealEd.GenericThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UGenericThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3323 ];

		return pClassPointer;
	};

};

//UClass* UGenericThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ImageSetThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UImageSetThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3325 ];

		return pClassPointer;
	};

};

//UClass* UImageSetThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.InterpEdOptions
// 0x000C (0x0048 - 0x003C)
class UInterpEdOptions : public UObject
{
public:
	TArray< struct FInterpEdSelKey >                   SelectedKeys;                                     		// 0x003C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3327 ];

		return pClassPointer;
	};

};

//UClass* UInterpEdOptions::pClassPointer = NULL;

// Class UnrealEd.InterpTrackHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3329 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAnimControlHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackAnimControlHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3331 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackAnimControlHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVectorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVectorPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3333 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackVectorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackColorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3335 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackColorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackDirectorHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackDirectorHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3337 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackDirectorHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackEventHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackEventHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3339 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackEventHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFaceFXHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFaceFXHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3341 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackFaceFXHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFloatPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFloatPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3343 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackFloatPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackParticleReplayHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackParticleReplayHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3345 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackParticleReplayHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackParticleSystemToggleHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackParticleSystemToggleHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3347 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackParticleSystemToggleHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackSoundHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackSoundHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3349 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackSoundHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackToggleHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackToggleHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3351 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackToggleHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVisibilityHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVisibilityHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3353 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackVisibilityHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVoiceHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVoiceHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3355 ];

		return pClassPointer;
	};

};

//UClass* UInterpTrackVoiceHelper::pClassPointer = NULL;

// Class UnrealEd.KismetBindings
// 0x0018 (0x0054 - 0x003C)
class UKismetBindings : public UObject
{
public:
	TArray< struct FKismetKeyBind >                    Bindings;                                         		// 0x003C (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FKismetCommentPreset >              CommentPresets;                                   		// 0x0048 (0x000C) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3357 ];

		return pClassPointer;
	};

};

//UClass* UKismetBindings::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorOptions
// 0x00A0 (0x00DC - 0x003C)
class ULensFlareEditorOptions : public UObject
{
public:
	struct FLinearColor                                LFED_BackgroundColor;                             		// 0x003C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Empty_Background;                            		// 0x004C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Source_ElementEd_Background;                 		// 0x005C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Source_Unselected;                           		// 0x006C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Source_Selected;                             		// 0x007C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_ElementEd_Background;                        		// 0x008C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Element_Unselected;                          		// 0x009C (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Element_Selected;                            		// 0x00AC (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowGrid : 1;                                    		// 0x00BC (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Hi;                                     		// 0x00C0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Low;                                    		// 0x00C4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              GridPerspectiveSize;                              		// 0x00C8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PostProcessChainName;                             		// 0x00CC (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                ShowPPFlags;                                      		// 0x00D8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3359 ];

		return pClassPointer;
	};

};

//UClass* ULensFlareEditorOptions::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorPropertyWrapper
// 0x0148 (0x0184 - 0x003C)
class ULensFlareEditorPropertyWrapper : public UObject
{
public:
	struct FLensFlareElement                           Element;                                          		// 0x003C (0x0140) [0x0000000000000001]              ( CPF_Edit )
	class ULensFlare*                                  SourceLensFlare;                                  		// 0x017C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ElementIndex;                                     		// 0x0180 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3361 ];

		return pClassPointer;
	};

};

//UClass* ULensFlareEditorPropertyWrapper::pClassPointer = NULL;

// Class UnrealEd.LensFlarePreviewComponent
// 0x0004 (0x0214 - 0x0210)
class ULensFlarePreviewComponent : public UPrimitiveComponent
{
public:
	struct FPointer                                    LensFlareEditorPtr;                               		// 0x0210 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3363 ];

		return pClassPointer;
	};

};

//UClass* ULensFlarePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.LensFlareThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class ULensFlareThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	class UTexture2D*                                  NoImage;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OutOfDate;                                        		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3365 ];

		return pClassPointer;
	};

};

//UClass* ULensFlareThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceConstant
// 0x007C (0x00B8 - 0x003C)
class UMaterialEditorInstanceConstant : public UObject
{
public:
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Parent;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorParameterGroup >             ParameterGroups;                                  		// 0x0044 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorParameterGroup >             EmptyParameterGroups;                             		// 0x0050 (0x000C) [0x0000000000000000]              
	unsigned long                                      bAcceptRenderDecal : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FEditorVectorParameterValue >       VectorParameterValues;                            		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorScalarParameterValue >       ScalarParameterValues;                            		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorTextureParameterValue >      TextureParameterValues;                           		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorFontParameterValue >         FontParameterValues;                              		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorStaticSwitchParameterValue > StaticSwitchParameterValues;                      		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorStaticComponentMaskParameterValue > StaticComponentMaskParameterValues;               		// 0x009C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   SourceInstance;                                   		// 0x00A8 (0x0004) [0x0000000000000000]              
	TArray< struct FGuid >                             VisibleExpressions;                               		// 0x00AC (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3367 ];

		return pClassPointer;
	};

};

//UClass* UMaterialEditorInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceTimeVarying
// 0x0064 (0x00A0 - 0x003C)
class UMaterialEditorInstanceTimeVarying : public UObject
{
public:
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Parent;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoActivateAll : 1;                             		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FEditorVectorParameterValueOverTime > VectorParameterValues;                            		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorScalarParameterValueOverTime > ScalarParameterValues;                            		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorTextureParameterValueOverTime > TextureParameterValues;                           		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorFontParameterValueOverTime > FontParameterValues;                              		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorStaticSwitchParameterValueOverTime > StaticSwitchParameterValues;                      		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorStaticComponentMaskParameterValueOverTime > StaticComponentMaskParameterValues;               		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceTimeVarying*                SourceInstance;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	TArray< struct FGuid >                             VisibleExpressions;                               		// 0x0094 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3369 ];

		return pClassPointer;
	};

};

//UClass* UMaterialEditorInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorMeshComponent
// 0x0004 (0x0274 - 0x0270)
class UMaterialEditorMeshComponent : public UStaticMeshComponent
{
public:
	struct FPointer                                    MaterialEditor;                                   		// 0x0270 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3371 ];

		return pClassPointer;
	};

};

//UClass* UMaterialEditorMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorOptions
// 0x0010 (0x004C - 0x003C)
class UMaterialEditorOptions : public UObject
{
public:
	unsigned long                                      bShowGrid : 1;                                    		// 0x003C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowBackground : 1;                              		// 0x003C (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bHideUnusedConnectors : 1;                        		// 0x003C (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bDrawCurves : 1;                                  		// 0x003C (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRealtimeMaterialViewport : 1;                    		// 0x003C (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRealtimeExpressionViewport : 1;                  		// 0x003C (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAlwaysRefreshAllPreviews : 1;                    		// 0x003C (0x0004) [0x0000000000004001] [0x00000040] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSortedMenus : 1;                              		// 0x003C (0x0004) [0x0000000000004001] [0x00000080] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseUnsortedMenus : 1;                            		// 0x003C (0x0004) [0x0000000000004001] [0x00000100] ( CPF_Edit | CPF_Config )
	TArray< struct FString >                           FavoriteExpressions;                              		// 0x0040 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3373 ];

		return pClassPointer;
	};

};

//UClass* UMaterialEditorOptions::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorSkeletalMeshComponent
// 0x0004 (0x155C - 0x1558)
class UMaterialEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    MaterialEditor;                                   		// 0x1558 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3375 ];

		return pClassPointer;
	};

};

//UClass* UMaterialEditorSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UMaterialInstanceLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3377 ];

		return pClassPointer;
	};

};

//UClass* UMaterialInstanceLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UMaterialInstanceThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3379 ];

		return pClassPointer;
	};

};

//UClass* UMaterialInstanceThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MemCountThumbnailLabelRenderer
// 0x0004 (0x0040 - 0x003C)
class UMemCountThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:
	class UThumbnailLabelRenderer*                     AggregatedLabelRenderer;                          		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3381 ];

		return pClassPointer;
	};

};

//UClass* UMemCountThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UParticleSystemLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3383 ];

		return pClassPointer;
	};

};

//UClass* UParticleSystemLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UParticleSystemThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	class UTexture2D*                                  NoImage;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OutOfDate;                                        		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3385 ];

		return pClassPointer;
	};

};

//UClass* UParticleSystemThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PhATSimOptions
// 0x004C (0x0088 - 0x003C)
class UPhATSimOptions : public UObject
{
public:
	class UAnimSet*                                    PreviewAnimSet;                                   		// 0x003C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              PhysicsBlend;                                     		// 0x0040 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bBlendOnPoke : 1;                                 		// 0x0044 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bDrawContacts : 1;                                		// 0x0044 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bPromptOnBoneDelete : 1;                          		// 0x0044 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowConstraintsAsPoints : 1;                     		// 0x0044 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowNamesInHierarchy : 1;                        		// 0x0044 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	float                                              PokePauseTime;                                    		// 0x0048 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              PokeBlendTime;                                    		// 0x004C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              AngularSpringScale;                               		// 0x0050 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              AngularDampingScale;                              		// 0x0054 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              SimSpeed;                                         		// 0x0058 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              FloorGap;                                         		// 0x005C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              GravScale;                                        		// 0x0060 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleLinearDamping;                              		// 0x0064 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleLinearStiffness;                            		// 0x0068 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleAngularDamping;                             		// 0x006C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleAngularStiffness;                           		// 0x0070 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              PokeStrength;                                     		// 0x0074 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SkyBrightness;                                    		// 0x0078 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Brightness;                                       		// 0x007C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              AngularSnap;                                      		// 0x0080 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              LinearSnap;                                       		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3387 ];

		return pClassPointer;
	};

};

//UClass* UPhATSimOptions::pClassPointer = NULL;

// Class UnrealEd.PhATSkeletalMeshComponent
// 0x0010 (0x1568 - 0x1558)
class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    PhATPtr;                                          		// 0x1558 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FMatrix >                           AnimationSpaceBases;                              		// 0x155C (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3389 ];

		return pClassPointer;
	};

};

//UClass* UPhATSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.PhysicsAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysicsAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3391 ];

		return pClassPointer;
	};

};

//UClass* UPhysicsAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PhysXDestructibleLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysXDestructibleLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3393 ];

		return pClassPointer;
	};

};

//UClass* UPhysXDestructibleLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PhysXFractureOptions
// 0x000C (0x0048 - 0x003C)
class UPhysXFractureOptions : public UObject
{
public:
	TArray< struct FPhysXSlicingParameters >           SlicingLevels;                                    		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3395 ];

		return pClassPointer;
	};

};

//UClass* UPhysXFractureOptions::pClassPointer = NULL;

// Class UnrealEd.PropertyDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPropertyDrawProxy : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3397 ];

		return pClassPointer;
	};

};

//UClass* UPropertyDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPlayerInputMask_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3399 ];

		return pClassPointer;
	};

};

//UClass* UPlayerInputMask_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputArrayItemBase
// 0x0000 (0x004C - 0x004C)
class UPropertyInputArrayItemBase : public UPropertyInputProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3401 ];

		return pClassPointer;
	};

};

//UClass* UPropertyInputArrayItemBase::pClassPointer = NULL;

// Class UnrealEd.PropertyInputBool
// 0x0000 (0x004C - 0x004C)
class UPropertyInputBool : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3403 ];

		return pClassPointer;
	};

};

//UClass* UPropertyInputBool::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UPlayerInputMask_CustomInputProxy : public UPropertyInputBool
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3405 ];

		return pClassPointer;
	};

};

//UClass* UPlayerInputMask_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.PostProcessLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPostProcessLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3407 ];

		return pClassPointer;
	};

};

//UClass* UPostProcessLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PrefabThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UPrefabThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3409 ];

		return pClassPointer;
	};

};

//UClass* UPrefabThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PropertyInputCombo
// 0x0004 (0x0050 - 0x004C)
class UPropertyInputCombo : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3411 ];

		return pClassPointer;
	};

};

//UClass* UPropertyInputCombo::pClassPointer = NULL;

// Class UnrealEd.PropertyInputEditInline
// 0x0000 (0x004C - 0x004C)
class UPropertyInputEditInline : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3413 ];

		return pClassPointer;
	};

};

//UClass* UPropertyInputEditInline::pClassPointer = NULL;

// Class UnrealEd.PropertyInputText
// 0x0014 (0x0060 - 0x004C)
class UPropertyInputText : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x004C (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3415 ];

		return pClassPointer;
	};

};

//UClass* UPropertyInputText::pClassPointer = NULL;

// Class UnrealEd.SequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class USequenceObjectHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3417 ];

		return pClassPointer;
	};

};

//UClass* USequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USkeletalMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3419 ];

		return pClassPointer;
	};

};

//UClass* USkeletalMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class USkeletalMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3421 ];

		return pClassPointer;
	};

};

//UClass* USkeletalMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USoundLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3423 ];

		return pClassPointer;
	};

};

//UClass* USoundLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundNodeHelper
// 0x0000 (0x003C - 0x003C)
class USoundNodeHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3425 ];

		return pClassPointer;
	};

};

//UClass* USoundNodeHelper::pClassPointer = NULL;

// Class UnrealEd.StaticMeshEditorComponent
// 0x0004 (0x0274 - 0x0270)
class UStaticMeshEditorComponent : public UStaticMeshComponent
{
public:
	struct FPointer                                    StaticMeshEditor;                                 		// 0x0270 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3427 ];

		return pClassPointer;
	};

};

//UClass* UStaticMeshEditorComponent::pClassPointer = NULL;

// Class UnrealEd.StaticMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UStaticMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3429 ];

		return pClassPointer;
	};

};

//UClass* UStaticMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TerrainEditOptions
// 0x00DC (0x0118 - 0x003C)
class UTerrainEditOptions : public UObject
{
public:
	int                                                Solid1_Strength;                                  		// 0x003C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid1_Radius;                                    		// 0x0040 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid1_Falloff;                                   		// 0x0044 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid2_Strength;                                  		// 0x0048 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid2_Radius;                                    		// 0x004C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid2_Falloff;                                   		// 0x0050 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid3_Strength;                                  		// 0x0054 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid3_Radius;                                    		// 0x0058 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid3_Falloff;                                   		// 0x005C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid4_Strength;                                  		// 0x0060 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid4_Radius;                                    		// 0x0064 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid4_Falloff;                                   		// 0x0068 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid5_Strength;                                  		// 0x006C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid5_Radius;                                    		// 0x0070 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid5_Falloff;                                   		// 0x0074 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy1_Strength;                                  		// 0x0078 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy1_Radius;                                    		// 0x007C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy1_Falloff;                                   		// 0x0080 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy2_Strength;                                  		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy2_Radius;                                    		// 0x0088 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy2_Falloff;                                   		// 0x008C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy3_Strength;                                  		// 0x0090 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy3_Radius;                                    		// 0x0094 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy3_Falloff;                                   		// 0x0098 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy4_Strength;                                  		// 0x009C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy4_Radius;                                    		// 0x00A0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy4_Falloff;                                   		// 0x00A4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy5_Strength;                                  		// 0x00A8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy5_Radius;                                    		// 0x00AC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy5_Falloff;                                   		// 0x00B0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                VertexColor_Alpha;                                		// 0x00B4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                VertexColor_Red;                                  		// 0x00B8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                VertexColor_Green;                                		// 0x00BC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                VertexColor_Blue;                                 		// 0x00C0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                VertexColor_aaaaa;                                		// 0x00C4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Tool;                                     		// 0x00C8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Brush;                                    		// 0x00CC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Strength;                                 		// 0x00D0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Radius;                                   		// 0x00D4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Falloff;                                  		// 0x00D8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bSoftSelectEnabled : 1;                           		// 0x00DC (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bConstrainedEditing : 1;                          		// 0x00DC (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowFoliageMeshes : 1;                           		// 0x00DC (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowDecoarationMeshes : 1;                       		// 0x00DC (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	int                                                Current_MirrorFlag;                               		// 0x00E0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_Low_Strength;                         		// 0x00E4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_High_Strength;                        		// 0x00E8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_Low_Radius;                           		// 0x00EC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_High_Radius;                          		// 0x00F0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_Low_Falloff;                          		// 0x00F4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_High_Falloff;                         		// 0x00F8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BackgroundColor;              		// 0x00FC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BackgroundColor2;             		// 0x0100 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BackgroundColor3;             		// 0x0104 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_SelectedColor;                		// 0x0108 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_SelectedColor2;               		// 0x010C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_SelectedColor3;               		// 0x0110 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BorderColor;                  		// 0x0114 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3431 ];

		return pClassPointer;
	};

};

//UClass* UTerrainEditOptions::pClassPointer = NULL;

// Class UnrealEd.TextureCubeThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureCubeThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3433 ];

		return pClassPointer;
	};

};

//UClass* UTextureCubeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailManager
// 0x008C (0x00C8 - 0x003C)
class UThumbnailManager : public UObject
{
public:
	TArray< struct FThumbnailRenderingInfo >           RenderableThumbnailTypes;                         		// 0x003C (0x000C) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	TArray< struct FThumbnailRenderingInfo >           ArchetypeRenderableThumbnailTypes;                		// 0x0048 (0x000C) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	unsigned long                                      bIsInitialized : 1;                               		// 0x0054 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bMapNeedsUpdate : 1;                              		// 0x0054 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bPSysRealTime : 1;                                		// 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FPointer                                    RenderInfoMap;                                    		// 0x0058 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    ArchetypeRenderInfoMap;                           		// 0x005C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FThumbnailRenderingInfo                     NotSupported;                                     		// 0x0060 (0x0040) [0x0000000000000002]              ( CPF_Const )
	class UStaticMeshComponent*                        BackgroundComponent;                              		// 0x00A0 (0x0004) [0x000000000000000A]              ( CPF_Const | CPF_ExportObject )
	class UStaticMeshComponent*                        SMPreviewComponent;                               		// 0x00A4 (0x0004) [0x000000000000000A]              ( CPF_Const | CPF_ExportObject )
	class USkeletalMeshComponent*                      SKPreviewComponent;                               		// 0x00A8 (0x0004) [0x000000000000000A]              ( CPF_Const | CPF_ExportObject )
	class UStaticMesh*                                 TexPropCube;                                      		// 0x00AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UStaticMesh*                                 TexPropSphere;                                    		// 0x00B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UStaticMesh*                                 TexPropCylinder;                                  		// 0x00B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UStaticMesh*                                 TexPropPlane;                                     		// 0x00B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   ThumbnailBackground;                              		// 0x00BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   ThumbnailBackgroundSolid;                         		// 0x00C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterialInstanceConstant*                   ThumbnailBackgroundSolidMatInst;                  		// 0x00C4 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3435 ];

		return pClassPointer;
	};

};

//UClass* UThumbnailManager::pClassPointer = NULL;

// Class UnrealEd.TopRenderVolumeActor
// 0x0040 (0x0298 - 0x0258)
class ATopRenderVolumeActor : public AVolume
{
public:
	struct FString                                     Alias;                                            		// 0x0258 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              VolumeWidth;                                      		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VolumeHeight;                                     		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DivCountHeight;                                   		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DivCountWidth;                                    		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TopRenderDescription;                             		// 0x0274 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PackageName;                                      		// 0x0280 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ImageSizeHeight;                                  		// 0x028C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ImageSizeWidth;                                   		// 0x028D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              LocalAxisX;                                       		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LocalAxisY;                                       		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3437 ];

		return pClassPointer;
	};

};

//UClass* ATopRenderVolumeActor::pClassPointer = NULL;

// Class UnrealEd.UIActionDataThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUIActionDataThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3439 ];

		return pClassPointer;
	};

};

//UClass* UUIActionDataThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.UIActionGroupDataThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUIActionGroupDataThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3441 ];

		return pClassPointer;
	};

};

//UClass* UUIActionGroupDataThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.UIEvent_MetaObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUIEvent_MetaObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3443 ];

		return pClassPointer;
	};

};

//UClass* UUIEvent_MetaObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UISceneExporter
// 0x0000 (0x0064 - 0x0064)
class UUISceneExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3445 ];

		return pClassPointer;
	};

};

//UClass* UUISceneExporter::pClassPointer = NULL;

// Class UnrealEd.UISceneFactory
// 0x0008 (0x0078 - 0x0070)
class UUISceneFactory : public UFactory
{
public:
	class UClass*                                      UISceneClass;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3447 ];

		return pClassPointer;
	};

};

//UClass* UUISceneFactory::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryNew
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryNew : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3450 ];

		return pClassPointer;
	};

};

//UClass* UUISceneFactoryNew::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryText
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryText : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3452 ];

		return pClassPointer;
	};

};

//UClass* UUISceneFactoryText::pClassPointer = NULL;

// Class UnrealEd.UISceneManager
// 0x00E8 (0x0124 - 0x003C)
class UUISceneManager : public UObject
{
public:
	struct FPointer                                    VfTable_FGlobalDataStoreClientManager;            		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    VfTable_FExec;                                    		// 0x0040 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0044 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UUISkin*                                     ActiveSkin;                                       		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDataStoreClient*                            DataStoreManager;                                 		// 0x004C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UEditorUISceneClient* >              SceneClients;                                     		// 0x0050 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< struct FUIObjectResourceInfo >             UIWidgetResources;                                		// 0x005C (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< struct FUIObjectToolbarMapping >           UIWidgetToolbarMaps;                              		// 0x0068 (0x000C) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	TArray< struct FUIStyleResourceInfo >              UIStyleResources;                                 		// 0x0074 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< struct FUIStateResourceInfo >              UIStateResources;                                 		// 0x0080 (0x000C) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x008C (0x003C) UNKNOWN PROPERTY: MapProperty UnrealEd.UISceneManager.UIStateResourceInfoMap
	struct FUITitleRegions                             TitleRegions;                                     		// 0x00C8 (0x0008) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	struct FPointer                                    DlgUIDataStoreBrowser;                            		// 0x00D0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FExpansionComponent >               ClipboardComponentArray;                          		// 0x00D4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           ClipboardImportTextArray;                         		// 0x00E0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UClass* >                            ClipboardComponentStaticClassArray;               		// 0x00EC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUsedClipboardWidgetProperty : 1;                 		// 0x00F8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bUsedClipboardComponent : 1;                      		// 0x00F8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FString                                     ClipboardWidgetPropertyImportText;                		// 0x00FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      ClipboardWidgetPropertyStaticClass;               		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           ClipboardActEditObjTextArray;                     		// 0x010C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           ClipboardActEditSeqTextArray;                     		// 0x0118 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3454 ];

		return pClassPointer;
	};

	void GetSupportedUIStates ( class UClass* WidgetClass, TArray< struct FUIStateResourceInfo >* out_SupportedStates );
};

//UClass* UUISceneManager::pClassPointer = NULL;

// Class UnrealEd.UISceneThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUISceneThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3456 ];

		return pClassPointer;
	};

};

//UClass* UUISceneThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.UISequenceHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3458 ];

		return pClassPointer;
	};

};

//UClass* UUISequenceHelper::pClassPointer = NULL;

// Class UnrealEd.UISequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3460 ];

		return pClassPointer;
	};

};

//UClass* UUISequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UIState_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UUIState_CustomInputProxy : public UPropertyInputEditInline
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3462 ];

		return pClassPointer;
	};

};

//UClass* UUIState_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UIStateClass_CustomInputProxy
// 0x0000 (0x0050 - 0x0050)
class UUIStateClass_CustomInputProxy : public UPropertyInputCombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3464 ];

		return pClassPointer;
	};

};

//UClass* UUIStateClass_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UUITexture_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3466 ];

		return pClassPointer;
	};

};

//UClass* UUITexture_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomInputProxy
// 0x0000 (0x0060 - 0x0060)
class UUITexture_CustomInputProxy : public UPropertyInputText
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3468 ];

		return pClassPointer;
	};

};

//UClass* UUITexture_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UnrealEdEngine
// 0x008C (0x07C0 - 0x0734)
class UUnrealEdEngine : public UEditorEngine
{
public:
	struct FPointer                                    NotifyVtbl;                                       		// 0x0734 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UUnrealEdOptions*                            EditorOptionsInst;                                		// 0x0738 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UBrowserManager*                             BrowserManager;                                   		// 0x073C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UThumbnailManager*                           ThumbnailManager;                                 		// 0x0740 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     BrowserManagerClassName;                          		// 0x0744 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ThumbnailManagerClassName;                        		// 0x0750 (0x000C) [0x0000000000004000]              ( CPF_Config )
	int                                                AutoSaveIndex;                                    		// 0x075C (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              AutosaveCount;                                    		// 0x0760 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      AutoSave : 1;                                     		// 0x0764 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	int                                                AutosaveTimeMinutes;                              		// 0x0768 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UMaterial*                                   MaterialCopyPasteBuffer;                          		// 0x076C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UObject*                                     MatineeCopyPasteBuffer;                           		// 0x0770 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FSkelSocketCopyInfo >               SkelSocketPasteBuffer;                            		// 0x0774 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FSkelSESoundInfo >                  SkelSeSoundBuffer;                                		// 0x0780 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< class UAnimationCompressionAlgorithm* >    AnimationCompressionAlgorithms;                   		// 0x078C (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           PackagesToBeFullyLoadedAtStartup;                 		// 0x0798 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FName >                             HiddenKismetClassNames;                           		// 0x07A4 (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FClassMoveInfo >                    ClassRelocationInfo;                              		// 0x07B0 (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bUseSmoothFrameRateOnEditor : 1;                  		// 0x07BC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3470 ];

		return pClassPointer;
	};

};

//UClass* UUnrealEdEngine::pClassPointer = NULL;

// Class UnrealEd.UnrealEdKeyBindings
// 0x000C (0x0048 - 0x003C)
class UUnrealEdKeyBindings : public UObject
{
public:
	TArray< struct FEditorKeyBinding >                 KeyBindings;                                      		// 0x003C (0x000C) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3472 ];

		return pClassPointer;
	};

};

//UClass* UUnrealEdKeyBindings::pClassPointer = NULL;

// Class UnrealEd.UnrealEdOptions
// 0x0058 (0x0094 - 0x003C)
class UUnrealEdOptions : public UObject
{
public:
	TArray< struct FEditorCommandCategory >            EditorCategories;                                 		// 0x003C (0x000C) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FEditorCommand >                    EditorCommands;                                   		// 0x0048 (0x000C) [0x0000000000004000]              ( CPF_Config )
	class UUnrealEdKeyBindings*                        EditorKeyBindings;                                		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0058 (0x003C) UNKNOWN PROPERTY: MapProperty UnrealEd.UnrealEdOptions.CommandMap

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3474 ];

		return pClassPointer;
	};

};

//UClass* UUnrealEdOptions::pClassPointer = NULL;

// Class UnrealEd.CascadeParticleSystemComponent
// 0x0008 (0x03F8 - 0x03F0)
class UCascadeParticleSystemComponent : public UParticleSystemComponent
{
public:
	struct FPointer                                    CascadePreviewViewportPtr;                        		// 0x03F0 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ParticlePriority;                                 		// 0x03F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3476 ];

		return pClassPointer;
	};

};

//UClass* UCascadeParticleSystemComponent::pClassPointer = NULL;

// Class UnrealEd.CustomPropertyItemBindings
// 0x0048 (0x0084 - 0x003C)
class UCustomPropertyItemBindings : public UObject
{
public:
	TArray< struct FPropertyItemCustomClass >          CustomPropertyClasses;                            		// 0x003C (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FPropertyTypeCustomClass >          CustomPropertyTypeClasses;                        		// 0x0048 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FPropertyItemCustomProxy >          CustomPropertyDrawProxies;                        		// 0x0054 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FPropertyItemCustomProxy >          CustomPropertyInputProxies;                       		// 0x0060 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FPropertyTypeCustomProxy >          CustomPropertyTypeDrawProxies;                    		// 0x006C (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FPropertyTypeCustomProxy >          CustomPropertyTypeInputProxies;                   		// 0x0078 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3478 ];

		return pClassPointer;
	};

};

//UClass* UCustomPropertyItemBindings::pClassPointer = NULL;

// Class UnrealEd.ObjectEditorViewportInput
// 0x0000 (0x012C - 0x012C)
class UObjectEditorViewportInput : public UEditorViewportInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3480 ];

		return pClassPointer;
	};

};

//UClass* UObjectEditorViewportInput::pClassPointer = NULL;

// Class UnrealEd.SequenceOpHelper_CalloutInputProxy
// 0x0000 (0x003C - 0x003C)
class USequenceOpHelper_CalloutInputProxy : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3482 ];

		return pClassPointer;
	};

};

//UClass* USequenceOpHelper_CalloutInputProxy::pClassPointer = NULL;

// Class UnrealEd.UIEditorOptions
// 0x0039 (0x0075 - 0x003C)
class UUIEditorOptions : public UUIRoot
{
public:
	struct FViewportDimension                          WindowPosition;                                   		// 0x003C (0x0010) [0x0000000000004000]              ( CPF_Config )
	int                                                DataStoreBrowserSashPosition;                     		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ViewportGutterSize;                               		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                VirtualSizeX;                                     		// 0x0054 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                VirtualSizeY;                                     		// 0x0058 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bRenderViewportOutline : 1;                       		// 0x005C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bRenderContainerOutline : 1;                      		// 0x005C (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bRenderSelectionOutline : 1;                      		// 0x005C (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bRenderSelectionHandles : 1;                      		// 0x005C (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bRenderPerWidgetSelectionOutline : 1;             		// 0x005C (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bRenderTitleSafeRegionOutline : 1;                		// 0x005C (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      mViewDrawBkgnd : 1;                               		// 0x005C (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      mViewDrawGrid : 1;                                		// 0x005C (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
	unsigned long                                      bViewShowWireframe : 1;                           		// 0x005C (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      bSnapToGrid : 1;                                  		// 0x005C (0x0004) [0x0000000000004000] [0x00000200] ( CPF_Config )
	unsigned long                                      bShowDockHandles : 1;                             		// 0x005C (0x0004) [0x0000000000004000] [0x00000400] ( CPF_Config )
	int                                                ToolMode;                                         		// 0x0060 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                GridSize;                                         		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CurrentPreviewPlatform;                           		// 0x0068 (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      CurrentSSPreviewMode;                             		// 0x0074 (0x0001) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3484 ];

		return pClassPointer;
	};

};

//UClass* UUIEditorOptions::pClassPointer = NULL;

// Class UnrealEd.UILayer
// 0x0018 (0x0054 - 0x003C)
class UUILayer : public UUILayerBase
{
public:
	struct FString                                     LayerName;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	TArray< struct FUILayerNode >                      LayerNodes;                                       		// 0x0048 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3486 ];

		return pClassPointer;
	};

	int FindNodeIndex ( class UObject* NodeObject );
	bool RemoveNode ( struct FUILayerNode* ExistingNode );
	bool InsertNode ( int InsertIndex, struct FUILayerNode* NodeToInsert );
};

//UClass* UUILayer::pClassPointer = NULL;

// Class UnrealEd.UILayerRoot
// 0x0004 (0x0058 - 0x0054)
class UUILayerRoot : public UUILayer
{
public:
	class UUIScene*                                    Scene;                                            		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3488 ];

		return pClassPointer;
	};

};

//UClass* UUILayerRoot::pClassPointer = NULL;

// Class UnrealEd.UIPreviewString
// 0x000C (0x009C - 0x0090)
class UUIPreviewString : public UUIString
{
public:
	class UUIState*                                    CurrentMenuState;                                 		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   PreviewViewportSize;                              		// 0x0094 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3490 ];

		return pClassPointer;
	};

};

//UClass* UUIPreviewString::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif