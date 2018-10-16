#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleRiderComponent // Size: 0x240
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UVehicleRiderComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(53); // id32("Class TslGame.VehicleRiderComponent")
		return ptr;
	}
	int32_t SeatIndex; /* Ofs: 0x1F0 Size: 0x4 - IntProperty TslGame.VehicleRiderComponent.SeatIndex */
	uint8_t UnknownData1F4[0x3C];
	ExternalPtr<struct UPawn> LastVehiclePawn; /* Ofs: 0x230 Size: 0x8 - ObjectProperty TslGame.VehicleRiderComponent.LastVehiclePawn */
	uint8_t UnknownData238[0x8];


	inline bool SetSeatIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetLastVehiclePawn(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x230, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleRiderComponent = sizeof(UVehicleRiderComponent); // 576
    static_assert(sizeof(UVehicleRiderComponent) == 0x240, "Size of UVehicleRiderComponent is not correct.");
	auto constexpr UVehicleRiderComponent_SeatIndex_Offset = offsetof(UVehicleRiderComponent, SeatIndex);
	static_assert(UVehicleRiderComponent_SeatIndex_Offset == 0x1f0, "UVehicleRiderComponent::SeatIndex offset is not 1f0");
	auto constexpr UVehicleRiderComponent_LastVehiclePawn_Offset = offsetof(UVehicleRiderComponent, LastVehiclePawn);
	static_assert(UVehicleRiderComponent_LastVehiclePawn_Offset == 0x230, "UVehicleRiderComponent::LastVehiclePawn offset is not 230");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
