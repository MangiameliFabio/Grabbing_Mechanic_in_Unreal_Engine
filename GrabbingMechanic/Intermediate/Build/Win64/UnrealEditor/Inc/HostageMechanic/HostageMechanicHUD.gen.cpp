// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HostageMechanic/HostageMechanicHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostageMechanicHUD() {}
// Cross Module References
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostageMechanicHUD_NoRegister();
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostageMechanicHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HostageMechanic();
// End Cross Module References
	void AHostageMechanicHUD::StaticRegisterNativesAHostageMechanicHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHostageMechanicHUD);
	UClass* Z_Construct_UClass_AHostageMechanicHUD_NoRegister()
	{
		return AHostageMechanicHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHostageMechanicHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHostageMechanicHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HostageMechanic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HostageMechanicHUD.h" },
		{ "ModuleRelativePath", "HostageMechanicHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHostageMechanicHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostageMechanicHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHostageMechanicHUD_Statics::ClassParams = {
		&AHostageMechanicHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHostageMechanicHUD()
	{
		if (!Z_Registration_Info_UClass_AHostageMechanicHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHostageMechanicHUD.OuterSingleton, Z_Construct_UClass_AHostageMechanicHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHostageMechanicHUD.OuterSingleton;
	}
	template<> HOSTAGEMECHANIC_API UClass* StaticClass<AHostageMechanicHUD>()
	{
		return AHostageMechanicHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHostageMechanicHUD);
	struct Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHostageMechanicHUD, AHostageMechanicHUD::StaticClass, TEXT("AHostageMechanicHUD"), &Z_Registration_Info_UClass_AHostageMechanicHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHostageMechanicHUD), 3932943095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicHUD_h_2169988995(TEXT("/Script/HostageMechanic"),
		Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
