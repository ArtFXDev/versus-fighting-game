// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMASHBROSTEST_BaseGameInstance_generated_h
#error "BaseGameInstance.generated.h already included, missing '#pragma once' in BaseGameInstance.h"
#endif
#define SMASHBROSTEST_BaseGameInstance_generated_h

#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_SPARSE_DATA
#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_RPC_WRAPPERS
#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SmashBrosTest"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SmashBrosTest"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public:


#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance)


#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_PRIVATE_PROPERTY_OFFSET
#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_30_PROLOG
#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_PRIVATE_PROPERTY_OFFSET \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_SPARSE_DATA \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_RPC_WRAPPERS \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_INCLASS \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_PRIVATE_PROPERTY_OFFSET \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_SPARSE_DATA \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_INCLASS_NO_PURE_DECLS \
	versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMASHBROSTEST_API UClass* StaticClass<class UBaseGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID versus_fighting_game_Source_SmashBrosTest_BaseGameInstance_h


#define FOREACH_ENUM_ECHARACTERCLASS2(op) \
	op(ECharacterClass2::VE_Default) \
	op(ECharacterClass2::VE_FunkyAgent) \
	op(ECharacterClass2::VE_TeddyBurn) \
	op(ECharacterClass2::VE_BoxWarrior) 

enum class ECharacterClass2 : uint8;
template<> SMASHBROSTEST_API UEnum* StaticEnum<ECharacterClass2>();

#define FOREACH_ENUM_ECHARACTERCLASS(op) \
	op(ECharacterClass::VE_Default) \
	op(ECharacterClass::VE_FunkyAgent) \
	op(ECharacterClass::VE_TeddyBurn) \
	op(ECharacterClass::VE_BoxWarrior) 

enum class ECharacterClass : uint8;
template<> SMASHBROSTEST_API UEnum* StaticEnum<ECharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
