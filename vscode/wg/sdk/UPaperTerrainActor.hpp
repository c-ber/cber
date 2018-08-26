#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTerrainActor // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UPaperTerrainActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2035); // id32("Class Paper2D.PaperTerrainActor")
		return ptr;
	}
//	ExternalPtr<struct USceneComponent> DummyRoot; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Paper2D.PaperTerrainActor.DummyRoot */
	ExternalPtr<struct UPaperTerrainSplineComponent> SplineComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Paper2D.PaperTerrainActor.SplineComponent */
	ExternalPtr<struct UPaperTerrainComponent> RenderComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Paper2D.PaperTerrainActor.RenderComponent */


//	inline bool SetDummyRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetSplineComponent(t_structHelper inst, ExternalPtr<struct UPaperTerrainSplineComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetRenderComponent(t_structHelper inst, ExternalPtr<struct UPaperTerrainComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTerrainActor = sizeof(UPaperTerrainActor); // 1056
    static_assert(sizeof(UPaperTerrainActor) == 0x420, "Size of UPaperTerrainActor is not correct.");
//	auto constexpr UPaperTerrainActor_DummyRoot_Offset = offsetof(UPaperTerrainActor, DummyRoot);
//	static_assert(UPaperTerrainActor_DummyRoot_Offset == 0x408, "UPaperTerrainActor::DummyRoot offset is not 408");
	auto constexpr UPaperTerrainActor_SplineComponent_Offset = offsetof(UPaperTerrainActor, SplineComponent);
	static_assert(UPaperTerrainActor_SplineComponent_Offset == 0x410, "UPaperTerrainActor::SplineComponent offset is not 410");
	auto constexpr UPaperTerrainActor_RenderComponent_Offset = offsetof(UPaperTerrainActor, RenderComponent);
	static_assert(UPaperTerrainActor_RenderComponent_Offset == 0x418, "UPaperTerrainActor::RenderComponent offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
