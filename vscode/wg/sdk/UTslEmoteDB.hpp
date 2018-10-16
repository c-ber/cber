#pragma once
#include "UDataTable.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEmoteDB // Size: 0x88
	: public UDataTable // Size: 0x88
{
private:
	typedef UTslEmoteDB t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1879); // id32("Class TslGame.TslEmoteDB")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEmoteDB = sizeof(UTslEmoteDB); // 136
    static_assert(sizeof(UTslEmoteDB) == 0x88, "Size of UTslEmoteDB is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
