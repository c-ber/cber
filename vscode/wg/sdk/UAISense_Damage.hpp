#pragma once
#include "UAISense.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense_Damage // Size: 0x130
	: public UAISense // Size: 0x120
{
private:
	typedef UAISense_Damage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1682); // id32("Class AIModule.AISense_Damage")
		return ptr;
	}
	TArray<struct FAIDamageEvent> RegisteredEvents; /* Ofs: 0x120 Size: 0x10 - ArrayProperty AIModule.AISense_Damage.RegisteredEvents */


	inline bool SetRegisteredEvents(t_structHelper inst, TArray<struct FAIDamageEvent> value) { inst.WriteOffset(0x120, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense_Damage = sizeof(UAISense_Damage); // 304
    static_assert(sizeof(UAISense_Damage) == 0x130, "Size of UAISense_Damage is not correct.");
	auto constexpr UAISense_Damage_RegisteredEvents_Offset = offsetof(UAISense_Damage, RegisteredEvents);
	static_assert(UAISense_Damage_RegisteredEvents_Offset == 0x120, "UAISense_Damage::RegisteredEvents offset is not 120");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
