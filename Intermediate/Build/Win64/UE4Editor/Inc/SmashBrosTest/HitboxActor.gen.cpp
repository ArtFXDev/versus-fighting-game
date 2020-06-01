// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmashBrosTest/HitboxActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitboxActor() {}
// Cross Module References
	SMASHBROSTEST_API UEnum* Z_Construct_UEnum_SmashBrosTest_EHitboxEnum();
	UPackage* Z_Construct_UPackage__Script_SmashBrosTest();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_AHitboxActor_NoRegister();
	SMASHBROSTEST_API UClass* Z_Construct_UClass_AHitboxActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EHitboxEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SmashBrosTest_EHitboxEnum, Z_Construct_UPackage__Script_SmashBrosTest(), TEXT("EHitboxEnum"));
		}
		return Singleton;
	}
	template<> SMASHBROSTEST_API UEnum* StaticEnum<EHitboxEnum>()
	{
		return EHitboxEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHitboxEnum(EHitboxEnum_StaticEnum, TEXT("/Script/SmashBrosTest"), TEXT("EHitboxEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SmashBrosTest_EHitboxEnum_Hash() { return 1331454106U; }
	UEnum* Z_Construct_UEnum_SmashBrosTest_EHitboxEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SmashBrosTest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHitboxEnum"), 0, Get_Z_Construct_UEnum_SmashBrosTest_EHitboxEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHitboxEnum::HB_PROXIMTY", (int64)EHitboxEnum::HB_PROXIMTY },
				{ "EHitboxEnum::HB_STRIKE", (int64)EHitboxEnum::HB_STRIKE },
				{ "EHitboxEnum::HB_HURTBOX", (int64)EHitboxEnum::HB_HURTBOX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HB_HURTBOX.DisplayName", "Hurtbox" },
				{ "HB_HURTBOX.Name", "EHitboxEnum::HB_HURTBOX" },
				{ "HB_PROXIMTY.DisplayName", "Proximity" },
				{ "HB_PROXIMTY.Name", "EHitboxEnum::HB_PROXIMTY" },
				{ "HB_STRIKE.DisplayName", "Strike" },
				{ "HB_STRIKE.Name", "EHitboxEnum::HB_STRIKE" },
				{ "ModuleRelativePath", "HitboxActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SmashBrosTest,
				nullptr,
				"EHitboxEnum",
				"EHitboxEnum",
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
	void AHitboxActor::StaticRegisterNativesAHitboxActor()
	{
	}
	UClass* Z_Construct_UClass_AHitboxActor_NoRegister()
	{
		return AHitboxActor::StaticClass();
	}
	struct Z_Construct_UClass_AHitboxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitboxLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitboxLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitboxType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_hitboxType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hitboxType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitboxDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hitboxDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitboxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SmashBrosTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitboxActor.h" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//Location to spawn the hitbox\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "Location to spawn the hitbox" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation = { "hitboxLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, hitboxLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxType_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//The hitbox enum instance.\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "The hitbox enum instance." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxType = { "hitboxType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, hitboxType), Z_Construct_UEnum_SmashBrosTest_EHitboxEnum, METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//The dmg this hitbox will do\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "The dmg this hitbox will do" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage = { "hitboxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, hitboxDamage), METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitboxActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitboxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitboxActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHitboxActor_Statics::ClassParams = {
		&AHitboxActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHitboxActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitboxActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHitboxActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHitboxActor, 1117371692);
	template<> SMASHBROSTEST_API UClass* StaticClass<AHitboxActor>()
	{
		return AHitboxActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHitboxActor(Z_Construct_UClass_AHitboxActor, &AHitboxActor::StaticClass, TEXT("/Script/SmashBrosTest"), TEXT("AHitboxActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitboxActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
