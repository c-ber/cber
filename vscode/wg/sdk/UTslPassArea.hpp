#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPassArea // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslPassArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1467); // id32("Class TslGame.TslPassArea")
		return ptr;
	}
//	ExternalPtr<struct USphereComponent> SphereComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslPassArea.SphereComponent */
	float Radius; /* Ofs: 0x410 Size: 0x4 - FloatProperty TslGame.TslPassArea.Radius */
	uint8_t UnknownData414[0xC];


//	inline bool SetSphereComponent(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPassArea = sizeof(UTslPassArea); // 1056
    static_assert(sizeof(UTslPassArea) == 0x420, "Size of UTslPassArea is not correct.");
//	auto constexpr UTslPassArea_SphereComponent_Offset = offsetof(UTslPassArea, SphereComponent);
//	static_assert(UTslPassArea_SphereComponent_Offset == 0x408, "UTslPassArea::SphereComponent offset is not 408");
	auto constexpr UTslPassArea_Radius_Offset = offsetof(UTslPassArea, Radius);
	static_assert(UTslPassArea_Radius_Offset == 0x410, "UTslPassArea::Radius offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
