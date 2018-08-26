#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslModularBuilding // Size: 0x510
	: public UActor // Size: 0x410
{
private:
	typedef UTslModularBuilding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1431); // id32("Class TslGame.TslModularBuilding")
		return ptr;
	}
	uint8_t UnknownData410[0x100];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslModularBuilding = sizeof(UTslModularBuilding); // 1296
    static_assert(sizeof(UTslModularBuilding) == 0x510, "Size of UTslModularBuilding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
