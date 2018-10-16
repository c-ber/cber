#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInstancedFoliageActor // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UInstancedFoliageActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(390); // id32("Class Foliage.InstancedFoliageActor")
		return ptr;
	}
	uint8_t UnknownData410[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInstancedFoliageActor = sizeof(UInstancedFoliageActor); // 1120
    static_assert(sizeof(UInstancedFoliageActor) == 0x460, "Size of UInstancedFoliageActor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
