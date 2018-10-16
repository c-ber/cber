#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FCheckBoxStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCheckBoxWidgetStyle // Size: 0x618
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UCheckBoxWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1652); // id32("Class Slate.CheckBoxWidgetStyle")
		return ptr;
	}
	FCheckBoxStyle CheckBoxStyle; /* Ofs: 0x38 Size: 0x5E0 - StructProperty Slate.CheckBoxWidgetStyle.CheckBoxStyle */


	inline bool SetCheckBoxStyle(t_structHelper inst, FCheckBoxStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCheckBoxWidgetStyle = sizeof(UCheckBoxWidgetStyle); // 1560
    static_assert(sizeof(UCheckBoxWidgetStyle) == 0x618, "Size of UCheckBoxWidgetStyle is not correct.");
	auto constexpr UCheckBoxWidgetStyle_CheckBoxStyle_Offset = offsetof(UCheckBoxWidgetStyle, CheckBoxStyle);
	static_assert(UCheckBoxWidgetStyle_CheckBoxStyle_Offset == 0x38, "UCheckBoxWidgetStyle::CheckBoxStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
