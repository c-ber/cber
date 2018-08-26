#pragma once
#include "FMaterialQualityOverrides.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UShaderPlatformQualitySettings // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UShaderPlatformQualitySettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(339); // id32("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings")
		return ptr;
	}
	FMaterialQualityOverrides QualityOverrides[3]; /* Ofs: 0x3 Size: 0x6 - StructProperty MaterialShaderQualitySettings.ShaderPlatformQualitySettings.QualityOverrides */
	uint8_t UnknownData42[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUShaderPlatformQualitySettings = sizeof(UShaderPlatformQualitySettings); // 72
    static_assert(sizeof(UShaderPlatformQualitySettings) == 0x48, "Size of UShaderPlatformQualitySettings is not correct.");
	auto constexpr UShaderPlatformQualitySettings_QualityOverrides_Offset = offsetof(UShaderPlatformQualitySettings, QualityOverrides);
	static_assert(UShaderPlatformQualitySettings_QualityOverrides_Offset == 0x30, "UShaderPlatformQualitySettings::QualityOverrides offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
