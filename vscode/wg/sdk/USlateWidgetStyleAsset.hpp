#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlateWidgetStyleAsset // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef USlateWidgetStyleAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(380); // id32("Class SlateCore.SlateWidgetStyleAsset")
		return ptr;
	}
	ExternalPtr<struct USlateWidgetStyleContainerBase> CustomStyle; /* Ofs: 0x30 Size: 0x8 - ObjectProperty SlateCore.SlateWidgetStyleAsset.CustomStyle */


	inline bool SetCustomStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleContainerBase> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlateWidgetStyleAsset = sizeof(USlateWidgetStyleAsset); // 56
    static_assert(sizeof(USlateWidgetStyleAsset) == 0x38, "Size of USlateWidgetStyleAsset is not correct.");
	auto constexpr USlateWidgetStyleAsset_CustomStyle_Offset = offsetof(USlateWidgetStyleAsset, CustomStyle);
	static_assert(USlateWidgetStyleAsset_CustomStyle_Offset == 0x30, "USlateWidgetStyleAsset::CustomStyle offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
