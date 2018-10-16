#pragma once
#include "UAISense.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense_Hearing // Size: 0x190
	: public UAISense // Size: 0x120
{
private:
	typedef UAISense_Hearing t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1683); // id32("Class AIModule.AISense_Hearing")
		return ptr;
	}
	TArray<struct FAINoiseEvent> NoiseEvents; /* Ofs: 0x120 Size: 0x10 - ArrayProperty AIModule.AISense_Hearing.NoiseEvents */
	float SpeedOfSoundSq; /* Ofs: 0x130 Size: 0x4 - FloatProperty AIModule.AISense_Hearing.SpeedOfSoundSq */
	uint8_t UnknownData134[0x5C];


	inline bool SetNoiseEvents(t_structHelper inst, TArray<struct FAINoiseEvent> value) { inst.WriteOffset(0x120, value); }
	inline bool SetSpeedOfSoundSq(t_structHelper inst, float value) { inst.WriteOffset(0x130, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense_Hearing = sizeof(UAISense_Hearing); // 400
    static_assert(sizeof(UAISense_Hearing) == 0x190, "Size of UAISense_Hearing is not correct.");
	auto constexpr UAISense_Hearing_NoiseEvents_Offset = offsetof(UAISense_Hearing, NoiseEvents);
	static_assert(UAISense_Hearing_NoiseEvents_Offset == 0x120, "UAISense_Hearing::NoiseEvents offset is not 120");
	auto constexpr UAISense_Hearing_SpeedOfSoundSq_Offset = offsetof(UAISense_Hearing, SpeedOfSoundSq);
	static_assert(UAISense_Hearing_SpeedOfSoundSq_Offset == 0x130, "UAISense_Hearing::SpeedOfSoundSq offset is not 130");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
