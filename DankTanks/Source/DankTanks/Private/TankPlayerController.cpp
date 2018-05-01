// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"));

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Player Controlling: %s"), *(ControlledTank->GetName()) );

	}

}

ATank * ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());

}

