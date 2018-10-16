#pragma once
#include "UCheatManager.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCheatManager // Size: 0x98
	: public UCheatManager // Size: 0x80
{
private:
	typedef UTslCheatManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1349); // id32("Class TslGame.TslCheatManager")
		return ptr;
	}
	uint8_t UnknownData80[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCheatManager = sizeof(UTslCheatManager); // 152
    static_assert(sizeof(UTslCheatManager) == 0x98, "Size of UTslCheatManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
