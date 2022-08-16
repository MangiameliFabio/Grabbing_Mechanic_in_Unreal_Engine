// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HostageMechanic/HostageMechanicHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_AHostageMechanicHUD_NoRegister()
	{
		return AHostageMechanicHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHostageMechanicHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHostageMechanicHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HostageMechanic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HostageMechanicHUD.h" },
		{ "ModuleRelativePath", "HostageMechanicHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHostageMechanicHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostageMechanicHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHostageMechanicHUD_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHostageMechanicHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHostageMechanicHUD, 527156977);
	template<> HOSTAGEMECHANIC_API UClass* StaticClass<AHostageMechanicHUD>()
	{
		return AHostageMechanicHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHostageMechanicHUD(Z_Construct_UClass_AHostageMechanicHUD, &AHostageMechanicHUD::StaticClass, TEXT("/Script/HostageMechanic"), TEXT("AHostageMechanicHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHostageMechanicHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
