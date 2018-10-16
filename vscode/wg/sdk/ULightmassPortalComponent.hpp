#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightmassPortalComponent // Size: 0x4A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef ULightmassPortalComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(192); // id32("Class Engine.LightmassPortalComponent")
		return ptr;
	}
	ExternalPtr<struct UBoxComponent> PreviewBox; /* Ofs: 0x490 Size: 0x8 - ObjectProperty Engine.LightmassPortalComponent.PreviewBox */
	uint8_t UnknownData498[0x8];


	inline bool SetPreviewBox(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightmassPortalComponent = sizeof(ULightmassPortalComponent); // 1184
    static_assert(sizeof(ULightmassPortalComponent) == 0x4A0, "Size of ULightmassPortalComponent is not correct.");
	auto constexpr ULightmassPortalComponent_PreviewBox_Offset = offsetof(ULightmassPortalComponent, PreviewBox);
	static_assert(ULightmassPortalComponent_PreviewBox_Offset == 0x490, "ULightmassPortalComponent::PreviewBox offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
