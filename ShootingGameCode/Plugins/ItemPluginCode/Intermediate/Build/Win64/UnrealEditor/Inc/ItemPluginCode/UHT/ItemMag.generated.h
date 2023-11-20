// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemMag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ITEMPLUGINCODE_ItemMag_generated_h
#error "ItemMag.generated.h already included, missing '#pragma once' in ItemMag.h"
#endif
#define ITEMPLUGINCODE_ItemMag_generated_h

#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_SPARSE_DATA
#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_ACCESSORS
#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemMag(); \
	friend struct Z_Construct_UClass_AItemMag_Statics; \
public: \
	DECLARE_CLASS(AItemMag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ItemPluginCode"), NO_API) \
	DECLARE_SERIALIZER(AItemMag)


#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAItemMag(); \
	friend struct Z_Construct_UClass_AItemMag_Statics; \
public: \
	DECLARE_CLASS(AItemMag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ItemPluginCode"), NO_API) \
	DECLARE_SERIALIZER(AItemMag)


#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemMag(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemMag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemMag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemMag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemMag(AItemMag&&); \
	NO_API AItemMag(const AItemMag&); \
public: \
	NO_API virtual ~AItemMag();


#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemMag(AItemMag&&); \
	NO_API AItemMag(const AItemMag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemMag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemMag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemMag) \
	NO_API virtual ~AItemMag();


#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_10_PROLOG
#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_SPARSE_DATA \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_RPC_WRAPPERS \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_ACCESSORS \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_INCLASS \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_SPARSE_DATA \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_ACCESSORS \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_INCLASS_NO_PURE_DECLS \
	FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ITEMPLUGINCODE_API UClass* StaticClass<class AItemMag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_ItemMag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
