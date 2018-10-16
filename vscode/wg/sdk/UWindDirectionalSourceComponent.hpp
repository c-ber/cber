#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWindDirectionalSourceComponent // Size: 0x4B0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UWindDirectionalSourceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(243); // id32("Class Engine.WindDirectionalSourceComponent")
		return ptr;
	}
	float Strength; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.WindDirectionalSourceComponent.Strength */
	float Speed; /* Ofs: 0x494 Size: 0x4 - FloatProperty Engine.WindDirectionalSourceComponent.Speed */
	float MinGustAmount; /* Ofs: 0x498 Size: 0x4 - FloatProperty Engine.WindDirectionalSourceComponent.MinGustAmount */
	float MaxGustAmount; /* Ofs: 0x49C Size: 0x4 - FloatProperty Engine.WindDirectionalSourceComponent.MaxGustAmount */
	float Radius; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.WindDirectionalSourceComponent.Radius */
	uint8_t boolField4A4;
	uint8_t UnknownData4A5[0xB];


	inline bool SetStrength(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetMinGustAmount(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetMaxGustAmount(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool bPointWind()
	{
		return boolField4A4& 0x1;
	}
	inline bool SetbPointWind(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWindDirectionalSourceComponent = sizeof(UWindDirectionalSourceComponent); // 1200
    static_assert(sizeof(UWindDirectionalSourceComponent) == 0x4B0, "Size of UWindDirectionalSourceComponent is not correct.");
	auto constexpr UWindDirectionalSourceComponent_Strength_Offset = offsetof(UWindDirectionalSourceComponent, Strength);
	static_assert(UWindDirectionalSourceComponent_Strength_Offset == 0x490, "UWindDirectionalSourceComponent::Strength offset is not 490");
	auto constexpr UWindDirectionalSourceComponent_Speed_Offset = offsetof(UWindDirectionalSourceComponent, Speed);
	static_assert(UWindDirectionalSourceComponent_Speed_Offset == 0x494, "UWindDirectionalSourceComponent::Speed offset is not 494");
	auto constexpr UWindDirectionalSourceComponent_MinGustAmount_Offset = offsetof(UWindDirectionalSourceComponent, MinGustAmount);
	static_assert(UWindDirectionalSourceComponent_MinGustAmount_Offset == 0x498, "UWindDirectionalSourceComponent::MinGustAmount offset is not 498");
	auto constexpr UWindDirectionalSourceComponent_MaxGustAmount_Offset = offsetof(UWindDirectionalSourceComponent, MaxGustAmount);
	static_assert(UWindDirectionalSourceComponent_MaxGustAmount_Offset == 0x49c, "UWindDirectionalSourceComponent::MaxGustAmount offset is not 49c");
	auto constexpr UWindDirectionalSourceComponent_Radius_Offset = offsetof(UWindDirectionalSourceComponent, Radius);
	static_assert(UWindDirectionalSourceComponent_Radius_Offset == 0x4a0, "UWindDirectionalSourceComponent::Radius offset is not 4a0");
	auto constexpr UWindDirectionalSourceComponent_boolField4A4_Offset = offsetof(UWindDirectionalSourceComponent, boolField4A4);
	static_assert(UWindDirectionalSourceComponent_boolField4A4_Offset == 0x4a4, "UWindDirectionalSourceComponent::boolField4A4 offset is not 4a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
