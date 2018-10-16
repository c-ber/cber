#pragma once
#include "USceneComponent.hpp"
#include "FPostProcessSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPostProcessComponent // Size: 0x9E0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UPostProcessComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(198); // id32("Class Engine.PostProcessComponent")
		return ptr;
	}
	uint8_t UnknownData490[0x10];
	FPostProcessSettings Settings; /* Ofs: 0x4A0 Size: 0x530 - StructProperty Engine.PostProcessComponent.Settings */
	float Priority; /* Ofs: 0x9D0 Size: 0x4 - FloatProperty Engine.PostProcessComponent.Priority */
	float BlendRadius; /* Ofs: 0x9D4 Size: 0x4 - FloatProperty Engine.PostProcessComponent.BlendRadius */
	float BlendWeight; /* Ofs: 0x9D8 Size: 0x4 - FloatProperty Engine.PostProcessComponent.BlendWeight */
	uint8_t boolField9DC;
	uint8_t UnknownData9DD[0x3];


	inline bool SetSettings(t_structHelper inst, FPostProcessSettings value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetPriority(t_structHelper inst, float value) { inst.WriteOffset(0x9D0, value); }
	inline bool SetBlendRadius(t_structHelper inst, float value) { inst.WriteOffset(0x9D4, value); }
	inline bool SetBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0x9D8, value); }
	inline bool bEnabled()
	{
		return boolField9DC& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9DC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUnbound()
	{
		return boolField9DC& 0x2;
	}
	inline bool SetbUnbound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9DC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPostProcessComponent = sizeof(UPostProcessComponent); // 2528
    static_assert(sizeof(UPostProcessComponent) == 0x9E0, "Size of UPostProcessComponent is not correct.");
	auto constexpr UPostProcessComponent_Settings_Offset = offsetof(UPostProcessComponent, Settings);
	static_assert(UPostProcessComponent_Settings_Offset == 0x4a0, "UPostProcessComponent::Settings offset is not 4a0");
	auto constexpr UPostProcessComponent_Priority_Offset = offsetof(UPostProcessComponent, Priority);
	static_assert(UPostProcessComponent_Priority_Offset == 0x9d0, "UPostProcessComponent::Priority offset is not 9d0");
	auto constexpr UPostProcessComponent_BlendRadius_Offset = offsetof(UPostProcessComponent, BlendRadius);
	static_assert(UPostProcessComponent_BlendRadius_Offset == 0x9d4, "UPostProcessComponent::BlendRadius offset is not 9d4");
	auto constexpr UPostProcessComponent_BlendWeight_Offset = offsetof(UPostProcessComponent, BlendWeight);
	static_assert(UPostProcessComponent_BlendWeight_Offset == 0x9d8, "UPostProcessComponent::BlendWeight offset is not 9d8");
	auto constexpr UPostProcessComponent_boolField9DC_Offset = offsetof(UPostProcessComponent, boolField9DC);
	static_assert(UPostProcessComponent_boolField9DC_Offset == 0x9dc, "UPostProcessComponent::boolField9DC offset is not 9dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
