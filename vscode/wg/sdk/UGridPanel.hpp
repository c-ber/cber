#pragma once
#include "UPanelWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGridPanel // Size: 0x178
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UGridPanel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(507); // id32("Class UMG.GridPanel")
		return ptr;
	}
	TArray<float> ColumnFill; /* Ofs: 0x148 Size: 0x10 - ArrayProperty UMG.GridPanel.ColumnFill */
	TArray<float> RowFill; /* Ofs: 0x158 Size: 0x10 - ArrayProperty UMG.GridPanel.RowFill */
	uint8_t UnknownData168[0x10];


	inline bool SetColumnFill(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x148, value); }
	inline bool SetRowFill(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x158, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGridPanel = sizeof(UGridPanel); // 376
    static_assert(sizeof(UGridPanel) == 0x178, "Size of UGridPanel is not correct.");
	auto constexpr UGridPanel_ColumnFill_Offset = offsetof(UGridPanel, ColumnFill);
	static_assert(UGridPanel_ColumnFill_Offset == 0x148, "UGridPanel::ColumnFill offset is not 148");
	auto constexpr UGridPanel_RowFill_Offset = offsetof(UGridPanel, RowFill);
	static_assert(UGridPanel_RowFill_Offset == 0x158, "UGridPanel::RowFill offset is not 158");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
