#pragma once
#include "UAISense.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense_Team // Size: 0x130
	: public UAISense // Size: 0x120
{
private:
	typedef UAISense_Team t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1686); // id32("Class AIModule.AISense_Team")
		return ptr;
	}
	TArray<struct FAITeamStimulusEvent> RegisteredEvents; /* Ofs: 0x120 Size: 0x10 - ArrayProperty AIModule.AISense_Team.RegisteredEvents */


	inline bool SetRegisteredEvents(t_structHelper inst, TArray<struct FAITeamStimulusEvent> value) { inst.WriteOffset(0x120, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense_Team = sizeof(UAISense_Team); // 304
    static_assert(sizeof(UAISense_Team) == 0x130, "Size of UAISense_Team is not correct.");
	auto constexpr UAISense_Team_RegisteredEvents_Offset = offsetof(UAISense_Team, RegisteredEvents);
	static_assert(UAISense_Team_RegisteredEvents_Offset == 0x120, "UAISense_Team::RegisteredEvents offset is not 120");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
