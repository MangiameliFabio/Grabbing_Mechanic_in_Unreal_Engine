// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HostageMechanic/HostagePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostagePawn() {}
// Cross Module References
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostagePawn_NoRegister();
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostagePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_HostageMechanic();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AHostagePawn::StaticRegisterNativesAHostagePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHostagePawn);
	UClass* Z_Construct_UClass_AHostagePawn_NoRegister()
	{
		return AHostagePawn::StaticClass();
	}
	struct Z_Construct_UClass_AHostagePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHostagePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_HostageMechanic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostagePawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HostagePawn.h" },
		{ "ModuleRelativePath", "HostagePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostagePawn_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostagePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostagePawn_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostagePawn, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostagePawn_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostagePawn_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHostagePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostagePawn_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHostagePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostagePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHostagePawn_Statics::ClassParams = {
		&AHostagePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHostagePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHostagePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHostagePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHostagePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHostagePawn()
	{
		if (!Z_Registration_Info_UClass_AHostagePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHostagePawn.OuterSingleton, Z_Construct_UClass_AHostagePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHostagePawn.OuterSingleton;
	}
	template<> HOSTAGEMECHANIC_API UClass* StaticClass<AHostagePawn>()
	{
		return AHostagePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHostagePawn);
	struct Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostagePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostagePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHostagePawn, AHostagePawn::StaticClass, TEXT("AHostagePawn"), &Z_Registration_Info_UClass_AHostagePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHostagePawn), 3127551561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostagePawn_h_424647603(TEXT("/Script/HostageMechanic"),
		Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostagePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostagePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
