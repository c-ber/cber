#pragma once
#include "UAISenseConfig.hpp"
#include "FAISenseAffiliationFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig_Hearing // Size: 0x68
	: public UAISenseConfig // Size: 0x50
{
private:
	typedef UAISenseConfig_Hearing t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1692); // id32("Class AIModule.AISenseConfig_Hearing")
		return ptr;
	}
	ExternalPtr<struct UClass> Implementation; /* Ofs: 0x50 Size: 0x8 - ClassProperty AIModule.AISenseConfig_Hearing.Implementation */
	float HearingRange; /* Ofs: 0x58 Size: 0x4 - FloatProperty AIModule.AISenseConfig_Hearing.HearingRange */
	float LoSHearingRange; /* Ofs: 0x5C Size: 0x4 - FloatProperty AIModule.AISenseConfig_Hearing.LoSHearingRange */
	uint8_t boolField60;
	uint8_t UnknownData61[0x3];
	FAISenseAffiliationFilter DetectionByAffiliation; /* Ofs: 0x64 Size: 0x4 - StructProperty AIModule.AISenseConfig_Hearing.DetectionByAffiliation */


	inline bool SetImplementation(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x50, value); }
	inline bool SetHearingRange(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetLoSHearingRange(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool bUseLoSHearing()
	{
		return boolField60& 0x1;
	}
	inline bool SetbUseLoSHearing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDetectionByAffiliation(t_structHelper inst, FAISenseAffiliationFilter value) { inst.WriteOffset(0x64, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig_Hearing = sizeof(UAISenseConfig_Hearing); // 104
    static_assert(sizeof(UAISenseConfig_Hearing) == 0x68, "Size of UAISenseConfig_Hearing is not correct.");
	auto constexpr UAISenseConfig_Hearing_Implementation_Offset = offsetof(UAISenseConfig_Hearing, Implementation);
	static_assert(UAISenseConfig_Hearing_Implementation_Offset == 0x50, "UAISenseConfig_Hearing::Implementation offset is not 50");
	auto constexpr UAISenseConfig_Hearing_HearingRange_Offset = offsetof(UAISenseConfig_Hearing, HearingRange);
	static_assert(UAISenseConfig_Hearing_HearingRange_Offset == 0x58, "UAISenseConfig_Hearing::HearingRange offset is not 58");
	auto constexpr UAISenseConfig_Hearing_LoSHearingRange_Offset = offsetof(UAISenseConfig_Hearing, LoSHearingRange);
	static_assert(UAISenseConfig_Hearing_LoSHearingRange_Offset == 0x5c, "UAISenseConfig_Hearing::LoSHearingRange offset is not 5c");
	auto constexpr UAISenseConfig_Hearing_boolField60_Offset = offsetof(UAISenseConfig_Hearing, boolField60);
	static_assert(UAISenseConfig_Hearing_boolField60_Offset == 0x60, "UAISenseConfig_Hearing::boolField60 offset is not 60");
	auto constexpr UAISenseConfig_Hearing_DetectionByAffiliation_Offset = offsetof(UAISenseConfig_Hearing, DetectionByAffiliation);
	static_assert(UAISenseConfig_Hearing_DetectionByAffiliation_Offset == 0x64, "UAISenseConfig_Hearing::DetectionByAffiliation offset is not 64");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
