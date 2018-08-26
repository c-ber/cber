#pragma once
#include "UCoherentUIGTBaseComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTHUD // Size: 0x520
	: public UCoherentUIGTBaseComponent // Size: 0x500
{
private:
	typedef UCoherentUIGTHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2073); // id32("Class CoherentUIGTPlugin.CoherentUIGTHUD")
		return ptr;
	}
//	FStringAssetReference HUDMaterialName; /* Ofs: 0x4F8 Size: 0x10 - StructProperty CoherentUIGTPlugin.CoherentUIGTHUD.HUDMaterialName */
	uint8_t UnknownData500[0x8];
	ExternalPtr<struct UMaterial> HUDMaterial; /* Ofs: 0x508 Size: 0x8 - ObjectProperty CoherentUIGTPlugin.CoherentUIGTHUD.HUDMaterial */
	ExternalPtr<struct UMaterialInstanceDynamic> HUDMaterialInstance; /* Ofs: 0x510 Size: 0x8 - ObjectProperty CoherentUIGTPlugin.CoherentUIGTHUD.HUDMaterialInstance */
	uint8_t UnknownData518[0x8];


//	inline bool SetHUDMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetHUDMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x508, value); }
	inline bool SetHUDMaterialInstance(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x510, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTHUD = sizeof(UCoherentUIGTHUD); // 1312
    static_assert(sizeof(UCoherentUIGTHUD) == 0x520, "Size of UCoherentUIGTHUD is not correct.");
//	auto constexpr UCoherentUIGTHUD_HUDMaterialName_Offset = offsetof(UCoherentUIGTHUD, HUDMaterialName);
//	static_assert(UCoherentUIGTHUD_HUDMaterialName_Offset == 0x4f8, "UCoherentUIGTHUD::HUDMaterialName offset is not 4f8");
	auto constexpr UCoherentUIGTHUD_HUDMaterial_Offset = offsetof(UCoherentUIGTHUD, HUDMaterial);
	static_assert(UCoherentUIGTHUD_HUDMaterial_Offset == 0x508, "UCoherentUIGTHUD::HUDMaterial offset is not 508");
	auto constexpr UCoherentUIGTHUD_HUDMaterialInstance_Offset = offsetof(UCoherentUIGTHUD, HUDMaterialInstance);
	static_assert(UCoherentUIGTHUD_HUDMaterialInstance_Offset == 0x510, "UCoherentUIGTHUD::HUDMaterialInstance offset is not 510");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
