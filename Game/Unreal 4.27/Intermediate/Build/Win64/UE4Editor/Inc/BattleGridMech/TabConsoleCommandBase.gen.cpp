// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleGridMech/Private/TabConsoleCommandBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabConsoleCommandBase() {}
// Cross Module References
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UTabConsoleCommandBase_NoRegister();
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UTabConsoleCommandBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BattleGridMech();
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTabConsoleCommandBase::execOnInputCommited)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TextCommited);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputCommited(Z_Param_Out_TextCommited);
		P_NATIVE_END;
	}
	void UTabConsoleCommandBase::StaticRegisterNativesUTabConsoleCommandBase()
	{
		UClass* Class = UTabConsoleCommandBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInputCommited", &UTabConsoleCommandBase::execOnInputCommited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics
	{
		struct TabConsoleCommandBase_eventOnInputCommited_Parms
		{
			FText TextCommited;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCommited_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextCommited;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::NewProp_TextCommited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::NewProp_TextCommited = { "TextCommited", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TabConsoleCommandBase_eventOnInputCommited_Parms, TextCommited), METADATA_PARAMS(Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::NewProp_TextCommited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::NewProp_TextCommited_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::NewProp_TextCommited,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declare a function to handle the OnClick event\n" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Declare a function to handle the OnClick event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabConsoleCommandBase, nullptr, "OnInputCommited", nullptr, nullptr, sizeof(TabConsoleCommandBase_eventOnInputCommited_Parms), Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTabConsoleCommandBase_NoRegister()
	{
		return UTabConsoleCommandBase::StaticClass();
	}
	struct Z_Construct_UClass_UTabConsoleCommandBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonConsoleCommand7_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonConsoleCommand7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableText1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditableText1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTabConsoleCommandBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleGridMech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTabConsoleCommandBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTabConsoleCommandBase_OnInputCommited, "OnInputCommited" }, // 936584432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TabConsoleCommandBase.h" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand1 = { "ButtonConsoleCommand1", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, ButtonConsoleCommand1), Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand2 = { "ButtonConsoleCommand2", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, ButtonConsoleCommand2), Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand3 = { "ButtonConsoleCommand3", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, ButtonConsoleCommand3), Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand4 = { "ButtonConsoleCommand4", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, ButtonConsoleCommand4), Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand5_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand5 = { "ButtonConsoleCommand5", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, ButtonConsoleCommand5), Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand6_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand6 = { "ButtonConsoleCommand6", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, ButtonConsoleCommand6), Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand7_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand7 = { "ButtonConsoleCommand7", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, ButtonConsoleCommand7), Z_Construct_UClass_UButtonConsoleCommandBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_EditableText1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TabConsoleCommandBase" },
		{ "Comment", "// Bind the EditableText1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TabConsoleCommandBase.h" },
		{ "ToolTip", "Bind the EditableText1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_EditableText1 = { "EditableText1", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabConsoleCommandBase, EditableText1), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_EditableText1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_EditableText1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTabConsoleCommandBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_ButtonConsoleCommand7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabConsoleCommandBase_Statics::NewProp_EditableText1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTabConsoleCommandBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTabConsoleCommandBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTabConsoleCommandBase_Statics::ClassParams = {
		&UTabConsoleCommandBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTabConsoleCommandBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTabConsoleCommandBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTabConsoleCommandBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTabConsoleCommandBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTabConsoleCommandBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTabConsoleCommandBase, 1144661302);
	template<> BATTLEGRIDMECH_API UClass* StaticClass<UTabConsoleCommandBase>()
	{
		return UTabConsoleCommandBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTabConsoleCommandBase(Z_Construct_UClass_UTabConsoleCommandBase, &UTabConsoleCommandBase::StaticClass, TEXT("/Script/BattleGridMech"), TEXT("UTabConsoleCommandBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTabConsoleCommandBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
