// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonConsoleCommandBase.generated.h"

/**
 * 
 */
UCLASS()
class UButtonConsoleCommandBase : public UUserWidget
{
	GENERATED_BODY()

public:
	// Called when the widget is constructed in the Blueprint
	virtual void NativeConstruct() override;

	// Called when the widget is preconstructed in the Blueprint
	virtual void NativePreConstruct() override;

protected:
	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ButtonConsoleCommand = nullptr;

	// Bind the TextTab1 variable to the Button widget un the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TextConsoleCommand = nullptr;

	// Create variable to store the console command
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ConsoleCommand)
	FString ConsoleCommand = "FPS STATS";

private:
	// Declare a function to handle the OnClick event
	UFUNCTION()
	void OnButtonClick();
	
};
