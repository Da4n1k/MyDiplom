// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformEnums() {}

// Begin Cross Module References
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAchievementType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventName();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate();
UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References

// Begin Enum EOvrAbuseReportType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAbuseReportType;
static UEnum* EOvrAbuseReportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAbuseReportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAbuseReportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAbuseReportType"));
	}
	return Z_Registration_Info_UEnum_EOvrAbuseReportType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAbuseReportType>()
{
	return EOvrAbuseReportType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AbuseReportType enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Object.Comment", "/** A report for something besides a user, like a world. */" },
		{ "Object.Name", "EOvrAbuseReportType::Object" },
		{ "Object.ToolTip", "A report for something besides a user, like a world." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AbuseReportType enumeration." },
#endif
		{ "Unknown.Name", "EOvrAbuseReportType::Unknown" },
		{ "User.Comment", "/** A report for a user's behavior or profile. */" },
		{ "User.Name", "EOvrAbuseReportType::User" },
		{ "User.ToolTip", "A report for a user's behavior or profile." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAbuseReportType::Unknown", (int64)EOvrAbuseReportType::Unknown },
		{ "EOvrAbuseReportType::Object", (int64)EOvrAbuseReportType::Object },
		{ "EOvrAbuseReportType::User", (int64)EOvrAbuseReportType::User },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAbuseReportType",
	"EOvrAbuseReportType",
	Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType()
{
	if (!Z_Registration_Info_UEnum_EOvrAbuseReportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAbuseReportType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAbuseReportType.InnerSingleton;
}
// End Enum EOvrAbuseReportType

// Begin Enum EOvrAccountAgeCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAccountAgeCategory;
static UEnum* EOvrAccountAgeCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAccountAgeCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAccountAgeCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAccountAgeCategory"));
	}
	return Z_Registration_Info_UEnum_EOvrAccountAgeCategory.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAccountAgeCategory>()
{
	return EOvrAccountAgeCategory_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ad.Comment", "/** Adult age group for users ages 18 and up (or applicable age in user's region) */" },
		{ "Ad.Name", "EOvrAccountAgeCategory::Ad" },
		{ "Ad.ToolTip", "Adult age group for users ages 18 and up (or applicable age in user's region)" },
		{ "BlueprintType", "true" },
		{ "Ch.Comment", "/** Child age group for users between the ages of 10-12 (or applicable age in user's region) */" },
		{ "Ch.Name", "EOvrAccountAgeCategory::Ch" },
		{ "Ch.ToolTip", "Child age group for users between the ages of 10-12 (or applicable age in user's region)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Age category in Meta account. The values are used in UserAgeCategory_Get() API. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Tn.Comment", "/** Teenage age group for users between the ages of 13-17 (or applicable age in user's region) */" },
		{ "Tn.Name", "EOvrAccountAgeCategory::Tn" },
		{ "Tn.ToolTip", "Teenage age group for users between the ages of 13-17 (or applicable age in user's region)" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Age category in Meta account. The values are used in UserAgeCategory_Get() API." },
#endif
		{ "Unknown.Name", "EOvrAccountAgeCategory::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAccountAgeCategory::Unknown", (int64)EOvrAccountAgeCategory::Unknown },
		{ "EOvrAccountAgeCategory::Ch", (int64)EOvrAccountAgeCategory::Ch },
		{ "EOvrAccountAgeCategory::Tn", (int64)EOvrAccountAgeCategory::Tn },
		{ "EOvrAccountAgeCategory::Ad", (int64)EOvrAccountAgeCategory::Ad },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAccountAgeCategory",
	"EOvrAccountAgeCategory",
	Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory()
{
	if (!Z_Registration_Info_UEnum_EOvrAccountAgeCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAccountAgeCategory.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAccountAgeCategory.InnerSingleton;
}
// End Enum EOvrAccountAgeCategory

// Begin Enum EOvrAchievementType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAchievementType;
static UEnum* EOvrAchievementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAchievementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAchievementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAchievementType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAchievementType"));
	}
	return Z_Registration_Info_UEnum_EOvrAchievementType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAchievementType>()
{
	return EOvrAchievementType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitfield.Comment", "/** Bitfield achievements are unlocked when a target number of bits are set within a bitfield. */" },
		{ "Bitfield.Name", "EOvrAchievementType::Bitfield" },
		{ "Bitfield.ToolTip", "Bitfield achievements are unlocked when a target number of bits are set within a bitfield." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines the type of the achievement. */" },
#endif
		{ "Count.Comment", "/** Count achievements are unlocked when a counter reaches a defined target. */" },
		{ "Count.Name", "EOvrAchievementType::Count" },
		{ "Count.ToolTip", "Count achievements are unlocked when a counter reaches a defined target." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Simple.Comment", "/** Simple achievements are unlocked by a single event or objective completion. */" },
		{ "Simple.Name", "EOvrAchievementType::Simple" },
		{ "Simple.ToolTip", "Simple achievements are unlocked by a single event or objective completion." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the type of the achievement." },
#endif
		{ "Unknown.Name", "EOvrAchievementType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAchievementType::Unknown", (int64)EOvrAchievementType::Unknown },
		{ "EOvrAchievementType::Simple", (int64)EOvrAchievementType::Simple },
		{ "EOvrAchievementType::Bitfield", (int64)EOvrAchievementType::Bitfield },
		{ "EOvrAchievementType::Count", (int64)EOvrAchievementType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAchievementType",
	"EOvrAchievementType",
	Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAchievementType()
{
	if (!Z_Registration_Info_UEnum_EOvrAchievementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAchievementType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAchievementType.InnerSingleton;
}
// End Enum EOvrAchievementType

// Begin Enum EOvrAppAgeCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAppAgeCategory;
static UEnum* EOvrAppAgeCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAppAgeCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAppAgeCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAppAgeCategory"));
	}
	return Z_Registration_Info_UEnum_EOvrAppAgeCategory.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppAgeCategory>()
{
	return EOvrAppAgeCategory_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ch.Comment", "/** Child age group for users between the ages of 10-12 (or applicable age in user's region) */" },
		{ "Ch.Name", "EOvrAppAgeCategory::Ch" },
		{ "Ch.ToolTip", "Child age group for users between the ages of 10-12 (or applicable age in user's region)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Age category for developers to send to Meta. The values are used in UserAgeCategory_Report() API. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Nch.Comment", "/** Non-child age group for users ages 13 and up (or applicable age in user's region) */" },
		{ "Nch.Name", "EOvrAppAgeCategory::Nch" },
		{ "Nch.ToolTip", "Non-child age group for users ages 13 and up (or applicable age in user's region)" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Age category for developers to send to Meta. The values are used in UserAgeCategory_Report() API." },
#endif
		{ "Unknown.Name", "EOvrAppAgeCategory::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAppAgeCategory::Unknown", (int64)EOvrAppAgeCategory::Unknown },
		{ "EOvrAppAgeCategory::Ch", (int64)EOvrAppAgeCategory::Ch },
		{ "EOvrAppAgeCategory::Nch", (int64)EOvrAppAgeCategory::Nch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAppAgeCategory",
	"EOvrAppAgeCategory",
	Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory()
{
	if (!Z_Registration_Info_UEnum_EOvrAppAgeCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAppAgeCategory.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAppAgeCategory.InnerSingleton;
}
// End Enum EOvrAppAgeCategory

// Begin Enum EOvrAppInstallResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAppInstallResult;
static UEnum* EOvrAppInstallResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAppInstallResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAppInstallResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAppInstallResult"));
	}
	return Z_Registration_Info_UEnum_EOvrAppInstallResult.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppInstallResult>()
{
	return EOvrAppInstallResult_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AuthorizationError.Comment", "/** Install of the app failed due to a user authorization error */" },
		{ "AuthorizationError.Name", "EOvrAppInstallResult::AuthorizationError" },
		{ "AuthorizationError.ToolTip", "Install of the app failed due to a user authorization error" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Result of installing an app. In case of an error during install process,\n * the error message contains the string representation of this result. This is\n * returned from Application_StartAppDownload(), Application_CancelAppDownload() and Application_InstallAppUpdateAndRelaunch() APIs.\n */" },
#endif
		{ "DuplicateRequest.Comment", "/**\n     * Install of the app failed as another install request for this application\n     * is already being processed by the installer\n     */" },
		{ "DuplicateRequest.Name", "EOvrAppInstallResult::DuplicateRequest" },
		{ "DuplicateRequest.ToolTip", "Install of the app failed as another install request for this application\nis already being processed by the installer" },
		{ "InstallerError.Comment", "/** Install of the app failed due to an internal installer error */" },
		{ "InstallerError.Name", "EOvrAppInstallResult::InstallerError" },
		{ "InstallerError.ToolTip", "Install of the app failed due to an internal installer error" },
		{ "LowStorage.Comment", "/** Install of the app failed due to low storage on the device */" },
		{ "LowStorage.Name", "EOvrAppInstallResult::LowStorage" },
		{ "LowStorage.ToolTip", "Install of the app failed due to low storage on the device" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NetworkError.Comment", "/** Install of the app failed due to a network error */" },
		{ "NetworkError.Name", "EOvrAppInstallResult::NetworkError" },
		{ "NetworkError.ToolTip", "Install of the app failed due to a network error" },
		{ "Success.Comment", "/** Install of the app succeeded */" },
		{ "Success.Name", "EOvrAppInstallResult::Success" },
		{ "Success.ToolTip", "Install of the app succeeded" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of installing an app. In case of an error during install process,\nthe error message contains the string representation of this result. This is\nreturned from Application_StartAppDownload(), Application_CancelAppDownload() and Application_InstallAppUpdateAndRelaunch() APIs." },
#endif
		{ "Unknown.Name", "EOvrAppInstallResult::Unknown" },
		{ "UserCancelled.Comment", "/** Install of the app failed because the user cancelled the install operation */" },
		{ "UserCancelled.Name", "EOvrAppInstallResult::UserCancelled" },
		{ "UserCancelled.ToolTip", "Install of the app failed because the user cancelled the install operation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAppInstallResult::Unknown", (int64)EOvrAppInstallResult::Unknown },
		{ "EOvrAppInstallResult::LowStorage", (int64)EOvrAppInstallResult::LowStorage },
		{ "EOvrAppInstallResult::NetworkError", (int64)EOvrAppInstallResult::NetworkError },
		{ "EOvrAppInstallResult::DuplicateRequest", (int64)EOvrAppInstallResult::DuplicateRequest },
		{ "EOvrAppInstallResult::InstallerError", (int64)EOvrAppInstallResult::InstallerError },
		{ "EOvrAppInstallResult::UserCancelled", (int64)EOvrAppInstallResult::UserCancelled },
		{ "EOvrAppInstallResult::AuthorizationError", (int64)EOvrAppInstallResult::AuthorizationError },
		{ "EOvrAppInstallResult::Success", (int64)EOvrAppInstallResult::Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAppInstallResult",
	"EOvrAppInstallResult",
	Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult()
{
	if (!Z_Registration_Info_UEnum_EOvrAppInstallResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAppInstallResult.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAppInstallResult.InnerSingleton;
}
// End Enum EOvrAppInstallResult

// Begin Enum EOvrAppStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAppStatus;
static UEnum* EOvrAppStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAppStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAppStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAppStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAppStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrAppStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppStatus>()
{
	return EOvrAppStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Current status of the app on the device. An app can only check\n * its own status.\n */" },
#endif
		{ "Downloading.Comment", "/** Download of the app is currently in progress. */" },
		{ "Downloading.Name", "EOvrAppStatus::Downloading" },
		{ "Downloading.ToolTip", "Download of the app is currently in progress." },
		{ "DownloadQueued.Comment", "/** Download of the app is currently queued. */" },
		{ "DownloadQueued.Name", "EOvrAppStatus::DownloadQueued" },
		{ "DownloadQueued.ToolTip", "Download of the app is currently queued." },
		{ "Entitled.Comment", "/** User has valid entitlement to the app but it is not currently installed on the device. */" },
		{ "Entitled.Name", "EOvrAppStatus::Entitled" },
		{ "Entitled.ToolTip", "User has valid entitlement to the app but it is not currently installed on the device." },
		{ "Installed.Comment", "/** App is installed on the device. */" },
		{ "Installed.Name", "EOvrAppStatus::Installed" },
		{ "Installed.ToolTip", "App is installed on the device." },
		{ "Installing.Comment", "/** Install of the app is currently in progress. */" },
		{ "Installing.Name", "EOvrAppStatus::Installing" },
		{ "Installing.ToolTip", "Install of the app is currently in progress." },
		{ "InstallQueued.Comment", "/** Install of the app is currently queued. */" },
		{ "InstallQueued.Name", "EOvrAppStatus::InstallQueued" },
		{ "InstallQueued.ToolTip", "Install of the app is currently queued." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current status of the app on the device. An app can only check\nits own status." },
#endif
		{ "Uninstalling.Comment", "/** App is being uninstalled from the device. */" },
		{ "Uninstalling.Name", "EOvrAppStatus::Uninstalling" },
		{ "Uninstalling.ToolTip", "App is being uninstalled from the device." },
		{ "Unknown.Name", "EOvrAppStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAppStatus::Unknown", (int64)EOvrAppStatus::Unknown },
		{ "EOvrAppStatus::Entitled", (int64)EOvrAppStatus::Entitled },
		{ "EOvrAppStatus::DownloadQueued", (int64)EOvrAppStatus::DownloadQueued },
		{ "EOvrAppStatus::Downloading", (int64)EOvrAppStatus::Downloading },
		{ "EOvrAppStatus::Installing", (int64)EOvrAppStatus::Installing },
		{ "EOvrAppStatus::Installed", (int64)EOvrAppStatus::Installed },
		{ "EOvrAppStatus::Uninstalling", (int64)EOvrAppStatus::Uninstalling },
		{ "EOvrAppStatus::InstallQueued", (int64)EOvrAppStatus::InstallQueued },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAppStatus",
	"EOvrAppStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrAppStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAppStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAppStatus.InnerSingleton;
}
// End Enum EOvrAppStatus

// Begin Enum EOvrChallengeCreationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrChallengeCreationType;
static UEnum* EOvrChallengeCreationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeCreationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrChallengeCreationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrChallengeCreationType"));
	}
	return Z_Registration_Info_UEnum_EOvrChallengeCreationType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeCreationType>()
{
	return EOvrChallengeCreationType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describes the creator of the associated challenge. */" },
#endif
		{ "DeveloperCreated.Comment", "/** The challenge was created by the app developer. */" },
		{ "DeveloperCreated.Name", "EOvrChallengeCreationType::DeveloperCreated" },
		{ "DeveloperCreated.ToolTip", "The challenge was created by the app developer." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes the creator of the associated challenge." },
#endif
		{ "Unknown.Name", "EOvrChallengeCreationType::Unknown" },
		{ "UserCreated.Comment", "/** The challenge was created by a User. */" },
		{ "UserCreated.Name", "EOvrChallengeCreationType::UserCreated" },
		{ "UserCreated.ToolTip", "The challenge was created by a User." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrChallengeCreationType::Unknown", (int64)EOvrChallengeCreationType::Unknown },
		{ "EOvrChallengeCreationType::UserCreated", (int64)EOvrChallengeCreationType::UserCreated },
		{ "EOvrChallengeCreationType::DeveloperCreated", (int64)EOvrChallengeCreationType::DeveloperCreated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrChallengeCreationType",
	"EOvrChallengeCreationType",
	Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeCreationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrChallengeCreationType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrChallengeCreationType.InnerSingleton;
}
// End Enum EOvrChallengeCreationType

// Begin Enum EOvrChallengeViewerFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrChallengeViewerFilter;
static UEnum* EOvrChallengeViewerFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrChallengeViewerFilter"));
	}
	return Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeViewerFilter>()
{
	return EOvrChallengeViewerFilter_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllVisible.Comment", "/** Returns all public ((EOvrChallengeVisibility::Public)) and invite-only (EOvrChallengeVisibility::InviteOnly) FOvrChallenges in which the user is a participant or invitee. Excludes private (EOvrChallengeVisibility::Private) challenges. */" },
		{ "AllVisible.Name", "EOvrChallengeViewerFilter::AllVisible" },
		{ "AllVisible.ToolTip", "Returns all public ((EOvrChallengeVisibility::Public)) and invite-only (EOvrChallengeVisibility::InviteOnly) FOvrChallenges in which the user is a participant or invitee. Excludes private (EOvrChallengeVisibility::Private) challenges." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The available filtering options on the FOvrChallenge returned by Challenges_GetList(). */" },
#endif
		{ "Invited.Comment", "/** Returns challenges that the user has been invited to. */" },
		{ "Invited.Name", "EOvrChallengeViewerFilter::Invited" },
		{ "Invited.ToolTip", "Returns challenges that the user has been invited to." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Participating.Comment", "/** Returns challenges in which the user is a participant. */" },
		{ "Participating.Name", "EOvrChallengeViewerFilter::Participating" },
		{ "Participating.ToolTip", "Returns challenges in which the user is a participant." },
		{ "ParticipatingOrInvited.Comment", "/** Returns challenges the user is either participating in or invited to. */" },
		{ "ParticipatingOrInvited.Name", "EOvrChallengeViewerFilter::ParticipatingOrInvited" },
		{ "ParticipatingOrInvited.ToolTip", "Returns challenges the user is either participating in or invited to." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The available filtering options on the FOvrChallenge returned by Challenges_GetList()." },
#endif
		{ "Unknown.Name", "EOvrChallengeViewerFilter::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrChallengeViewerFilter::Unknown", (int64)EOvrChallengeViewerFilter::Unknown },
		{ "EOvrChallengeViewerFilter::AllVisible", (int64)EOvrChallengeViewerFilter::AllVisible },
		{ "EOvrChallengeViewerFilter::Participating", (int64)EOvrChallengeViewerFilter::Participating },
		{ "EOvrChallengeViewerFilter::Invited", (int64)EOvrChallengeViewerFilter::Invited },
		{ "EOvrChallengeViewerFilter::ParticipatingOrInvited", (int64)EOvrChallengeViewerFilter::ParticipatingOrInvited },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrChallengeViewerFilter",
	"EOvrChallengeViewerFilter",
	Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.InnerSingleton;
}
// End Enum EOvrChallengeViewerFilter

// Begin Enum EOvrChallengeVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrChallengeVisibility;
static UEnum* EOvrChallengeVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrChallengeVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrChallengeVisibility"));
	}
	return Z_Registration_Info_UEnum_EOvrChallengeVisibility.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeVisibility>()
{
	return EOvrChallengeVisibility_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The visibility of the challenge. A challenge may be invite-only, public, or private. */" },
#endif
		{ "InviteOnly.Comment", "/** Only those invited can participate in it. Everyone can see it */" },
		{ "InviteOnly.Name", "EOvrChallengeVisibility::InviteOnly" },
		{ "InviteOnly.ToolTip", "Only those invited can participate in it. Everyone can see it" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Private.Comment", "/** Only those invited can participate and see this challenge */" },
		{ "Private.Name", "EOvrChallengeVisibility::Private" },
		{ "Private.ToolTip", "Only those invited can participate and see this challenge" },
		{ "Public.Comment", "/** Everyone can participate and see this challenge */" },
		{ "Public.Name", "EOvrChallengeVisibility::Public" },
		{ "Public.ToolTip", "Everyone can participate and see this challenge" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The visibility of the challenge. A challenge may be invite-only, public, or private." },
#endif
		{ "Unknown.Name", "EOvrChallengeVisibility::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrChallengeVisibility::Unknown", (int64)EOvrChallengeVisibility::Unknown },
		{ "EOvrChallengeVisibility::InviteOnly", (int64)EOvrChallengeVisibility::InviteOnly },
		{ "EOvrChallengeVisibility::Public", (int64)EOvrChallengeVisibility::Public },
		{ "EOvrChallengeVisibility::Private", (int64)EOvrChallengeVisibility::Private },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrChallengeVisibility",
	"EOvrChallengeVisibility",
	Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrChallengeVisibility.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrChallengeVisibility.InnerSingleton;
}
// End Enum EOvrChallengeVisibility

// Begin Enum EOvrKeyValuePairType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrKeyValuePairType;
static UEnum* EOvrKeyValuePairType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrKeyValuePairType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrKeyValuePairType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrKeyValuePairType"));
	}
	return Z_Registration_Info_UEnum_EOvrKeyValuePairType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrKeyValuePairType>()
{
	return EOvrKeyValuePairType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** KeyValuePairType enumeration. */" },
#endif
		{ "Double.Name", "EOvrKeyValuePairType::Double" },
		{ "Int.Name", "EOvrKeyValuePairType::Int" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "String.Name", "EOvrKeyValuePairType::String" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "KeyValuePairType enumeration." },
#endif
		{ "Unknown.Name", "EOvrKeyValuePairType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrKeyValuePairType::String", (int64)EOvrKeyValuePairType::String },
		{ "EOvrKeyValuePairType::Int", (int64)EOvrKeyValuePairType::Int },
		{ "EOvrKeyValuePairType::Double", (int64)EOvrKeyValuePairType::Double },
		{ "EOvrKeyValuePairType::Unknown", (int64)EOvrKeyValuePairType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrKeyValuePairType",
	"EOvrKeyValuePairType",
	Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType()
{
	if (!Z_Registration_Info_UEnum_EOvrKeyValuePairType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrKeyValuePairType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrKeyValuePairType.InnerSingleton;
}
// End Enum EOvrKeyValuePairType

// Begin Enum EOvrLaunchResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLaunchResult;
static UEnum* EOvrLaunchResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLaunchResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLaunchResult"));
	}
	return Z_Registration_Info_UEnum_EOvrLaunchResult.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLaunchResult>()
{
	return EOvrLaunchResult_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LaunchResult enumeration. */" },
#endif
		{ "FailedGameAlreadyStarted.Name", "EOvrLaunchResult::FailedGameAlreadyStarted" },
		{ "FailedOtherReason.Name", "EOvrLaunchResult::FailedOtherReason" },
		{ "FailedRoomFull.Name", "EOvrLaunchResult::FailedRoomFull" },
		{ "FailedRoomNotFound.Name", "EOvrLaunchResult::FailedRoomNotFound" },
		{ "FailedUserDeclined.Name", "EOvrLaunchResult::FailedUserDeclined" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Success.Name", "EOvrLaunchResult::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LaunchResult enumeration." },
#endif
		{ "Unknown.Name", "EOvrLaunchResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLaunchResult::Unknown", (int64)EOvrLaunchResult::Unknown },
		{ "EOvrLaunchResult::Success", (int64)EOvrLaunchResult::Success },
		{ "EOvrLaunchResult::FailedRoomFull", (int64)EOvrLaunchResult::FailedRoomFull },
		{ "EOvrLaunchResult::FailedGameAlreadyStarted", (int64)EOvrLaunchResult::FailedGameAlreadyStarted },
		{ "EOvrLaunchResult::FailedRoomNotFound", (int64)EOvrLaunchResult::FailedRoomNotFound },
		{ "EOvrLaunchResult::FailedUserDeclined", (int64)EOvrLaunchResult::FailedUserDeclined },
		{ "EOvrLaunchResult::FailedOtherReason", (int64)EOvrLaunchResult::FailedOtherReason },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLaunchResult",
	"EOvrLaunchResult",
	Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLaunchResult.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLaunchResult.InnerSingleton;
}
// End Enum EOvrLaunchResult

// Begin Enum EOvrLaunchType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLaunchType;
static UEnum* EOvrLaunchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLaunchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLaunchType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLaunchType"));
	}
	return Z_Registration_Info_UEnum_EOvrLaunchType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLaunchType>()
{
	return EOvrLaunchType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LaunchType enumeration. */" },
#endif
		{ "Coordinated.Comment", "/**  DEPRECATED  */" },
		{ "Coordinated.Name", "EOvrLaunchType::Coordinated" },
		{ "Coordinated.ToolTip", "DEPRECATED" },
		{ "Deeplink.Comment", "/**\n     *  Launched from Application_LaunchOtherApp().\n     *     Check field FOvrLaunchDetails::LaunchSource and field FOvrLaunchDetails::DeeplinkMessage. \n     */" },
		{ "Deeplink.Name", "EOvrLaunchType::Deeplink" },
		{ "Deeplink.ToolTip", "Launched from Application_LaunchOtherApp().\n   Check field FOvrLaunchDetails::LaunchSource and field FOvrLaunchDetails::DeeplinkMessage." },
		{ "Invite.Comment", "/**\n     *  Launch from the user accepting an invite.  Check field FOvrLaunchDetails::LobbySessionID,\n     *     field FOvrLaunchDetails::MatchSessionID, field FOvrLaunchDetails::DestinationApiName and\n     *     field FOvrLaunchDetails::DeeplinkMessage. \n     */" },
		{ "Invite.Name", "EOvrLaunchType::Invite" },
		{ "Invite.ToolTip", "Launch from the user accepting an invite.  Check field FOvrLaunchDetails::LobbySessionID,\n   field FOvrLaunchDetails::MatchSessionID, field FOvrLaunchDetails::DestinationApiName and\n   field FOvrLaunchDetails::DeeplinkMessage." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Normal.Comment", "/**  Normal launch from the user's library  */" },
		{ "Normal.Name", "EOvrLaunchType::Normal" },
		{ "Normal.ToolTip", "Normal launch from the user's library" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LaunchType enumeration." },
#endif
		{ "Unknown.Name", "EOvrLaunchType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLaunchType::Unknown", (int64)EOvrLaunchType::Unknown },
		{ "EOvrLaunchType::Normal", (int64)EOvrLaunchType::Normal },
		{ "EOvrLaunchType::Invite", (int64)EOvrLaunchType::Invite },
		{ "EOvrLaunchType::Coordinated", (int64)EOvrLaunchType::Coordinated },
		{ "EOvrLaunchType::Deeplink", (int64)EOvrLaunchType::Deeplink },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLaunchType",
	"EOvrLaunchType",
	Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchType()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLaunchType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLaunchType.InnerSingleton;
}
// End Enum EOvrLaunchType

// Begin Enum EOvrLeaderboardFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLeaderboardFilterType;
static UEnum* EOvrLeaderboardFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLeaderboardFilterType"));
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLeaderboardFilterType>()
{
	return EOvrLeaderboardFilterType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describe the filter type that can be enabled on the leaderboard. */" },
#endif
		{ "Friends.Comment", "/** Filter the leaderboard to include only friends of the current user. */" },
		{ "Friends.Name", "EOvrLeaderboardFilterType::Friends" },
		{ "Friends.ToolTip", "Filter the leaderboard to include only friends of the current user." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Comment", "/** No filter enabled on the leaderboard. */" },
		{ "None.Name", "EOvrLeaderboardFilterType::None" },
		{ "None.ToolTip", "No filter enabled on the leaderboard." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describe the filter type that can be enabled on the leaderboard." },
#endif
		{ "Unknown.Name", "EOvrLeaderboardFilterType::Unknown" },
		{ "UserIds.Comment", "/**\n     * Filter the leaderboard to include specific user IDs.\n     * Use this filter to get rankings for users that are competing against each other.\n     * You specify the leaderboard name and whether to start at the top, or for the results to center on the (client) user.\n     * Note that if you specify the results to center on the client user, their leaderboard entry will be included in the returned array, regardless of whether their ID is explicitly specified in the list of IDs.\n     */" },
		{ "UserIds.Name", "EOvrLeaderboardFilterType::UserIds" },
		{ "UserIds.ToolTip", "Filter the leaderboard to include specific user IDs.\nUse this filter to get rankings for users that are competing against each other.\nYou specify the leaderboard name and whether to start at the top, or for the results to center on the (client) user.\nNote that if you specify the results to center on the client user, their leaderboard entry will be included in the returned array, regardless of whether their ID is explicitly specified in the list of IDs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLeaderboardFilterType::None", (int64)EOvrLeaderboardFilterType::None },
		{ "EOvrLeaderboardFilterType::Friends", (int64)EOvrLeaderboardFilterType::Friends },
		{ "EOvrLeaderboardFilterType::Unknown", (int64)EOvrLeaderboardFilterType::Unknown },
		{ "EOvrLeaderboardFilterType::UserIds", (int64)EOvrLeaderboardFilterType::UserIds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLeaderboardFilterType",
	"EOvrLeaderboardFilterType",
	Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.InnerSingleton;
}
// End Enum EOvrLeaderboardFilterType

// Begin Enum EOvrLeaderboardStartAt
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLeaderboardStartAt;
static UEnum* EOvrLeaderboardStartAt_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLeaderboardStartAt"));
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLeaderboardStartAt>()
{
	return EOvrLeaderboardStartAt_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CenteredOnViewer.Name", "EOvrLeaderboardStartAt::CenteredOnViewer" },
		{ "CenteredOnViewerOrTop.Name", "EOvrLeaderboardStartAt::CenteredOnViewerOrTop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LeaderboardStartAt enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LeaderboardStartAt enumeration." },
#endif
		{ "Top.Name", "EOvrLeaderboardStartAt::Top" },
		{ "Unknown.Name", "EOvrLeaderboardStartAt::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLeaderboardStartAt::Top", (int64)EOvrLeaderboardStartAt::Top },
		{ "EOvrLeaderboardStartAt::CenteredOnViewer", (int64)EOvrLeaderboardStartAt::CenteredOnViewer },
		{ "EOvrLeaderboardStartAt::CenteredOnViewerOrTop", (int64)EOvrLeaderboardStartAt::CenteredOnViewerOrTop },
		{ "EOvrLeaderboardStartAt::Unknown", (int64)EOvrLeaderboardStartAt::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLeaderboardStartAt",
	"EOvrLeaderboardStartAt",
	Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.InnerSingleton;
}
// End Enum EOvrLeaderboardStartAt

// Begin Enum EOvrLivestreamingStartStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus;
static UEnum* EOvrLivestreamingStartStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLivestreamingStartStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLivestreamingStartStatus>()
{
	return EOvrLivestreamingStartStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LivestreamingStartStatus enumeration. */" },
#endif
		{ "MissingParameters.Name", "EOvrLivestreamingStartStatus::MissingParameters" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NoFbConnect.Name", "EOvrLivestreamingStartStatus::NoFbConnect" },
		{ "NoPackageSet.Name", "EOvrLivestreamingStartStatus::NoPackageSet" },
		{ "NoSessionId.Name", "EOvrLivestreamingStartStatus::NoSessionId" },
		{ "Success.Name", "EOvrLivestreamingStartStatus::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LivestreamingStartStatus enumeration." },
#endif
		{ "Unknown.Name", "EOvrLivestreamingStartStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLivestreamingStartStatus::Success", (int64)EOvrLivestreamingStartStatus::Success },
		{ "EOvrLivestreamingStartStatus::Unknown", (int64)EOvrLivestreamingStartStatus::Unknown },
		{ "EOvrLivestreamingStartStatus::NoPackageSet", (int64)EOvrLivestreamingStartStatus::NoPackageSet },
		{ "EOvrLivestreamingStartStatus::NoFbConnect", (int64)EOvrLivestreamingStartStatus::NoFbConnect },
		{ "EOvrLivestreamingStartStatus::NoSessionId", (int64)EOvrLivestreamingStartStatus::NoSessionId },
		{ "EOvrLivestreamingStartStatus::MissingParameters", (int64)EOvrLivestreamingStartStatus::MissingParameters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLivestreamingStartStatus",
	"EOvrLivestreamingStartStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.InnerSingleton;
}
// End Enum EOvrLivestreamingStartStatus

// Begin Enum EOvrLogEventName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLogEventName;
static UEnum* EOvrLogEventName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLogEventName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLogEventName, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLogEventName"));
	}
	return Z_Registration_Info_UEnum_EOvrLogEventName.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLogEventName>()
{
	return EOvrLogEventName_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdClick.Name", "EOvrLogEventName::AdClick" },
		{ "AdImpression.Name", "EOvrLogEventName::AdImpression" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LogEventName enumeration. */" },
#endif
		{ "Contact.Name", "EOvrLogEventName::Contact" },
		{ "CustomizeProduct.Name", "EOvrLogEventName::CustomizeProduct" },
		{ "Donate.Name", "EOvrLogEventName::Donate" },
		{ "FindLocation.Name", "EOvrLogEventName::FindLocation" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Schedule.Name", "EOvrLogEventName::Schedule" },
		{ "SmartTrial.Name", "EOvrLogEventName::SmartTrial" },
		{ "SubmitApplication.Name", "EOvrLogEventName::SubmitApplication" },
		{ "Subscribe.Name", "EOvrLogEventName::Subscribe" },
		{ "SubscriptionFailed.Name", "EOvrLogEventName::SubscriptionFailed" },
		{ "SubscriptionInitiatedCheckout.Name", "EOvrLogEventName::SubscriptionInitiatedCheckout" },
		{ "SubscriptionRestore.Name", "EOvrLogEventName::SubscriptionRestore" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LogEventName enumeration." },
#endif
		{ "Unknown.Name", "EOvrLogEventName::Unknown" },
		{ "VrAchievementUnlocked.Name", "EOvrLogEventName::VrAchievementUnlocked" },
		{ "VrActivateApp.Name", "EOvrLogEventName::VrActivateApp" },
		{ "VrAddPaymentInfo.Name", "EOvrLogEventName::VrAddPaymentInfo" },
		{ "VrAddToCart.Name", "EOvrLogEventName::VrAddToCart" },
		{ "VrAddToWishlist.Name", "EOvrLogEventName::VrAddToWishlist" },
		{ "VrCatalogUpdate.Name", "EOvrLogEventName::VrCatalogUpdate" },
		{ "VrCompleteRegistration.Name", "EOvrLogEventName::VrCompleteRegistration" },
		{ "VrContentView.Name", "EOvrLogEventName::VrContentView" },
		{ "VrDeactivateApp.Name", "EOvrLogEventName::VrDeactivateApp" },
		{ "VrInitiatedCheckout.Name", "EOvrLogEventName::VrInitiatedCheckout" },
		{ "VrLevelAchieved.Name", "EOvrLogEventName::VrLevelAchieved" },
		{ "VrObtainPushToken.Name", "EOvrLogEventName::VrObtainPushToken" },
		{ "VrPurchase.Name", "EOvrLogEventName::VrPurchase" },
		{ "VrPurchaseFailed.Name", "EOvrLogEventName::VrPurchaseFailed" },
		{ "VrPurchaseRestored.Name", "EOvrLogEventName::VrPurchaseRestored" },
		{ "VrPushOpened.Name", "EOvrLogEventName::VrPushOpened" },
		{ "VrRate.Name", "EOvrLogEventName::VrRate" },
		{ "VrSdkBackgroundStatusAvailable.Name", "EOvrLogEventName::VrSdkBackgroundStatusAvailable" },
		{ "VrSdkBackgroundStatusDenied.Name", "EOvrLogEventName::VrSdkBackgroundStatusDenied" },
		{ "VrSdkBackgroundStatusRestricted.Name", "EOvrLogEventName::VrSdkBackgroundStatusRestricted" },
		{ "VrSdkInitialize.Name", "EOvrLogEventName::VrSdkInitialize" },
		{ "VrSearch.Name", "EOvrLogEventName::VrSearch" },
		{ "VrSpentCredits.Name", "EOvrLogEventName::VrSpentCredits" },
		{ "VrTutorialCompletion.Name", "EOvrLogEventName::VrTutorialCompletion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLogEventName::Unknown", (int64)EOvrLogEventName::Unknown },
		{ "EOvrLogEventName::AdClick", (int64)EOvrLogEventName::AdClick },
		{ "EOvrLogEventName::AdImpression", (int64)EOvrLogEventName::AdImpression },
		{ "EOvrLogEventName::VrCompleteRegistration", (int64)EOvrLogEventName::VrCompleteRegistration },
		{ "EOvrLogEventName::VrTutorialCompletion", (int64)EOvrLogEventName::VrTutorialCompletion },
		{ "EOvrLogEventName::Contact", (int64)EOvrLogEventName::Contact },
		{ "EOvrLogEventName::CustomizeProduct", (int64)EOvrLogEventName::CustomizeProduct },
		{ "EOvrLogEventName::Donate", (int64)EOvrLogEventName::Donate },
		{ "EOvrLogEventName::FindLocation", (int64)EOvrLogEventName::FindLocation },
		{ "EOvrLogEventName::VrRate", (int64)EOvrLogEventName::VrRate },
		{ "EOvrLogEventName::Schedule", (int64)EOvrLogEventName::Schedule },
		{ "EOvrLogEventName::VrSearch", (int64)EOvrLogEventName::VrSearch },
		{ "EOvrLogEventName::SmartTrial", (int64)EOvrLogEventName::SmartTrial },
		{ "EOvrLogEventName::SubmitApplication", (int64)EOvrLogEventName::SubmitApplication },
		{ "EOvrLogEventName::Subscribe", (int64)EOvrLogEventName::Subscribe },
		{ "EOvrLogEventName::VrContentView", (int64)EOvrLogEventName::VrContentView },
		{ "EOvrLogEventName::VrSdkInitialize", (int64)EOvrLogEventName::VrSdkInitialize },
		{ "EOvrLogEventName::VrSdkBackgroundStatusAvailable", (int64)EOvrLogEventName::VrSdkBackgroundStatusAvailable },
		{ "EOvrLogEventName::VrSdkBackgroundStatusDenied", (int64)EOvrLogEventName::VrSdkBackgroundStatusDenied },
		{ "EOvrLogEventName::VrSdkBackgroundStatusRestricted", (int64)EOvrLogEventName::VrSdkBackgroundStatusRestricted },
		{ "EOvrLogEventName::VrAddPaymentInfo", (int64)EOvrLogEventName::VrAddPaymentInfo },
		{ "EOvrLogEventName::VrAddToCart", (int64)EOvrLogEventName::VrAddToCart },
		{ "EOvrLogEventName::VrAddToWishlist", (int64)EOvrLogEventName::VrAddToWishlist },
		{ "EOvrLogEventName::VrInitiatedCheckout", (int64)EOvrLogEventName::VrInitiatedCheckout },
		{ "EOvrLogEventName::VrPurchase", (int64)EOvrLogEventName::VrPurchase },
		{ "EOvrLogEventName::VrCatalogUpdate", (int64)EOvrLogEventName::VrCatalogUpdate },
		{ "EOvrLogEventName::VrPurchaseFailed", (int64)EOvrLogEventName::VrPurchaseFailed },
		{ "EOvrLogEventName::VrPurchaseRestored", (int64)EOvrLogEventName::VrPurchaseRestored },
		{ "EOvrLogEventName::SubscriptionInitiatedCheckout", (int64)EOvrLogEventName::SubscriptionInitiatedCheckout },
		{ "EOvrLogEventName::SubscriptionFailed", (int64)EOvrLogEventName::SubscriptionFailed },
		{ "EOvrLogEventName::SubscriptionRestore", (int64)EOvrLogEventName::SubscriptionRestore },
		{ "EOvrLogEventName::VrLevelAchieved", (int64)EOvrLogEventName::VrLevelAchieved },
		{ "EOvrLogEventName::VrAchievementUnlocked", (int64)EOvrLogEventName::VrAchievementUnlocked },
		{ "EOvrLogEventName::VrSpentCredits", (int64)EOvrLogEventName::VrSpentCredits },
		{ "EOvrLogEventName::VrObtainPushToken", (int64)EOvrLogEventName::VrObtainPushToken },
		{ "EOvrLogEventName::VrPushOpened", (int64)EOvrLogEventName::VrPushOpened },
		{ "EOvrLogEventName::VrActivateApp", (int64)EOvrLogEventName::VrActivateApp },
		{ "EOvrLogEventName::VrDeactivateApp", (int64)EOvrLogEventName::VrDeactivateApp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLogEventName",
	"EOvrLogEventName",
	Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventName()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLogEventName.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLogEventName.InnerSingleton;
}
// End Enum EOvrLogEventName

// Begin Enum EOvrLogEventParameter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLogEventParameter;
static UEnum* EOvrLogEventParameter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventParameter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLogEventParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLogEventParameter"));
	}
	return Z_Registration_Info_UEnum_EOvrLogEventParameter.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLogEventParameter>()
{
	return EOvrLogEventParameter_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdType.Name", "EOvrLogEventParameter::AdType" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LogEventParameter enumeration. */" },
#endif
		{ "EventName.Name", "EOvrLogEventParameter::EventName" },
		{ "ImplicitlyLogged.Name", "EOvrLogEventParameter::ImplicitlyLogged" },
		{ "InBackground.Name", "EOvrLogEventParameter::InBackground" },
		{ "LogTime.Name", "EOvrLogEventParameter::LogTime" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "SessionId.Name", "EOvrLogEventParameter::SessionId" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LogEventParameter enumeration." },
#endif
		{ "Unknown.Name", "EOvrLogEventParameter::Unknown" },
		{ "VrContent.Name", "EOvrLogEventParameter::VrContent" },
		{ "VrContentId.Name", "EOvrLogEventParameter::VrContentId" },
		{ "VrContentTitle.Name", "EOvrLogEventParameter::VrContentTitle" },
		{ "VrContentType.Name", "EOvrLogEventParameter::VrContentType" },
		{ "VrCurrency.Name", "EOvrLogEventParameter::VrCurrency" },
		{ "VrDescription.Name", "EOvrLogEventParameter::VrDescription" },
		{ "VrIapHasFreeTrial.Name", "EOvrLogEventParameter::VrIapHasFreeTrial" },
		{ "VrIapIsStartTrial.Name", "EOvrLogEventParameter::VrIapIsStartTrial" },
		{ "VrIapProductType.Name", "EOvrLogEventParameter::VrIapProductType" },
		{ "VrIapSubsPeriod.Name", "EOvrLogEventParameter::VrIapSubsPeriod" },
		{ "VrIapTrialPeriod.Name", "EOvrLogEventParameter::VrIapTrialPeriod" },
		{ "VrIapTrialPrice.Name", "EOvrLogEventParameter::VrIapTrialPrice" },
		{ "VrLevel.Name", "EOvrLogEventParameter::VrLevel" },
		{ "VrMaxRatingValue.Name", "EOvrLogEventParameter::VrMaxRatingValue" },
		{ "VrNumItems.Name", "EOvrLogEventParameter::VrNumItems" },
		{ "VrOrderId.Name", "EOvrLogEventParameter::VrOrderId" },
		{ "VrPaymentInfoAvailable.Name", "EOvrLogEventParameter::VrPaymentInfoAvailable" },
		{ "VrPushAction.Name", "EOvrLogEventParameter::VrPushAction" },
		{ "VrPushCampaign.Name", "EOvrLogEventParameter::VrPushCampaign" },
		{ "VrRegistrationMethod.Name", "EOvrLogEventParameter::VrRegistrationMethod" },
		{ "VrSearchString.Name", "EOvrLogEventParameter::VrSearchString" },
		{ "VrSuccess.Name", "EOvrLogEventParameter::VrSuccess" },
		{ "VrTransactionDate.Name", "EOvrLogEventParameter::VrTransactionDate" },
		{ "VrTransactionId.Name", "EOvrLogEventParameter::VrTransactionId" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLogEventParameter::Unknown", (int64)EOvrLogEventParameter::Unknown },
		{ "EOvrLogEventParameter::VrCurrency", (int64)EOvrLogEventParameter::VrCurrency },
		{ "EOvrLogEventParameter::VrRegistrationMethod", (int64)EOvrLogEventParameter::VrRegistrationMethod },
		{ "EOvrLogEventParameter::VrContentType", (int64)EOvrLogEventParameter::VrContentType },
		{ "EOvrLogEventParameter::VrContent", (int64)EOvrLogEventParameter::VrContent },
		{ "EOvrLogEventParameter::VrContentId", (int64)EOvrLogEventParameter::VrContentId },
		{ "EOvrLogEventParameter::VrSearchString", (int64)EOvrLogEventParameter::VrSearchString },
		{ "EOvrLogEventParameter::VrSuccess", (int64)EOvrLogEventParameter::VrSuccess },
		{ "EOvrLogEventParameter::VrMaxRatingValue", (int64)EOvrLogEventParameter::VrMaxRatingValue },
		{ "EOvrLogEventParameter::VrPaymentInfoAvailable", (int64)EOvrLogEventParameter::VrPaymentInfoAvailable },
		{ "EOvrLogEventParameter::VrNumItems", (int64)EOvrLogEventParameter::VrNumItems },
		{ "EOvrLogEventParameter::VrLevel", (int64)EOvrLogEventParameter::VrLevel },
		{ "EOvrLogEventParameter::VrDescription", (int64)EOvrLogEventParameter::VrDescription },
		{ "EOvrLogEventParameter::AdType", (int64)EOvrLogEventParameter::AdType },
		{ "EOvrLogEventParameter::VrOrderId", (int64)EOvrLogEventParameter::VrOrderId },
		{ "EOvrLogEventParameter::EventName", (int64)EOvrLogEventParameter::EventName },
		{ "EOvrLogEventParameter::LogTime", (int64)EOvrLogEventParameter::LogTime },
		{ "EOvrLogEventParameter::ImplicitlyLogged", (int64)EOvrLogEventParameter::ImplicitlyLogged },
		{ "EOvrLogEventParameter::InBackground", (int64)EOvrLogEventParameter::InBackground },
		{ "EOvrLogEventParameter::VrPushCampaign", (int64)EOvrLogEventParameter::VrPushCampaign },
		{ "EOvrLogEventParameter::VrPushAction", (int64)EOvrLogEventParameter::VrPushAction },
		{ "EOvrLogEventParameter::VrIapProductType", (int64)EOvrLogEventParameter::VrIapProductType },
		{ "EOvrLogEventParameter::VrContentTitle", (int64)EOvrLogEventParameter::VrContentTitle },
		{ "EOvrLogEventParameter::VrTransactionId", (int64)EOvrLogEventParameter::VrTransactionId },
		{ "EOvrLogEventParameter::VrTransactionDate", (int64)EOvrLogEventParameter::VrTransactionDate },
		{ "EOvrLogEventParameter::VrIapSubsPeriod", (int64)EOvrLogEventParameter::VrIapSubsPeriod },
		{ "EOvrLogEventParameter::VrIapIsStartTrial", (int64)EOvrLogEventParameter::VrIapIsStartTrial },
		{ "EOvrLogEventParameter::VrIapHasFreeTrial", (int64)EOvrLogEventParameter::VrIapHasFreeTrial },
		{ "EOvrLogEventParameter::VrIapTrialPeriod", (int64)EOvrLogEventParameter::VrIapTrialPeriod },
		{ "EOvrLogEventParameter::VrIapTrialPrice", (int64)EOvrLogEventParameter::VrIapTrialPrice },
		{ "EOvrLogEventParameter::SessionId", (int64)EOvrLogEventParameter::SessionId },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLogEventParameter",
	"EOvrLogEventParameter",
	Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLogEventParameter.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLogEventParameter.InnerSingleton;
}
// End Enum EOvrLogEventParameter

// Begin Enum EOvrMediaContentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrMediaContentType;
static UEnum* EOvrMediaContentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrMediaContentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrMediaContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrMediaContentType"));
	}
	return Z_Registration_Info_UEnum_EOvrMediaContentType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrMediaContentType>()
{
	return EOvrMediaContentType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MediaContentType enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Photo.Name", "EOvrMediaContentType::Photo" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MediaContentType enumeration." },
#endif
		{ "Unknown.Name", "EOvrMediaContentType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrMediaContentType::Unknown", (int64)EOvrMediaContentType::Unknown },
		{ "EOvrMediaContentType::Photo", (int64)EOvrMediaContentType::Photo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrMediaContentType",
	"EOvrMediaContentType",
	Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType()
{
	if (!Z_Registration_Info_UEnum_EOvrMediaContentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrMediaContentType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrMediaContentType.InnerSingleton;
}
// End Enum EOvrMediaContentType

// Begin Enum EOvrMultiplayerErrorErrorKey
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey;
static UEnum* EOvrMultiplayerErrorErrorKey_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrMultiplayerErrorErrorKey"));
	}
	return Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrMultiplayerErrorErrorKey>()
{
	return EOvrMultiplayerErrorErrorKey_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MultiplayerErrorErrorKey enumeration. */" },
#endif
		{ "DestinationUnavailable.Name", "EOvrMultiplayerErrorErrorKey::DestinationUnavailable" },
		{ "DlcRequired.Name", "EOvrMultiplayerErrorErrorKey::DlcRequired" },
		{ "General.Name", "EOvrMultiplayerErrorErrorKey::General" },
		{ "GroupFull.Name", "EOvrMultiplayerErrorErrorKey::GroupFull" },
		{ "InviterNotJoinable.Name", "EOvrMultiplayerErrorErrorKey::InviterNotJoinable" },
		{ "LevelNotHighEnough.Name", "EOvrMultiplayerErrorErrorKey::LevelNotHighEnough" },
		{ "LevelNotUnlocked.Name", "EOvrMultiplayerErrorErrorKey::LevelNotUnlocked" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NetworkTimeout.Name", "EOvrMultiplayerErrorErrorKey::NetworkTimeout" },
		{ "NoLongerAvailable.Name", "EOvrMultiplayerErrorErrorKey::NoLongerAvailable" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MultiplayerErrorErrorKey enumeration." },
#endif
		{ "TutorialRequired.Name", "EOvrMultiplayerErrorErrorKey::TutorialRequired" },
		{ "Unknown.Name", "EOvrMultiplayerErrorErrorKey::Unknown" },
		{ "UpdateRequired.Name", "EOvrMultiplayerErrorErrorKey::UpdateRequired" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrMultiplayerErrorErrorKey::Unknown", (int64)EOvrMultiplayerErrorErrorKey::Unknown },
		{ "EOvrMultiplayerErrorErrorKey::DestinationUnavailable", (int64)EOvrMultiplayerErrorErrorKey::DestinationUnavailable },
		{ "EOvrMultiplayerErrorErrorKey::DlcRequired", (int64)EOvrMultiplayerErrorErrorKey::DlcRequired },
		{ "EOvrMultiplayerErrorErrorKey::General", (int64)EOvrMultiplayerErrorErrorKey::General },
		{ "EOvrMultiplayerErrorErrorKey::GroupFull", (int64)EOvrMultiplayerErrorErrorKey::GroupFull },
		{ "EOvrMultiplayerErrorErrorKey::InviterNotJoinable", (int64)EOvrMultiplayerErrorErrorKey::InviterNotJoinable },
		{ "EOvrMultiplayerErrorErrorKey::LevelNotHighEnough", (int64)EOvrMultiplayerErrorErrorKey::LevelNotHighEnough },
		{ "EOvrMultiplayerErrorErrorKey::LevelNotUnlocked", (int64)EOvrMultiplayerErrorErrorKey::LevelNotUnlocked },
		{ "EOvrMultiplayerErrorErrorKey::NetworkTimeout", (int64)EOvrMultiplayerErrorErrorKey::NetworkTimeout },
		{ "EOvrMultiplayerErrorErrorKey::NoLongerAvailable", (int64)EOvrMultiplayerErrorErrorKey::NoLongerAvailable },
		{ "EOvrMultiplayerErrorErrorKey::UpdateRequired", (int64)EOvrMultiplayerErrorErrorKey::UpdateRequired },
		{ "EOvrMultiplayerErrorErrorKey::TutorialRequired", (int64)EOvrMultiplayerErrorErrorKey::TutorialRequired },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrMultiplayerErrorErrorKey",
	"EOvrMultiplayerErrorErrorKey",
	Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey()
{
	if (!Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.InnerSingleton;
}
// End Enum EOvrMultiplayerErrorErrorKey

// Begin Enum EOvrNetSyncConnectionStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus;
static UEnum* EOvrNetSyncConnectionStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncConnectionStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncConnectionStatus>()
{
	return EOvrNetSyncConnectionStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NetSyncConnectionStatus enumeration. */" },
#endif
		{ "Connected.Name", "EOvrNetSyncConnectionStatus::Connected" },
		{ "Connecting.Name", "EOvrNetSyncConnectionStatus::Connecting" },
		{ "Disconnected.Name", "EOvrNetSyncConnectionStatus::Disconnected" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NetSyncConnectionStatus enumeration." },
#endif
		{ "Unknown.Name", "EOvrNetSyncConnectionStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncConnectionStatus::Unknown", (int64)EOvrNetSyncConnectionStatus::Unknown },
		{ "EOvrNetSyncConnectionStatus::Connecting", (int64)EOvrNetSyncConnectionStatus::Connecting },
		{ "EOvrNetSyncConnectionStatus::Disconnected", (int64)EOvrNetSyncConnectionStatus::Disconnected },
		{ "EOvrNetSyncConnectionStatus::Connected", (int64)EOvrNetSyncConnectionStatus::Connected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncConnectionStatus",
	"EOvrNetSyncConnectionStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.InnerSingleton;
}
// End Enum EOvrNetSyncConnectionStatus

// Begin Enum EOvrNetSyncDisconnectReason
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason;
static UEnum* EOvrNetSyncDisconnectReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncDisconnectReason"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncDisconnectReason>()
{
	return EOvrNetSyncDisconnectReason_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NetSyncDisconnectReason enumeration. */" },
#endif
		{ "Failed.Comment", "/** initial connection never succeeded */" },
		{ "Failed.Name", "EOvrNetSyncDisconnectReason::Failed" },
		{ "Failed.ToolTip", "initial connection never succeeded" },
		{ "LocalTerminated.Comment", "/** when disconnect was requested */" },
		{ "LocalTerminated.Name", "EOvrNetSyncDisconnectReason::LocalTerminated" },
		{ "LocalTerminated.ToolTip", "when disconnect was requested" },
		{ "Lost.Comment", "/** network timeout */" },
		{ "Lost.Name", "EOvrNetSyncDisconnectReason::Lost" },
		{ "Lost.ToolTip", "network timeout" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ServerTerminated.Comment", "/** server intentionally closed the connection */" },
		{ "ServerTerminated.Name", "EOvrNetSyncDisconnectReason::ServerTerminated" },
		{ "ServerTerminated.ToolTip", "server intentionally closed the connection" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NetSyncDisconnectReason enumeration." },
#endif
		{ "Unknown.Name", "EOvrNetSyncDisconnectReason::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncDisconnectReason::Unknown", (int64)EOvrNetSyncDisconnectReason::Unknown },
		{ "EOvrNetSyncDisconnectReason::LocalTerminated", (int64)EOvrNetSyncDisconnectReason::LocalTerminated },
		{ "EOvrNetSyncDisconnectReason::ServerTerminated", (int64)EOvrNetSyncDisconnectReason::ServerTerminated },
		{ "EOvrNetSyncDisconnectReason::Failed", (int64)EOvrNetSyncDisconnectReason::Failed },
		{ "EOvrNetSyncDisconnectReason::Lost", (int64)EOvrNetSyncDisconnectReason::Lost },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncDisconnectReason",
	"EOvrNetSyncDisconnectReason",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.InnerSingleton;
}
// End Enum EOvrNetSyncDisconnectReason

// Begin Enum EOvrNetSyncVoipMicSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource;
static UEnum* EOvrNetSyncVoipMicSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncVoipMicSource"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncVoipMicSource>()
{
	return EOvrNetSyncVoipMicSource_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NetSyncVoipMicSource enumeration. */" },
#endif
		{ "Internal.Name", "EOvrNetSyncVoipMicSource::Internal" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Name", "EOvrNetSyncVoipMicSource::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NetSyncVoipMicSource enumeration." },
#endif
		{ "Unknown.Name", "EOvrNetSyncVoipMicSource::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncVoipMicSource::Unknown", (int64)EOvrNetSyncVoipMicSource::Unknown },
		{ "EOvrNetSyncVoipMicSource::None", (int64)EOvrNetSyncVoipMicSource::None },
		{ "EOvrNetSyncVoipMicSource::Internal", (int64)EOvrNetSyncVoipMicSource::Internal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncVoipMicSource",
	"EOvrNetSyncVoipMicSource",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.InnerSingleton;
}
// End Enum EOvrNetSyncVoipMicSource

// Begin Enum EOvrNetSyncVoipStreamMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode;
static UEnum* EOvrNetSyncVoipStreamMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncVoipStreamMode"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncVoipStreamMode>()
{
	return EOvrNetSyncVoipStreamMode_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambisonic.Name", "EOvrNetSyncVoipStreamMode::Ambisonic" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NetSyncVoipStreamMode enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Mono.Name", "EOvrNetSyncVoipStreamMode::Mono" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NetSyncVoipStreamMode enumeration." },
#endif
		{ "Unknown.Name", "EOvrNetSyncVoipStreamMode::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncVoipStreamMode::Unknown", (int64)EOvrNetSyncVoipStreamMode::Unknown },
		{ "EOvrNetSyncVoipStreamMode::Ambisonic", (int64)EOvrNetSyncVoipStreamMode::Ambisonic },
		{ "EOvrNetSyncVoipStreamMode::Mono", (int64)EOvrNetSyncVoipStreamMode::Mono },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncVoipStreamMode",
	"EOvrNetSyncVoipStreamMode",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.InnerSingleton;
}
// End Enum EOvrNetSyncVoipStreamMode

// Begin Enum EOvrPartyUpdateAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrPartyUpdateAction;
static UEnum* EOvrPartyUpdateAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrPartyUpdateAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrPartyUpdateAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrPartyUpdateAction"));
	}
	return Z_Registration_Info_UEnum_EOvrPartyUpdateAction.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPartyUpdateAction>()
{
	return EOvrPartyUpdateAction_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PartyUpdateAction enumeration. */" },
#endif
		{ "Invite.Name", "EOvrPartyUpdateAction::Invite" },
		{ "Join.Name", "EOvrPartyUpdateAction::Join" },
		{ "Leave.Name", "EOvrPartyUpdateAction::Leave" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PartyUpdateAction enumeration." },
#endif
		{ "Uninvite.Name", "EOvrPartyUpdateAction::Uninvite" },
		{ "Unknown.Name", "EOvrPartyUpdateAction::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrPartyUpdateAction::Unknown", (int64)EOvrPartyUpdateAction::Unknown },
		{ "EOvrPartyUpdateAction::Join", (int64)EOvrPartyUpdateAction::Join },
		{ "EOvrPartyUpdateAction::Leave", (int64)EOvrPartyUpdateAction::Leave },
		{ "EOvrPartyUpdateAction::Invite", (int64)EOvrPartyUpdateAction::Invite },
		{ "EOvrPartyUpdateAction::Uninvite", (int64)EOvrPartyUpdateAction::Uninvite },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrPartyUpdateAction",
	"EOvrPartyUpdateAction",
	Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction()
{
	if (!Z_Registration_Info_UEnum_EOvrPartyUpdateAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrPartyUpdateAction.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrPartyUpdateAction.InnerSingleton;
}
// End Enum EOvrPartyUpdateAction

// Begin Enum EOvrPermissionGrantStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrPermissionGrantStatus;
static UEnum* EOvrPermissionGrantStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrPermissionGrantStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPermissionGrantStatus>()
{
	return EOvrPermissionGrantStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blocked.Name", "EOvrPermissionGrantStatus::Blocked" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PermissionGrantStatus enumeration. */" },
#endif
		{ "Denied.Name", "EOvrPermissionGrantStatus::Denied" },
		{ "Granted.Name", "EOvrPermissionGrantStatus::Granted" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PermissionGrantStatus enumeration." },
#endif
		{ "Unknown.Name", "EOvrPermissionGrantStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrPermissionGrantStatus::Unknown", (int64)EOvrPermissionGrantStatus::Unknown },
		{ "EOvrPermissionGrantStatus::Granted", (int64)EOvrPermissionGrantStatus::Granted },
		{ "EOvrPermissionGrantStatus::Denied", (int64)EOvrPermissionGrantStatus::Denied },
		{ "EOvrPermissionGrantStatus::Blocked", (int64)EOvrPermissionGrantStatus::Blocked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrPermissionGrantStatus",
	"EOvrPermissionGrantStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.InnerSingleton;
}
// End Enum EOvrPermissionGrantStatus

// Begin Enum EOvrPlatformInitializeResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrPlatformInitializeResult;
static UEnum* EOvrPlatformInitializeResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrPlatformInitializeResult"));
	}
	return Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPlatformInitializeResult>()
{
	return EOvrPlatformInitializeResult_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Describes the various results possible when attempting to initialize the platform.\n * Anything other than ovrPlatformInitialize_Success should be considered a fatal error\n * with respect to using the platform, as the platform is not guaranteed to be legitimate\n * or work correctly.\n */" },
#endif
		{ "FileInvalid.Comment", "/** Oculus Platform SDK files failed to load. */" },
		{ "FileInvalid.Name", "EOvrPlatformInitializeResult::FileInvalid" },
		{ "FileInvalid.ToolTip", "Oculus Platform SDK files failed to load." },
		{ "InvalidCredentials.Comment", "/** Oculus Platform SDK failed to initialize because the Oculus user had an invalid account access token. */" },
		{ "InvalidCredentials.Name", "EOvrPlatformInitializeResult::InvalidCredentials" },
		{ "InvalidCredentials.ToolTip", "Oculus Platform SDK failed to initialize because the Oculus user had an invalid account access token." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NotEntitled.Comment", "/** Oculus Platform SDK failed to initialize because the Oculus user does not have the application entitlement. */" },
		{ "NotEntitled.Name", "EOvrPlatformInitializeResult::NotEntitled" },
		{ "NotEntitled.ToolTip", "Oculus Platform SDK failed to initialize because the Oculus user does not have the application entitlement." },
		{ "PreLoaded.Comment", "/** Oculus Platform SDK failed to initialize because the pre-loaded module was on a different path than the validated library. */" },
		{ "PreLoaded.Name", "EOvrPlatformInitializeResult::PreLoaded" },
		{ "PreLoaded.ToolTip", "Oculus Platform SDK failed to initialize because the pre-loaded module was on a different path than the validated library." },
		{ "SignatureInvalid.Comment", "/** Oculus Platform SDK failed to initialize due to an invalid signature in the signed certificate. */" },
		{ "SignatureInvalid.Name", "EOvrPlatformInitializeResult::SignatureInvalid" },
		{ "SignatureInvalid.ToolTip", "Oculus Platform SDK failed to initialize due to an invalid signature in the signed certificate." },
		{ "Success.Comment", "/** Oculus Platform SDK initialization succeeded. */" },
		{ "Success.Name", "EOvrPlatformInitializeResult::Success" },
		{ "Success.ToolTip", "Oculus Platform SDK initialization succeeded." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes the various results possible when attempting to initialize the platform.\nAnything other than ovrPlatformInitialize_Success should be considered a fatal error\nwith respect to using the platform, as the platform is not guaranteed to be legitimate\nor work correctly." },
#endif
		{ "UnableToVerify.Comment", "/** Oculus Platform SDK failed to verify the application's signature during initialization */" },
		{ "UnableToVerify.Name", "EOvrPlatformInitializeResult::UnableToVerify" },
		{ "UnableToVerify.ToolTip", "Oculus Platform SDK failed to verify the application's signature during initialization" },
		{ "Uninitialized.Comment", "/** Oculus Platform SDK was not initialized. */" },
		{ "Uninitialized.Name", "EOvrPlatformInitializeResult::Uninitialized" },
		{ "Uninitialized.ToolTip", "Oculus Platform SDK was not initialized." },
		{ "Unknown.Name", "EOvrPlatformInitializeResult::Unknown" },
		{ "VersionMismatch.Comment", "/** There was a mismatch between the version of Oculus Platform SDK used by the application and the version installed on the Oculus user's device. */" },
		{ "VersionMismatch.Name", "EOvrPlatformInitializeResult::VersionMismatch" },
		{ "VersionMismatch.ToolTip", "There was a mismatch between the version of Oculus Platform SDK used by the application and the version installed on the Oculus user's device." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrPlatformInitializeResult::Success", (int64)EOvrPlatformInitializeResult::Success },
		{ "EOvrPlatformInitializeResult::Uninitialized", (int64)EOvrPlatformInitializeResult::Uninitialized },
		{ "EOvrPlatformInitializeResult::PreLoaded", (int64)EOvrPlatformInitializeResult::PreLoaded },
		{ "EOvrPlatformInitializeResult::FileInvalid", (int64)EOvrPlatformInitializeResult::FileInvalid },
		{ "EOvrPlatformInitializeResult::SignatureInvalid", (int64)EOvrPlatformInitializeResult::SignatureInvalid },
		{ "EOvrPlatformInitializeResult::UnableToVerify", (int64)EOvrPlatformInitializeResult::UnableToVerify },
		{ "EOvrPlatformInitializeResult::VersionMismatch", (int64)EOvrPlatformInitializeResult::VersionMismatch },
		{ "EOvrPlatformInitializeResult::Unknown", (int64)EOvrPlatformInitializeResult::Unknown },
		{ "EOvrPlatformInitializeResult::InvalidCredentials", (int64)EOvrPlatformInitializeResult::InvalidCredentials },
		{ "EOvrPlatformInitializeResult::NotEntitled", (int64)EOvrPlatformInitializeResult::NotEntitled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrPlatformInitializeResult",
	"EOvrPlatformInitializeResult",
	Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult()
{
	if (!Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.InnerSingleton;
}
// End Enum EOvrPlatformInitializeResult

// Begin Enum EOvrReportRequestResponse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrReportRequestResponse;
static UEnum* EOvrReportRequestResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrReportRequestResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrReportRequestResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrReportRequestResponse"));
	}
	return Z_Registration_Info_UEnum_EOvrReportRequestResponse.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrReportRequestResponse>()
{
	return EOvrReportRequestResponse_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Possible states that an app can respond to the platform notification that the in-app reporting flow has been requested by the user. */" },
#endif
		{ "Handled.Comment", "/** Response to the platform notification that the in-app reporting flow request is handled. */" },
		{ "Handled.Name", "EOvrReportRequestResponse::Handled" },
		{ "Handled.ToolTip", "Response to the platform notification that the in-app reporting flow request is handled." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible states that an app can respond to the platform notification that the in-app reporting flow has been requested by the user." },
#endif
		{ "Unavailable.Comment", "/** Response to the platform notification that the in-app reporting flow is unavailable or non-existent. */" },
		{ "Unavailable.Name", "EOvrReportRequestResponse::Unavailable" },
		{ "Unavailable.ToolTip", "Response to the platform notification that the in-app reporting flow is unavailable or non-existent." },
		{ "Unhandled.Comment", "/** Response to the platform notification that the in-app reporting flow request is not handled. */" },
		{ "Unhandled.Name", "EOvrReportRequestResponse::Unhandled" },
		{ "Unhandled.ToolTip", "Response to the platform notification that the in-app reporting flow request is not handled." },
		{ "Unknown.Name", "EOvrReportRequestResponse::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrReportRequestResponse::Unknown", (int64)EOvrReportRequestResponse::Unknown },
		{ "EOvrReportRequestResponse::Handled", (int64)EOvrReportRequestResponse::Handled },
		{ "EOvrReportRequestResponse::Unhandled", (int64)EOvrReportRequestResponse::Unhandled },
		{ "EOvrReportRequestResponse::Unavailable", (int64)EOvrReportRequestResponse::Unavailable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrReportRequestResponse",
	"EOvrReportRequestResponse",
	Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse()
{
	if (!Z_Registration_Info_UEnum_EOvrReportRequestResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrReportRequestResponse.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrReportRequestResponse.InnerSingleton;
}
// End Enum EOvrReportRequestResponse

// Begin Enum EOvrRichPresenceExtraContext
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext;
static UEnum* EOvrRichPresenceExtraContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrRichPresenceExtraContext"));
	}
	return Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrRichPresenceExtraContext>()
{
	return EOvrRichPresenceExtraContext_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Display extra information about the user's presence */" },
#endif
		{ "CurrentCapacity.Comment", "/** Display the current amount with the user over the max */" },
		{ "CurrentCapacity.Name", "EOvrRichPresenceExtraContext::CurrentCapacity" },
		{ "CurrentCapacity.ToolTip", "Display the current amount with the user over the max" },
		{ "EndingIn.Comment", "/** Display how soon the match/game/race/etc will end */" },
		{ "EndingIn.Name", "EOvrRichPresenceExtraContext::EndingIn" },
		{ "EndingIn.ToolTip", "Display how soon the match/game/race/etc will end" },
		{ "LookingForAMatch.Comment", "/** Display that this user is looking for a match */" },
		{ "LookingForAMatch.Name", "EOvrRichPresenceExtraContext::LookingForAMatch" },
		{ "LookingForAMatch.ToolTip", "Display that this user is looking for a match" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Comment", "/** Display nothing */" },
		{ "None.Name", "EOvrRichPresenceExtraContext::None" },
		{ "None.ToolTip", "Display nothing" },
		{ "StartedAgo.Comment", "/** Display how long ago the match/game/race/etc started */" },
		{ "StartedAgo.Name", "EOvrRichPresenceExtraContext::StartedAgo" },
		{ "StartedAgo.ToolTip", "Display how long ago the match/game/race/etc started" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display extra information about the user's presence" },
#endif
		{ "Unknown.Name", "EOvrRichPresenceExtraContext::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrRichPresenceExtraContext::Unknown", (int64)EOvrRichPresenceExtraContext::Unknown },
		{ "EOvrRichPresenceExtraContext::None", (int64)EOvrRichPresenceExtraContext::None },
		{ "EOvrRichPresenceExtraContext::CurrentCapacity", (int64)EOvrRichPresenceExtraContext::CurrentCapacity },
		{ "EOvrRichPresenceExtraContext::StartedAgo", (int64)EOvrRichPresenceExtraContext::StartedAgo },
		{ "EOvrRichPresenceExtraContext::EndingIn", (int64)EOvrRichPresenceExtraContext::EndingIn },
		{ "EOvrRichPresenceExtraContext::LookingForAMatch", (int64)EOvrRichPresenceExtraContext::LookingForAMatch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrRichPresenceExtraContext",
	"EOvrRichPresenceExtraContext",
	Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext()
{
	if (!Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.InnerSingleton;
}
// End Enum EOvrRichPresenceExtraContext

// Begin Enum EOvrSdkAccountType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrSdkAccountType;
static UEnum* EOvrSdkAccountType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrSdkAccountType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrSdkAccountType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrSdkAccountType"));
	}
	return Z_Registration_Info_UEnum_EOvrSdkAccountType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrSdkAccountType>()
{
	return EOvrSdkAccountType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** SdkAccountType enumeration. */" },
#endif
		{ "FacebookGameroom.Name", "EOvrSdkAccountType::FacebookGameroom" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Oculus.Name", "EOvrSdkAccountType::Oculus" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SdkAccountType enumeration." },
#endif
		{ "Unknown.Name", "EOvrSdkAccountType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrSdkAccountType::Unknown", (int64)EOvrSdkAccountType::Unknown },
		{ "EOvrSdkAccountType::Oculus", (int64)EOvrSdkAccountType::Oculus },
		{ "EOvrSdkAccountType::FacebookGameroom", (int64)EOvrSdkAccountType::FacebookGameroom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrSdkAccountType",
	"EOvrSdkAccountType",
	Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType()
{
	if (!Z_Registration_Info_UEnum_EOvrSdkAccountType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrSdkAccountType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrSdkAccountType.InnerSingleton;
}
// End Enum EOvrSdkAccountType

// Begin Enum EOvrServiceProvider
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrServiceProvider;
static UEnum* EOvrServiceProvider_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrServiceProvider.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrServiceProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrServiceProvider"));
	}
	return Z_Registration_Info_UEnum_EOvrServiceProvider.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrServiceProvider>()
{
	return EOvrServiceProvider_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ServiceProvider enumeration. */" },
#endif
		{ "Dropbox.Name", "EOvrServiceProvider::Dropbox" },
		{ "Facebook.Name", "EOvrServiceProvider::Facebook" },
		{ "Google.Name", "EOvrServiceProvider::Google" },
		{ "Instagram.Name", "EOvrServiceProvider::Instagram" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "RemoteMedia.Name", "EOvrServiceProvider::RemoteMedia" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ServiceProvider enumeration." },
#endif
		{ "Unknown.Name", "EOvrServiceProvider::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrServiceProvider::Unknown", (int64)EOvrServiceProvider::Unknown },
		{ "EOvrServiceProvider::Dropbox", (int64)EOvrServiceProvider::Dropbox },
		{ "EOvrServiceProvider::Facebook", (int64)EOvrServiceProvider::Facebook },
		{ "EOvrServiceProvider::Google", (int64)EOvrServiceProvider::Google },
		{ "EOvrServiceProvider::Instagram", (int64)EOvrServiceProvider::Instagram },
		{ "EOvrServiceProvider::RemoteMedia", (int64)EOvrServiceProvider::RemoteMedia },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrServiceProvider",
	"EOvrServiceProvider",
	Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider()
{
	if (!Z_Registration_Info_UEnum_EOvrServiceProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrServiceProvider.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrServiceProvider.InnerSingleton;
}
// End Enum EOvrServiceProvider

// Begin Enum EOvrShareMediaStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrShareMediaStatus;
static UEnum* EOvrShareMediaStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrShareMediaStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrShareMediaStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrShareMediaStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrShareMediaStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrShareMediaStatus>()
{
	return EOvrShareMediaStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Canceled.Name", "EOvrShareMediaStatus::Canceled" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ShareMediaStatus enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Shared.Name", "EOvrShareMediaStatus::Shared" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ShareMediaStatus enumeration." },
#endif
		{ "Unknown.Name", "EOvrShareMediaStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrShareMediaStatus::Unknown", (int64)EOvrShareMediaStatus::Unknown },
		{ "EOvrShareMediaStatus::Shared", (int64)EOvrShareMediaStatus::Shared },
		{ "EOvrShareMediaStatus::Canceled", (int64)EOvrShareMediaStatus::Canceled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrShareMediaStatus",
	"EOvrShareMediaStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrShareMediaStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrShareMediaStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrShareMediaStatus.InnerSingleton;
}
// End Enum EOvrShareMediaStatus

// Begin Enum EOvrSystemVoipStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrSystemVoipStatus;
static UEnum* EOvrSystemVoipStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrSystemVoipStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrSystemVoipStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrSystemVoipStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrSystemVoipStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrSystemVoipStatus>()
{
	return EOvrSystemVoipStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Name", "EOvrSystemVoipStatus::Active" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** SystemVoipStatus enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Suppressed.Name", "EOvrSystemVoipStatus::Suppressed" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SystemVoipStatus enumeration." },
#endif
		{ "Unavailable.Name", "EOvrSystemVoipStatus::Unavailable" },
		{ "Unknown.Name", "EOvrSystemVoipStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrSystemVoipStatus::Unknown", (int64)EOvrSystemVoipStatus::Unknown },
		{ "EOvrSystemVoipStatus::Unavailable", (int64)EOvrSystemVoipStatus::Unavailable },
		{ "EOvrSystemVoipStatus::Suppressed", (int64)EOvrSystemVoipStatus::Suppressed },
		{ "EOvrSystemVoipStatus::Active", (int64)EOvrSystemVoipStatus::Active },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrSystemVoipStatus",
	"EOvrSystemVoipStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrSystemVoipStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrSystemVoipStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrSystemVoipStatus.InnerSingleton;
}
// End Enum EOvrSystemVoipStatus

// Begin Enum EOvrTimeWindow
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrTimeWindow;
static UEnum* EOvrTimeWindow_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrTimeWindow.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrTimeWindow.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrTimeWindow"));
	}
	return Z_Registration_Info_UEnum_EOvrTimeWindow.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrTimeWindow>()
{
	return EOvrTimeWindow_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far should we go back in time looking at history?  This is used in some requests such as User_GetLoggedInUserRecentlyMetUsersAndRooms() */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NinetyDays.Name", "EOvrTimeWindow::NinetyDays" },
		{ "OneDay.Name", "EOvrTimeWindow::OneDay" },
		{ "OneHour.Name", "EOvrTimeWindow::OneHour" },
		{ "OneWeek.Name", "EOvrTimeWindow::OneWeek" },
		{ "ThirtyDays.Name", "EOvrTimeWindow::ThirtyDays" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far should we go back in time looking at history?  This is used in some requests such as User_GetLoggedInUserRecentlyMetUsersAndRooms()" },
#endif
		{ "Unknown.Name", "EOvrTimeWindow::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrTimeWindow::Unknown", (int64)EOvrTimeWindow::Unknown },
		{ "EOvrTimeWindow::OneHour", (int64)EOvrTimeWindow::OneHour },
		{ "EOvrTimeWindow::OneDay", (int64)EOvrTimeWindow::OneDay },
		{ "EOvrTimeWindow::OneWeek", (int64)EOvrTimeWindow::OneWeek },
		{ "EOvrTimeWindow::ThirtyDays", (int64)EOvrTimeWindow::ThirtyDays },
		{ "EOvrTimeWindow::NinetyDays", (int64)EOvrTimeWindow::NinetyDays },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrTimeWindow",
	"EOvrTimeWindow",
	Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow()
{
	if (!Z_Registration_Info_UEnum_EOvrTimeWindow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrTimeWindow.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrTimeWindow.InnerSingleton;
}
// End Enum EOvrTimeWindow

// Begin Enum EOvrUserOrdering
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrUserOrdering;
static UEnum* EOvrUserOrdering_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrUserOrdering.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrUserOrdering.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrUserOrdering"));
	}
	return Z_Registration_Info_UEnum_EOvrUserOrdering.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrUserOrdering>()
{
	return EOvrUserOrdering_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The ordering that is used when returning a list of users. This is used in\n * some requests such as Room_GetInvitableUsers2()\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Comment", "/** No preference for ordering (could be in any or no order) */" },
		{ "None.Name", "EOvrUserOrdering::None" },
		{ "None.ToolTip", "No preference for ordering (could be in any or no order)" },
		{ "PresenceAlphabetical.Comment", "/**\n     * Orders by online users first and then offline users. Within each group the\n     * users are ordered alphabetically by display name\n     */" },
		{ "PresenceAlphabetical.Name", "EOvrUserOrdering::PresenceAlphabetical" },
		{ "PresenceAlphabetical.ToolTip", "Orders by online users first and then offline users. Within each group the\nusers are ordered alphabetically by display name" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ordering that is used when returning a list of users. This is used in\nsome requests such as Room_GetInvitableUsers2()" },
#endif
		{ "Unknown.Name", "EOvrUserOrdering::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrUserOrdering::Unknown", (int64)EOvrUserOrdering::Unknown },
		{ "EOvrUserOrdering::None", (int64)EOvrUserOrdering::None },
		{ "EOvrUserOrdering::PresenceAlphabetical", (int64)EOvrUserOrdering::PresenceAlphabetical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrUserOrdering",
	"EOvrUserOrdering",
	Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering()
{
	if (!Z_Registration_Info_UEnum_EOvrUserOrdering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrUserOrdering.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrUserOrdering.InnerSingleton;
}
// End Enum EOvrUserOrdering

// Begin Enum EOvrUserPresenceStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrUserPresenceStatus;
static UEnum* EOvrUserPresenceStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrUserPresenceStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrUserPresenceStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrUserPresenceStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrUserPresenceStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrUserPresenceStatus>()
{
	return EOvrUserPresenceStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describe the current status of the user and it can be retrieved with field FOvrUser::PresenceStatus. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Offline.Comment", "/** The user status is currently offline. */" },
		{ "Offline.Name", "EOvrUserPresenceStatus::Offline" },
		{ "Offline.ToolTip", "The user status is currently offline." },
		{ "Online.Comment", "/** The user status is currently online. */" },
		{ "Online.Name", "EOvrUserPresenceStatus::Online" },
		{ "Online.ToolTip", "The user status is currently online." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describe the current status of the user and it can be retrieved with field FOvrUser::PresenceStatus." },
#endif
		{ "Unknown.Name", "EOvrUserPresenceStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrUserPresenceStatus::Unknown", (int64)EOvrUserPresenceStatus::Unknown },
		{ "EOvrUserPresenceStatus::Online", (int64)EOvrUserPresenceStatus::Online },
		{ "EOvrUserPresenceStatus::Offline", (int64)EOvrUserPresenceStatus::Offline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrUserPresenceStatus",
	"EOvrUserPresenceStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrUserPresenceStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrUserPresenceStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrUserPresenceStatus.InnerSingleton;
}
// End Enum EOvrUserPresenceStatus

// Begin Enum EOvrVoipBitrate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipBitrate;
static UEnum* EOvrVoipBitrate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipBitrate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipBitrate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipBitrate"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipBitrate.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipBitrate>()
{
	return EOvrVoipBitrate_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "B128000.Comment", "/**\n     * At this point the audio quality should be preceptually indistinguishable from the uncompressed\n     * input.\n     */" },
		{ "B128000.Name", "EOvrVoipBitrate::B128000" },
		{ "B128000.ToolTip", "At this point the audio quality should be preceptually indistinguishable from the uncompressed\ninput." },
		{ "B16000.Comment", "/**\n     * Very low audio quality for minimal network usage. This may not give the full range of Hz for\n     * audio, but it will save on network usage.\n     */" },
		{ "B16000.Name", "EOvrVoipBitrate::B16000" },
		{ "B16000.ToolTip", "Very low audio quality for minimal network usage. This may not give the full range of Hz for\naudio, but it will save on network usage." },
		{ "B24000.Comment", "/** Lower audio quality but also less network usage. */" },
		{ "B24000.Name", "EOvrVoipBitrate::B24000" },
		{ "B24000.ToolTip", "Lower audio quality but also less network usage." },
		{ "B32000.Comment", "/**\n     * This is the default bitrate for voip connections. It should be the best tradeoff between\n     * audio quality and network usage.\n     */" },
		{ "B32000.Name", "EOvrVoipBitrate::B32000" },
		{ "B32000.ToolTip", "This is the default bitrate for voip connections. It should be the best tradeoff between\naudio quality and network usage." },
		{ "B64000.Comment", "/**\n     * Higher audio quality at the expense of network usage. Good if there's music being streamed\n     * over the connections\n     */" },
		{ "B64000.Name", "EOvrVoipBitrate::B64000" },
		{ "B64000.ToolTip", "Higher audio quality at the expense of network usage. Good if there's music being streamed\nover the connections" },
		{ "B96000.Comment", "/** Even higher audio quality for music streaming or radio-like quality. */" },
		{ "B96000.Name", "EOvrVoipBitrate::B96000" },
		{ "B96000.ToolTip", "Even higher audio quality for music streaming or radio-like quality." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** VoipBitrate enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VoipBitrate enumeration." },
#endif
		{ "Unknown.Name", "EOvrVoipBitrate::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipBitrate::Unknown", (int64)EOvrVoipBitrate::Unknown },
		{ "EOvrVoipBitrate::B16000", (int64)EOvrVoipBitrate::B16000 },
		{ "EOvrVoipBitrate::B24000", (int64)EOvrVoipBitrate::B24000 },
		{ "EOvrVoipBitrate::B32000", (int64)EOvrVoipBitrate::B32000 },
		{ "EOvrVoipBitrate::B64000", (int64)EOvrVoipBitrate::B64000 },
		{ "EOvrVoipBitrate::B96000", (int64)EOvrVoipBitrate::B96000 },
		{ "EOvrVoipBitrate::B128000", (int64)EOvrVoipBitrate::B128000 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipBitrate",
	"EOvrVoipBitrate",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipBitrate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipBitrate.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipBitrate.InnerSingleton;
}
// End Enum EOvrVoipBitrate

// Begin Enum EOvrVoipDtxState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipDtxState;
static UEnum* EOvrVoipDtxState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipDtxState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipDtxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipDtxState"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipDtxState.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipDtxState>()
{
	return EOvrVoipDtxState_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** VoipDtxState enumeration. */" },
#endif
		{ "Disabled.Name", "EOvrVoipDtxState::Disabled" },
		{ "Enabled.Name", "EOvrVoipDtxState::Enabled" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VoipDtxState enumeration." },
#endif
		{ "Unknown.Name", "EOvrVoipDtxState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipDtxState::Unknown", (int64)EOvrVoipDtxState::Unknown },
		{ "EOvrVoipDtxState::Enabled", (int64)EOvrVoipDtxState::Enabled },
		{ "EOvrVoipDtxState::Disabled", (int64)EOvrVoipDtxState::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipDtxState",
	"EOvrVoipDtxState",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipDtxState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipDtxState.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipDtxState.InnerSingleton;
}
// End Enum EOvrVoipDtxState

// Begin Enum EOvrVoipMuteState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipMuteState;
static UEnum* EOvrVoipMuteState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipMuteState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipMuteState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipMuteState"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipMuteState.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipMuteState>()
{
	return EOvrVoipMuteState_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** VoipMuteState enumeration. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Muted.Name", "EOvrVoipMuteState::Muted" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VoipMuteState enumeration." },
#endif
		{ "Unknown.Name", "EOvrVoipMuteState::Unknown" },
		{ "Unmuted.Name", "EOvrVoipMuteState::Unmuted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipMuteState::Unknown", (int64)EOvrVoipMuteState::Unknown },
		{ "EOvrVoipMuteState::Muted", (int64)EOvrVoipMuteState::Muted },
		{ "EOvrVoipMuteState::Unmuted", (int64)EOvrVoipMuteState::Unmuted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipMuteState",
	"EOvrVoipMuteState",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipMuteState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipMuteState.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipMuteState.InnerSingleton;
}
// End Enum EOvrVoipMuteState

// Begin Enum EOvrVoipSampleRate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipSampleRate;
static UEnum* EOvrVoipSampleRate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipSampleRate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipSampleRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipSampleRate"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipSampleRate.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipSampleRate>()
{
	return EOvrVoipSampleRate_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** VoipSampleRate enumeration. */" },
#endif
		{ "HZ24000.Name", "EOvrVoipSampleRate::HZ24000" },
		{ "HZ44100.Name", "EOvrVoipSampleRate::HZ44100" },
		{ "HZ48000.Name", "EOvrVoipSampleRate::HZ48000" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VoipSampleRate enumeration." },
#endif
		{ "Unknown.Name", "EOvrVoipSampleRate::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipSampleRate::Unknown", (int64)EOvrVoipSampleRate::Unknown },
		{ "EOvrVoipSampleRate::HZ24000", (int64)EOvrVoipSampleRate::HZ24000 },
		{ "EOvrVoipSampleRate::HZ44100", (int64)EOvrVoipSampleRate::HZ44100 },
		{ "EOvrVoipSampleRate::HZ48000", (int64)EOvrVoipSampleRate::HZ48000 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipSampleRate",
	"EOvrVoipSampleRate",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipSampleRate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipSampleRate.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipSampleRate.InnerSingleton;
}
// End Enum EOvrVoipSampleRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_MyDiplom_Plugins_Unreal5PlatformSDKPlugin_68_0_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOvrAbuseReportType_StaticEnum, TEXT("EOvrAbuseReportType"), &Z_Registration_Info_UEnum_EOvrAbuseReportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1958280588U) },
		{ EOvrAccountAgeCategory_StaticEnum, TEXT("EOvrAccountAgeCategory"), &Z_Registration_Info_UEnum_EOvrAccountAgeCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 446784253U) },
		{ EOvrAchievementType_StaticEnum, TEXT("EOvrAchievementType"), &Z_Registration_Info_UEnum_EOvrAchievementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 170679441U) },
		{ EOvrAppAgeCategory_StaticEnum, TEXT("EOvrAppAgeCategory"), &Z_Registration_Info_UEnum_EOvrAppAgeCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1138011827U) },
		{ EOvrAppInstallResult_StaticEnum, TEXT("EOvrAppInstallResult"), &Z_Registration_Info_UEnum_EOvrAppInstallResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1049007320U) },
		{ EOvrAppStatus_StaticEnum, TEXT("EOvrAppStatus"), &Z_Registration_Info_UEnum_EOvrAppStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2053443662U) },
		{ EOvrChallengeCreationType_StaticEnum, TEXT("EOvrChallengeCreationType"), &Z_Registration_Info_UEnum_EOvrChallengeCreationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1587589733U) },
		{ EOvrChallengeViewerFilter_StaticEnum, TEXT("EOvrChallengeViewerFilter"), &Z_Registration_Info_UEnum_EOvrChallengeViewerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3527361121U) },
		{ EOvrChallengeVisibility_StaticEnum, TEXT("EOvrChallengeVisibility"), &Z_Registration_Info_UEnum_EOvrChallengeVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3168638026U) },
		{ EOvrKeyValuePairType_StaticEnum, TEXT("EOvrKeyValuePairType"), &Z_Registration_Info_UEnum_EOvrKeyValuePairType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 966523967U) },
		{ EOvrLaunchResult_StaticEnum, TEXT("EOvrLaunchResult"), &Z_Registration_Info_UEnum_EOvrLaunchResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1705447736U) },
		{ EOvrLaunchType_StaticEnum, TEXT("EOvrLaunchType"), &Z_Registration_Info_UEnum_EOvrLaunchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1127099386U) },
		{ EOvrLeaderboardFilterType_StaticEnum, TEXT("EOvrLeaderboardFilterType"), &Z_Registration_Info_UEnum_EOvrLeaderboardFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 465830021U) },
		{ EOvrLeaderboardStartAt_StaticEnum, TEXT("EOvrLeaderboardStartAt"), &Z_Registration_Info_UEnum_EOvrLeaderboardStartAt, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2049568590U) },
		{ EOvrLivestreamingStartStatus_StaticEnum, TEXT("EOvrLivestreamingStartStatus"), &Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4238539381U) },
		{ EOvrLogEventName_StaticEnum, TEXT("EOvrLogEventName"), &Z_Registration_Info_UEnum_EOvrLogEventName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 785766733U) },
		{ EOvrLogEventParameter_StaticEnum, TEXT("EOvrLogEventParameter"), &Z_Registration_Info_UEnum_EOvrLogEventParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1293967866U) },
		{ EOvrMediaContentType_StaticEnum, TEXT("EOvrMediaContentType"), &Z_Registration_Info_UEnum_EOvrMediaContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2685860527U) },
		{ EOvrMultiplayerErrorErrorKey_StaticEnum, TEXT("EOvrMultiplayerErrorErrorKey"), &Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1152551387U) },
		{ EOvrNetSyncConnectionStatus_StaticEnum, TEXT("EOvrNetSyncConnectionStatus"), &Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1450065279U) },
		{ EOvrNetSyncDisconnectReason_StaticEnum, TEXT("EOvrNetSyncDisconnectReason"), &Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1886285888U) },
		{ EOvrNetSyncVoipMicSource_StaticEnum, TEXT("EOvrNetSyncVoipMicSource"), &Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 975451768U) },
		{ EOvrNetSyncVoipStreamMode_StaticEnum, TEXT("EOvrNetSyncVoipStreamMode"), &Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 937803453U) },
		{ EOvrPartyUpdateAction_StaticEnum, TEXT("EOvrPartyUpdateAction"), &Z_Registration_Info_UEnum_EOvrPartyUpdateAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3438522318U) },
		{ EOvrPermissionGrantStatus_StaticEnum, TEXT("EOvrPermissionGrantStatus"), &Z_Registration_Info_UEnum_EOvrPermissionGrantStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1357310906U) },
		{ EOvrPlatformInitializeResult_StaticEnum, TEXT("EOvrPlatformInitializeResult"), &Z_Registration_Info_UEnum_EOvrPlatformInitializeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 811045167U) },
		{ EOvrReportRequestResponse_StaticEnum, TEXT("EOvrReportRequestResponse"), &Z_Registration_Info_UEnum_EOvrReportRequestResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 596698404U) },
		{ EOvrRichPresenceExtraContext_StaticEnum, TEXT("EOvrRichPresenceExtraContext"), &Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2327457601U) },
		{ EOvrSdkAccountType_StaticEnum, TEXT("EOvrSdkAccountType"), &Z_Registration_Info_UEnum_EOvrSdkAccountType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 617270448U) },
		{ EOvrServiceProvider_StaticEnum, TEXT("EOvrServiceProvider"), &Z_Registration_Info_UEnum_EOvrServiceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 931850489U) },
		{ EOvrShareMediaStatus_StaticEnum, TEXT("EOvrShareMediaStatus"), &Z_Registration_Info_UEnum_EOvrShareMediaStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3659505822U) },
		{ EOvrSystemVoipStatus_StaticEnum, TEXT("EOvrSystemVoipStatus"), &Z_Registration_Info_UEnum_EOvrSystemVoipStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3340143814U) },
		{ EOvrTimeWindow_StaticEnum, TEXT("EOvrTimeWindow"), &Z_Registration_Info_UEnum_EOvrTimeWindow, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 985912314U) },
		{ EOvrUserOrdering_StaticEnum, TEXT("EOvrUserOrdering"), &Z_Registration_Info_UEnum_EOvrUserOrdering, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1072080680U) },
		{ EOvrUserPresenceStatus_StaticEnum, TEXT("EOvrUserPresenceStatus"), &Z_Registration_Info_UEnum_EOvrUserPresenceStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 319713577U) },
		{ EOvrVoipBitrate_StaticEnum, TEXT("EOvrVoipBitrate"), &Z_Registration_Info_UEnum_EOvrVoipBitrate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 634990461U) },
		{ EOvrVoipDtxState_StaticEnum, TEXT("EOvrVoipDtxState"), &Z_Registration_Info_UEnum_EOvrVoipDtxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2707927413U) },
		{ EOvrVoipMuteState_StaticEnum, TEXT("EOvrVoipMuteState"), &Z_Registration_Info_UEnum_EOvrVoipMuteState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 254096364U) },
		{ EOvrVoipSampleRate_StaticEnum, TEXT("EOvrVoipSampleRate"), &Z_Registration_Info_UEnum_EOvrVoipSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4186101790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_MyDiplom_Plugins_Unreal5PlatformSDKPlugin_68_0_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_1885361616(TEXT("/Script/OVRPlatform"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_MyDiplom_Plugins_Unreal5PlatformSDKPlugin_68_0_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_MyDiplom_Plugins_Unreal5PlatformSDKPlugin_68_0_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
