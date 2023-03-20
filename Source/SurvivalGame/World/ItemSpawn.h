// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/TargetPoint.h"
#include "ItemSpawn.generated.h"

USTRUCT(BlueprintType)
struct FLootTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "Loot")
		TArray<TSubclassOf<class UItem>> Items;

	UPROPERTY(EditDefaultsOnly, Category = "Loot", meta = (ClampMin = 0.001, ClampMax = 1.0))
		float Probability = 1.f;
};

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API AItemSpawn : public ATargetPoint
{
	GENERATED_BODY()
	
};
