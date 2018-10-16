#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExponentialHeightFog // Size: 0x420
	: public UInfo // Size: 0x410
{
private:
	typedef UExponentialHeightFog t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1742); // id32("Class Engine.ExponentialHeightFog")
		return ptr;
	}
//	ExternalPtr<struct UExponentialHeightFogComponent> Component; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.ExponentialHeightFog.Component */
	uint8_t boolField410;
	uint8_t UnknownData411[0xF];


//	inline bool SetComponent(t_structHelper inst, ExternalPtr<struct UExponentialHeightFogComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool bEnabled()
	{
		return boolField410& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExponentialHeightFog = sizeof(UExponentialHeightFog); // 1056
    static_assert(sizeof(UExponentialHeightFog) == 0x420, "Size of UExponentialHeightFog is not correct.");
//	auto constexpr UExponentialHeightFog_Component_Offset = offsetof(UExponentialHeightFog, Component);
//	static_assert(UExponentialHeightFog_Component_Offset == 0x408, "UExponentialHeightFog::Component offset is not 408");
	auto constexpr UExponentialHeightFog_boolField410_Offset = offsetof(UExponentialHeightFog, boolField410);
	static_assert(UExponentialHeightFog_boolField410_Offset == 0x410, "UExponentialHeightFog::boolField410 offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
