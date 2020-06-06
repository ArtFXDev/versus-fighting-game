// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmashBrosTest/BaseGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameInstance() {}
// Cross Module References
	SMASHBROSTEST_API UEnum* Z_Construct_UEnum_SmashBrosTest_ECharacterClass2();
	UPackage* Z_Construct_UPackage__Script_SmashBrosTest();
	SMASHBROSTEST_API UEnum* Z_Construct_UEnum_SmashBrosTest_ECharacterClass();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_UBaseGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
	static UEnum* ECharacterClass2_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SmashBrosTest_ECharacterClass2, Z_Construct_UPackage__Script_SmashBrosTest(), TEXT("ECharacterClass2"));
		}
		return Singleton;
	}
	template<> SMASHBROSTEST_API UEnum* StaticEnum<ECharacterClass2>()
	{
		return ECharacterClass2_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterClass2(ECharacterClass2_StaticEnum, TEXT("/Script/SmashBrosTest"), TEXT("ECharacterClass2"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SmashBrosTest_ECharacterClass2_Hash() { return 1846617011U; }
	UEnum* Z_Construct_UEnum_SmashBrosTest_ECharacterClass2()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SmashBrosTest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterClass2"), 0, Get_Z_Construct_UEnum_SmashBrosTest_ECharacterClass2_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterClass2::VE_Default", (int64)ECharacterClass2::VE_Default },
				{ "ECharacterClass2::VE_FunkyAgent", (int64)ECharacterClass2::VE_FunkyAgent },
				{ "ECharacterClass2::VE_TeddyBurn", (int64)ECharacterClass2::VE_TeddyBurn },
				{ "ECharacterClass2::VE_BoxWarrior", (int64)ECharacterClass2::VE_BoxWarrior },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "BaseGameInstance.h" },
				{ "VE_BoxWarrior.DisplayName", "BoxWarrior" },
				{ "VE_BoxWarrior.Name", "ECharacterClass2::VE_BoxWarrior" },
				{ "VE_Default.DisplayName", "Oscar" },
				{ "VE_Default.Name", "ECharacterClass2::VE_Default" },
				{ "VE_FunkyAgent.DisplayName", "FunkyAgent" },
				{ "VE_FunkyAgent.Name", "ECharacterClass2::VE_FunkyAgent" },
				{ "VE_TeddyBurn.DisplayName", "TeddyBurn" },
				{ "VE_TeddyBurn.Name", "ECharacterClass2::VE_TeddyBurn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SmashBrosTest,
				nullptr,
				"ECharacterClass2",
				"ECharacterClass2",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECharacterClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SmashBrosTest_ECharacterClass, Z_Construct_UPackage__Script_SmashBrosTest(), TEXT("ECharacterClass"));
		}
		return Singleton;
	}
	template<> SMASHBROSTEST_API UEnum* StaticEnum<ECharacterClass>()
	{
		return ECharacterClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterClass(ECharacterClass_StaticEnum, TEXT("/Script/SmashBrosTest"), TEXT("ECharacterClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SmashBrosTest_ECharacterClass_Hash() { return 335523622U; }
	UEnum* Z_Construct_UEnum_SmashBrosTest_ECharacterClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SmashBrosTest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterClass"), 0, Get_Z_Construct_UEnum_SmashBrosTest_ECharacterClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterClass::VE_Default", (int64)ECharacterClass::VE_Default },
				{ "ECharacterClass::VE_FunkyAgent", (int64)ECharacterClass::VE_FunkyAgent },
				{ "ECharacterClass::VE_TeddyBurn", (int64)ECharacterClass::VE_TeddyBurn },
				{ "ECharacterClass::VE_BoxWarrior", (int64)ECharacterClass::VE_BoxWarrior },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "BaseGameInstance.h" },
				{ "VE_BoxWarrior.Comment", "/**\n * \n */" },
				{ "VE_BoxWarrior.DisplayName", "BoxWarrior" },
				{ "VE_BoxWarrior.Name", "ECharacterClass::VE_BoxWarrior" },
				{ "VE_Default.Comment", "/**\n * \n */" },
				{ "VE_Default.DisplayName", "Oscar" },
				{ "VE_Default.Name", "ECharacterClass::VE_Default" },
				{ "VE_FunkyAgent.Comment", "/**\n * \n */" },
				{ "VE_FunkyAgent.DisplayName", "FunkyAgent" },
				{ "VE_FunkyAgent.Name", "ECharacterClass::VE_FunkyAgent" },
				{ "VE_TeddyBurn.Comment", "/**\n * \n */" },
				{ "VE_TeddyBurn.DisplayName", "TeddyBurn" },
				{ "VE_TeddyBurn.Name", "ECharacterClass::VE_TeddyBurn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SmashBrosTest,
				nullptr,
				"ECharacterClass",
				"ECharacterClass",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBaseGameInstance::StaticRegisterNativesUBaseGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister()
	{
		return UBaseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterClass2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_characterClass2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_characterClass2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_characterClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_characterClass_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SmashBrosTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGameInstance.h" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass2_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass2 = { "characterClass2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, characterClass2), Z_Construct_UEnum_SmashBrosTest_ECharacterClass2, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, characterClass), Z_Construct_UEnum_SmashBrosTest_ECharacterClass, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_characterClass_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams = {
		&UBaseGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGameInstance, 4007262512);
	template<> SMASHBROSTEST_API UClass* StaticClass<UBaseGameInstance>()
	{
		return UBaseGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGameInstance(Z_Construct_UClass_UBaseGameInstance, &UBaseGameInstance::StaticClass, TEXT("/Script/SmashBrosTest"), TEXT("UBaseGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
