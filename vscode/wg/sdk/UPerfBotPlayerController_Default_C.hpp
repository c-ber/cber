#pragma once
#include "UPerfBotPlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPerfBotPlayerController_Default_C // Size: 0xD30
	: public UPerfBotPlayerController // Size: 0xD30
{
private:
	typedef UPerfBotPlayerController_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135566); // id32("BlueprintGeneratedClass PerfBotPlayerController_Default.PerfBotPlayerController_Default_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPerfBotPlayerController_Default_C = sizeof(UPerfBotPlayerController_Default_C); // 3376
    static_assert(sizeof(UPerfBotPlayerController_Default_C) == 0xD30, "Size of UPerfBotPlayerController_Default_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
