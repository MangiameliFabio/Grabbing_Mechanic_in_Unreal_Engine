// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHostageMechanicCharacter;
#ifdef HOSTAGEMECHANIC_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define HOSTAGEMECHANIC_EnemyCharacter_generated_h

#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_SPARSE_DATA
#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShoot);


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShoot);


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HostageMechanic"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HostageMechanic"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Rifle() { return STRUCT_OFFSET(AEnemyCharacter, Rifle); } \
	FORCEINLINE static uint32 __PPO__Muzzle() { return STRUCT_OFFSET(AEnemyCharacter, Muzzle); } \
	FORCEINLINE static uint32 __PPO__Widget() { return STRUCT_OFFSET(AEnemyCharacter, Widget); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AEnemyCharacter, ProjectileClass); }


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_9_PROLOG
#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_SPARSE_DATA \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_RPC_WRAPPERS \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_INCLASS \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_SPARSE_DATA \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HostageMechanic_Source_HostageMechanic_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOSTAGEMECHANIC_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostageMechanic_Source_HostageMechanic_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
