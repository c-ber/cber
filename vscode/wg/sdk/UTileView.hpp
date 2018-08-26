#pragma once
#include "UTableViewBase.hpp"
#include "ESelectionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTileView // Size: 0x170
	: public UTableViewBase // Size: 0x130
{
private:
	typedef UTileView t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(522); // id32("Class UMG.TileView")
		return ptr;
	}
	float ItemWidth; /* Ofs: 0x130 Size: 0x4 - FloatProperty UMG.TileView.ItemWidth */
	float ItemHeight; /* Ofs: 0x134 Size: 0x4 - FloatProperty UMG.TileView.ItemHeight */
	TArray<ExternalPtr<struct UObject>> Items; /* Ofs: 0x138 Size: 0x10 - ArrayProperty UMG.TileView.Items */
	TEnumAsByte<enum ESelectionMode> SelectionMode; /* Ofs: 0x148 Size: 0x1 - ByteProperty UMG.TileView.SelectionMode */
	uint8_t UnknownData149[0x7];
	FScriptDelegate OnGenerateTileEvent; /* Ofs: 0x150 Size: 0x10 - DelegateProperty UMG.TileView.OnGenerateTileEvent */
	uint8_t UnknownData160[0x10];


	inline bool SetItemWidth(t_structHelper inst, float value) { inst.WriteOffset(0x130, value); }
	inline bool SetItemHeight(t_structHelper inst, float value) { inst.WriteOffset(0x134, value); }
	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x138, value); }
	inline bool SetSelectionMode(t_structHelper inst, TEnumAsByte<enum ESelectionMode> value) { inst.WriteOffset(0x148, value); }
	inline bool SetOnGenerateTileEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x150, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTileView = sizeof(UTileView); // 368
    static_assert(sizeof(UTileView) == 0x170, "Size of UTileView is not correct.");
	auto constexpr UTileView_ItemWidth_Offset = offsetof(UTileView, ItemWidth);
	static_assert(UTileView_ItemWidth_Offset == 0x130, "UTileView::ItemWidth offset is not 130");
	auto constexpr UTileView_ItemHeight_Offset = offsetof(UTileView, ItemHeight);
	static_assert(UTileView_ItemHeight_Offset == 0x134, "UTileView::ItemHeight offset is not 134");
	auto constexpr UTileView_Items_Offset = offsetof(UTileView, Items);
	static_assert(UTileView_Items_Offset == 0x138, "UTileView::Items offset is not 138");
	auto constexpr UTileView_SelectionMode_Offset = offsetof(UTileView, SelectionMode);
	static_assert(UTileView_SelectionMode_Offset == 0x148, "UTileView::SelectionMode offset is not 148");
	auto constexpr UTileView_OnGenerateTileEvent_Offset = offsetof(UTileView, OnGenerateTileEvent);
	static_assert(UTileView_OnGenerateTileEvent_Offset == 0x150, "UTileView::OnGenerateTileEvent offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
