#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FEditableTextStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableTextWidgetStyle // Size: 0x280
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UEditableTextWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1656); // id32("Class Slate.EditableTextWidgetStyle")
		return ptr;
	}
	FEditableTextStyle EditableTextStyle; /* Ofs: 0x38 Size: 0x248 - StructProperty Slate.EditableTextWidgetStyle.EditableTextStyle */


	inline bool SetEditableTextStyle(t_structHelper inst, FEditableTextStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableTextWidgetStyle = sizeof(UEditableTextWidgetStyle); // 640
    static_assert(sizeof(UEditableTextWidgetStyle) == 0x280, "Size of UEditableTextWidgetStyle is not correct.");
	auto constexpr UEditableTextWidgetStyle_EditableTextStyle_Offset = offsetof(UEditableTextWidgetStyle, EditableTextStyle);
	static_assert(UEditableTextWidgetStyle_EditableTextStyle_Offset == 0x38, "UEditableTextWidgetStyle::EditableTextStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
