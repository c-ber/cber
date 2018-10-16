#pragma once
#include "UCarePackageItem.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarapackage_Vehicle_TestOnly_C // Size: 0x671
	: public UCarePackageItem // Size: 0x650
{
private:
	typedef UCarapackage_Vehicle_TestOnly_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115192); // id32("BlueprintGeneratedClass Carapackage_Vehicle_TestOnly.Carapackage_Vehicle_TestOnly_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x650 Size: 0x8 - StructProperty Carapackage_Vehicle_TestOnly.Carapackage_Vehicle_TestOnly_C.UberGraphFrame */
	ExternalPtr<struct USkeletalMeshComponent> CarFakeMesh; /* Ofs: 0x658 Size: 0x8 - ObjectProperty Carapackage_Vehicle_TestOnly.Carapackage_Vehicle_TestOnly_C.CarFakeMesh */
	ExternalPtr<struct USceneComponent> Scene; /* Ofs: 0x660 Size: 0x8 - ObjectProperty Carapackage_Vehicle_TestOnly.Carapackage_Vehicle_TestOnly_C.Scene */
	FTimerHandle AltCheckTHandle; /* Ofs: 0x668 Size: 0x8 - StructProperty Carapackage_Vehicle_TestOnly.Carapackage_Vehicle_TestOnly_C.AltCheckTHandle */
	uint8_t boolField670;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x650, value); }
	inline bool SetCarFakeMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x658, value); }
	inline bool SetScene(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x660, value); }
	inline bool SetAltCheckTHandle(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x668, value); }
	inline bool bArrived()
	{
		return boolField670& 0x1;
	}
	inline bool SetbArrived(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x670, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarapackage_Vehicle_TestOnly_C = sizeof(UCarapackage_Vehicle_TestOnly_C); // 1649
    static_assert(sizeof(UCarapackage_Vehicle_TestOnly_C) == 0x671, "Size of UCarapackage_Vehicle_TestOnly_C is not correct.");
	auto constexpr UCarapackage_Vehicle_TestOnly_C_UberGraphFrame_Offset = offsetof(UCarapackage_Vehicle_TestOnly_C, UberGraphFrame);
	static_assert(UCarapackage_Vehicle_TestOnly_C_UberGraphFrame_Offset == 0x650, "UCarapackage_Vehicle_TestOnly_C::UberGraphFrame offset is not 650");
	auto constexpr UCarapackage_Vehicle_TestOnly_C_CarFakeMesh_Offset = offsetof(UCarapackage_Vehicle_TestOnly_C, CarFakeMesh);
	static_assert(UCarapackage_Vehicle_TestOnly_C_CarFakeMesh_Offset == 0x658, "UCarapackage_Vehicle_TestOnly_C::CarFakeMesh offset is not 658");
	auto constexpr UCarapackage_Vehicle_TestOnly_C_Scene_Offset = offsetof(UCarapackage_Vehicle_TestOnly_C, Scene);
	static_assert(UCarapackage_Vehicle_TestOnly_C_Scene_Offset == 0x660, "UCarapackage_Vehicle_TestOnly_C::Scene offset is not 660");
	auto constexpr UCarapackage_Vehicle_TestOnly_C_AltCheckTHandle_Offset = offsetof(UCarapackage_Vehicle_TestOnly_C, AltCheckTHandle);
	static_assert(UCarapackage_Vehicle_TestOnly_C_AltCheckTHandle_Offset == 0x668, "UCarapackage_Vehicle_TestOnly_C::AltCheckTHandle offset is not 668");
	auto constexpr UCarapackage_Vehicle_TestOnly_C_boolField670_Offset = offsetof(UCarapackage_Vehicle_TestOnly_C, boolField670);
	static_assert(UCarapackage_Vehicle_TestOnly_C_boolField670_Offset == 0x670, "UCarapackage_Vehicle_TestOnly_C::boolField670 offset is not 670");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
