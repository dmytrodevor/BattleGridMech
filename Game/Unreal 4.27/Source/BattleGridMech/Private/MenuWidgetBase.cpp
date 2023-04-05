// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuWidgetBase.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/WidgetTree.h"

void UMenuWidgetBase::NativeConstruct()
{
	// Call the NativeConstruct method of the parent class (if there is one)
	Super::NativeConstruct();

	// Bind the OnClicked event of the button to the OnButtonClick function
	ButtonTab1->OnClicked.AddDynamic(this, &UMenuWidgetBase::OnButtonTab1Click);
	ButtonTab2->OnClicked.AddDynamic(this, &UMenuWidgetBase::OnButtonTab2Click);

	// Create the array of buttons
	CreateButtonsArray(3);
}

void UMenuWidgetBase::OnButtonTab1Click()
{
	// Set the active tab to the first tab and hide it if it is already active
	SetTabIndex(1);

	// Set background color of the active tab
	SetActiveTabBackground(0);
}

void UMenuWidgetBase::OnButtonTab2Click()
{
	// Set the active tab to the second tab and hide it if it is already active
	SetTabIndex(2);

	// Set background color of the active tab
	SetActiveTabBackground(1);
	
}

void UMenuWidgetBase::SetTabIndex(const uint32& tabIndex)
{
	// Set the active tab to the tab with the index passed in
	WidgetSwitcherTabsContent->SetActiveWidgetIndex(
		WidgetSwitcherTabsContent->GetActiveWidgetIndex() == tabIndex ? 0 : tabIndex
	);
}

void UMenuWidgetBase::CreateButtonsArray(const uint32& numButton)
{
	// Loop through the number of buttons
	for (uint32 i = 0; i < numButton; ++i)
	{
		// Create a string to store the name of the button
		FString buttonName = FString::Printf(TEXT("ButtonTab%d"), i);

		// Create a button variable and cast the widget to a button
		UButton* button = Cast<UButton>(WidgetTree->FindWidget(*buttonName));
		
		// Add the button to the array if it is valid
		if (IsValid(button))
		{
			ButtonsArray.Add(button);
		}
	}
}

void UMenuWidgetBase::SetActiveTabBackground(const uint32& tabIndex)
{
	// declare local variable to store the index of the active tab
	const uint32 activeWidgetIndex = WidgetSwitcherTabsContent->GetActiveWidgetIndex();

	// set background of the active tab and disable background of the other tabs
	for (int32 i = 0; i < ButtonsArray.Num(); ++i)
	{
		// Create local variable to check if the current tab equal to the tab index
		const bool isCurrentTab = (i == tabIndex);

		// Create local variable to check if the active tab equal to the tabIndex + 1
		const bool isActiveTab = (activeWidgetIndex == tabIndex + 1);

		// Create local variable to store the background color of the tab
		const FLinearColor backgroundColor = (isCurrentTab && isActiveTab) ? ActiveTabBackgroundColor : DisableTabBackgroundColor;

		// Set the background color of the tab
		ButtonsArray[i]->SetBackgroundColor(backgroundColor);
	}
}

