#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_SpawnAircraft_C // Size: 0xC4
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_SpawnAircraft_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115249); // id32("BlueprintGeneratedClass Task_SpawnAircraft.Task_SpawnAircraft_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_SpawnAircraft.Task_SpawnAircraft_C.UberGraphFrame */
	ExternalPtr<struct UCarePackageController> CarePackageController; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty Task_SpawnAircraft.Task_SpawnAircraft_C.CarePackageController */
	float ElapseTime; /* Ofs: 0xB8 Size: 0x4 - FloatProperty Task_SpawnAircraft.Task_SpawnAircraft_C.ElapseTime */
	uint8_t boolFieldBC;
	uint8_t UnknownDataBD[0x3];
	float NextSpawnDelay; /* Ofs: 0xC0 Size: 0x4 - FloatProperty Task_SpawnAircraft.Task_SpawnAircraft_C.NextSpawnDelay */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
	inline bool SetCarePackageController(t_structHelper inst, ExternalPtr<struct UCarePackageController> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetElapseTime(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool CanSpawn()
	{
		return boolFieldBC& 0x1;
	}
	inline bool SetCanSpawn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNextSpawnDelay(t_structHelper inst, float value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_SpawnAircraft_C = sizeof(UTask_SpawnAircraft_C); // 196
    static_assert(sizeof(UTask_SpawnAircraft_C) == 0xC4, "Size of UTask_SpawnAircraft_C is not correct.");
	auto constexpr UTask_SpawnAircraft_C_UberGraphFrame_Offset = offsetof(UTask_SpawnAircraft_C, UberGraphFrame);
	static_assert(UTask_SpawnAircraft_C_UberGraphFrame_Offset == 0xa8, "UTask_SpawnAircraft_C::UberGraphFrame offset is not a8");
	auto constexpr UTask_SpawnAircraft_C_CarePackageController_Offset = offsetof(UTask_SpawnAircraft_C, CarePackageController);
	static_assert(UTask_SpawnAircraft_C_CarePackageController_Offset == 0xb0, "UTask_SpawnAircraft_C::CarePackageController offset is not b0");
	auto constexpr UTask_SpawnAircraft_C_ElapseTime_Offset = offsetof(UTask_SpawnAircraft_C, ElapseTime);
	static_assert(UTask_SpawnAircraft_C_ElapseTime_Offset == 0xb8, "UTask_SpawnAircraft_C::ElapseTime offset is not b8");
	auto constexpr UTask_SpawnAircraft_C_boolFieldBC_Offset = offsetof(UTask_SpawnAircraft_C, boolFieldBC);
	static_assert(UTask_SpawnAircraft_C_boolFieldBC_Offset == 0xbc, "UTask_SpawnAircraft_C::boolFieldBC offset is not bc");
	auto constexpr UTask_SpawnAircraft_C_NextSpawnDelay_Offset = offsetof(UTask_SpawnAircraft_C, NextSpawnDelay);
	static_assert(UTask_SpawnAircraft_C_NextSpawnDelay_Offset == 0xc0, "UTask_SpawnAircraft_C::NextSpawnDelay offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
