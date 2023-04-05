// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugMenuBase.generated.h"

UCLASS()
class ADebugMenuBase : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Refer to a class UserWidget
	UPROPERTY(EditAnywhere, Category = "Class Types")
	TSubclassOf<UUserWidget> WidgetClass;

	// Create variable MenuWidget of class MenuWidgetBase in game running only
	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
	class UMenuWidgetBase* MenuWidget = nullptr;

};
