#pragma once
#include "UAIController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBotAIController // Size: 0x550
	: public UAIController // Size: 0x520
{
private:
	typedef UTslBotAIController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1332); // id32("Class TslGame.TslBotAIController")
		return ptr;
	}
	uint8_t UnknownData520[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBotAIController = sizeof(UTslBotAIController); // 1360
    static_assert(sizeof(UTslBotAIController) == 0x550, "Size of UTslBotAIController is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
