#pragma once
#include "UGameSession.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGameSession // Size: 0x730
	: public UGameSession // Size: 0x420
{
private:
	typedef UTslGameSession t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1393); // id32("Class TslGame.TslGameSession")
		return ptr;
	}
	uint8_t UnknownData420[0x310];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGameSession = sizeof(UTslGameSession); // 1840
    static_assert(sizeof(UTslGameSession) == 0x730, "Size of UTslGameSession is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
