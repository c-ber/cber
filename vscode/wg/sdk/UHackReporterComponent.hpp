#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHackReporterComponent // Size: 0x3F0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UHackReporterComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1876); // id32("Class TslGame.HackReporterComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x200];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHackReporterComponent = sizeof(UHackReporterComponent); // 1008
    static_assert(sizeof(UHackReporterComponent) == 0x3F0, "Size of UHackReporterComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
