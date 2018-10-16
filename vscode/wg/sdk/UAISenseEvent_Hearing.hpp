#pragma once
#include "UAISenseEvent.hpp"
#include "FAINoiseEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseEvent_Hearing // Size: 0x60
	: public UAISenseEvent // Size: 0x30
{
private:
	typedef UAISenseEvent_Hearing t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(537); // id32("Class AIModule.AISenseEvent_Hearing")
		return ptr;
	}
	FAINoiseEvent Event; /* Ofs: 0x30 Size: 0x30 - StructProperty AIModule.AISenseEvent_Hearing.Event */


	inline bool SetEvent(t_structHelper inst, FAINoiseEvent value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseEvent_Hearing = sizeof(UAISenseEvent_Hearing); // 96
    static_assert(sizeof(UAISenseEvent_Hearing) == 0x60, "Size of UAISenseEvent_Hearing is not correct.");
	auto constexpr UAISenseEvent_Hearing_Event_Offset = offsetof(UAISenseEvent_Hearing, Event);
	static_assert(UAISenseEvent_Hearing_Event_Offset == 0x30, "UAISenseEvent_Hearing::Event offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
