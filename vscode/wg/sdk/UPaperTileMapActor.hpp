#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTileMapActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UPaperTileMapActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2041); // id32("Class Paper2D.PaperTileMapActor")
		return ptr;
	}
//	ExternalPtr<struct UPaperTileMapComponent> RenderComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Paper2D.PaperTileMapActor.RenderComponent */


//	inline bool SetRenderComponent(t_structHelper inst, ExternalPtr<struct UPaperTileMapComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTileMapActor = sizeof(UPaperTileMapActor); // 1040
    static_assert(sizeof(UPaperTileMapActor) == 0x410, "Size of UPaperTileMapActor is not correct.");
//	auto constexpr UPaperTileMapActor_RenderComponent_Offset = offsetof(UPaperTileMapActor, RenderComponent);
//	static_assert(UPaperTileMapActor_RenderComponent_Offset == 0x408, "UPaperTileMapActor::RenderComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
