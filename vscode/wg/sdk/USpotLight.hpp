#pragma once
#include "ULight.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpotLight // Size: 0x420
	: public ULight // Size: 0x420
{
private:
	typedef USpotLight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1751); // id32("Class Engine.SpotLight")
		return ptr;
	}
//	ExternalPtr<struct USpotLightComponent> SpotLightComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.SpotLight.SpotLightComponent */


//	inline bool SetSpotLightComponent(t_structHelper inst, ExternalPtr<struct USpotLightComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpotLight = sizeof(USpotLight); // 1056
    static_assert(sizeof(USpotLight) == 0x420, "Size of USpotLight is not correct.");
//	auto constexpr USpotLight_SpotLightComponent_Offset = offsetof(USpotLight, SpotLightComponent);
//	static_assert(USpotLight_SpotLightComponent_Offset == 0x418, "USpotLight::SpotLightComponent offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
