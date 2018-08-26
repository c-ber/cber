#pragma once
#include "UViewModeStudio.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemStudio // Size: 0x470
	: public UViewModeStudio // Size: 0x470
{
private:
	typedef UItemStudio t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(60); // id32("Class TslGame.ItemStudio")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemStudio = sizeof(UItemStudio); // 1136
    static_assert(sizeof(UItemStudio) == 0x470, "Size of UItemStudio is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
