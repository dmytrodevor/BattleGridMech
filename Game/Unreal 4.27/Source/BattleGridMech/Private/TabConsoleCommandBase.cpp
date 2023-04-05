// Fill out your copyright notice in the Description page of Project Settings.


#include "TabConsoleCommandBase.h"
#include "Components/EditableText.h"

void UTabConsoleCommandBase::NativeConstruct()
{
	// Call the NativeConstruct method of the parent class (if there is one)
	Super::NativeConstruct();

	//EditableText1->OnTextCommitted.AddDynamic(this, &UTabConsoleCommandBase::OnInputCommited);
}

//void UTabConsoleCommandBase::OnInputCommited(const FText& Text, ETextCommit::Type CommitMethod)
//{
	// Set the active tab to the first tab and hide it if it is already active
	// SetTabIndex(1);
	// Set background color of the active tab
	// SetActiveTabBackground(0);
//}
