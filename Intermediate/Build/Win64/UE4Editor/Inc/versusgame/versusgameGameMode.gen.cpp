// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "versusgame/versusgameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeversusgameGameMode() {}
// Cross Module References
	VERSUSGAME_API UClass* Z_Construct_UClass_AversusgameGameMode_NoRegister();
	VERSUSGAME_API UClass* Z_Construct_UClass_AversusgameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_versusgame();
// End Cross Module References
	void AversusgameGameMode::StaticRegisterNativesAversusgameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AversusgameGameMode_NoRegister()
	{
		return AversusgameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AversusgameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AversusgameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_versusgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AversusgameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "versusgameGameMode.h" },
		{ "ModuleRelativePath", "versusgameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AversusgameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AversusgameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AversusgameGameMode_Statics::ClassParams = {
		&AversusgameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AversusgameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AversusgameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AversusgameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AversusgameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AversusgameGameMode, 1728832741);
	template<> VERSUSGAME_API UClass* StaticClass<AversusgameGameMode>()
	{
		return AversusgameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AversusgameGameMode(Z_Construct_UClass_AversusgameGameMode, &AversusgameGameMode::StaticClass, TEXT("/Script/versusgame"), TEXT("AversusgameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AversusgameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
