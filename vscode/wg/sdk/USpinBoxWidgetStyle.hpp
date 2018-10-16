#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FSpinBoxStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpinBoxWidgetStyle // Size: 0x348
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef USpinBoxWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1661); // id32("Class Slate.SpinBoxWidgetStyle")
		return ptr;
	}
	FSpinBoxStyle SpinBoxStyle; /* Ofs: 0x38 Size: 0x310 - StructProperty Slate.SpinBoxWidgetStyle.SpinBoxStyle */


	inline bool SetSpinBoxStyle(t_structHelper inst, FSpinBoxStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpinBoxWidgetStyle = sizeof(USpinBoxWidgetStyle); // 840
    static_assert(sizeof(USpinBoxWidgetStyle) == 0x348, "Size of USpinBoxWidgetStyle is not correct.");
	auto constexpr USpinBoxWidgetStyle_SpinBoxStyle_Offset = offsetof(USpinBoxWidgetStyle, SpinBoxStyle);
	static_assert(USpinBoxWidgetStyle_SpinBoxStyle_Offset == 0x38, "USpinBoxWidgetStyle::SpinBoxStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
