// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef HOSTAGEMECHANIC_HostageMechanicProjectile_generated_h
#error "HostageMechanicProjectile.generated.h already included, missing '#pragma once' in HostageMechanicProjectile.h"
#endif
#define HOSTAGEMECHANIC_HostageMechanicProjectile_generated_h

#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_SPARSE_DATA
#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHostageMechanicProjectile(); \
	friend struct Z_Construct_UClass_AHostageMechanicProjectile_Statics; \
public: \
	DECLARE_CLASS(AHostageMechanicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HostageMechanic"), NO_API) \
	DECLARE_SERIALIZER(AHostageMechanicProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHostageMechanicProjectile(); \
	friend struct Z_Construct_UClass_AHostageMechanicProjectile_Statics; \
public: \
	DECLARE_CLASS(AHostageMechanicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HostageMechanic"), NO_API) \
	DECLARE_SERIALIZER(AHostageMechanicProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHostageMechanicProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHostageMechanicProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHostageMechanicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHostageMechanicProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHostageMechanicProjectile(AHostageMechanicProjectile&&); \
	NO_API AHostageMechanicProjectile(const AHostageMechanicProjectile&); \
public:


#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHostageMechanicProjectile(AHostageMechanicProjectile&&); \
	NO_API AHostageMechanicProjectile(const AHostageMechanicProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHostageMechanicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHostageMechanicProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHostageMechanicProjectile)


#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AHostageMechanicProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AHostageMechanicProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ParticleEffect() { return STRUCT_OFFSET(AHostageMechanicProjectile, ParticleEffect); } \
	FORCEINLINE static uint32 __PPO__DamageInstigator() { return STRUCT_OFFSET(AHostageMechanicProjectile, DamageInstigator); }


#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_12_PROLOG
#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_SPARSE_DATA \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_RPC_WRAPPERS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_INCLASS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_SPARSE_DATA \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_INCLASS_NO_PURE_DECLS \
	HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOSTAGEMECHANIC_API UClass* StaticClass<class AHostageMechanicProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostageMechanic_Source_HostageMechanic_HostageMechanicProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
