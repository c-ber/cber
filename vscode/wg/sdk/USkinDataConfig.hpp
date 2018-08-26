#pragma once
#include "UDataAsset.hpp"
#include "ESkinApplicationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkinDataConfig // Size: 0x50
	: public UDataAsset // Size: 0x38
{
private:
	typedef USkinDataConfig t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1957); // id32("Class TslGame.SkinDataConfig")
		return ptr;
	}
	TEnumAsByte<enum ESkinApplicationType> SkinApplicationType; /* Ofs: 0x38 Size: 0x1 - EnumProperty TslGame.SkinDataConfig.SkinApplicationType */
	uint8_t UnknownData39[0x7];
	TArray<struct FSkinMaterialData> SkinMaterials; /* Ofs: 0x40 Size: 0x10 - ArrayProperty TslGame.SkinDataConfig.SkinMaterials */


	inline bool SetSkinApplicationType(t_structHelper inst, TEnumAsByte<enum ESkinApplicationType> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSkinMaterials(t_structHelper inst, TArray<struct FSkinMaterialData> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkinDataConfig = sizeof(USkinDataConfig); // 80
    static_assert(sizeof(USkinDataConfig) == 0x50, "Size of USkinDataConfig is not correct.");
	auto constexpr USkinDataConfig_SkinApplicationType_Offset = offsetof(USkinDataConfig, SkinApplicationType);
	static_assert(USkinDataConfig_SkinApplicationType_Offset == 0x38, "USkinDataConfig::SkinApplicationType offset is not 38");
	auto constexpr USkinDataConfig_SkinMaterials_Offset = offsetof(USkinDataConfig, SkinMaterials);
	static_assert(USkinDataConfig_SkinMaterials_Offset == 0x40, "USkinDataConfig::SkinMaterials offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
