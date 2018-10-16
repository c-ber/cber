#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULight // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef ULight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1748); // id32("Class Engine.Light")
		return ptr;
	}
//	ExternalPtr<struct ULightComponent> LightComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.Light.LightComponent */
	uint8_t boolField410;
	uint8_t UnknownData411[0xF];


//	inline bool SetLightComponent(t_structHelper inst, ExternalPtr<struct ULightComponent> value) { inst.WriteOffset(0x408, value); }
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

    auto constexpr sizeofULight = sizeof(ULight); // 1056
    static_assert(sizeof(ULight) == 0x420, "Size of ULight is not correct.");
//	auto constexpr ULight_LightComponent_Offset = offsetof(ULight, LightComponent);
//	static_assert(ULight_LightComponent_Offset == 0x408, "ULight::LightComponent offset is not 408");
	auto constexpr ULight_boolField410_Offset = offsetof(ULight, boolField410);
	static_assert(ULight_boolField410_Offset == 0x410, "ULight::boolField410 offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
