#pragma once
#include "UTslBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReplicatedBuff // Size: 0x470
	: public UTslBuff // Size: 0x470
{
private:
	typedef UTslReplicatedBuff t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1337); // id32("Class TslGame.TslReplicatedBuff")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReplicatedBuff = sizeof(UTslReplicatedBuff); // 1136
    static_assert(sizeof(UTslReplicatedBuff) == 0x470, "Size of UTslReplicatedBuff is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
