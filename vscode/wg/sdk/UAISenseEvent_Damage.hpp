#pragma once
#include "UAISenseEvent.hpp"
#include "FAIDamageEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseEvent_Damage // Size: 0x60
	: public UAISenseEvent // Size: 0x30
{
private:
	typedef UAISenseEvent_Damage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(536); // id32("Class AIModule.AISenseEvent_Damage")
		return ptr;
	}
	FAIDamageEvent Event; /* Ofs: 0x30 Size: 0x30 - StructProperty AIModule.AISenseEvent_Damage.Event */


	inline bool SetEvent(t_structHelper inst, FAIDamageEvent value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseEvent_Damage = sizeof(UAISenseEvent_Damage); // 96
    static_assert(sizeof(UAISenseEvent_Damage) == 0x60, "Size of UAISenseEvent_Damage is not correct.");
	auto constexpr UAISenseEvent_Damage_Event_Offset = offsetof(UAISenseEvent_Damage, Event);
	static_assert(UAISenseEvent_Damage_Event_Offset == 0x30, "UAISenseEvent_Damage::Event offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
