#pragma once
#include "UTslReplicatedBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSelfBuff // Size: 0x470
	: public UTslReplicatedBuff // Size: 0x470
{
private:
	typedef UTslSelfBuff t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1339); // id32("Class TslGame.TslSelfBuff")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSelfBuff = sizeof(UTslSelfBuff); // 1136
    static_assert(sizeof(UTslSelfBuff) == 0x470, "Size of UTslSelfBuff is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
