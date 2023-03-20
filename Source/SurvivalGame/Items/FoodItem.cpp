// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/FoodItem.h"

#define LOCTEXT_NAMESPACE "FoodItem"

UFoodItem::UFoodItem()
{
	HealAmount = 20.f;
	UseActionText = LOCTEXT("ItemUseActionText", "Consume");
}

void UFoodItem::Use(ASurvivalCharacter* Character)
{
	UE_LOG(LogTemp, Warning, TEXT("Num num we ate some food."));
}

#undef LOCTEXT_NAMESPACE
