#pragma once
#include "UTableViewBase.hpp"
#include "ESelectionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UListView // Size: 0x170
	: public UTableViewBase // Size: 0x130
{
private:
	typedef UListView t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(521); // id32("Class UMG.ListView")
		return ptr;
	}
	float ItemHeight; /* Ofs: 0x130 Size: 0x4 - FloatProperty UMG.ListView.ItemHeight */
	uint8_t UnknownData134[0x4];
	TArray<ExternalPtr<struct UObject>> Items; /* Ofs: 0x138 Size: 0x10 - ArrayProperty UMG.ListView.Items */
	TEnumAsByte<enum ESelectionMode> SelectionMode; /* Ofs: 0x148 Size: 0x1 - ByteProperty UMG.ListView.SelectionMode */
	uint8_t UnknownData149[0x7];
	FScriptDelegate OnGenerateRowEvent; /* Ofs: 0x150 Size: 0x10 - DelegateProperty UMG.ListView.OnGenerateRowEvent */
	uint8_t UnknownData160[0x10];


	inline bool SetItemHeight(t_structHelper inst, float value) { inst.WriteOffset(0x130, value); }
	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x138, value); }
	inline bool SetSelectionMode(t_structHelper inst, TEnumAsByte<enum ESelectionMode> value) { inst.WriteOffset(0x148, value); }
	inline bool SetOnGenerateRowEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x150, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUListView = sizeof(UListView); // 368
    static_assert(sizeof(UListView) == 0x170, "Size of UListView is not correct.");
	auto constexpr UListView_ItemHeight_Offset = offsetof(UListView, ItemHeight);
	static_assert(UListView_ItemHeight_Offset == 0x130, "UListView::ItemHeight offset is not 130");
	auto constexpr UListView_Items_Offset = offsetof(UListView, Items);
	static_assert(UListView_Items_Offset == 0x138, "UListView::Items offset is not 138");
	auto constexpr UListView_SelectionMode_Offset = offsetof(UListView, SelectionMode);
	static_assert(UListView_SelectionMode_Offset == 0x148, "UListView::SelectionMode offset is not 148");
	auto constexpr UListView_OnGenerateRowEvent_Offset = offsetof(UListView, OnGenerateRowEvent);
	static_assert(UListView_OnGenerateRowEvent_Offset == 0x150, "UListView::OnGenerateRowEvent offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
