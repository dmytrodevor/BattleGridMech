// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/SlateEnums.h"
#include "TabConsoleCommandBase.generated.h"

/**
 * 
 */
UCLASS()
class UTabConsoleCommandBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

protected:
	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButtonConsoleCommandBase* ButtonConsoleCommand1 = nullptr;

	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButtonConsoleCommandBase* ButtonConsoleCommand2 = nullptr;

	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButtonConsoleCommandBase* ButtonConsoleCommand3 = nullptr;

	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButtonConsoleCommandBase* ButtonConsoleCommand4 = nullptr;

	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButtonConsoleCommandBase* ButtonConsoleCommand5 = nullptr;

	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButtonConsoleCommandBase* ButtonConsoleCommand6 = nullptr;

	// Bind the ButtonTab1 variable to the Button widget in the Blueprint Widget
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButtonConsoleCommandBase* ButtonConsoleCommand7 = nullptr;

	// Bind the EditableText1 variable to the Button widget in the Blueprint Widget
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UEditableText* EditableText1;

private:
	// Declare a function to handle the OnClick event
	//UFUNCTION()
	//void OnInputCommited(const FText& TextCommited);
	
};
