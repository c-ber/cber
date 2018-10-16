#pragma once
#include "UItemExplorer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNearbyInteractiveItemExplorer // Size: 0x480
	: public UItemExplorer // Size: 0x470
{
private:
	typedef UNearbyInteractiveItemExplorer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1970); // id32("Class TslGame.NearbyInteractiveItemExplorer")
		return ptr;
	}
	TArray<ExternalPtr<struct UObject>> ExplorableItems; /* Ofs: 0x470 Size: 0x10 - ArrayProperty TslGame.NearbyInteractiveItemExplorer.ExplorableItems */


	inline bool SetExplorableItems(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNearbyInteractiveItemExplorer = sizeof(UNearbyInteractiveItemExplorer); // 1152
    static_assert(sizeof(UNearbyInteractiveItemExplorer) == 0x480, "Size of UNearbyInteractiveItemExplorer is not correct.");
	auto constexpr UNearbyInteractiveItemExplorer_ExplorableItems_Offset = offsetof(UNearbyInteractiveItemExplorer, ExplorableItems);
	static_assert(UNearbyInteractiveItemExplorer_ExplorableItems_Offset == 0x470, "UNearbyInteractiveItemExplorer::ExplorableItems offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
