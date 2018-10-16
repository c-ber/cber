#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFogEffectController_C // Size: 0x438
	: public UActor // Size: 0x410
{
private:
	typedef UFogEffectController_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135922); // id32("BlueprintGeneratedClass FogEffectController.FogEffectController_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty FogEffectController.FogEffectController_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x418 Size: 0x8 - ObjectProperty FogEffectController.FogEffectController_C.DefaultSceneRoot */
	ExternalPtr<struct UTslGameState> GameState; /* Ofs: 0x420 Size: 0x8 - ObjectProperty FogEffectController.FogEffectController_C.GameState */
	ExternalPtr<struct UPoisonEffectBase_C> FogEffect; /* Ofs: 0x428 Size: 0x8 - ObjectProperty FogEffectController.FogEffectController_C.FogEffect */
	ExternalPtr<struct UClass> PoisonEffectBaseClass; /* Ofs: 0x430 Size: 0x8 - ClassProperty FogEffectController.FogEffectController_C.PoisonEffectBaseClass */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetGameState(t_structHelper inst, ExternalPtr<struct UTslGameState> value) { inst.WriteOffset(0x420, value); }
	inline bool SetFogEffect(t_structHelper inst, ExternalPtr<struct UPoisonEffectBase_C> value) { inst.WriteOffset(0x428, value); }
	inline bool SetPoisonEffectBaseClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x430, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFogEffectController_C = sizeof(UFogEffectController_C); // 1080
    static_assert(sizeof(UFogEffectController_C) == 0x438, "Size of UFogEffectController_C is not correct.");
	auto constexpr UFogEffectController_C_UberGraphFrame_Offset = offsetof(UFogEffectController_C, UberGraphFrame);
	static_assert(UFogEffectController_C_UberGraphFrame_Offset == 0x410, "UFogEffectController_C::UberGraphFrame offset is not 410");
	auto constexpr UFogEffectController_C_DefaultSceneRoot_Offset = offsetof(UFogEffectController_C, DefaultSceneRoot);
	static_assert(UFogEffectController_C_DefaultSceneRoot_Offset == 0x418, "UFogEffectController_C::DefaultSceneRoot offset is not 418");
	auto constexpr UFogEffectController_C_GameState_Offset = offsetof(UFogEffectController_C, GameState);
	static_assert(UFogEffectController_C_GameState_Offset == 0x420, "UFogEffectController_C::GameState offset is not 420");
	auto constexpr UFogEffectController_C_FogEffect_Offset = offsetof(UFogEffectController_C, FogEffect);
	static_assert(UFogEffectController_C_FogEffect_Offset == 0x428, "UFogEffectController_C::FogEffect offset is not 428");
	auto constexpr UFogEffectController_C_PoisonEffectBaseClass_Offset = offsetof(UFogEffectController_C, PoisonEffectBaseClass);
	static_assert(UFogEffectController_C_PoisonEffectBaseClass_Offset == 0x430, "UFogEffectController_C::PoisonEffectBaseClass offset is not 430");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
