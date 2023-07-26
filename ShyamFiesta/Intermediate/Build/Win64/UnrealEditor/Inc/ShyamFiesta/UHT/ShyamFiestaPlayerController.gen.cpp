// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShyamFiesta/ShyamFiestaPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShyamFiestaPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SHYAMFIESTA_API UClass* Z_Construct_UClass_AShyamFiestaPlayerController();
	SHYAMFIESTA_API UClass* Z_Construct_UClass_AShyamFiestaPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShyamFiesta();
// End Cross Module References
	void AShyamFiestaPlayerController::StaticRegisterNativesAShyamFiestaPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShyamFiestaPlayerController);
	UClass* Z_Construct_UClass_AShyamFiestaPlayerController_NoRegister()
	{
		return AShyamFiestaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShyamFiestaPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShyamFiestaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShyamFiesta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShyamFiestaPlayerController.h" },
		{ "ModuleRelativePath", "ShyamFiestaPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
		{ "ModuleRelativePath", "ShyamFiestaPlayerController.h" },
		{ "ToolTip", "Time Threshold to know if it was a short press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShyamFiestaPlayerController, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
		{ "ModuleRelativePath", "ShyamFiestaPlayerController.h" },
		{ "ToolTip", "FX Class that we will spawn when clicking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShyamFiestaPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_FXCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_FXCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "ShyamFiestaPlayerController.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShyamFiestaPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "ShyamFiestaPlayerController.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShyamFiestaPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "ShyamFiestaPlayerController.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShyamFiestaPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShyamFiestaPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShyamFiestaPlayerController_Statics::NewProp_SetDestinationTouchAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShyamFiestaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShyamFiestaPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShyamFiestaPlayerController_Statics::ClassParams = {
		&AShyamFiestaPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShyamFiestaPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShyamFiestaPlayerController()
	{
		if (!Z_Registration_Info_UClass_AShyamFiestaPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShyamFiestaPlayerController.OuterSingleton, Z_Construct_UClass_AShyamFiestaPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShyamFiestaPlayerController.OuterSingleton;
	}
	template<> SHYAMFIESTA_API UClass* StaticClass<AShyamFiestaPlayerController>()
	{
		return AShyamFiestaPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShyamFiestaPlayerController);
	AShyamFiestaPlayerController::~AShyamFiestaPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShyamFiestaPlayerController, AShyamFiestaPlayerController::StaticClass, TEXT("AShyamFiestaPlayerController"), &Z_Registration_Info_UClass_AShyamFiestaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShyamFiestaPlayerController), 2468082250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaPlayerController_h_2220429101(TEXT("/Script/ShyamFiesta"),
		Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
