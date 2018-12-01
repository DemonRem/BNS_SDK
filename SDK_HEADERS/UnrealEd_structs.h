#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UnrealEd_structs.h
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

// ScriptStruct UnrealEd.BrowserManager.BrowserPaneInfo
// 0x0028
struct FBrowserPaneInfo
{
	int                                                PaneID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WxWindowClassName;                                		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     FriendlyName;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                CloneOfPaneID;                                    		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                CloneNumber;                                      		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    WxBrowserPtr;                                     		// 0x0024 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct UnrealEd.CascadeOptions.ModuleMenuMapper
// 0x0018
struct FModuleMenuMapper
{
	struct FString                                     ObjName;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           InvalidObjNames;                                  		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.CustomPropertyItemBindings.PropertyItemCustomProxy
// 0x0020
struct FPropertyItemCustomProxy
{
	struct FString                                     PropertyPathName;                                 		// 0x0000 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PropertyItemClassName;                            		// 0x000C (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bReplaceArrayHeaders : 1;                         		// 0x0018 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIgnoreArrayElements : 1;                         		// 0x0018 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	class UClass*                                      PropertyItemClass;                                		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct UnrealEd.CustomPropertyItemBindings.PropertyTypeCustomProxy
// 0x0028
struct FPropertyTypeCustomProxy
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PropertyObjectClassPathName;                      		// 0x0008 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PropertyItemClassName;                            		// 0x0014 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bReplaceArrayHeaders : 1;                         		// 0x0020 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIgnoreArrayElements : 1;                         		// 0x0020 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	class UClass*                                      PropertyItemClass;                                		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct UnrealEd.CustomPropertyItemBindings.PropertyItemCustomClass
// 0x0020
struct FPropertyItemCustomClass
{
	struct FString                                     PropertyPathName;                                 		// 0x0000 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PropertyItemClassName;                            		// 0x000C (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bReplaceArrayHeaders : 1;                         		// 0x0018 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIgnoreArrayElements : 1;                         		// 0x0018 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	struct FPointer                                    WxPropertyItemClass;                              		// 0x001C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct UnrealEd.CustomPropertyItemBindings.PropertyTypeCustomClass
// 0x0028
struct FPropertyTypeCustomClass
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PropertyObjectClassPathName;                      		// 0x0008 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PropertyItemClassName;                            		// 0x0014 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bReplaceArrayHeaders : 1;                         		// 0x0020 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIgnoreArrayElements : 1;                         		// 0x0020 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	struct FPointer                                    WxPropertyItemClass;                              		// 0x0024 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct UnrealEd.GenericBrowserType.GenericBrowserTypeInfo
// 0x001C
struct FGenericBrowserTypeInfo
{
	class UClass*                                      Class;                                            		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BorderColor;                                      		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FQWord                                      RequiredFlags;                                    		// 0x0008 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    ContextMenu;                                      		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UGenericBrowserType*                         BrowserType;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FPointer                                    IsSupportedCallback;                              		// 0x0018 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct UnrealEd.KismetBindings.KismetKeyBind
// 0x0014
struct FKismetKeyBind
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bControl : 1;                                     		// 0x0008 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bShift : 1;                                       		// 0x0008 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	struct FName                                       SeqObjClassName;                                  		// 0x000C (0x0008) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct UnrealEd.KismetBindings.KismetCommentPreset
// 0x0018
struct FKismetCommentPreset
{
	struct FName                                       PresetName;                                       		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                BorderWidth;                                      		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FColor                                      BorderColor;                                      		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bFilled : 1;                                      		// 0x0010 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	struct FColor                                      FillColor;                                        		// 0x0014 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorParameterValue
// 0x001C
struct FEditorParameterValue
{
	unsigned long                                      bOverride : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionId;                                     		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorVectorParameterValue
// 0x0010(0x002C - 0x001C)
struct FEditorVectorParameterValue : FEditorParameterValue
{
	struct FLinearColor                                ParameterValue;                                   		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorScalarParameterValue
// 0x0004(0x0020 - 0x001C)
struct FEditorScalarParameterValue : FEditorParameterValue
{
	float                                              ParameterValue;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorTextureParameterValue
// 0x0004(0x0020 - 0x001C)
struct FEditorTextureParameterValue : FEditorParameterValue
{
	class UTexture*                                    ParameterValue;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorFontParameterValue
// 0x0008(0x0024 - 0x001C)
struct FEditorFontParameterValue : FEditorParameterValue
{
	class UFont*                                       FontValue;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FontPage;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorStaticSwitchParameterValue
// 0x0004(0x0020 - 0x001C)
struct FEditorStaticSwitchParameterValue : FEditorParameterValue
{
	unsigned long                                      ParameterValue : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.ComponentMaskParameter
// 0x0004
struct FComponentMaskParameter
{
	unsigned long                                      R : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      G : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      B : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      A : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorStaticComponentMaskParameterValue
// 0x0004(0x0020 - 0x001C)
struct FEditorStaticComponentMaskParameterValue : FEditorParameterValue
{
	struct FComponentMaskParameter                     ParameterValue;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceConstant.EditorParameterGroup
// 0x0014
struct FEditorParameterGroup
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FEditorScalarParameterValue >       ScalarParameterValues;                            		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.EditorParameterValueOverTime
// 0x0030
struct FEditorParameterValueOverTime
{
	struct FGuid                                       ExpressionId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bOverride : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLoop : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoActivate : 1;                                		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              CycleTime;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              OffsetTime;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.EditorVectorParameterValueOverTime
// 0x0020(0x0050 - 0x0030)
struct FEditorVectorParameterValueOverTime : FEditorParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveVector                          ParameterValueCurve;                              		// 0x0040 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.EditorScalarParameterValueOverTime
// 0x0014(0x0044 - 0x0030)
struct FEditorScalarParameterValueOverTime : FEditorParameterValueOverTime
{
	float                                              ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           ParameterValueCurve;                              		// 0x0034 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.EditorTextureParameterValueOverTime
// 0x0004(0x0034 - 0x0030)
struct FEditorTextureParameterValueOverTime : FEditorParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.EditorFontParameterValueOverTime
// 0x0008(0x0038 - 0x0030)
struct FEditorFontParameterValueOverTime : FEditorParameterValueOverTime
{
	class UFont*                                       FontValue;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FontPage;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.EditorStaticSwitchParameterValueOverTime
// 0x0004(0x0034 - 0x0030)
struct FEditorStaticSwitchParameterValueOverTime : FEditorParameterValueOverTime
{
	unsigned long                                      ParameterValue : 1;                               		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.ComponentMaskParameterOverTime
// 0x0004
struct FComponentMaskParameterOverTime
{
	unsigned long                                      R : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      G : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      B : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      A : 1;                                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct UnrealEd.MaterialEditorInstanceTimeVarying.EditorStaticComponentMaskParameterValueOverTime
// 0x0004(0x0034 - 0x0030)
struct FEditorStaticComponentMaskParameterValueOverTime : FEditorParameterValueOverTime
{
	struct FComponentMaskParameterOverTime             ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.PhysXFractureOptions.PhysXSlicingParameters
// 0x0024
struct FPhysXSlicingParameters
{
	int                                                SlicesInX;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SlicesInY;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SlicesInZ;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LinearNoise;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AngularNoise;                                     		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UnrealEd.ThumbnailManager.ThumbnailRenderingInfo
// 0x0040
struct FThumbnailRenderingInfo
{
	struct FString                                     ClassNeedingThumbnailName;                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class UClass*                                      ClassNeedingThumbnail;                            		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     RendererClassName;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	class UThumbnailRenderer*                          Renderer;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     LabelRendererClassName;                           		// 0x0020 (0x000C) [0x0000000000000000]              
	class UThumbnailLabelRenderer*                     LabelRenderer;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	struct FColor                                      BorderColor;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     IconName;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UIEditorOptions.ViewportDimension
// 0x0010
struct FViewportDimension
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Width;                                            		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Height;                                           		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct UnrealEd.UILayer.UILayerNode
// 0x000C
struct FUILayerNode
{
	unsigned long                                      bLocked : 1;                                      		// 0x0000 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	class UObject*                                     LayerObject;                                      		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UUILayer*                                    ParentLayer;                                      		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UnrealEd.UISceneManager.UIResourceInfo
// 0x0010
struct FUIResourceInfo
{
	class UObject*                                     UIResource;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     FriendlyName;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UISceneManager.UIObjectResourceInfo
// 0x0000(0x0010 - 0x0010)
struct FUIObjectResourceInfo : FUIResourceInfo
{
};

// ScriptStruct UnrealEd.UISceneManager.UIStyleResourceInfo
// 0x0000(0x0010 - 0x0010)
struct FUIStyleResourceInfo : FUIResourceInfo
{
};

// ScriptStruct UnrealEd.UISceneManager.UIStateResourceInfo
// 0x0000(0x0010 - 0x0010)
struct FUIStateResourceInfo : FUIResourceInfo
{
};

// ScriptStruct UnrealEd.UISceneManager.UIObjectToolbarMapping
// 0x0030
struct FUIObjectToolbarMapping
{
	struct FString                                     WidgetClassName;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     IconName;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FString                                     ToolTip;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FString                                     HelpText;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UISceneManager.UITitleRegions
// 0x0008
struct FUITitleRegions
{
	float                                              RecommendedPercentage;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxPercentage;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UnrealEdEngine.SkelSocketCopyInfo
// 0x0078
struct FSkelSocketCopyInfo
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     RelativeScale;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	class USkeletalMesh*                               PreviewSkelMesh;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 PreviewStaticMesh;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     DependencyParticleName;                           		// 0x003C (0x000C) [0x0000000000000000]              
	class UParticleSystem*                             DependencyParticleSystem;                         		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bParticleAttachPosOnly : 1;                       		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bParticleApplyAutoScale : 1;                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDependencyTrailInfo                        DependencyTrailTemplate;                          		// 0x0050 (0x0028) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UnrealEdEngine.SkelSESoundInfo
// 0x0008
struct FSkelSESoundInfo
{
	class UPhysicalMaterial*                           PhysMaterialOverride;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundSet*                                   PlaySoundSet;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UnrealEdEngine.ClassMoveInfo
// 0x0028
struct FClassMoveInfo
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     PackageName;                                      		// 0x000C (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     GroupName;                                        		// 0x0018 (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bActive : 1;                                      		// 0x0024 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
};

// ScriptStruct UnrealEd.UnrealEdKeyBindings.EditorKeyBinding
// 0x0014
struct FEditorKeyBinding
{
	unsigned long                                      bCtrlDown : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAltDown : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShiftDown : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       CommandName;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UnrealEdOptions.EditorCommandCategory
// 0x0010
struct FEditorCommandCategory
{
	struct FName                                       Parent;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UnrealEd.UnrealEdOptions.EditorCommand
// 0x0028
struct FEditorCommand
{
	struct FName                                       Parent;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       CommandName;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     ExecCommand;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x001C (0x000C) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif