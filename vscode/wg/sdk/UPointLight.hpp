#pragma once
#include "ULight.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPointLight // Size: 0x420
	: public ULight // Size: 0x420
{
private:
	typedef UPointLight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1750); // id32("Class Engine.PointLight")
		return ptr;
	}
//	ExternalPtr<struct UPointLightComponent> PointLightComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.PointLight.PointLightComponent */


//	inline bool SetPointLightComponent(t_structHelper inst, ExternalPtr<struct UPointLightComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPointLight = sizeof(UPointLight); // 1056
    static_assert(sizeof(UPointLight) == 0x420, "Size of UPointLight is not correct.");
//	auto constexpr UPointLight_PointLightComponent_Offset = offsetof(UPointLight, PointLightComponent);
//	static_assert(UPointLight_PointLightComponent_Offset == 0x418, "UPointLight::PointLightComponent offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
