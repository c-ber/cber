#pragma once
#include "UContentWidget.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UViewport // Size: 0x170
	: public UContentWidget // Size: 0x148
{
private:
	typedef UViewport t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(506); // id32("Class UMG.Viewport")
		return ptr;
	}
	FLinearColor BackgroundColor; /* Ofs: 0x148 Size: 0x10 - StructProperty UMG.Viewport.BackgroundColor */
	uint8_t UnknownData158[0x18];


	inline bool SetBackgroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUViewport = sizeof(UViewport); // 368
    static_assert(sizeof(UViewport) == 0x170, "Size of UViewport is not correct.");
	auto constexpr UViewport_BackgroundColor_Offset = offsetof(UViewport, BackgroundColor);
	static_assert(UViewport_BackgroundColor_Offset == 0x148, "UViewport::BackgroundColor offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
