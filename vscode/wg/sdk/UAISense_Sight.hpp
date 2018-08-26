#pragma once
#include "UAISense.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense_Sight // Size: 0x200
	: public UAISense // Size: 0x120
{
private:
	typedef UAISense_Sight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1685); // id32("Class AIModule.AISense_Sight")
		return ptr;
	}
	uint8_t UnknownData120[0xB0];
	int32_t MaxTracesPerTick; /* Ofs: 0x1D0 Size: 0x4 - IntProperty AIModule.AISense_Sight.MaxTracesPerTick */
	int32_t MinQueriesPerTimeSliceCheck; /* Ofs: 0x1D4 Size: 0x4 - IntProperty AIModule.AISense_Sight.MinQueriesPerTimeSliceCheck */
	double MaxTimeSlicePerTick; /* Ofs: 0x1D8 Size: 0x8 - DoubleProperty AIModule.AISense_Sight.MaxTimeSlicePerTick */
	float HighImportanceQueryDistanceThreshold; /* Ofs: 0x1E0 Size: 0x4 - FloatProperty AIModule.AISense_Sight.HighImportanceQueryDistanceThreshold */
	uint8_t UnknownData1E4[0x4];
	float MaxQueryImportance; /* Ofs: 0x1E8 Size: 0x4 - FloatProperty AIModule.AISense_Sight.MaxQueryImportance */
	float SightLimitQueryImportance; /* Ofs: 0x1EC Size: 0x4 - FloatProperty AIModule.AISense_Sight.SightLimitQueryImportance */
	uint8_t UnknownData1F0[0x10];


	inline bool SetMaxTracesPerTick(t_structHelper inst, int32_t value) { inst.WriteOffset(0x1D0, value); }
	inline bool SetMinQueriesPerTimeSliceCheck(t_structHelper inst, int32_t value) { inst.WriteOffset(0x1D4, value); }
	inline bool SetMaxTimeSlicePerTick(t_structHelper inst, double value) { inst.WriteOffset(0x1D8, value); }
	inline bool SetHighImportanceQueryDistanceThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x1E0, value); }
	inline bool SetMaxQueryImportance(t_structHelper inst, float value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetSightLimitQueryImportance(t_structHelper inst, float value) { inst.WriteOffset(0x1EC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense_Sight = sizeof(UAISense_Sight); // 512
    static_assert(sizeof(UAISense_Sight) == 0x200, "Size of UAISense_Sight is not correct.");
	auto constexpr UAISense_Sight_MaxTracesPerTick_Offset = offsetof(UAISense_Sight, MaxTracesPerTick);
	static_assert(UAISense_Sight_MaxTracesPerTick_Offset == 0x1d0, "UAISense_Sight::MaxTracesPerTick offset is not 1d0");
	auto constexpr UAISense_Sight_MinQueriesPerTimeSliceCheck_Offset = offsetof(UAISense_Sight, MinQueriesPerTimeSliceCheck);
	static_assert(UAISense_Sight_MinQueriesPerTimeSliceCheck_Offset == 0x1d4, "UAISense_Sight::MinQueriesPerTimeSliceCheck offset is not 1d4");
	auto constexpr UAISense_Sight_MaxTimeSlicePerTick_Offset = offsetof(UAISense_Sight, MaxTimeSlicePerTick);
	static_assert(UAISense_Sight_MaxTimeSlicePerTick_Offset == 0x1d8, "UAISense_Sight::MaxTimeSlicePerTick offset is not 1d8");
	auto constexpr UAISense_Sight_HighImportanceQueryDistanceThreshold_Offset = offsetof(UAISense_Sight, HighImportanceQueryDistanceThreshold);
	static_assert(UAISense_Sight_HighImportanceQueryDistanceThreshold_Offset == 0x1e0, "UAISense_Sight::HighImportanceQueryDistanceThreshold offset is not 1e0");
	auto constexpr UAISense_Sight_MaxQueryImportance_Offset = offsetof(UAISense_Sight, MaxQueryImportance);
	static_assert(UAISense_Sight_MaxQueryImportance_Offset == 0x1e8, "UAISense_Sight::MaxQueryImportance offset is not 1e8");
	auto constexpr UAISense_Sight_SightLimitQueryImportance_Offset = offsetof(UAISense_Sight, SightLimitQueryImportance);
	static_assert(UAISense_Sight_SightLimitQueryImportance_Offset == 0x1ec, "UAISense_Sight::SightLimitQueryImportance offset is not 1ec");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
