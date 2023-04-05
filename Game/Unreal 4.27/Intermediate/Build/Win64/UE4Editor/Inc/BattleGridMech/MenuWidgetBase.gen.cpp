// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleGridMech/Private/MenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuWidgetBase() {}
// Cross Module References
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UMenuWidgetBase_NoRegister();
	BATTLEGRIDMECH_API UClass* Z_Construct_UClass_UMenuWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BattleGridMech();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UMenuWidgetBase::execSetActiveTabBackground)
	{
		P_GET_PROPERTY_REF(FUInt32Property,Z_Param_Out_tabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveTabBackground(Z_Param_Out_tabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetBase::execCreateButtonsArray)
	{
		P_GET_PROPERTY_REF(FUInt32Property,Z_Param_Out_numButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateButtonsArray(Z_Param_Out_numButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetBase::execSetTabIndex)
	{
		P_GET_PROPERTY_REF(FUInt32Property,Z_Param_Out_tabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabIndex(Z_Param_Out_tabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetBase::execOnButtonTab2Click)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonTab2Click();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidgetBase::execOnButtonTab1Click)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonTab1Click();
		P_NATIVE_END;
	}
	void UMenuWidgetBase::StaticRegisterNativesUMenuWidgetBase()
	{
		UClass* Class = UMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateButtonsArray", &UMenuWidgetBase::execCreateButtonsArray },
			{ "OnButtonTab1Click", &UMenuWidgetBase::execOnButtonTab1Click },
			{ "OnButtonTab2Click", &UMenuWidgetBase::execOnButtonTab2Click },
			{ "SetActiveTabBackground", &UMenuWidgetBase::execSetActiveTabBackground },
			{ "SetTabIndex", &UMenuWidgetBase::execSetTabIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics
	{
		struct MenuWidgetBase_eventCreateButtonsArray_Parms
		{
			uint32 numButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_numButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::NewProp_numButton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::NewProp_numButton = { "numButton", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetBase_eventCreateButtonsArray_Parms, numButton), METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::NewProp_numButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::NewProp_numButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::NewProp_numButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declare a function to create the array of buttons\n" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Declare a function to create the array of buttons" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetBase, nullptr, "CreateButtonsArray", nullptr, nullptr, sizeof(MenuWidgetBase_eventCreateButtonsArray_Parms), Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declare a function to handle the OnClick event\n" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Declare a function to handle the OnClick event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetBase, nullptr, "OnButtonTab1Click", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declare a function to handle the OnClick event\n" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Declare a function to handle the OnClick event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetBase, nullptr, "OnButtonTab2Click", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics
	{
		struct MenuWidgetBase_eventSetActiveTabBackground_Parms
		{
			uint32 tabIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_tabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::NewProp_tabIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetBase_eventSetActiveTabBackground_Parms, tabIndex), METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::NewProp_tabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::NewProp_tabIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Set background color of the active tab\n" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Set background color of the active tab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetBase, nullptr, "SetActiveTabBackground", nullptr, nullptr, sizeof(MenuWidgetBase_eventSetActiveTabBackground_Parms), Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics
	{
		struct MenuWidgetBase_eventSetTabIndex_Parms
		{
			uint32 tabIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_tabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::NewProp_tabIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MenuWidgetBase_eventSetTabIndex_Parms, tabIndex), METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::NewProp_tabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::NewProp_tabIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declare a function to set the active tab\n" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Declare a function to set the active tab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidgetBase, nullptr, "SetTabIndex", nullptr, nullptr, sizeof(MenuWidgetBase_eventSetTabIndex_Parms), Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuWidgetBase_NoRegister()
	{
		return UMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonTab1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonTab1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonTab2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonTab2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTab1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextTab1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTab2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextTab2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSwitcherTabsContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetSwitcherTabsContent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ButtonsArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTabBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveTabBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableTabBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisableTabBackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleGridMech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuWidgetBase_CreateButtonsArray, "CreateButtonsArray" }, // 1279169222
		{ &Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab1Click, "OnButtonTab1Click" }, // 1288354442
		{ &Z_Construct_UFunction_UMenuWidgetBase_OnButtonTab2Click, "OnButtonTab2Click" }, // 3777044419
		{ &Z_Construct_UFunction_UMenuWidgetBase_SetActiveTabBackground, "SetActiveTabBackground" }, // 3539344900
		{ &Z_Construct_UFunction_UMenuWidgetBase_SetTabIndex, "SetTabIndex" }, // 562376434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuWidgetBase.h" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuWidgetBase" },
		{ "Comment", "// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab1 = { "ButtonTab1", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, ButtonTab1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuWidgetBase" },
		{ "Comment", "// Bind the ButtonTab2 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Bind the ButtonTab2 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab2 = { "ButtonTab2", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, ButtonTab2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuWidgetBase" },
		{ "Comment", "// Bind the TextTab1 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Bind the TextTab1 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab1 = { "TextTab1", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, TextTab1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuWidgetBase" },
		{ "Comment", "// Bind the TextTab2 variable to the Button widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Bind the TextTab2 variable to the Button widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab2 = { "TextTab2", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, TextTab2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_WidgetSwitcherTabsContent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuWidgetBase" },
		{ "Comment", "// Bind the WidgetSwitcherTabsContent variable to the WidgetSwitcher widget in the Blueprint Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Bind the WidgetSwitcherTabsContent variable to the WidgetSwitcher widget in the Blueprint Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_WidgetSwitcherTabsContent = { "WidgetSwitcherTabsContent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, WidgetSwitcherTabsContent), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_WidgetSwitcherTabsContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_WidgetSwitcherTabsContent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonsArray_Inner = { "ButtonsArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonsArray_MetaData[] = {
		{ "Category", "Tabs" },
		{ "Comment", "// Declare a variable to store the array of buttons\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Declare a variable to store the array of buttons" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonsArray = { "ButtonsArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, ButtonsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonsArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ActiveTabBackgroundColor_MetaData[] = {
		{ "Category", "Tabs" },
		{ "Comment", "// Declare a variable that a color to set the background of the active tab\n" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Declare a variable that a color to set the background of the active tab" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ActiveTabBackgroundColor = { "ActiveTabBackgroundColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, ActiveTabBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ActiveTabBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ActiveTabBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_DisableTabBackgroundColor_MetaData[] = {
		{ "Category", "Tabs" },
		{ "Comment", "// Declare a variable that a color to set the background of the disable tab\n" },
		{ "ModuleRelativePath", "Private/MenuWidgetBase.h" },
		{ "ToolTip", "Declare a variable that a color to set the background of the disable tab" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_DisableTabBackgroundColor = { "DisableTabBackgroundColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidgetBase, DisableTabBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_DisableTabBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_DisableTabBackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonTab2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_TextTab2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_WidgetSwitcherTabsContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ButtonsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_ActiveTabBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidgetBase_Statics::NewProp_DisableTabBackgroundColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidgetBase_Statics::ClassParams = {
		&UMenuWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenuWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuWidgetBase, 3340511343);
	template<> BATTLEGRIDMECH_API UClass* StaticClass<UMenuWidgetBase>()
	{
		return UMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuWidgetBase(Z_Construct_UClass_UMenuWidgetBase, &UMenuWidgetBase::StaticClass, TEXT("/Script/BattleGridMech"), TEXT("UMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
