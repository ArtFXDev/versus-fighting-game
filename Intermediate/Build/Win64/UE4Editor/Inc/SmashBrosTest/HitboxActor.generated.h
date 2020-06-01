// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMASHBROSTEST_HitboxActor_generated_h
#error "HitboxActor.generated.h already included, missing '#pragma once' in HitboxActor.h"
#endif
#define SMASHBROSTEST_HitboxActor_generated_h

#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_SPARSE_DATA
#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_RPC_WRAPPERS
#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitboxActor(); \
	friend struct Z_Construct_UClass_AHitboxActor_Statics; \
public: \
	DECLARE_CLASS(AHitboxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmashBrosTest"), NO_API) \
	DECLARE_SERIALIZER(AHitboxActor)


#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAHitboxActor(); \
	friend struct Z_Construct_UClass_AHitboxActor_Statics; \
public: \
	DECLARE_CLASS(AHitboxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmashBrosTest"), NO_API) \
	DECLARE_SERIALIZER(AHitboxActor)


#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitboxActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitboxActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitboxActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitboxActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitboxActor(AHitboxActor&&); \
	NO_API AHitboxActor(const AHitboxActor&); \
public:


#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitboxActor(AHitboxActor&&); \
	NO_API AHitboxActor(const AHitboxActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitboxActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitboxActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitboxActor)


#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_PRIVATE_PROPERTY_OFFSET
#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_18_PROLOG
#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_PRIVATE_PROPERTY_OFFSET \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_SPARSE_DATA \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_RPC_WRAPPERS \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_INCLASS \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_PRIVATE_PROPERTY_OFFSET \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_SPARSE_DATA \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_INCLASS_NO_PURE_DECLS \
	versus_fighting_game_Source_SmashBrosTest_HitboxActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMASHBROSTEST_API UClass* StaticClass<class AHitboxActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID versus_fighting_game_Source_SmashBrosTest_HitboxActor_h


#define FOREACH_ENUM_EHITBOXENUM(op) \
	op(EHitboxEnum::HB_PROXIMTY) \
	op(EHitboxEnum::HB_STRIKE) \
	op(EHitboxEnum::HB_HURTBOX) 

enum class EHitboxEnum : uint8;
template<> SMASHBROSTEST_API UEnum* StaticEnum<EHitboxEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
