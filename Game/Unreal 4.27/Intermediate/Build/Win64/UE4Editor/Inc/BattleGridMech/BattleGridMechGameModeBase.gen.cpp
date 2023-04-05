// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleGridMech/BattleGridMechGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleGridMechGameModeBase() {}
// Cross Module References
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_ABattleGridMechGameModeBase_NoRegister();
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_ABattleGridMechGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BattleGridMech();
// End Cross Module References
	void ABattleGridMechGameModeBase::StaticRegisterNativesABattleGridMechGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleGridMechGameModeBase_NoRegister()
	{
		return ABattleGridMechGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABattleGridMechGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleGridMechGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleGridMech,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleGridMechGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleGridMechGameModeBase.h" },
		{ "ModuleRelativePath", "BattleGridMechGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleGridMechGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleGridMechGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleGridMechGameModeBase_Statics::ClassParams = {
		&ABattleGridMechGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABattleGridMechGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGridMechGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleGridMechGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleGridMechGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleGridMechGameModeBase, 1068069010);
	template<> BATTLEGRIDMECH_API UClass* StaticClass<ABattleGridMechGameModeBase>()
	{
		return ABattleGridMechGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleGridMechGameModeBase(Z_Construct_UClass_ABattleGridMechGameModeBase, &ABattleGridMechGameModeBase::StaticClass, TEXT("/Script/BattleGridMech"), TEXT("ABattleGridMechGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleGridMechGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
