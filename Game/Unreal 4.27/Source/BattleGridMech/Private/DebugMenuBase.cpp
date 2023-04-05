// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugMenuBase.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidgetBase.h"

// Called when the game starts or when spawned
void ADebugMenuBase::BeginPlay()
{
	// Check is valid Widget Class
	if (IsValid(WidgetClass))
	{
		// Construct widget from Widget Class
		MenuWidget = Cast<UMenuWidgetBase>(CreateWidget(GetWorld(), WidgetClass));
		if (MenuWidget != nullptr)
		{
			// Add widget to viewport
			MenuWidget->AddToViewport();
		}
	}
}

