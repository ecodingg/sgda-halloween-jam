// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cam_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Cam_Player_generated_h
#error "Cam_Player.generated.h already included, missing '#pragma once' in Cam_Player.h"
#endif
#define MYPROJECT_Cam_Player_generated_h

#define FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPickupActive); \
	DECLARE_FUNCTION(execIsPickupActive);


#define FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACam_Player(); \
	friend struct Z_Construct_UClass_ACam_Player_Statics; \
public: \
	DECLARE_CLASS(ACam_Player, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ACam_Player)


#define FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACam_Player(ACam_Player&&); \
	ACam_Player(const ACam_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACam_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACam_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACam_Player) \
	NO_API virtual ~ACam_Player();


#define FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_9_PROLOG
#define FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ACam_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
