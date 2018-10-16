#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperSpriteActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UPaperSpriteActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2031); // id32("Class Paper2D.PaperSpriteActor")
		return ptr;
	}
//	ExternalPtr<struct UPaperSpriteComponent> RenderComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Paper2D.PaperSpriteActor.RenderComponent */


//	inline bool SetRenderComponent(t_structHelper inst, ExternalPtr<struct UPaperSpriteComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperSpriteActor = sizeof(UPaperSpriteActor); // 1040
    static_assert(sizeof(UPaperSpriteActor) == 0x410, "Size of UPaperSpriteActor is not correct.");
//	auto constexpr UPaperSpriteActor_RenderComponent_Offset = offsetof(UPaperSpriteActor, RenderComponent);
//	static_assert(UPaperSpriteActor_RenderComponent_Offset == 0x408, "UPaperSpriteActor::RenderComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
