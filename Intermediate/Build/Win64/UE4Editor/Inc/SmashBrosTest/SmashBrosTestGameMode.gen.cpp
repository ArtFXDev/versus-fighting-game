// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmashBrosTest/SmashBrosTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmashBrosTestGameMode() {}
// Cross Module References
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASmashBrosTestGameMode_NoRegister();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASmashBrosTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SmashBrosTest();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASmashBrosTestCharacter_NoRegister();
// End Cross Module References
	void ASmashBrosTestGameMode::StaticRegisterNativesASmashBrosTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASmashBrosTestGameMode_NoRegister()
	{
		return ASmashBrosTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASmashBrosTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmashBrosTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SmashBrosTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SmashBrosTestGameMode.h" },
		{ "ModuleRelativePath", "SmashBrosTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player2_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "SmashBrosTestGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player2 = { "player2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmashBrosTestGameMode, player2), Z_Construct_UClass_ASmashBrosTestCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player1_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "SmashBrosTestGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player1 = { "player1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmashBrosTestGameMode, player1), Z_Construct_UClass_ASmashBrosTestCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmashBrosTestGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmashBrosTestGameMode_Statics::NewProp_player1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmashBrosTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmashBrosTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASmashBrosTestGameMode_Statics::ClassParams = {
		&ASmashBrosTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASmashBrosTestGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASmashBrosTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashBrosTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmashBrosTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASmashBrosTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASmashBrosTestGameMode, 727750855);
	template<> SMASHBROSTEST_API UClass* StaticClass<ASmashBrosTestGameMode>()
	{
		return ASmashBrosTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASmashBrosTestGameMode(Z_Construct_UClass_ASmashBrosTestGameMode, &ASmashBrosTestGameMode::StaticClass, TEXT("/Script/SmashBrosTest"), TEXT("ASmashBrosTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmashBrosTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
