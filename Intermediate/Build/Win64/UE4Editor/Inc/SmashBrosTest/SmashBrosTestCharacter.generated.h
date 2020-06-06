// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMASHBROSTEST_SmashBrosTestCharacter_generated_h
#error "SmashBrosTestCharacter.generated.h already included, missing '#pragma once' in SmashBrosTestCharacter.h"
#endif
#define SMASHBROSTEST_SmashBrosTestCharacter_generated_h

#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_SPARSE_DATA
#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execstunPlayer) \
	{ \
		P_GET_UBOOL(Z_Param_playerIsStun); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stunPlayer(Z_Param_playerIsStun); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param__damageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param__damageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKnightKeyboardAttack3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KnightKeyboardAttack3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardMoveRight(Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardStopJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardStopJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardAttack3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardAttack3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardAttack2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardAttack2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardAttack1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardAttack1(); \
		P_NATIVE_END; \
	}


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execstunPlayer) \
	{ \
		P_GET_UBOOL(Z_Param_playerIsStun); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stunPlayer(Z_Param_playerIsStun); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param__damageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param__damageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKnightKeyboardAttack3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KnightKeyboardAttack3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardMoveRight(Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardStopJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardStopJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardAttack3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardAttack3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardAttack2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardAttack2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFunkyKeyboardAttack1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FunkyKeyboardAttack1(); \
		P_NATIVE_END; \
	}


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmashBrosTestCharacter(); \
	friend struct Z_Construct_UClass_ASmashBrosTestCharacter_Statics; \
public: \
	DECLARE_CLASS(ASmashBrosTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmashBrosTest"), NO_API) \
	DECLARE_SERIALIZER(ASmashBrosTestCharacter)


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASmashBrosTestCharacter(); \
	friend struct Z_Construct_UClass_ASmashBrosTestCharacter_Statics; \
public: \
	DECLARE_CLASS(ASmashBrosTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmashBrosTest"), NO_API) \
	DECLARE_SERIALIZER(ASmashBrosTestCharacter)


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmashBrosTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmashBrosTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmashBrosTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmashBrosTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmashBrosTestCharacter(ASmashBrosTestCharacter&&); \
	NO_API ASmashBrosTestCharacter(const ASmashBrosTestCharacter&); \
public:


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmashBrosTestCharacter(ASmashBrosTestCharacter&&); \
	NO_API ASmashBrosTestCharacter(const ASmashBrosTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmashBrosTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmashBrosTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmashBrosTestCharacter)


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__hurtbox() { return STRUCT_OFFSET(ASmashBrosTestCharacter, hurtbox); } \
	FORCEINLINE static uint32 __PPO__wasPunchUsed() { return STRUCT_OFFSET(ASmashBrosTestCharacter, wasPunchUsed); } \
	FORCEINLINE static uint32 __PPO__wasKickUsed() { return STRUCT_OFFSET(ASmashBrosTestCharacter, wasKickUsed); } \
	FORCEINLINE static uint32 __PPO__wasHeadButtUsed() { return STRUCT_OFFSET(ASmashBrosTestCharacter, wasHeadButtUsed); } \
	FORCEINLINE static uint32 __PPO__wasRangeAttackUsed() { return STRUCT_OFFSET(ASmashBrosTestCharacter, wasRangeAttackUsed); } \
	FORCEINLINE static uint32 __PPO__playerHealth() { return STRUCT_OFFSET(ASmashBrosTestCharacter, playerHealth); } \
	FORCEINLINE static uint32 __PPO__isDeviceForMultiplePlayers() { return STRUCT_OFFSET(ASmashBrosTestCharacter, isDeviceForMultiplePlayers); }


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_9_PROLOG
#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_SPARSE_DATA \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_RPC_WRAPPERS \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_INCLASS \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_SPARSE_DATA \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMASHBROSTEST_API UClass* StaticClass<class ASmashBrosTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID versus_fighting_game_Source_SmashBrosTest_SmashBrosTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
