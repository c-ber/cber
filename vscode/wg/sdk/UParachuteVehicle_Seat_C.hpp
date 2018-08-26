#pragma once
#include "UParachuteVehicleSeatActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteVehicle_Seat_C // Size: 0x498
	: public UParachuteVehicleSeatActor // Size: 0x490
{
private:
	typedef UParachuteVehicle_Seat_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91784); // id32("BlueprintGeneratedClass ParachuteVehicle_Seat.ParachuteVehicle_Seat_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x490 Size: 0x8 - ObjectProperty ParachuteVehicle_Seat.ParachuteVehicle_Seat_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteVehicle_Seat_C = sizeof(UParachuteVehicle_Seat_C); // 1176
    static_assert(sizeof(UParachuteVehicle_Seat_C) == 0x498, "Size of UParachuteVehicle_Seat_C is not correct.");
	auto constexpr UParachuteVehicle_Seat_C_DefaultSceneRoot_Offset = offsetof(UParachuteVehicle_Seat_C, DefaultSceneRoot);
	static_assert(UParachuteVehicle_Seat_C_DefaultSceneRoot_Offset == 0x490, "UParachuteVehicle_Seat_C::DefaultSceneRoot offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
