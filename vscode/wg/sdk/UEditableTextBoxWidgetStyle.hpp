#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FEditableTextBoxStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableTextBoxWidgetStyle // Size: 0x8A8
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UEditableTextBoxWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1655); // id32("Class Slate.EditableTextBoxWidgetStyle")
		return ptr;
	}
	FEditableTextBoxStyle EditableTextBoxStyle; /* Ofs: 0x38 Size: 0x870 - StructProperty Slate.EditableTextBoxWidgetStyle.EditableTextBoxStyle */


	inline bool SetEditableTextBoxStyle(t_structHelper inst, FEditableTextBoxStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableTextBoxWidgetStyle = sizeof(UEditableTextBoxWidgetStyle); // 2216
    static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x8A8, "Size of UEditableTextBoxWidgetStyle is not correct.");
	auto constexpr UEditableTextBoxWidgetStyle_EditableTextBoxStyle_Offset = offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle);
	static_assert(UEditableTextBoxWidgetStyle_EditableTextBoxStyle_Offset == 0x38, "UEditableTextBoxWidgetStyle::EditableTextBoxStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
