// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleGridMech/Private/DebugMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugMenuBase() {}
// Cross Module References
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_ADebugMenuBase_NoRegister();
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_ADebugMenuBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BattleGridMech();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UMenuWidgetBase_NoRegister();
// End Cross Module References
	void ADebugMenuBase::StaticRegisterNativesADebugMenuBase()
	{
	}
	UClass* Z_Construct_UClass_ADebugMenuBase_NoRegister()
	{
		return ADebugMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_ADebugMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleGridMech,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugMenuBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DebugMenuBase.h" },
		{ "ModuleRelativePath", "Private/DebugMenuBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Class Types" },
		{ "Comment", "// Refer to a class UserWidget\n" },
		{ "ModuleRelativePath", "Private/DebugMenuBase.h" },
		{ "ToolTip", "Refer to a class UserWidget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugMenuBase, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_MenuWidget_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// Create variable MenuWidget of class MenuWidgetBase in game running only\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DebugMenuBase.h" },
		{ "ToolTip", "Create variable MenuWidget of class MenuWidgetBase in game running only" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugMenuBase, MenuWidget), Z_Construct_UClass_UMenuWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_MenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_MenuWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebugMenuBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugMenuBase_Statics::NewProp_MenuWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADebugMenuBase_Statics::ClassParams = {
		&ADebugMenuBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADebugMenuBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADebugMenuBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADebugMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugMenuBase, 3285079555);
	template<> BATTLEGRIDMECH_API UClass* StaticClass<ADebugMenuBase>()
	{
		return ADebugMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugMenuBase(Z_Construct_UClass_ADebugMenuBase, &ADebugMenuBase::StaticClass, TEXT("/Script/BattleGridMech"), TEXT("ADebugMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
