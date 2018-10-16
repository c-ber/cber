#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextRenderActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UTextRenderActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1790); // id32("Class Engine.TextRenderActor")
		return ptr;
	}
//	ExternalPtr<struct UTextRenderComponent> TextRender; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.TextRenderActor.TextRender */


//	inline bool SetTextRender(t_structHelper inst, ExternalPtr<struct UTextRenderComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextRenderActor = sizeof(UTextRenderActor); // 1040
    static_assert(sizeof(UTextRenderActor) == 0x410, "Size of UTextRenderActor is not correct.");
//	auto constexpr UTextRenderActor_TextRender_Offset = offsetof(UTextRenderActor, TextRender);
//	static_assert(UTextRenderActor_TextRender_Offset == 0x408, "UTextRenderActor::TextRender offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
