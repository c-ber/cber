#pragma once
#include "UVehicleBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Mirado_C // Size: 0xA28
	: public UVehicleBase_C // Size: 0x9D4
{
private:
	typedef UBP_Mirado_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124006); // id32("BlueprintGeneratedClass BP_Mirado.BP_Mirado_C")
		return ptr;
	}
	uint8_t UnknownData9D4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9D8 Size: 0x8 - StructProperty BP_Mirado.BP_Mirado_C.UberGraphFrame */
	ExternalPtr<struct UStaticMeshComponent> WeaponCollisionComponent; /* Ofs: 0x9E0 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.WeaponCollisionComponent */
	ExternalPtr<struct USphereComponent> Sphere3; /* Ofs: 0x9E8 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.Sphere3 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerBRSeat; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.PassengerBRSeat */
	ExternalPtr<struct USphereComponent> Sphere2; /* Ofs: 0x9F8 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.Sphere2 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerBLSeat; /* Ofs: 0xA00 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.PassengerBLSeat */
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0xA08 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.Sphere1 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerFRSeat; /* Ofs: 0xA10 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.PassengerFRSeat */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0xA18 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.Sphere */
	ExternalPtr<struct UVehicleSeatInteractionComponent> DriverSeat; /* Ofs: 0xA20 Size: 0x8 - ObjectProperty BP_Mirado.BP_Mirado_C.DriverSeat */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetWeaponCollisionComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetSphere3(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetPassengerBRSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetSphere2(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetPassengerBLSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA00, value); }
	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetPassengerFRSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA10, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA18, value); }
	inline bool SetDriverSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA20, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Mirado_C = sizeof(UBP_Mirado_C); // 2600
    static_assert(sizeof(UBP_Mirado_C) == 0xA28, "Size of UBP_Mirado_C is not correct.");
	auto constexpr UBP_Mirado_C_UberGraphFrame_Offset = offsetof(UBP_Mirado_C, UberGraphFrame);
	static_assert(UBP_Mirado_C_UberGraphFrame_Offset == 0x9d8, "UBP_Mirado_C::UberGraphFrame offset is not 9d8");
	auto constexpr UBP_Mirado_C_WeaponCollisionComponent_Offset = offsetof(UBP_Mirado_C, WeaponCollisionComponent);
	static_assert(UBP_Mirado_C_WeaponCollisionComponent_Offset == 0x9e0, "UBP_Mirado_C::WeaponCollisionComponent offset is not 9e0");
	auto constexpr UBP_Mirado_C_Sphere3_Offset = offsetof(UBP_Mirado_C, Sphere3);
	static_assert(UBP_Mirado_C_Sphere3_Offset == 0x9e8, "UBP_Mirado_C::Sphere3 offset is not 9e8");
	auto constexpr UBP_Mirado_C_PassengerBRSeat_Offset = offsetof(UBP_Mirado_C, PassengerBRSeat);
	static_assert(UBP_Mirado_C_PassengerBRSeat_Offset == 0x9f0, "UBP_Mirado_C::PassengerBRSeat offset is not 9f0");
	auto constexpr UBP_Mirado_C_Sphere2_Offset = offsetof(UBP_Mirado_C, Sphere2);
	static_assert(UBP_Mirado_C_Sphere2_Offset == 0x9f8, "UBP_Mirado_C::Sphere2 offset is not 9f8");
	auto constexpr UBP_Mirado_C_PassengerBLSeat_Offset = offsetof(UBP_Mirado_C, PassengerBLSeat);
	static_assert(UBP_Mirado_C_PassengerBLSeat_Offset == 0xa00, "UBP_Mirado_C::PassengerBLSeat offset is not a00");
	auto constexpr UBP_Mirado_C_Sphere1_Offset = offsetof(UBP_Mirado_C, Sphere1);
	static_assert(UBP_Mirado_C_Sphere1_Offset == 0xa08, "UBP_Mirado_C::Sphere1 offset is not a08");
	auto constexpr UBP_Mirado_C_PassengerFRSeat_Offset = offsetof(UBP_Mirado_C, PassengerFRSeat);
	static_assert(UBP_Mirado_C_PassengerFRSeat_Offset == 0xa10, "UBP_Mirado_C::PassengerFRSeat offset is not a10");
	auto constexpr UBP_Mirado_C_Sphere_Offset = offsetof(UBP_Mirado_C, Sphere);
	static_assert(UBP_Mirado_C_Sphere_Offset == 0xa18, "UBP_Mirado_C::Sphere offset is not a18");
	auto constexpr UBP_Mirado_C_DriverSeat_Offset = offsetof(UBP_Mirado_C, DriverSeat);
	static_assert(UBP_Mirado_C_DriverSeat_Offset == 0xa20, "UBP_Mirado_C::DriverSeat offset is not a20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
