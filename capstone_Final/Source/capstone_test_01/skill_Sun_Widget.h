// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "SkillTreeWidget.h"
// should always be the last include?
#include "skill_Sun_Widget.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONE_TEST_01_API Uskill_Sun_Widget : public UUserWidget
{
	GENERATED_BODY()
	

public:
	virtual void NativeConstruct() override;

	
	UPROPERTY(meta = (BindWidget))
	class UButton* SunButton;

	//UPROPERTY(BlueprintReadOnly, Category = "btnIsClicked")
	//bool skillButtonClicked = false;

	UFUNCTION()
	void OnClick();
	

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class USkillTreeWidget> BP_skillTreeWidget;

	UFUNCTION(BlueprintCallable, Category = "Image")
	void updateSkillImage();

private:
	UPROPERTY()
		class USkillTreeWidget* skillTreeWidget;
};
