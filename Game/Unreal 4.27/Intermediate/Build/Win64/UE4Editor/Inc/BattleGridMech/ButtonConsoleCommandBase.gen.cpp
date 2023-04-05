// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleGridMech/Private/ButtonConsoleCommandBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonConsoleCommandBase() {}
// Cross Module References
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister();
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UButtonConsoleCommandBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BattleGridMech();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UButtonConsoleCommandBase::execOnButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClick();
		P_NATIVE_END;
	}
	void UButtonConsoleCommandBase::StaticRegisterNativesUButtonConsoleCommandBase()
	{
		UClass* Class = UButtonConsoleCommandBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonClick", &UButtonConsoleCommandBase::execOnButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declare a function to handle the OnClick event\n" },
		{ "ModuleRelativePath", "Private/ButtonConsoleCommandBase.h" },
		{ "ToolTip", "Declare a function to handle the OnClick event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButtonConsoleCommandBase, nullptr, "OnButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister()
	{
		return UButtonConsoleCommandBase::StaticClass();
	}
	struct Z_Construct_UClass_UButtonConsoleCommandBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextConsoleCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextConsoleCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConsoleCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonConsoleCommandBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleGridMech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UButtonConsoleCommandBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UButtonConsoleCommandBase_OnButtonClick, "OnButtonClick" }, // 3377563210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonConsoleCommandBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ButtonConsoleCommandBase.h" },
		{ "ModuleRelativePath", "Private/ButtonConsoleCommandBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ButtonConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ButtonConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand = { "ButtonConsoleCommand", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonConsoleCommandBase, ButtonConsoleCommand), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_TextConsoleCommand_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ButtonConsoleCommandBase" },
		{ "Comment", "// Bind the TextTab1 variable to the Button widget un the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ButtonConsoleCommandBase.h" },
		{ "ToolTip", "Bind the TextTab1 variable to the Button widget un the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_TextConsoleCommand = { "TextConsoleCommand", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonConsoleCommandBase, TextConsoleCommand), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_TextConsoleCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_TextConsoleCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ConsoleCommand_MetaData[] = {
		{ "Category", "ConsoleCommand" },
		{ "Comment", "// Create variable to store the console command\n" },
		{ "ModuleRelativePath", "Private/ButtonConsoleCommandBase.h" },
		{ "ToolTip", "Create variable to store the console command" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ConsoleCommand = { "ConsoleCommand", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonConsoleCommandBase, ConsoleCommand), METADATA_PARAMS(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ConsoleCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ConsoleCommand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonConsoleCommandBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_TextConsoleCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonConsoleCommandBase_Statics::NewProp_ConsoleCommand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonConsoleCommandBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonConsoleCommandBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UButtonConsoleCommandBase_Statics::ClassParams = {
		&UButtonConsoleCommandBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UButtonConsoleCommandBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonConsoleCommandBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonConsoleCommandBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UButtonConsoleCommandBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonConsoleCommandBase, 451392680);
	template<> BATTLEGRIDMECH_API UClass* StaticClass<UButtonConsoleCommandBase>()
	{
		return UButtonConsoleCommandBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonConsoleCommandBase(Z_Construct_UClass_UButtonConsoleCommandBase, &UButtonConsoleCommandBase::StaticClass, TEXT("/Script/BattleGridMech"), TEXT("UButtonConsoleCommandBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonConsoleCommandBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
