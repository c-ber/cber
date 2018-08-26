#pragma once
#include "UTslParticle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_VehicleDraft_Snow_BP_C // Size: 0x481
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_VehicleDraft_Snow_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(121929); // id32("BlueprintGeneratedClass P_VehicleDraft_Snow_BP.P_VehicleDraft_Snow_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty P_VehicleDraft_Snow_BP.P_VehicleDraft_Snow_BP_C.UberGraphFrame */
	ExternalPtr<struct UParticleSystemComponent> NewVar_1; /* Ofs: 0x478 Size: 0x8 - ObjectProperty P_VehicleDraft_Snow_BP.P_VehicleDraft_Snow_BP_C.NewVar_1 */
	uint8_t boolField480;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetNewVar_1(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool UseDebug_String()
	{
		return boolField480& 0x1;
	}
	inline bool SetUseDebug_String(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_VehicleDraft_Snow_BP_C = sizeof(UP_VehicleDraft_Snow_BP_C); // 1153
    static_assert(sizeof(UP_VehicleDraft_Snow_BP_C) == 0x481, "Size of UP_VehicleDraft_Snow_BP_C is not correct.");
	auto constexpr UP_VehicleDraft_Snow_BP_C_UberGraphFrame_Offset = offsetof(UP_VehicleDraft_Snow_BP_C, UberGraphFrame);
	static_assert(UP_VehicleDraft_Snow_BP_C_UberGraphFrame_Offset == 0x470, "UP_VehicleDraft_Snow_BP_C::UberGraphFrame offset is not 470");
	auto constexpr UP_VehicleDraft_Snow_BP_C_NewVar_1_Offset = offsetof(UP_VehicleDraft_Snow_BP_C, NewVar_1);
	static_assert(UP_VehicleDraft_Snow_BP_C_NewVar_1_Offset == 0x478, "UP_VehicleDraft_Snow_BP_C::NewVar_1 offset is not 478");
	auto constexpr UP_VehicleDraft_Snow_BP_C_boolField480_Offset = offsetof(UP_VehicleDraft_Snow_BP_C, boolField480);
	static_assert(UP_VehicleDraft_Snow_BP_C_boolField480_Offset == 0x480, "UP_VehicleDraft_Snow_BP_C::boolField480 offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
