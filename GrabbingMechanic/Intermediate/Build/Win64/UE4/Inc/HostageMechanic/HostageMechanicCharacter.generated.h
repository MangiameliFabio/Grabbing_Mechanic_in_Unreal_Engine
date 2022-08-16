// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOSTAGEMECHANIC_HostageMechanicCharacter_generated_h
#error "HostageMechanicCharacter.generated.h already included, missing '#pragma once' in HostageMechanicCharacter.h"
#endif
#define HOSTAGEMECHANIC_HostageMechanicCharacter_generated_h

#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_SPARSE_DATA
#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_RPC_WRAPPERS
#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHostageMechanicCharacter(); \
	friend struct Z_Construct_UClass_AHostageMechanicCharacter_Statics; \
public: \
	DECLARE_CLASS(AHostageMechanicCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HostageMechanic"), NO_API) \
	DECLARE_SERIALIZER(AHostageMechanicCharacter)


#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAHostageMechanicCharacter(); \
	friend struct Z_Construct_UClass_AHostageMechanicCharacter_Statics; \
public: \
	DECLARE_CLASS(AHostageMechanicCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HostageMechanic"), NO_API) \
	DECLARE_SERIALIZER(AHostageMechanicCharacter)


#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHostageMechanicCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHostageMechanicCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHostageMechanicCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHostageMechanicCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHostageMechanicCharacter(AHostageMechanicCharacter&&); \
	NO_API AHostageMechanicCharacter(const AHostageMechanicCharacter&); \
public:


#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHostageMechanicCharacter(AHostageMechanicCharacter&&); \
	NO_API AHostageMechanicCharacter(const AHostageMechanicCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHostageMechanicCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHostageMechanicCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHostageMechanicCharacter)


#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AHostageMechanicCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AHostageMechanicCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AHostageMechanicCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AHostageMechanicCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AHostageMechanicCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AHostageMechanicCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AHostageMechanicCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AHostageMechanicCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__GrabbedHostage() { return STRUCT_OFFSET(AHostageMechanicCharacter, GrabbedHostage); } \
	FORCEINLINE static uint32 __PPO__AimLocationUpperArmL() { return STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationUpperArmL); } \
	FORCEINLINE static uint32 __PPO__AimLocationUpperArmR() { return STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationUpperArmR); } \
	FORCEINLINE static uint32 __PPO__AimLocationLowerArmL() { return STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationLowerArmL); } \
	FORCEINLINE static uint32 __PPO__AimLocationLowerArmR() { return STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationLowerArmR); } \
	FORCEINLINE static uint32 __PPO__AimLocationHandL() { return STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationHandL); } \
	FORCEINLINE static uint32 __PPO__AimLocationHandR() { return STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationHandR); } \
	FORCEINLINE static uint32 __PPO__AimLocationsArray() { return STRUCT_OFFSET(AHostageMechanicCharacter, AimLocationsArray); }


#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_23_PROLOG
#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_PRIVATE_PROPERTY_OFFSET \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_SPARSE_DATA \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_RPC_WRAPPERS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_INCLASS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_PRIVATE_PROPERTY_OFFSET \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_SPARSE_DATA \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_INCLASS_NO_PURE_DECLS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOSTAGEMECHANIC_API UClass* StaticClass<class AHostageMechanicCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostageMechanic_Source_HostageMechanic_HostageMechanicCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
