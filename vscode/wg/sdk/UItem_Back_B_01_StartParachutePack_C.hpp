#pragma once
#include "UParachuteItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Back_B_01_StartParachutePack_C // Size: 0x2B0
	: public UParachuteItem // Size: 0x2B0
{
private:
	typedef UItem_Back_B_01_StartParachutePack_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91072); // id32("BlueprintGeneratedClass Item_Back_B_01_StartParachutePack.Item_Back_B_01_StartParachutePack_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Back_B_01_StartParachutePack_C = sizeof(UItem_Back_B_01_StartParachutePack_C); // 688
    static_assert(sizeof(UItem_Back_B_01_StartParachutePack_C) == 0x2B0, "Size of UItem_Back_B_01_StartParachutePack_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
