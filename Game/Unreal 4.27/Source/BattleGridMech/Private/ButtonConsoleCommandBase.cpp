// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonConsoleCommandBase.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

void UButtonConsoleCommandBase::NativeConstruct()
{
	// Call the NativeConstruct method of the parent class (if there is one)
	Super::NativeConstruct();
		
	// Bind the OnClicked event of the button to the OnButtonClick function
	ButtonConsoleCommand->OnClicked.AddDynamic(this, &UButtonConsoleCommandBase::OnButtonClick);
}

void UButtonConsoleCommandBase::NativePreConstruct()
{
	// Call the NativePreConstruct method of the parent class (if there is one)
	Super::NativePreConstruct();

	// Set the default value of the TextConsoleCommand variable
	if (IsValid(TextConsoleCommand))
	{
		TextConsoleCommand->SetText(FText::FromString(ConsoleCommand));
	}
}

void UButtonConsoleCommandBase::OnButtonClick()
{
	// Get a reference to the player controller
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	// Execute the console command
	PlayerController->ConsoleCommand(ConsoleCommand);
}
