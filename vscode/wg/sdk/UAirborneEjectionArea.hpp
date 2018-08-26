#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAirborneEjectionArea // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UAirborneEjectionArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(406); // id32("Class TslGame.AirborneEjectionArea")
		return ptr;
	}
//	ExternalPtr<struct USphereComponent> SphereComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.AirborneEjectionArea.SphereComponent */
	float Radius; /* Ofs: 0x410 Size: 0x4 - FloatProperty TslGame.AirborneEjectionArea.Radius */
	uint8_t UnknownData414[0xC];


//	inline bool SetSphereComponent(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAirborneEjectionArea = sizeof(UAirborneEjectionArea); // 1056
    static_assert(sizeof(UAirborneEjectionArea) == 0x420, "Size of UAirborneEjectionArea is not correct.");
//	auto constexpr UAirborneEjectionArea_SphereComponent_Offset = offsetof(UAirborneEjectionArea, SphereComponent);
//	static_assert(UAirborneEjectionArea_SphereComponent_Offset == 0x408, "UAirborneEjectionArea::SphereComponent offset is not 408");
	auto constexpr UAirborneEjectionArea_Radius_Offset = offsetof(UAirborneEjectionArea, Radius);
	static_assert(UAirborneEjectionArea_Radius_Offset == 0x410, "UAirborneEjectionArea::Radius offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
