#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperGroupedSpriteActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UPaperGroupedSpriteActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2027); // id32("Class Paper2D.PaperGroupedSpriteActor")
		return ptr;
	}
//	ExternalPtr<struct UPaperGroupedSpriteComponent> RenderComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Paper2D.PaperGroupedSpriteActor.RenderComponent */


//	inline bool SetRenderComponent(t_structHelper inst, ExternalPtr<struct UPaperGroupedSpriteComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperGroupedSpriteActor = sizeof(UPaperGroupedSpriteActor); // 1040
    static_assert(sizeof(UPaperGroupedSpriteActor) == 0x410, "Size of UPaperGroupedSpriteActor is not correct.");
//	auto constexpr UPaperGroupedSpriteActor_RenderComponent_Offset = offsetof(UPaperGroupedSpriteActor, RenderComponent);
//	static_assert(UPaperGroupedSpriteActor_RenderComponent_Offset == 0x408, "UPaperGroupedSpriteActor::RenderComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
