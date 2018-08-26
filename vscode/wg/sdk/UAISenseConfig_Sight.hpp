#pragma once
#include "UAISenseConfig.hpp"
#include "FAISenseAffiliationFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig_Sight // Size: 0x70
	: public UAISenseConfig // Size: 0x50
{
private:
	typedef UAISenseConfig_Sight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1694); // id32("Class AIModule.AISenseConfig_Sight")
		return ptr;
	}
	ExternalPtr<struct UClass> Implementation; /* Ofs: 0x50 Size: 0x8 - ClassProperty AIModule.AISenseConfig_Sight.Implementation */
	float SightRadius; /* Ofs: 0x58 Size: 0x4 - FloatProperty AIModule.AISenseConfig_Sight.SightRadius */
	float LoseSightRadius; /* Ofs: 0x5C Size: 0x4 - FloatProperty AIModule.AISenseConfig_Sight.LoseSightRadius */
	float PeripheralVisionAngleDegrees; /* Ofs: 0x60 Size: 0x4 - FloatProperty AIModule.AISenseConfig_Sight.PeripheralVisionAngleDegrees */
	FAISenseAffiliationFilter DetectionByAffiliation; /* Ofs: 0x64 Size: 0x4 - StructProperty AIModule.AISenseConfig_Sight.DetectionByAffiliation */
	float AutoSuccessRangeFromLastSeenLocation; /* Ofs: 0x68 Size: 0x4 - FloatProperty AIModule.AISenseConfig_Sight.AutoSuccessRangeFromLastSeenLocation */
	uint8_t UnknownData6C[0x4];


	inline bool SetImplementation(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x50, value); }
	inline bool SetSightRadius(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetLoseSightRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetPeripheralVisionAngleDegrees(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetDetectionByAffiliation(t_structHelper inst, FAISenseAffiliationFilter value) { inst.WriteOffset(0x64, value); }
	inline bool SetAutoSuccessRangeFromLastSeenLocation(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig_Sight = sizeof(UAISenseConfig_Sight); // 112
    static_assert(sizeof(UAISenseConfig_Sight) == 0x70, "Size of UAISenseConfig_Sight is not correct.");
	auto constexpr UAISenseConfig_Sight_Implementation_Offset = offsetof(UAISenseConfig_Sight, Implementation);
	static_assert(UAISenseConfig_Sight_Implementation_Offset == 0x50, "UAISenseConfig_Sight::Implementation offset is not 50");
	auto constexpr UAISenseConfig_Sight_SightRadius_Offset = offsetof(UAISenseConfig_Sight, SightRadius);
	static_assert(UAISenseConfig_Sight_SightRadius_Offset == 0x58, "UAISenseConfig_Sight::SightRadius offset is not 58");
	auto constexpr UAISenseConfig_Sight_LoseSightRadius_Offset = offsetof(UAISenseConfig_Sight, LoseSightRadius);
	static_assert(UAISenseConfig_Sight_LoseSightRadius_Offset == 0x5c, "UAISenseConfig_Sight::LoseSightRadius offset is not 5c");
	auto constexpr UAISenseConfig_Sight_PeripheralVisionAngleDegrees_Offset = offsetof(UAISenseConfig_Sight, PeripheralVisionAngleDegrees);
	static_assert(UAISenseConfig_Sight_PeripheralVisionAngleDegrees_Offset == 0x60, "UAISenseConfig_Sight::PeripheralVisionAngleDegrees offset is not 60");
	auto constexpr UAISenseConfig_Sight_DetectionByAffiliation_Offset = offsetof(UAISenseConfig_Sight, DetectionByAffiliation);
	static_assert(UAISenseConfig_Sight_DetectionByAffiliation_Offset == 0x64, "UAISenseConfig_Sight::DetectionByAffiliation offset is not 64");
	auto constexpr UAISenseConfig_Sight_AutoSuccessRangeFromLastSeenLocation_Offset = offsetof(UAISenseConfig_Sight, AutoSuccessRangeFromLastSeenLocation);
	static_assert(UAISenseConfig_Sight_AutoSuccessRangeFromLastSeenLocation_Offset == 0x68, "UAISenseConfig_Sight::AutoSuccessRangeFromLastSeenLocation offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
