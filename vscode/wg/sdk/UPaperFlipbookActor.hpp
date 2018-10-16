#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperFlipbookActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UPaperFlipbookActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2025); // id32("Class Paper2D.PaperFlipbookActor")
		return ptr;
	}
//	ExternalPtr<struct UPaperFlipbookComponent> RenderComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Paper2D.PaperFlipbookActor.RenderComponent */


//	inline bool SetRenderComponent(t_structHelper inst, ExternalPtr<struct UPaperFlipbookComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperFlipbookActor = sizeof(UPaperFlipbookActor); // 1040
    static_assert(sizeof(UPaperFlipbookActor) == 0x410, "Size of UPaperFlipbookActor is not correct.");
//	auto constexpr UPaperFlipbookActor_RenderComponent_Offset = offsetof(UPaperFlipbookActor, RenderComponent);
//	static_assert(UPaperFlipbookActor_RenderComponent_Offset == 0x408, "UPaperFlipbookActor::RenderComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
