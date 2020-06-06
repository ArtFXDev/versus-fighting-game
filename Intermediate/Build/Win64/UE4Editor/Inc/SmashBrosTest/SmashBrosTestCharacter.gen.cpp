// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmashBrosTest/SmashBrosTestCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmashBrosTestCharacter() {}
// Cross Module References
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASmashBrosTestCharacter_NoRegister();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASmashBrosTestCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SmashBrosTest();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer();
	SMASHBROSTEST_API UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASmashBrosTestCharacter::StaticRegisterNativesASmashBrosTestCharacter()
	{
		UClass* Class = ASmashBrosTestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FunkyKeyboardAttack1", &ASmashBrosTestCharacter::execFunkyKeyboardAttack1 },
			{ "FunkyKeyboardAttack2", &ASmashBrosTestCharacter::execFunkyKeyboardAttack2 },
			{ "FunkyKeyboardAttack3", &ASmashBrosTestCharacter::execFunkyKeyboardAttack3 },
			{ "FunkyKeyboardJump", &ASmashBrosTestCharacter::execFunkyKeyboardJump },
			{ "FunkyKeyboardMoveRight", &ASmashBrosTestCharacter::execFunkyKeyboardMoveRight },
			{ "FunkyKeyboardStopJumping", &ASmashBrosTestCharacter::execFunkyKeyboardStopJumping },
			{ "KnightKeyboardAttack3", &ASmashBrosTestCharacter::execKnightKeyboardAttack3 },
			{ "stunPlayer", &ASmashBrosTestCharacter::execstunPlayer },
			{ "TakeDamage", &ASmashBrosTestCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Moves" },
		{ "Comment", "//When in Keyboard-only Mode, use these functions to perform action with Player2\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "When in Keyboard-only Mode, use these functions to perform action with Player2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "FunkyKeyboardAttack1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Moves" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "FunkyKeyboardAttack2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Moves" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "FunkyKeyboardAttack3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Moves" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "FunkyKeyboardJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics
	{
		struct SmashBrosTestCharacter_eventFunkyKeyboardMoveRight_Parms
		{
			float _value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmashBrosTestCharacter_eventFunkyKeyboardMoveRight_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Moves" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "FunkyKeyboardMoveRight", nullptr, nullptr, sizeof(SmashBrosTestCharacter_eventFunkyKeyboardMoveRight_Parms), Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Moves" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "FunkyKeyboardStopJumping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Moves" },
		{ "Comment", "//Attacks with cardboard Knight\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "Attacks with cardboard Knight" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "KnightKeyboardAttack3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics
	{
		struct SmashBrosTestCharacter_eventstunPlayer_Parms
		{
			bool playerIsStun;
		};
		static void NewProp_playerIsStun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerIsStun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::NewProp_playerIsStun_SetBit(void* Obj)
	{
		((SmashBrosTestCharacter_eventstunPlayer_Parms*)Obj)->playerIsStun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::NewProp_playerIsStun = { "playerIsStun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmashBrosTestCharacter_eventstunPlayer_Parms), &Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::NewProp_playerIsStun_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::NewProp_playerIsStun,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stun" },
		{ "Comment", "//Stun the player\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "Stun the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "stunPlayer", nullptr, nullptr, sizeof(SmashBrosTestCharacter_eventstunPlayer_Parms), Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics
	{
		struct SmashBrosTestCharacter_eventTakeDamage_Parms
		{
			float _damageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::NewProp__damageAmount = { "_damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmashBrosTestCharacter_eventTakeDamage_Parms, _damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::NewProp__damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//Damage the player\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "Damage the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmashBrosTestCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(SmashBrosTestCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASmashBrosTestCharacter_NoRegister()
	{
		return ASmashBrosTestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASmashBrosTestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDeviceForMultiplePlayers_MetaData[];
#endif
		static void NewProp_isDeviceForMultiplePlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDeviceForMultiplePlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasRangeAttackUsed_MetaData[];
#endif
		static void NewProp_wasRangeAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasRangeAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasHeadButtUsed_MetaData[];
#endif
		static void NewProp_wasHeadButtUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasHeadButtUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasKickUsed_MetaData[];
#endif
		static void NewProp_wasKickUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasKickUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasPunchUsed_MetaData[];
#endif
		static void NewProp_wasPunchUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasPunchUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hurtbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hurtbox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmashBrosTestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SmashBrosTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASmashBrosTestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack1, "FunkyKeyboardAttack1" }, // 3229985624
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack2, "FunkyKeyboardAttack2" }, // 2104470861
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardAttack3, "FunkyKeyboardAttack3" }, // 1467461313
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardJump, "FunkyKeyboardJump" }, // 969368399
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardMoveRight, "FunkyKeyboardMoveRight" }, // 1184301737
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_FunkyKeyboardStopJumping, "FunkyKeyboardStopJumping" }, // 3409136050
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_KnightKeyboardAttack3, "KnightKeyboardAttack3" }, // 1489600064
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_stunPlayer, "stunPlayer" }, // 766713021
		{ &Z_Construct_UFunction_ASmashBrosTestCharacter_TakeDamage, "TakeDamage" }, // 2376547085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SmashBrosTestCharacter.h" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_isDeviceForMultiplePlayers_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "//DeviceForMutiplayer  NOT NECESSARY\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "DeviceForMutiplayer  NOT NECESSARY" },
	};
#endif
	void Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_isDeviceForMultiplePlayers_SetBit(void* Obj)
	{
		((ASmashBrosTestCharacter*)Obj)->isDeviceForMultiplePlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_isDeviceForMultiplePlayers = { "isDeviceForMultiplePlayers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmashBrosTestCharacter), &Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_isDeviceForMultiplePlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_isDeviceForMultiplePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_isDeviceForMultiplePlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_playerHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//Current Health\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "Current Health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmashBrosTestCharacter, playerHealth), METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_playerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_playerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasRangeAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Oscar Attacks\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "Oscar Attacks" },
	};
#endif
	void Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasRangeAttackUsed_SetBit(void* Obj)
	{
		((ASmashBrosTestCharacter*)Obj)->wasRangeAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasRangeAttackUsed = { "wasRangeAttackUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmashBrosTestCharacter), &Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasRangeAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasRangeAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasRangeAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasHeadButtUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasHeadButtUsed_SetBit(void* Obj)
	{
		((ASmashBrosTestCharacter*)Obj)->wasHeadButtUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasHeadButtUsed = { "wasHeadButtUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmashBrosTestCharacter), &Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasHeadButtUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasHeadButtUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasHeadButtUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasKickUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasKickUsed_SetBit(void* Obj)
	{
		((ASmashBrosTestCharacter*)Obj)->wasKickUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasKickUsed = { "wasKickUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmashBrosTestCharacter), &Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasKickUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasKickUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasKickUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasPunchUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Has the player used the basic attack ?\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "Has the player used the basic attack ?" },
	};
#endif
	void Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasPunchUsed_SetBit(void* Obj)
	{
		((ASmashBrosTestCharacter*)Obj)->wasPunchUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasPunchUsed = { "wasPunchUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASmashBrosTestCharacter), &Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasPunchUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasPunchUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasPunchUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_hurtbox_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//Hurt Box\n" },
		{ "ModuleRelativePath", "SmashBrosTestCharacter.h" },
		{ "ToolTip", "Hurt Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_hurtbox = { "hurtbox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmashBrosTestCharacter, hurtbox), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_hurtbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_hurtbox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmashBrosTestCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_isDeviceForMultiplePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_playerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasRangeAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasHeadButtUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasKickUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_wasPunchUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestCharacter_Statics::NewProp_hurtbox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmashBrosTestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmashBrosTestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASmashBrosTestCharacter_Statics::ClassParams = {
		&ASmashBrosTestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASmashBrosTestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmashBrosTestCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASmashBrosTestCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASmashBrosTestCharacter, 3911945229);
	template<> SMASHBROSTEST_API UClass* StaticClass<ASmashBrosTestCharacter>()
	{
		return ASmashBrosTestCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASmashBrosTestCharacter(Z_Construct_UClass_ASmashBrosTestCharacter, &ASmashBrosTestCharacter::StaticClass, TEXT("/Script/SmashBrosTest"), TEXT("ASmashBrosTestCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmashBrosTestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
