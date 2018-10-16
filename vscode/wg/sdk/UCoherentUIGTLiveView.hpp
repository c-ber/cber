#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTLiveView // Size: 0x220
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UCoherentUIGTLiveView t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2077); // id32("Class CoherentUIGTPlugin.CoherentUIGTLiveView")
		return ptr;
	}
//	FString LinkName; /* Ofs: 0x1E8 Size: 0x10 - StrProperty CoherentUIGTPlugin.CoherentUIGTLiveView.LinkName */
	uint8_t UnknownData1F0[0x8];
	ExternalPtr<struct UTextureRenderTarget2D> Texture; /* Ofs: 0x1F8 Size: 0x8 - ObjectProperty CoherentUIGTPlugin.CoherentUIGTLiveView.Texture */
	uint8_t UnknownData200[0x20];


//	inline bool SetLinkName(t_structHelper inst, FString value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetTexture(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTLiveView = sizeof(UCoherentUIGTLiveView); // 544
    static_assert(sizeof(UCoherentUIGTLiveView) == 0x220, "Size of UCoherentUIGTLiveView is not correct.");
//	auto constexpr UCoherentUIGTLiveView_LinkName_Offset = offsetof(UCoherentUIGTLiveView, LinkName);
//	static_assert(UCoherentUIGTLiveView_LinkName_Offset == 0x1e8, "UCoherentUIGTLiveView::LinkName offset is not 1e8");
	auto constexpr UCoherentUIGTLiveView_Texture_Offset = offsetof(UCoherentUIGTLiveView, Texture);
	static_assert(UCoherentUIGTLiveView_Texture_Offset == 0x1f8, "UCoherentUIGTLiveView::Texture offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
