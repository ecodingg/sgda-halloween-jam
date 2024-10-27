// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/FourDigitCode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFourDigitCode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UFourDigitCode();
MYPROJECT_API UClass* Z_Construct_UClass_UFourDigitCode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class UFourDigitCode
void UFourDigitCode::StaticRegisterNativesUFourDigitCode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFourDigitCode);
UClass* Z_Construct_UClass_UFourDigitCode_NoRegister()
{
	return UFourDigitCode::StaticClass();
}
struct Z_Construct_UClass_UFourDigitCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FourDigitCode.h" },
		{ "ModuleRelativePath", "FourDigitCode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFourDigitCode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFourDigitCode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFourDigitCode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFourDigitCode_Statics::ClassParams = {
	&UFourDigitCode::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFourDigitCode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFourDigitCode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFourDigitCode()
{
	if (!Z_Registration_Info_UClass_UFourDigitCode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFourDigitCode.OuterSingleton, Z_Construct_UClass_UFourDigitCode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFourDigitCode.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<UFourDigitCode>()
{
	return UFourDigitCode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFourDigitCode);
UFourDigitCode::~UFourDigitCode() {}
// End Class UFourDigitCode

// Begin Registration
struct Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_FourDigitCode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFourDigitCode, UFourDigitCode::StaticClass, TEXT("UFourDigitCode"), &Z_Registration_Info_UClass_UFourDigitCode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFourDigitCode), 2017198133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_FourDigitCode_h_990428274(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_FourDigitCode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eden_Documents_GitHub_sgda_halloween_jam_MyProject_Source_MyProject_FourDigitCode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
