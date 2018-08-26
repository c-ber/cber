#pragma once
#include "UItemSlotContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemExplorer // Size: 0x470
	: public UItemSlotContainer // Size: 0x440
{
private:
	typedef UItemExplorer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1842); // id32("Class TslGame.ItemExplorer")
		return ptr;
	}
	uint8_t UnknownData440[0x8];
	FScriptDelegate OnUpdateItemList; /* Ofs: 0x448 Size: 0x10 - DelegateProperty TslGame.ItemExplorer.OnUpdateItemList */
	FScriptDelegate OnClearItemList; /* Ofs: 0x458 Size: 0x10 - DelegateProperty TslGame.ItemExplorer.OnClearItemList */
	uint8_t UnknownData468[0x8];


	inline bool SetOnUpdateItemList(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x448, value); }
	inline bool SetOnClearItemList(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x458, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemExplorer = sizeof(UItemExplorer); // 1136
    static_assert(sizeof(UItemExplorer) == 0x470, "Size of UItemExplorer is not correct.");
	auto constexpr UItemExplorer_OnUpdateItemList_Offset = offsetof(UItemExplorer, OnUpdateItemList);
	static_assert(UItemExplorer_OnUpdateItemList_Offset == 0x448, "UItemExplorer::OnUpdateItemList offset is not 448");
	auto constexpr UItemExplorer_OnClearItemList_Offset = offsetof(UItemExplorer, OnClearItemList);
	static_assert(UItemExplorer_OnClearItemList_Offset == 0x458, "UItemExplorer::OnClearItemList offset is not 458");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
