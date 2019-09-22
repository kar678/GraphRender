// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "GraphRendererUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class GRAPHRENDERER_API UGraphRendererUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	
	// interface UGameUserSettings
	virtual void SetToDefaults() override;

	UGraphRendererUserSettings(const FObjectInitializer& ObjectInitializer);

	/** Applies all current user settings to the game and saves to permanent storage (e.g. file), optionally checking for command line overrides. */
	virtual void ApplySettings(bool bCheckForCommandLineOverrides) override;

	/** Returns the game's user settings class to get and set options like (resolution, windowing mode, scalability settings, etc...) */
	UFUNCTION(BlueprintCallable, Category = "Settings")
		static UGraphRendererUserSettings* GetGraphRendererUserSettings();

	/** Gets the Screenshot Resoultion */
	UFUNCTION(BlueprintPure, Category = "Settings")
		FString GetScreenshotRes() const;

	/** Gets the Graph's Max Value */
	UFUNCTION(BlueprintPure, Category = "Settings")
		float GetGraphMaxValue() const;

	/** Gets the Graph's Amount of Bars */
	UFUNCTION(BlueprintPure, Category = "Settings")
		int32 GetGraphAmountOfBars() const;

	/** Gets Bar 1 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar1Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	/** Gets Bar 2 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar2Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	/** Gets Bar 3 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar3Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	/** Gets Bar 4 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar4Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	/** Gets Bar 5 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar5Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	/** Gets Bar 6 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar6Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	/** Gets Bar 7 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar7Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	/** Gets Bar 8 Settings */
	UFUNCTION(BlueprintPure, Category = "Settings")
		void GetBar8Settings(float& BarValue, FLinearColor& BarColor, FString& BarName) const;

	UPROPERTY(config)
		FString ScreenshotRes;

	UPROPERTY(config)
		float fGraphMaxValue;

	/** Defines the amount of other bars in the graph - Any Value from 0-7 */
	UPROPERTY(config)
		int32 GraphAmountOfOtherBars;

	UPROPERTY(config)
		float fBar1Value;

	UPROPERTY(config)
		FLinearColor Bar1Color;

	UPROPERTY(config)
		FString Bar1Name;

	UPROPERTY(config)
		float fBar2Value;

	UPROPERTY(config)
		FLinearColor Bar2Color;

	UPROPERTY(config)
		FString Bar2Name;

	UPROPERTY(config)
		float fBar3Value;

	UPROPERTY(config)
		FLinearColor Bar3Color;

	UPROPERTY(config)
		FString Bar3Name;

	UPROPERTY(config)
		float fBar4Value;

	UPROPERTY(config)
		FLinearColor Bar4Color;

	UPROPERTY(config)
		FString Bar4Name;

	UPROPERTY(config)
		float fBar5Value;

	UPROPERTY(config)
		FLinearColor Bar5Color;

	UPROPERTY(config)
		FString Bar5Name;

	UPROPERTY(config)
		float fBar6Value;

	UPROPERTY(config)
		FLinearColor Bar6Color;

	UPROPERTY(config)
		FString Bar6Name;

	UPROPERTY(config)
		float fBar7Value;

	UPROPERTY(config)
		FLinearColor Bar7Color;

	UPROPERTY(config)
		FString Bar7Name;

	UPROPERTY(config)
		float fBar8Value;

	UPROPERTY(config)
		FLinearColor Bar8Color;

	UPROPERTY(config)
		FString Bar8Name;
};
