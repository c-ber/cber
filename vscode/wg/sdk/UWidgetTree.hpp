#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetTree // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UWidgetTree t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(534); // id32("Class UMG.WidgetTree")
		return ptr;
	}
	ExternalPtr<struct UWidget> RootWidget; /* Ofs: 0x30 Size: 0x8 - ObjectProperty UMG.WidgetTree.RootWidget */
	TArray<ExternalPtr<struct UWidget>> AllWidgets; /* Ofs: 0x38 Size: 0x10 - ArrayProperty UMG.WidgetTree.AllWidgets */


	inline bool SetRootWidget(t_structHelper inst, ExternalPtr<struct UWidget> value) { inst.WriteOffset(0x30, value); }
	inline bool SetAllWidgets(t_structHelper inst, TArray<ExternalPtr<struct UWidget>> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetTree = sizeof(UWidgetTree); // 72
    static_assert(sizeof(UWidgetTree) == 0x48, "Size of UWidgetTree is not correct.");
	auto constexpr UWidgetTree_RootWidget_Offset = offsetof(UWidgetTree, RootWidget);
	static_assert(UWidgetTree_RootWidget_Offset == 0x30, "UWidgetTree::RootWidget offset is not 30");
	auto constexpr UWidgetTree_AllWidgets_Offset = offsetof(UWidgetTree, AllWidgets);
	static_assert(UWidgetTree_AllWidgets_Offset == 0x38, "UWidgetTree::AllWidgets offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
