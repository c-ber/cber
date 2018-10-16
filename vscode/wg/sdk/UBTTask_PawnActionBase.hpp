#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_PawnActionBase // Size: 0x78
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_PawnActionBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(603); // id32("Class AIModule.BTTask_PawnActionBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_PawnActionBase = sizeof(UBTTask_PawnActionBase); // 120
    static_assert(sizeof(UBTTask_PawnActionBase) == 0x78, "Size of UBTTask_PawnActionBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
