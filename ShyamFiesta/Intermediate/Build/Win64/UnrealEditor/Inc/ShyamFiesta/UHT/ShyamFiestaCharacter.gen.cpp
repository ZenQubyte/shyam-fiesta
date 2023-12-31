// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShyamFiesta/ShyamFiestaCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShyamFiestaCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SHYAMFIESTA_API UClass* Z_Construct_UClass_AShyamFiestaCharacter();
	SHYAMFIESTA_API UClass* Z_Construct_UClass_AShyamFiestaCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShyamFiesta();
// End Cross Module References
	void AShyamFiestaCharacter::StaticRegisterNativesAShyamFiestaCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShyamFiestaCharacter);
	UClass* Z_Construct_UClass_AShyamFiestaCharacter_NoRegister()
	{
		return AShyamFiestaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShyamFiestaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShyamFiestaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShyamFiesta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShyamFiestaCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ShyamFiestaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShyamFiestaCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShyamFiestaCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShyamFiestaCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShyamFiestaCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShyamFiestaCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShyamFiestaCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShyamFiestaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShyamFiestaCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShyamFiestaCharacter_Statics::ClassParams = {
		&AShyamFiestaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShyamFiestaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShyamFiestaCharacter()
	{
		if (!Z_Registration_Info_UClass_AShyamFiestaCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShyamFiestaCharacter.OuterSingleton, Z_Construct_UClass_AShyamFiestaCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShyamFiestaCharacter.OuterSingleton;
	}
	template<> SHYAMFIESTA_API UClass* StaticClass<AShyamFiestaCharacter>()
	{
		return AShyamFiestaCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShyamFiestaCharacter);
	AShyamFiestaCharacter::~AShyamFiestaCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShyamFiestaCharacter, AShyamFiestaCharacter::StaticClass, TEXT("AShyamFiestaCharacter"), &Z_Registration_Info_UClass_AShyamFiestaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShyamFiestaCharacter), 2237927448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaCharacter_h_2191492627(TEXT("/Script/ShyamFiesta"),
		Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
