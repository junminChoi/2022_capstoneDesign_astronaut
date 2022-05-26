// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillTreeWidget.h"


void USkillTreeWidget::NativeConstruct() {
	Super::NativeConstruct();

}

void USkillTreeWidget::changeImage(int32 Value) {

	UE_LOG(LogTemp, Warning, TEXT("Image value : %d") , Value);

}