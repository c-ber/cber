#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialShaderQualitySettings // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef UMaterialShaderQualitySettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(338); // id32("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings")
		return ptr;
	}
	TMap<struct FName, struct UShaderPlatformQualitySettings> ForwardSettingMap; /* Ofs: 0x30 Size: 0x50 - MapProperty MaterialShaderQualitySettings.MaterialShaderQualitySettings.ForwardSettingMap */


	inline bool SetForwardSettingMap(t_structHelper inst, TMap<struct FName, struct UShaderPlatformQualitySettings> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialShaderQualitySettings = sizeof(UMaterialShaderQualitySettings); // 128
    static_assert(sizeof(UMaterialShaderQualitySettings) == 0x80, "Size of UMaterialShaderQualitySettings is not correct.");
	auto constexpr UMaterialShaderQualitySettings_ForwardSettingMap_Offset = offsetof(UMaterialShaderQualitySettings, ForwardSettingMap);
	static_assert(UMaterialShaderQualitySettings_ForwardSettingMap_Offset == 0x30, "UMaterialShaderQualitySettings::ForwardSettingMap offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
