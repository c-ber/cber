#pragma once
#include "UVivoxBaseComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVivoxComponent // Size: 0x2F0
	: public UVivoxBaseComponent // Size: 0x2A0
{
private:
	typedef UVivoxComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68); // id32("Class TslGame.VivoxComponent")
		return ptr;
	}
	uint8_t UnknownData2A0[0x2C];
	float SuddenMovementDistance; /* Ofs: 0x2CC Size: 0x4 - FloatProperty TslGame.VivoxComponent.SuddenMovementDistance */
	float SuddenMovementModifier; /* Ofs: 0x2D0 Size: 0x4 - FloatProperty TslGame.VivoxComponent.SuddenMovementModifier */
	float SuddenMovementModifierDuration; /* Ofs: 0x2D4 Size: 0x4 - FloatProperty TslGame.VivoxComponent.SuddenMovementModifierDuration */
	float SuddenMovementModifierRestoreDuration; /* Ofs: 0x2D8 Size: 0x4 - FloatProperty TslGame.VivoxComponent.SuddenMovementModifierRestoreDuration */
	uint8_t UnknownData2DC[0x4];
	uint8_t boolField2E0;
	uint8_t UnknownData2E1[0xF];


	inline bool SetSuddenMovementDistance(t_structHelper inst, float value) { inst.WriteOffset(0x2CC, value); }
	inline bool SetSuddenMovementModifier(t_structHelper inst, float value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetSuddenMovementModifierDuration(t_structHelper inst, float value) { inst.WriteOffset(0x2D4, value); }
	inline bool SetSuddenMovementModifierRestoreDuration(t_structHelper inst, float value) { inst.WriteOffset(0x2D8, value); }
	inline bool bEnableObserverTeamChat()
	{
		return boolField2E0& 0x1;
	}
	inline bool SetbEnableObserverTeamChat(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2E0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVivoxComponent = sizeof(UVivoxComponent); // 752
    static_assert(sizeof(UVivoxComponent) == 0x2F0, "Size of UVivoxComponent is not correct.");
	auto constexpr UVivoxComponent_SuddenMovementDistance_Offset = offsetof(UVivoxComponent, SuddenMovementDistance);
	static_assert(UVivoxComponent_SuddenMovementDistance_Offset == 0x2cc, "UVivoxComponent::SuddenMovementDistance offset is not 2cc");
	auto constexpr UVivoxComponent_SuddenMovementModifier_Offset = offsetof(UVivoxComponent, SuddenMovementModifier);
	static_assert(UVivoxComponent_SuddenMovementModifier_Offset == 0x2d0, "UVivoxComponent::SuddenMovementModifier offset is not 2d0");
	auto constexpr UVivoxComponent_SuddenMovementModifierDuration_Offset = offsetof(UVivoxComponent, SuddenMovementModifierDuration);
	static_assert(UVivoxComponent_SuddenMovementModifierDuration_Offset == 0x2d4, "UVivoxComponent::SuddenMovementModifierDuration offset is not 2d4");
	auto constexpr UVivoxComponent_SuddenMovementModifierRestoreDuration_Offset = offsetof(UVivoxComponent, SuddenMovementModifierRestoreDuration);
	static_assert(UVivoxComponent_SuddenMovementModifierRestoreDuration_Offset == 0x2d8, "UVivoxComponent::SuddenMovementModifierRestoreDuration offset is not 2d8");
	auto constexpr UVivoxComponent_boolField2E0_Offset = offsetof(UVivoxComponent, boolField2E0);
	static_assert(UVivoxComponent_boolField2E0_Offset == 0x2e0, "UVivoxComponent::boolField2E0 offset is not 2e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
