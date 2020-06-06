// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmashBrosTest/SecondPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondPlayerCharacter() {}
// Cross Module References
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASecondPlayerCharacter_NoRegister();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASecondPlayerCharacter();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_ASmashBrosTestCharacter();
	UPackage* Z_Construct_UPackage__Script_SmashBrosTest();
// End Cross Module References
	void ASecondPlayerCharacter::StaticRegisterNativesASecondPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASecondPlayerCharacter_NoRegister()
	{
		return ASecondPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASecondPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASecondPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASmashBrosTestCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SmashBrosTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecondPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SecondPlayerCharacter.h" },
		{ "ModuleRelativePath", "SecondPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASecondPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASecondPlayerCharacter_Statics::ClassParams = {
		&ASecondPlayerCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASecondPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASecondPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASecondPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASecondPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASecondPlayerCharacter, 2161334901);
	template<> SMASHBROSTEST_API UClass* StaticClass<ASecondPlayerCharacter>()
	{
		return ASecondPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASecondPlayerCharacter(Z_Construct_UClass_ASecondPlayerCharacter, &ASecondPlayerCharacter::StaticClass, TEXT("/Script/SmashBrosTest"), TEXT("ASecondPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
