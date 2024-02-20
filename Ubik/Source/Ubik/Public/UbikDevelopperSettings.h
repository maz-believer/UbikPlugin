// Copyright Believer Research and Development Team . All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UbikDevelopperSettings.generated.h"


/**
 * 
 */
UCLASS(Config=EditorPerProjectUserSettings, meta = (DisplayName="API KEY ELEVENLABS UBIK"))
class UBIK_API UUbikDevelopperSettings: public UDeveloperSettings
{
  GENERATED_BODY()

public:
  UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "UBIK")
  FString ElevenLabsApiKey;
  
};

