// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class UMenuWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	// Called when the widget is constructed in the Blueprint
	virtual void NativeConstruct() override;

protected:
	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ButtonTab1 = nullptr;

	// Bind the ButtonTab2 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ButtonTab2 = nullptr;

	// Bind the TextTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TextTab1 = nullptr;

	// Bind the TextTab2 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TextTab2 = nullptr;

	// Bind the WidgetSwitcherTabsContent variable to the WidgetSwitcher widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UWidgetSwitcher* WidgetSwitcherTabsContent = nullptr;

	// Declare a variable to store the array of buttons
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tabs)
	TArray<class UButton*> ButtonsArray;

	// Declare a variable that a color to set the background of the active tab
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tabs)
	FLinearColor ActiveTabBackgroundColor;

	// Declare a variable that a color to set the background of the disable tab
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tabs)
	FLinearColor DisableTabBackgroundColor;


private:
	// Declare a function to handle the OnClick event
	UFUNCTION()
	void OnButtonTab1Click();

	// Declare a function to handle the OnClick event
	UFUNCTION()
	void OnButtonTab2Click();

	// Declare a function to set the active tab
	UFUNCTION()
	void SetTabIndex(const uint32& tabIndex);

	// Declare a function to create the array of buttons
	UFUNCTION()
	void CreateButtonsArray(const uint32& numButton);

	// Set background color of the active tab
	UFUNCTION()
	void SetActiveTabBackground(const uint32& tabIndex);
	
};
