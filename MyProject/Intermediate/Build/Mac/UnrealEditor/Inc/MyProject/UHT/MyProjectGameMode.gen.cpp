// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameMode();
MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class AMyProjectGameMode
void AMyProjectGameMode::StaticRegisterNativesAMyProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyProjectGameMode);
UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister()
{
	return AMyProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyProjectGameMode.h" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectGameMode_Statics::ClassParams = {
	&AMyProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AMyProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyProjectGameMode.OuterSingleton, Z_Construct_UClass_AMyProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyProjectGameMode.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<AMyProjectGameMode>()
{
	return AMyProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameMode);
AMyProjectGameMode::~AMyProjectGameMode() {}
// End Class AMyProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_MyProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyProjectGameMode, AMyProjectGameMode::StaticClass, TEXT("AMyProjectGameMode"), &Z_Registration_Info_UClass_AMyProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyProjectGameMode), 3414428080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_MyProjectGameMode_h_896490257(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_MyProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_MyProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
