#pragma once
#include "UBTTask_BlackboardBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_FindPointNearEnemy // Size: 0xA0
	: public UBTTask_BlackboardBase // Size: 0xA0
{
private:
	typedef UBTTask_FindPointNearEnemy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(423); // id32("Class TslGame.BTTask_FindPointNearEnemy")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_FindPointNearEnemy = sizeof(UBTTask_FindPointNearEnemy); // 160
    static_assert(sizeof(UBTTask_FindPointNearEnemy) == 0xA0, "Size of UBTTask_FindPointNearEnemy is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
