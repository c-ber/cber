#pragma once
#include "FLightmassMaterialInterfaceSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialInterface // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UMaterialInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1018); // id32("Class Engine.MaterialInterface")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct USubsurfaceProfile> SubsurfaceProfile; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.MaterialInterface.SubsurfaceProfile */
	uint8_t UnknownData40[0x8];
	FLightmassMaterialInterfaceSettings LightmassSettings; /* Ofs: 0x48 Size: 0x14 - StructProperty Engine.MaterialInterface.LightmassSettings */
	uint8_t UnknownData5C[0x4];
	TArray<struct FMaterialTextureInfo> TextureStreamingData; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.MaterialInterface.TextureStreamingData */
	uint8_t UnknownData70[0x8];


	inline bool SetSubsurfaceProfile(t_structHelper inst, ExternalPtr<struct USubsurfaceProfile> value) { inst.WriteOffset(0x38, value); }
	inline bool SetLightmassSettings(t_structHelper inst, FLightmassMaterialInterfaceSettings value) { inst.WriteOffset(0x48, value); }
	inline bool SetTextureStreamingData(t_structHelper inst, TArray<struct FMaterialTextureInfo> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialInterface = sizeof(UMaterialInterface); // 120
    static_assert(sizeof(UMaterialInterface) == 0x78, "Size of UMaterialInterface is not correct.");
	auto constexpr UMaterialInterface_SubsurfaceProfile_Offset = offsetof(UMaterialInterface, SubsurfaceProfile);
	static_assert(UMaterialInterface_SubsurfaceProfile_Offset == 0x38, "UMaterialInterface::SubsurfaceProfile offset is not 38");
	auto constexpr UMaterialInterface_LightmassSettings_Offset = offsetof(UMaterialInterface, LightmassSettings);
	static_assert(UMaterialInterface_LightmassSettings_Offset == 0x48, "UMaterialInterface::LightmassSettings offset is not 48");
	auto constexpr UMaterialInterface_TextureStreamingData_Offset = offsetof(UMaterialInterface, TextureStreamingData);
	static_assert(UMaterialInterface_TextureStreamingData_Offset == 0x60, "UMaterialInterface::TextureStreamingData offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
