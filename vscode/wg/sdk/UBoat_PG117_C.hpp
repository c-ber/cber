#pragma once
#include "UBoatBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoat_PG117_C // Size: 0x608
	: public UBoatBase_C // Size: 0x59C
{
private:
	typedef UBoat_PG117_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116708); // id32("BlueprintGeneratedClass Boat_PG117.Boat_PG117_C")
		return ptr;
	}
	uint8_t UnknownData59C[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5A0 Size: 0x8 - StructProperty Boat_PG117.Boat_PG117_C.UberGraphFrame */
	ExternalPtr<struct UTslVehicleSinkComponent> TslVehicleSink; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.TslVehicleSink */
	ExternalPtr<struct USphereComponent> Sphere4; /* Ofs: 0x5B0 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.Sphere4 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerBCSeat; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.PassengerBCSeat */
	ExternalPtr<struct USphereComponent> Sphere3; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.Sphere3 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerBRSeat; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.PassengerBRSeat */
	ExternalPtr<struct USphereComponent> Sphere2; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.Sphere2 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerBLSeat; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.PassengerBLSeat */
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.Sphere1 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerFRSeat; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.PassengerFRSeat */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.Sphere */
	ExternalPtr<struct UVehicleSeatInteractionComponent> DriverSeat; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.DriverSeat */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh; /* Ofs: 0x600 Size: 0x8 - ObjectProperty Boat_PG117.Boat_PG117_C.StaticMesh */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetTslVehicleSink(t_structHelper inst, ExternalPtr<struct UTslVehicleSinkComponent> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetSphere4(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetPassengerBCSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetSphere3(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetPassengerBRSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetSphere2(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetPassengerBLSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetPassengerFRSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetDriverSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x600, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoat_PG117_C = sizeof(UBoat_PG117_C); // 1544
    static_assert(sizeof(UBoat_PG117_C) == 0x608, "Size of UBoat_PG117_C is not correct.");
	auto constexpr UBoat_PG117_C_UberGraphFrame_Offset = offsetof(UBoat_PG117_C, UberGraphFrame);
	static_assert(UBoat_PG117_C_UberGraphFrame_Offset == 0x5a0, "UBoat_PG117_C::UberGraphFrame offset is not 5a0");
	auto constexpr UBoat_PG117_C_TslVehicleSink_Offset = offsetof(UBoat_PG117_C, TslVehicleSink);
	static_assert(UBoat_PG117_C_TslVehicleSink_Offset == 0x5a8, "UBoat_PG117_C::TslVehicleSink offset is not 5a8");
	auto constexpr UBoat_PG117_C_Sphere4_Offset = offsetof(UBoat_PG117_C, Sphere4);
	static_assert(UBoat_PG117_C_Sphere4_Offset == 0x5b0, "UBoat_PG117_C::Sphere4 offset is not 5b0");
	auto constexpr UBoat_PG117_C_PassengerBCSeat_Offset = offsetof(UBoat_PG117_C, PassengerBCSeat);
	static_assert(UBoat_PG117_C_PassengerBCSeat_Offset == 0x5b8, "UBoat_PG117_C::PassengerBCSeat offset is not 5b8");
	auto constexpr UBoat_PG117_C_Sphere3_Offset = offsetof(UBoat_PG117_C, Sphere3);
	static_assert(UBoat_PG117_C_Sphere3_Offset == 0x5c0, "UBoat_PG117_C::Sphere3 offset is not 5c0");
	auto constexpr UBoat_PG117_C_PassengerBRSeat_Offset = offsetof(UBoat_PG117_C, PassengerBRSeat);
	static_assert(UBoat_PG117_C_PassengerBRSeat_Offset == 0x5c8, "UBoat_PG117_C::PassengerBRSeat offset is not 5c8");
	auto constexpr UBoat_PG117_C_Sphere2_Offset = offsetof(UBoat_PG117_C, Sphere2);
	static_assert(UBoat_PG117_C_Sphere2_Offset == 0x5d0, "UBoat_PG117_C::Sphere2 offset is not 5d0");
	auto constexpr UBoat_PG117_C_PassengerBLSeat_Offset = offsetof(UBoat_PG117_C, PassengerBLSeat);
	static_assert(UBoat_PG117_C_PassengerBLSeat_Offset == 0x5d8, "UBoat_PG117_C::PassengerBLSeat offset is not 5d8");
	auto constexpr UBoat_PG117_C_Sphere1_Offset = offsetof(UBoat_PG117_C, Sphere1);
	static_assert(UBoat_PG117_C_Sphere1_Offset == 0x5e0, "UBoat_PG117_C::Sphere1 offset is not 5e0");
	auto constexpr UBoat_PG117_C_PassengerFRSeat_Offset = offsetof(UBoat_PG117_C, PassengerFRSeat);
	static_assert(UBoat_PG117_C_PassengerFRSeat_Offset == 0x5e8, "UBoat_PG117_C::PassengerFRSeat offset is not 5e8");
	auto constexpr UBoat_PG117_C_Sphere_Offset = offsetof(UBoat_PG117_C, Sphere);
	static_assert(UBoat_PG117_C_Sphere_Offset == 0x5f0, "UBoat_PG117_C::Sphere offset is not 5f0");
	auto constexpr UBoat_PG117_C_DriverSeat_Offset = offsetof(UBoat_PG117_C, DriverSeat);
	static_assert(UBoat_PG117_C_DriverSeat_Offset == 0x5f8, "UBoat_PG117_C::DriverSeat offset is not 5f8");
	auto constexpr UBoat_PG117_C_StaticMesh_Offset = offsetof(UBoat_PG117_C, StaticMesh);
	static_assert(UBoat_PG117_C_StaticMesh_Offset == 0x600, "UBoat_PG117_C::StaticMesh offset is not 600");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
