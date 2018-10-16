#pragma once
#include "UVehicleBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_MiniBus_C // Size: 0xA40
	: public UVehicleBase_C // Size: 0x9D4
{
private:
	typedef UBP_MiniBus_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123960); // id32("BlueprintGeneratedClass BP_MiniBus.BP_MiniBus_C")
		return ptr;
	}
	uint8_t UnknownData9D4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9D8 Size: 0x8 - StructProperty BP_MiniBus.BP_MiniBus_C.UberGraphFrame */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerSeatRR; /* Ofs: 0x9E0 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.PassengerSeatRR */
	ExternalPtr<struct USphereComponent> Sphere5; /* Ofs: 0x9E8 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.Sphere5 */
	ExternalPtr<struct USphereComponent> Sphere4; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.Sphere4 */
	ExternalPtr<struct USphereComponent> Sphere3; /* Ofs: 0x9F8 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.Sphere3 */
	ExternalPtr<struct USphereComponent> Sphere2; /* Ofs: 0xA00 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.Sphere2 */
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0xA08 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.Sphere1 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerSeatRL; /* Ofs: 0xA10 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.PassengerSeatRL */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerSeatMR; /* Ofs: 0xA18 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.PassengerSeatMR */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerSeatML; /* Ofs: 0xA20 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.PassengerSeatML */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerSeatFR; /* Ofs: 0xA28 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.PassengerSeatFR */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0xA30 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.Sphere */
	ExternalPtr<struct UVehicleSeatInteractionComponent> DriverSeat; /* Ofs: 0xA38 Size: 0x8 - ObjectProperty BP_MiniBus.BP_MiniBus_C.DriverSeat */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetPassengerSeatRR(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetSphere5(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetSphere4(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetSphere3(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetSphere2(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA00, value); }
	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetPassengerSeatRL(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA10, value); }
	inline bool SetPassengerSeatMR(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA18, value); }
	inline bool SetPassengerSeatML(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA20, value); }
	inline bool SetPassengerSeatFR(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA28, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA30, value); }
	inline bool SetDriverSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_MiniBus_C = sizeof(UBP_MiniBus_C); // 2624
    static_assert(sizeof(UBP_MiniBus_C) == 0xA40, "Size of UBP_MiniBus_C is not correct.");
	auto constexpr UBP_MiniBus_C_UberGraphFrame_Offset = offsetof(UBP_MiniBus_C, UberGraphFrame);
	static_assert(UBP_MiniBus_C_UberGraphFrame_Offset == 0x9d8, "UBP_MiniBus_C::UberGraphFrame offset is not 9d8");
	auto constexpr UBP_MiniBus_C_PassengerSeatRR_Offset = offsetof(UBP_MiniBus_C, PassengerSeatRR);
	static_assert(UBP_MiniBus_C_PassengerSeatRR_Offset == 0x9e0, "UBP_MiniBus_C::PassengerSeatRR offset is not 9e0");
	auto constexpr UBP_MiniBus_C_Sphere5_Offset = offsetof(UBP_MiniBus_C, Sphere5);
	static_assert(UBP_MiniBus_C_Sphere5_Offset == 0x9e8, "UBP_MiniBus_C::Sphere5 offset is not 9e8");
	auto constexpr UBP_MiniBus_C_Sphere4_Offset = offsetof(UBP_MiniBus_C, Sphere4);
	static_assert(UBP_MiniBus_C_Sphere4_Offset == 0x9f0, "UBP_MiniBus_C::Sphere4 offset is not 9f0");
	auto constexpr UBP_MiniBus_C_Sphere3_Offset = offsetof(UBP_MiniBus_C, Sphere3);
	static_assert(UBP_MiniBus_C_Sphere3_Offset == 0x9f8, "UBP_MiniBus_C::Sphere3 offset is not 9f8");
	auto constexpr UBP_MiniBus_C_Sphere2_Offset = offsetof(UBP_MiniBus_C, Sphere2);
	static_assert(UBP_MiniBus_C_Sphere2_Offset == 0xa00, "UBP_MiniBus_C::Sphere2 offset is not a00");
	auto constexpr UBP_MiniBus_C_Sphere1_Offset = offsetof(UBP_MiniBus_C, Sphere1);
	static_assert(UBP_MiniBus_C_Sphere1_Offset == 0xa08, "UBP_MiniBus_C::Sphere1 offset is not a08");
	auto constexpr UBP_MiniBus_C_PassengerSeatRL_Offset = offsetof(UBP_MiniBus_C, PassengerSeatRL);
	static_assert(UBP_MiniBus_C_PassengerSeatRL_Offset == 0xa10, "UBP_MiniBus_C::PassengerSeatRL offset is not a10");
	auto constexpr UBP_MiniBus_C_PassengerSeatMR_Offset = offsetof(UBP_MiniBus_C, PassengerSeatMR);
	static_assert(UBP_MiniBus_C_PassengerSeatMR_Offset == 0xa18, "UBP_MiniBus_C::PassengerSeatMR offset is not a18");
	auto constexpr UBP_MiniBus_C_PassengerSeatML_Offset = offsetof(UBP_MiniBus_C, PassengerSeatML);
	static_assert(UBP_MiniBus_C_PassengerSeatML_Offset == 0xa20, "UBP_MiniBus_C::PassengerSeatML offset is not a20");
	auto constexpr UBP_MiniBus_C_PassengerSeatFR_Offset = offsetof(UBP_MiniBus_C, PassengerSeatFR);
	static_assert(UBP_MiniBus_C_PassengerSeatFR_Offset == 0xa28, "UBP_MiniBus_C::PassengerSeatFR offset is not a28");
	auto constexpr UBP_MiniBus_C_Sphere_Offset = offsetof(UBP_MiniBus_C, Sphere);
	static_assert(UBP_MiniBus_C_Sphere_Offset == 0xa30, "UBP_MiniBus_C::Sphere offset is not a30");
	auto constexpr UBP_MiniBus_C_DriverSeat_Offset = offsetof(UBP_MiniBus_C, DriverSeat);
	static_assert(UBP_MiniBus_C_DriverSeat_Offset == 0xa38, "UBP_MiniBus_C::DriverSeat offset is not a38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
