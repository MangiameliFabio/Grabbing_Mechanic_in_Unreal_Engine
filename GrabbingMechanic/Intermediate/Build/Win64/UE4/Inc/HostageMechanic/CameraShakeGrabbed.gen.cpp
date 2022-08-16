// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HostageMechanic/CameraShakeGrabbed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeGrabbed() {}
// Cross Module References
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_UCameraShakeGrabbed_NoRegister();
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_UCameraShakeGrabbed();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake();
	UPackage* Z_Construct_UPackage__Script_HostageMechanic();
// End Cross Module References
	void UCameraShakeGrabbed::StaticRegisterNativesUCameraShakeGrabbed()
	{
	}
	UClass* Z_Construct_UClass_UCameraShakeGrabbed_NoRegister()
	{
		return UCameraShakeGrabbed::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakeGrabbed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakeGrabbed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMatineeCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_HostageMechanic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeGrabbed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CameraShakeGrabbed.h" },
		{ "ModuleRelativePath", "CameraShakeGrabbed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakeGrabbed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeGrabbed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeGrabbed_Statics::ClassParams = {
		&UCameraShakeGrabbed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakeGrabbed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeGrabbed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakeGrabbed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraShakeGrabbed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraShakeGrabbed, 2416063679);
	template<> HOSTAGEMECHANIC_API UClass* StaticClass<UCameraShakeGrabbed>()
	{
		return UCameraShakeGrabbed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraShakeGrabbed(Z_Construct_UClass_UCameraShakeGrabbed, &UCameraShakeGrabbed::StaticClass, TEXT("/Script/HostageMechanic"), TEXT("UCameraShakeGrabbed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeGrabbed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
