// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"


#include "SkillTreeWidget.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONE_TEST_01_API USkillTreeWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UImage* CurrentSkillImage;


	void changeImage(int32 Value);

};
