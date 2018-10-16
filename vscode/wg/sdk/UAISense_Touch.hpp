#pragma once
#include "UAISense.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense_Touch // Size: 0x130
	: public UAISense // Size: 0x120
{
private:
	typedef UAISense_Touch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1687); // id32("Class AIModule.AISense_Touch")
		return ptr;
	}
	TArray<struct FAITouchEvent> RegisteredEvents; /* Ofs: 0x120 Size: 0x10 - ArrayProperty AIModule.AISense_Touch.RegisteredEvents */


	inline bool SetRegisteredEvents(t_structHelper inst, TArray<struct FAITouchEvent> value) { inst.WriteOffset(0x120, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense_Touch = sizeof(UAISense_Touch); // 304
    static_assert(sizeof(UAISense_Touch) == 0x130, "Size of UAISense_Touch is not correct.");
	auto constexpr UAISense_Touch_RegisteredEvents_Offset = offsetof(UAISense_Touch, RegisteredEvents);
	static_assert(UAISense_Touch_RegisteredEvents_Offset == 0x120, "UAISense_Touch::RegisteredEvents offset is not 120");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
