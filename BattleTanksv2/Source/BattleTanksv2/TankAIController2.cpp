// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController2.h"
#include "BattleTanksv2.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

void ATankAIController2::BeginPlay() {
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank) {
		UE_LOG(LogTemp, Warning, TEXT("AI cannot find "));


	}
	UE_LOG(LogTemp, Warning, TEXT("AI found: %s"), *(PlayerTank->GetName()));
}

ATank* ATankAIController2::GetControlledTank() const {


	return  Cast<ATank>(GetPawn());
}

ATank* ATankAIController2::GetPlayerTank() const {

	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (!PlayerPawn) { return nullptr; }
	return Cast<ATank>(PlayerPawn);
}


