#pragma once
#include "USceneComponent.hpp"
#include "EFollowMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInfiniteSystemComponent // Size: 0x4B0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UInfiniteSystemComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2059); // id32("Class OceanPlugin.InfiniteSystemComponent")
		return ptr;
	}
	uint8_t boolField490;
	TEnumAsByte<enum EFollowMethod> FollowMethod; /* Ofs: 0x491 Size: 0x1 - ByteProperty OceanPlugin.InfiniteSystemComponent.FollowMethod */
	uint8_t UnknownData492[0x2];
	float GridSnapSize; /* Ofs: 0x494 Size: 0x4 - FloatProperty OceanPlugin.InfiniteSystemComponent.GridSnapSize */
	float MaxLookAtDistance; /* Ofs: 0x498 Size: 0x4 - FloatProperty OceanPlugin.InfiniteSystemComponent.MaxLookAtDistance */
	uint8_t boolField49C;
	uint8_t UnknownData49D[0x3];
	float ScaleDistanceFactor; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty OceanPlugin.InfiniteSystemComponent.ScaleDistanceFactor */
	float ScaleStartDistance; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty OceanPlugin.InfiniteSystemComponent.ScaleStartDistance */
	float ScaleMin; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty OceanPlugin.InfiniteSystemComponent.ScaleMin */
	float ScaleMax; /* Ofs: 0x4AC Size: 0x4 - FloatProperty OceanPlugin.InfiniteSystemComponent.ScaleMax */


	inline bool UpdateInEditor()
	{
		return boolField490& 0x1;
	}
	inline bool SetUpdateInEditor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFollowMethod(t_structHelper inst, TEnumAsByte<enum EFollowMethod> value) { inst.WriteOffset(0x491, value); }
	inline bool SetGridSnapSize(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetMaxLookAtDistance(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool ScaleByDistance()
	{
		return boolField49C& 0x1;
	}
	inline bool SetScaleByDistance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x49C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetScaleDistanceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetScaleStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetScaleMin(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetScaleMax(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInfiniteSystemComponent = sizeof(UInfiniteSystemComponent); // 1200
    static_assert(sizeof(UInfiniteSystemComponent) == 0x4B0, "Size of UInfiniteSystemComponent is not correct.");
	auto constexpr UInfiniteSystemComponent_boolField490_Offset = offsetof(UInfiniteSystemComponent, boolField490);
	static_assert(UInfiniteSystemComponent_boolField490_Offset == 0x490, "UInfiniteSystemComponent::boolField490 offset is not 490");
	auto constexpr UInfiniteSystemComponent_FollowMethod_Offset = offsetof(UInfiniteSystemComponent, FollowMethod);
	static_assert(UInfiniteSystemComponent_FollowMethod_Offset == 0x491, "UInfiniteSystemComponent::FollowMethod offset is not 491");
	auto constexpr UInfiniteSystemComponent_GridSnapSize_Offset = offsetof(UInfiniteSystemComponent, GridSnapSize);
	static_assert(UInfiniteSystemComponent_GridSnapSize_Offset == 0x494, "UInfiniteSystemComponent::GridSnapSize offset is not 494");
	auto constexpr UInfiniteSystemComponent_MaxLookAtDistance_Offset = offsetof(UInfiniteSystemComponent, MaxLookAtDistance);
	static_assert(UInfiniteSystemComponent_MaxLookAtDistance_Offset == 0x498, "UInfiniteSystemComponent::MaxLookAtDistance offset is not 498");
	auto constexpr UInfiniteSystemComponent_boolField49C_Offset = offsetof(UInfiniteSystemComponent, boolField49C);
	static_assert(UInfiniteSystemComponent_boolField49C_Offset == 0x49c, "UInfiniteSystemComponent::boolField49C offset is not 49c");
	auto constexpr UInfiniteSystemComponent_ScaleDistanceFactor_Offset = offsetof(UInfiniteSystemComponent, ScaleDistanceFactor);
	static_assert(UInfiniteSystemComponent_ScaleDistanceFactor_Offset == 0x4a0, "UInfiniteSystemComponent::ScaleDistanceFactor offset is not 4a0");
	auto constexpr UInfiniteSystemComponent_ScaleStartDistance_Offset = offsetof(UInfiniteSystemComponent, ScaleStartDistance);
	static_assert(UInfiniteSystemComponent_ScaleStartDistance_Offset == 0x4a4, "UInfiniteSystemComponent::ScaleStartDistance offset is not 4a4");
	auto constexpr UInfiniteSystemComponent_ScaleMin_Offset = offsetof(UInfiniteSystemComponent, ScaleMin);
	static_assert(UInfiniteSystemComponent_ScaleMin_Offset == 0x4a8, "UInfiniteSystemComponent::ScaleMin offset is not 4a8");
	auto constexpr UInfiniteSystemComponent_ScaleMax_Offset = offsetof(UInfiniteSystemComponent, ScaleMax);
	static_assert(UInfiniteSystemComponent_ScaleMax_Offset == 0x4ac, "UInfiniteSystemComponent::ScaleMax offset is not 4ac");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
