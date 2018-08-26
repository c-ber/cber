#pragma once
#include "UEquipableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteItem // Size: 0x2B0
	: public UEquipableItem // Size: 0x2A8
{
private:
	typedef UParachuteItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1912); // id32("Class TslGame.ParachuteItem")
		return ptr;
	}
	ExternalPtr<struct UClass> ParachuteType; /* Ofs: 0x2A8 Size: 0x8 - ClassProperty TslGame.ParachuteItem.ParachuteType */


	inline bool SetParachuteType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteItem = sizeof(UParachuteItem); // 688
    static_assert(sizeof(UParachuteItem) == 0x2B0, "Size of UParachuteItem is not correct.");
	auto constexpr UParachuteItem_ParachuteType_Offset = offsetof(UParachuteItem, ParachuteType);
	static_assert(UParachuteItem_ParachuteType_Offset == 0x2a8, "UParachuteItem::ParachuteType offset is not 2a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
