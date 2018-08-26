#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAccuracyManager // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslAccuracyManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1981); // id32("Class TslGame.TslAccuracyManager")
		return ptr;
	}
	uint8_t UnknownData410[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAccuracyManager = sizeof(UTslAccuracyManager); // 1056
    static_assert(sizeof(UTslAccuracyManager) == 0x420, "Size of UTslAccuracyManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
