#pragma once
#include "UConsole.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslConsole // Size: 0x140
	: public UConsole // Size: 0x138
{
private:
	typedef UTslConsole t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1353); // id32("Class TslGame.TslConsole")
		return ptr;
	}
	uint8_t UnknownData138[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslConsole = sizeof(UTslConsole); // 320
    static_assert(sizeof(UTslConsole) == 0x140, "Size of UTslConsole is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
