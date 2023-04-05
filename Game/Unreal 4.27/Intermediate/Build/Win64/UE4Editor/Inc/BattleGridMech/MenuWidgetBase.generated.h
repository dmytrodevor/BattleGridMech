// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEGRIDMECH_MenuWidgetBase_generated_h
#error "MenuWidgetBase.generated.h already included, missing '#pragma once' in MenuWidgetBase.h"
#endif
#define BATTLEGRIDMECH_MenuWidgetBase_generated_h

#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_SPARSE_DATA
#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActiveTabBackground); \
	DECLARE_FUNCTION(execCreateButtonsArray); \
	DECLARE_FUNCTION(execSetTabIndex); \
	DECLARE_FUNCTION(execOnButtonTab2Click); \
	DECLARE_FUNCTION(execOnButtonTab1Click);


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActiveTabBackground); \
	DECLARE_FUNCTION(execCreateButtonsArray); \
	DECLARE_FUNCTION(execSetTabIndex); \
	DECLARE_FUNCTION(execOnButtonTab2Click); \
	DECLARE_FUNCTION(execOnButtonTab1Click);


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMenuWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleGridMech"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidgetBase)


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMenuWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleGridMech"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidgetBase)


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidgetBase(UMenuWidgetBase&&); \
	NO_API UMenuWidgetBase(const UMenuWidgetBase&); \
public:


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidgetBase(UMenuWidgetBase&&); \
	NO_API UMenuWidgetBase(const UMenuWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidgetBase)


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ButtonTab1() { return STRUCT_OFFSET(UMenuWidgetBase, ButtonTab1); } \
	FORCEINLINE static uint32 __PPO__ButtonTab2() { return STRUCT_OFFSET(UMenuWidgetBase, ButtonTab2); } \
	FORCEINLINE static uint32 __PPO__TextTab1() { return STRUCT_OFFSET(UMenuWidgetBase, TextTab1); } \
	FORCEINLINE static uint32 __PPO__TextTab2() { return STRUCT_OFFSET(UMenuWidgetBase, TextTab2); } \
	FORCEINLINE static uint32 __PPO__WidgetSwitcherTabsContent() { return STRUCT_OFFSET(UMenuWidgetBase, WidgetSwitcherTabsContent); } \
	FORCEINLINE static uint32 __PPO__ButtonsArray() { return STRUCT_OFFSET(UMenuWidgetBase, ButtonsArray); } \
	FORCEINLINE static uint32 __PPO__ActiveTabBackgroundColor() { return STRUCT_OFFSET(UMenuWidgetBase, ActiveTabBackgroundColor); } \
	FORCEINLINE static uint32 __PPO__DisableTabBackgroundColor() { return STRUCT_OFFSET(UMenuWidgetBase, DisableTabBackgroundColor); }


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_12_PROLOG
#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_SPARSE_DATA \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_RPC_WRAPPERS \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_INCLASS \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_SPARSE_DATA \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEGRIDMECH_API UClass* StaticClass<class UMenuWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleGridMechd_Game_Unreal_4_27_Source_BattleGridMech_Private_MenuWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
