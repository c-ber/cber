#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkyLight // Size: 0x420
	: public UInfo // Size: 0x410
{
private:
	typedef USkyLight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1744); // id32("Class Engine.SkyLight")
		return ptr;
	}
//	ExternalPtr<struct USkyLightComponent> LightComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.SkyLight.LightComponent */
	uint8_t boolField410;
	uint8_t UnknownData411[0xF];


//	inline bool SetLightComponent(t_structHelper inst, ExternalPtr<struct USkyLightComponent> value) { inst.WriteOffset(0x408, value); }
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

    auto constexpr sizeofUSkyLight = sizeof(USkyLight); // 1056
    static_assert(sizeof(USkyLight) == 0x420, "Size of USkyLight is not correct.");
//	auto constexpr USkyLight_LightComponent_Offset = offsetof(USkyLight, LightComponent);
//	static_assert(USkyLight_LightComponent_Offset == 0x408, "USkyLight::LightComponent offset is not 408");
	auto constexpr USkyLight_boolField410_Offset = offsetof(USkyLight, boolField410);
	static_assert(USkyLight_boolField410_Offset == 0x410, "USkyLight::boolField410 offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
