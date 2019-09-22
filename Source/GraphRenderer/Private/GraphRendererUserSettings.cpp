// Fill out your copyright notice in the Description page of Project Settings.

#include "GraphRendererUserSettings.h"
#include "GraphRenderer.h"

UGraphRendererUserSettings::UGraphRendererUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetToDefaults();
}

void UGraphRendererUserSettings::SetToDefaults()
{
	Super::SetToDefaults();

	ScreenshotRes = "3840x2160";
	fGraphMaxValue = 100.0f;
	GraphAmountOfOtherBars = 2;
	fBar1Value = 100.0f;
	Bar1Color = FLinearColor(255, 0, 0, 1);
	Bar1Name = "Game/Graphics card name";
	fBar2Value = 100.0f;
	Bar2Color = FLinearColor(255, 0, 0, 1);
	Bar2Name = "Game/Graphics card name";
	fBar3Value = 100.0f;
	Bar3Color = FLinearColor(255, 0, 0, 1);
	Bar3Name = "Game/Graphics card name";
	fBar4Value = 100.0f;
	Bar4Color = FLinearColor(255, 0, 0, 1);
	Bar4Name = "Game/Graphics card name";
	fBar5Value = 100.0f;
	Bar5Color = FLinearColor(255, 0, 0, 1);
	Bar5Name = "Game/Graphics card name";
	fBar6Value = 100.0f;
	Bar6Color = FLinearColor(255, 0, 0, 1);
	Bar6Name = "Game/Graphics card name";
	fBar7Value = 100.0f;
	Bar7Color = FLinearColor(255, 0, 0, 1);
	Bar7Name = "Game/Graphics card name";
	fBar8Value = 100.0f;
	Bar8Color = FLinearColor(255, 0, 0, 1);
	Bar8Name = "Game/Graphics card name";
}

void UGraphRendererUserSettings::ApplySettings(bool bCheckForCommandLineOverrides)
{
	Super::ApplySettings(bCheckForCommandLineOverrides);
	ApplyResolutionSettings(bCheckForCommandLineOverrides);
	ApplyNonResolutionSettings();

	SaveSettings();
	UE_LOG(LogConsoleResponse, Display, TEXT("Settings Applied"));
}

FString UGraphRendererUserSettings::GetScreenshotRes() const
{
	return ScreenshotRes;
}

float UGraphRendererUserSettings::GetGraphMaxValue() const
{
	return fGraphMaxValue;
}

int32 UGraphRendererUserSettings::GetGraphAmountOfBars() const
{
	return GraphAmountOfOtherBars;
}

void UGraphRendererUserSettings::GetBar1Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar1Value;
	BarColor = Bar1Color;
	BarName = Bar1Name;
}

void UGraphRendererUserSettings::GetBar2Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar2Value;
	BarColor = Bar2Color;
	BarName = Bar2Name;
}

void UGraphRendererUserSettings::GetBar3Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar3Value;
	BarColor = Bar3Color;
	BarName = Bar3Name;
}

void UGraphRendererUserSettings::GetBar4Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar4Value;
	BarColor = Bar4Color;
	BarName = Bar4Name;
}

void UGraphRendererUserSettings::GetBar5Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar5Value;
	BarColor = Bar5Color;
	BarName = Bar5Name;
}

void UGraphRendererUserSettings::GetBar6Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar6Value;
	BarColor = Bar6Color;
	BarName = Bar6Name;
}

void UGraphRendererUserSettings::GetBar7Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar7Value;
	BarColor = Bar7Color;
	BarName = Bar7Name;
}

void UGraphRendererUserSettings::GetBar8Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const
{
	BarValue = fBar8Value;
	BarColor = Bar8Color;
	BarName = Bar8Name;
}


UGraphRendererUserSettings* UGraphRendererUserSettings::GetGraphRendererUserSettings()
{
	return Cast<UGraphRendererUserSettings>(GEngine->GameUserSettings);
}