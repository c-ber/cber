#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDecalEmitter // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslDecalEmitter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1361); // id32("Class TslGame.TslDecalEmitter")
		return ptr;
	}
	uint8_t UnknownData410[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDecalEmitter = sizeof(UTslDecalEmitter); // 1056
    static_assert(sizeof(UTslDecalEmitter) == 0x420, "Size of UTslDecalEmitter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
