#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDestructibleContainer // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UTslDestructibleContainer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1363); // id32("Class TslGame.TslDestructibleContainer")
		return ptr;
	}
//	uint8_t boolField408;
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDestructibleContainer = sizeof(UTslDestructibleContainer); // 1040
    static_assert(sizeof(UTslDestructibleContainer) == 0x410, "Size of UTslDestructibleContainer is not correct.");
//	auto constexpr UTslDestructibleContainer_boolField408_Offset = offsetof(UTslDestructibleContainer, boolField408);
//	static_assert(UTslDestructibleContainer_boolField408_Offset == 0x408, "UTslDestructibleContainer::boolField408 offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
