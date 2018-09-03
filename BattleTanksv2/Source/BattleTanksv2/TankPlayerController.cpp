// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "BattleTanksv2.h"



void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();
	 
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank){
		UE_LOG(LogTemp, Warning, TEXT("PlayerTank isn't working"));


	}
	UE_LOG(LogTemp, Warning, TEXT("PlayerTank possessing: %s" ), *(ControlledTank->GetName()));
}

ATank* ATankPlayerController::GetControlledTank() const {


	return  Cast<ATank>(GetPawn());
}