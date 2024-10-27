// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/CameraFacingSprite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraFacingSprite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT_API UClass* Z_Construct_UClass_ACameraFacingSprite();
MYPROJECT_API UClass* Z_Construct_UClass_ACameraFacingSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class ACameraFacingSprite
void ACameraFacingSprite::StaticRegisterNativesACameraFacingSprite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraFacingSprite);
UClass* Z_Construct_UClass_ACameraFacingSprite_NoRegister()
{
	return ACameraFacingSprite::StaticClass();
}
struct Z_Construct_UClass_ACameraFacingSprite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CameraFacingSprite.h" },
		{ "ModuleRelativePath", "Public/CameraFacingSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Category", "Sprite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sprite component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraFacingSprite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprite component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraFacingSprite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraFacingSprite_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraFacingSprite, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraFacingSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraFacingSprite_Statics::NewProp_SpriteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraFacingSprite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraFacingSprite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraFacingSprite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraFacingSprite_Statics::ClassParams = {
	&ACameraFacingSprite::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACameraFacingSprite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraFacingSprite_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraFacingSprite_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraFacingSprite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraFacingSprite()
{
	if (!Z_Registration_Info_UClass_ACameraFacingSprite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraFacingSprite.OuterSingleton, Z_Construct_UClass_ACameraFacingSprite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraFacingSprite.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<ACameraFacingSprite>()
{
	return ACameraFacingSprite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraFacingSprite);
ACameraFacingSprite::~ACameraFacingSprite() {}
// End Class ACameraFacingSprite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_CameraFacingSprite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraFacingSprite, ACameraFacingSprite::StaticClass, TEXT("ACameraFacingSprite"), &Z_Registration_Info_UClass_ACameraFacingSprite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraFacingSprite), 2496545121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_CameraFacingSprite_h_1041655859(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_CameraFacingSprite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_CameraFacingSprite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
