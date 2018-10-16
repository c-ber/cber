#pragma once
#include "UItemPackage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFloorSnapItemPackage // Size: 0x590
	: public UItemPackage // Size: 0x580
{
private:
	typedef UFloorSnapItemPackage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1969); // id32("Class TslGame.FloorSnapItemPackage")
		return ptr;
	}
//	float RayLength; /* Ofs: 0x578 Size: 0x4 - FloatProperty TslGame.FloorSnapItemPackage.RayLength */
//	uint8_t boolField57C;
	float WaterSurfaceThreshold; /* Ofs: 0x580 Size: 0x4 - FloatProperty TslGame.FloorSnapItemPackage.WaterSurfaceThreshold */
	uint8_t UnknownData584[0x4];
	ExternalPtr<struct UBuoyancyForceComponent> BuoyancyForceComponent; /* Ofs: 0x588 Size: 0x8 - ObjectProperty TslGame.FloorSnapItemPackage.BuoyancyForceComponent */


//	inline bool SetRayLength(t_structHelper inst, float value) { inst.WriteOffset(0x578, value); }
	inline bool SetWaterSurfaceThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x580, value); }
	inline bool SetBuoyancyForceComponent(t_structHelper inst, ExternalPtr<struct UBuoyancyForceComponent> value) { inst.WriteOffset(0x588, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFloorSnapItemPackage = sizeof(UFloorSnapItemPackage); // 1424
    static_assert(sizeof(UFloorSnapItemPackage) == 0x590, "Size of UFloorSnapItemPackage is not correct.");
//	auto constexpr UFloorSnapItemPackage_RayLength_Offset = offsetof(UFloorSnapItemPackage, RayLength);
//	static_assert(UFloorSnapItemPackage_RayLength_Offset == 0x578, "UFloorSnapItemPackage::RayLength offset is not 578");
//	auto constexpr UFloorSnapItemPackage_boolField57C_Offset = offsetof(UFloorSnapItemPackage, boolField57C);
//	static_assert(UFloorSnapItemPackage_boolField57C_Offset == 0x57c, "UFloorSnapItemPackage::boolField57C offset is not 57c");
	auto constexpr UFloorSnapItemPackage_WaterSurfaceThreshold_Offset = offsetof(UFloorSnapItemPackage, WaterSurfaceThreshold);
	static_assert(UFloorSnapItemPackage_WaterSurfaceThreshold_Offset == 0x580, "UFloorSnapItemPackage::WaterSurfaceThreshold offset is not 580");
	auto constexpr UFloorSnapItemPackage_BuoyancyForceComponent_Offset = offsetof(UFloorSnapItemPackage, BuoyancyForceComponent);
	static_assert(UFloorSnapItemPackage_BuoyancyForceComponent_Offset == 0x588, "UFloorSnapItemPackage::BuoyancyForceComponent offset is not 588");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
