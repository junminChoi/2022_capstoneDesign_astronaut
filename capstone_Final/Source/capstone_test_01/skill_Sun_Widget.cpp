// Fill out your copyright notice in the Description page of Project Settings.


#include "skill_Sun_Widget.h"
#include "SkillTreeWidget.h"

void Uskill_Sun_Widget::NativeConstruct() {
	Super::NativeConstruct();
	if (BP_skillTreeWidget != nullptr) {
		skillTreeWidget = CreateWidget<USkillTreeWidget>(this, BP_skillTreeWidget);
	}

	SunButton->OnClicked.AddDynamic(this, &Uskill_Sun_Widget::OnClick);
}



void Uskill_Sun_Widget::updateSkillImage() {
	if (skillTreeWidget != nullptr) {
		skillTreeWidget->changeImage(1);
	}
	
}

void Uskill_Sun_Widget::OnClick() {
	UE_LOG(LogTemp, Warning, TEXT("Button Sun Clicked"));

	//updateSkillImage();
	//Sun Image Value

}