#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBlueZoneCreateArea // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UTslBlueZoneCreateArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1330); // id32("Class TslGame.TslBlueZoneCreateArea")
		return ptr;
	}
//	ExternalPtr<struct USphereComponent> SphereComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslBlueZoneCreateArea.SphereComponent */
	FString Name; /* Ofs: 0x410 Size: 0x10 - StrProperty TslGame.TslBlueZoneCreateArea.Name */
	float Radius; /* Ofs: 0x420 Size: 0x4 - FloatProperty TslGame.TslBlueZoneCreateArea.Radius */
	int32_t Weight; /* Ofs: 0x424 Size: 0x4 - IntProperty TslGame.TslBlueZoneCreateArea.Weight */
	uint8_t UnknownData428[0x8];


//	inline bool SetSphereComponent(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetName(t_structHelper inst, FString value) { inst.WriteOffset(0x410, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetWeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x424, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBlueZoneCreateArea = sizeof(UTslBlueZoneCreateArea); // 1072
    static_assert(sizeof(UTslBlueZoneCreateArea) == 0x430, "Size of UTslBlueZoneCreateArea is not correct.");
//	auto constexpr UTslBlueZoneCreateArea_SphereComponent_Offset = offsetof(UTslBlueZoneCreateArea, SphereComponent);
//	static_assert(UTslBlueZoneCreateArea_SphereComponent_Offset == 0x408, "UTslBlueZoneCreateArea::SphereComponent offset is not 408");
	auto constexpr UTslBlueZoneCreateArea_Name_Offset = offsetof(UTslBlueZoneCreateArea, Name);
	static_assert(UTslBlueZoneCreateArea_Name_Offset == 0x410, "UTslBlueZoneCreateArea::Name offset is not 410");
	auto constexpr UTslBlueZoneCreateArea_Radius_Offset = offsetof(UTslBlueZoneCreateArea, Radius);
	static_assert(UTslBlueZoneCreateArea_Radius_Offset == 0x420, "UTslBlueZoneCreateArea::Radius offset is not 420");
	auto constexpr UTslBlueZoneCreateArea_Weight_Offset = offsetof(UTslBlueZoneCreateArea, Weight);
	static_assert(UTslBlueZoneCreateArea_Weight_Offset == 0x424, "UTslBlueZoneCreateArea::Weight offset is not 424");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
