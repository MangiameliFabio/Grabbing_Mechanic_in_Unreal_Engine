// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HostageMechanic/HostageMechanicGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostageMechanicGameMode() {}
// Cross Module References
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostageMechanicGameMode_NoRegister();
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostageMechanicGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HostageMechanic();
// End Cross Module References
	void AHostageMechanicGameMode::StaticRegisterNativesAHostageMechanicGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHostageMechanicGameMode_NoRegister()
	{
		return AHostageMechanicGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHostageMechanicGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHostageMechanicGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HostageMechanic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HostageMechanicGameMode.h" },
		{ "ModuleRelativePath", "HostageMechanicGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHostageMechanicGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostageMechanicGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHostageMechanicGameMode_Statics::ClassParams = {
		&AHostageMechanicGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHostageMechanicGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHostageMechanicGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHostageMechanicGameMode, 1858386620);
	template<> HOSTAGEMECHANIC_API UClass* StaticClass<AHostageMechanicGameMode>()
	{
		return AHostageMechanicGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHostageMechanicGameMode(Z_Construct_UClass_AHostageMechanicGameMode, &AHostageMechanicGameMode::StaticClass, TEXT("/Script/HostageMechanic"), TEXT("AHostageMechanicGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHostageMechanicGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
