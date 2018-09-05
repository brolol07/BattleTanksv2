// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController2.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKSV2_API ATankAIController2 : public AAIController
{
	GENERATED_BODY()


		virtual void BeginPlay() override;
	virtual	void Tick(float DeltaSeconds) override;
	    
private:
	ATank* GetControlledTank() const;
	   ATank* GetPlayerTank() const;
};
