#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDropMagazine // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslDropMagazine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1365); // id32("Class TslGame.TslDropMagazine")
		return ptr;
	}
//	ExternalPtr<struct UStaticMeshComponent> MagMeshComp; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslDropMagazine.MagMeshComp */
	ExternalPtr<struct UTslFPPShadowSupportComponent> FPPShadowSupportComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslDropMagazine.FPPShadowSupportComponent */
	uint8_t UnknownData418[0x8];


//	inline bool SetMagMeshComp(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetFPPShadowSupportComponent(t_structHelper inst, ExternalPtr<struct UTslFPPShadowSupportComponent> value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDropMagazine = sizeof(UTslDropMagazine); // 1056
    static_assert(sizeof(UTslDropMagazine) == 0x420, "Size of UTslDropMagazine is not correct.");
//	auto constexpr UTslDropMagazine_MagMeshComp_Offset = offsetof(UTslDropMagazine, MagMeshComp);
//	static_assert(UTslDropMagazine_MagMeshComp_Offset == 0x408, "UTslDropMagazine::MagMeshComp offset is not 408");
	auto constexpr UTslDropMagazine_FPPShadowSupportComponent_Offset = offsetof(UTslDropMagazine, FPPShadowSupportComponent);
	static_assert(UTslDropMagazine_FPPShadowSupportComponent_Offset == 0x410, "UTslDropMagazine::FPPShadowSupportComponent offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
