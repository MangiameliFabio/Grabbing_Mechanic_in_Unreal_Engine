// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HostageMechanic/HostageMechanicCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostageMechanicCharacter() {}
// Cross Module References
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostageMechanicCharacter_NoRegister();
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostageMechanicCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HostageMechanic();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostagePawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOSTAGEMECHANIC_API UClass* Z_Construct_UClass_AHostageMechanicProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
// End Cross Module References
	void AHostageMechanicCharacter::StaticRegisterNativesAHostageMechanicCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHostageMechanicCharacter);
	UClass* Z_Construct_UClass_AHostageMechanicCharacter_NoRegister()
	{
		return AHostageMechanicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHostageMechanicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabbedHostage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbedHostage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowedMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowedMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostageIsGrabbed_MetaData[];
#endif
		static void NewProp_HostageIsGrabbed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HostageIsGrabbed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CamShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationUpperArmL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimLocationUpperArmL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationUpperArmR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimLocationUpperArmR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationLowerArmL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimLocationLowerArmL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationLowerArmR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimLocationLowerArmR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationHandL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimLocationHandL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationHandR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimLocationHandR;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimLocationsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AimLocationsArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHostageMechanicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HostageMechanic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HostageMechanicCharacter.h" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on VR gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HostageMechanicCharacter" },
		{ "Comment", "/** Motion controller (right hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HostageMechanicCharacter" },
		{ "Comment", "/** Motion controller (left hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GrabbedHostage_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "Comment", "/** Grabbed Pawn */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Grabbed Pawn" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GrabbedHostage = { "GrabbedHostage", nullptr, (EPropertyFlags)0x0040000000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, GrabbedHostage), Z_Construct_UClass_AHostagePawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GrabbedHostage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GrabbedHostage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, ProjectileClass), Z_Construct_UClass_AHostageMechanicProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AHostageMechanicCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AHostageMechanicCharacter), &Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_NormalMovementSpeed_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_NormalMovementSpeed = { "NormalMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, NormalMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_NormalMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_NormalMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_SlowedMovementSpeed_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_SlowedMovementSpeed = { "SlowedMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, SlowedMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_SlowedMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_SlowedMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_HostageIsGrabbed_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_HostageIsGrabbed_SetBit(void* Obj)
	{
		((AHostageMechanicCharacter*)Obj)->HostageIsGrabbed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_HostageIsGrabbed = { "HostageIsGrabbed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHostageMechanicCharacter), &Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_HostageIsGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_HostageIsGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_HostageIsGrabbed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_CamShakeClass_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_CamShakeClass = { "CamShakeClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, CamShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_CamShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_CamShakeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmL_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmL = { "AimLocationUpperArmL", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationUpperArmL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmR_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmR = { "AimLocationUpperArmR", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationUpperArmR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmL_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmL = { "AimLocationLowerArmL", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationLowerArmL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmR_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmR = { "AimLocationLowerArmR", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationLowerArmR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandL_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandL = { "AimLocationHandL", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationHandL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandR_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandR = { "AimLocationHandR", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationHandR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandR_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationsArray_Inner = { "AimLocationsArray", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationsArray_MetaData[] = {
		{ "Category", "HostageMechanicCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostageMechanicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationsArray = { "AimLocationsArray", nullptr, (EPropertyFlags)0x002008800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationsArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHostageMechanicCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_Gun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_Gun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_R_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_L_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GrabbedHostage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_GunOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_NormalMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_SlowedMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_HostageIsGrabbed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_CamShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationUpperArmR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationLowerArmR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationHandR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostageMechanicCharacter_Statics::NewProp_AimLocationsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHostageMechanicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostageMechanicCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHostageMechanicCharacter_Statics::ClassParams = {
		&AHostageMechanicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHostageMechanicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHostageMechanicCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHostageMechanicCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHostageMechanicCharacter()
	{
		if (!Z_Registration_Info_UClass_AHostageMechanicCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHostageMechanicCharacter.OuterSingleton, Z_Construct_UClass_AHostageMechanicCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHostageMechanicCharacter.OuterSingleton;
	}
	template<> HOSTAGEMECHANIC_API UClass* StaticClass<AHostageMechanicCharacter>()
	{
		return AHostageMechanicCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHostageMechanicCharacter);
	struct Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHostageMechanicCharacter, AHostageMechanicCharacter::StaticClass, TEXT("AHostageMechanicCharacter"), &Z_Registration_Info_UClass_AHostageMechanicCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHostageMechanicCharacter), 2417089397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_1168310385(TEXT("/Script/HostageMechanic"),
		Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GrabbingMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
