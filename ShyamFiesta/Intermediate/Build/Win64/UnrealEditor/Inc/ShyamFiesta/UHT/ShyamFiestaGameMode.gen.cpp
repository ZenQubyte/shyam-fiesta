// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShyamFiesta/ShyamFiestaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShyamFiestaGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHYAMFIESTA_API UClass* Z_Construct_UClass_AShyamFiestaGameMode();
	SHYAMFIESTA_API UClass* Z_Construct_UClass_AShyamFiestaGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShyamFiesta();
// End Cross Module References
	void AShyamFiestaGameMode::StaticRegisterNativesAShyamFiestaGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShyamFiestaGameMode);
	UClass* Z_Construct_UClass_AShyamFiestaGameMode_NoRegister()
	{
		return AShyamFiestaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShyamFiestaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShyamFiestaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShyamFiesta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShyamFiestaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShyamFiestaGameMode.h" },
		{ "ModuleRelativePath", "ShyamFiestaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShyamFiestaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShyamFiestaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShyamFiestaGameMode_Statics::ClassParams = {
		&AShyamFiestaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShyamFiestaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShyamFiestaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShyamFiestaGameMode()
	{
		if (!Z_Registration_Info_UClass_AShyamFiestaGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShyamFiestaGameMode.OuterSingleton, Z_Construct_UClass_AShyamFiestaGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShyamFiestaGameMode.OuterSingleton;
	}
	template<> SHYAMFIESTA_API UClass* StaticClass<AShyamFiestaGameMode>()
	{
		return AShyamFiestaGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShyamFiestaGameMode);
	AShyamFiestaGameMode::~AShyamFiestaGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShyamFiestaGameMode, AShyamFiestaGameMode::StaticClass, TEXT("AShyamFiestaGameMode"), &Z_Registration_Info_UClass_AShyamFiestaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShyamFiestaGameMode), 241467848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaGameMode_h_1073351476(TEXT("/Script/ShyamFiesta"),
		Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Isaiah_Documents_Unreal_Projects_shyam_fiesta_ShyamFiesta_Source_ShyamFiesta_ShyamFiestaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
