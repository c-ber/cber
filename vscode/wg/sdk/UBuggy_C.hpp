#pragma once
#include "UVehicleBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuggy_C // Size: 0xA00
	: public UVehicleBase_C // Size: 0x9D4
{
private:
	typedef UBuggy_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123934); // id32("BlueprintGeneratedClass Buggy.Buggy_C")
		return ptr;
	}
	uint8_t UnknownData9D4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9D8 Size: 0x8 - StructProperty Buggy.Buggy_C.UberGraphFrame */
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0x9E0 Size: 0x8 - ObjectProperty Buggy.Buggy_C.Sphere1 */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0x9E8 Size: 0x8 - ObjectProperty Buggy.Buggy_C.Sphere */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerSeat; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty Buggy.Buggy_C.PassengerSeat */
	ExternalPtr<struct UVehicleSeatInteractionComponent> DriverSeat; /* Ofs: 0x9F8 Size: 0x8 - ObjectProperty Buggy.Buggy_C.DriverSeat */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetPassengerSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetDriverSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x9F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuggy_C = sizeof(UBuggy_C); // 2560
    static_assert(sizeof(UBuggy_C) == 0xA00, "Size of UBuggy_C is not correct.");
	auto constexpr UBuggy_C_UberGraphFrame_Offset = offsetof(UBuggy_C, UberGraphFrame);
	static_assert(UBuggy_C_UberGraphFrame_Offset == 0x9d8, "UBuggy_C::UberGraphFrame offset is not 9d8");
	auto constexpr UBuggy_C_Sphere1_Offset = offsetof(UBuggy_C, Sphere1);
	static_assert(UBuggy_C_Sphere1_Offset == 0x9e0, "UBuggy_C::Sphere1 offset is not 9e0");
	auto constexpr UBuggy_C_Sphere_Offset = offsetof(UBuggy_C, Sphere);
	static_assert(UBuggy_C_Sphere_Offset == 0x9e8, "UBuggy_C::Sphere offset is not 9e8");
	auto constexpr UBuggy_C_PassengerSeat_Offset = offsetof(UBuggy_C, PassengerSeat);
	static_assert(UBuggy_C_PassengerSeat_Offset == 0x9f0, "UBuggy_C::PassengerSeat offset is not 9f0");
	auto constexpr UBuggy_C_DriverSeat_Offset = offsetof(UBuggy_C, DriverSeat);
	static_assert(UBuggy_C_DriverSeat_Offset == 0x9f8, "UBuggy_C::DriverSeat offset is not 9f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
