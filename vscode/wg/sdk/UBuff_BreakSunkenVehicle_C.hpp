#pragma once
#include "UTslBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_BreakSunkenVehicle_C // Size: 0x480
	: public UTslBuff // Size: 0x470
{
private:
	typedef UBuff_BreakSunkenVehicle_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123490); // id32("BlueprintGeneratedClass Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.DefaultSceneRoot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_BreakSunkenVehicle_C = sizeof(UBuff_BreakSunkenVehicle_C); // 1152
    static_assert(sizeof(UBuff_BreakSunkenVehicle_C) == 0x480, "Size of UBuff_BreakSunkenVehicle_C is not correct.");
	auto constexpr UBuff_BreakSunkenVehicle_C_UberGraphFrame_Offset = offsetof(UBuff_BreakSunkenVehicle_C, UberGraphFrame);
	static_assert(UBuff_BreakSunkenVehicle_C_UberGraphFrame_Offset == 0x470, "UBuff_BreakSunkenVehicle_C::UberGraphFrame offset is not 470");
	auto constexpr UBuff_BreakSunkenVehicle_C_DefaultSceneRoot_Offset = offsetof(UBuff_BreakSunkenVehicle_C, DefaultSceneRoot);
	static_assert(UBuff_BreakSunkenVehicle_C_DefaultSceneRoot_Offset == 0x478, "UBuff_BreakSunkenVehicle_C::DefaultSceneRoot offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
