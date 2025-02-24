// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "MultiplayerFPS.h"
#include "AmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERFPS_API AAmmoPickup : public APickup
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo Pickup")
	EAmmoType AmmoType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo Pickup")
	int32 AmmoAmount;

	virtual void OnPickedUp(class AFPSCharacter* Character) override;
};
