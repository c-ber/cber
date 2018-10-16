#pragma once
#include "FGuid.hpp"
#include "TextureCompressionSettings.hpp"
#include "TextureFilter.hpp"
#include "TextureGroup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTexture // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UTexture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(356); // id32("Class Engine.Texture")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	FGuid LightingGuid; /* Ofs: 0x38 Size: 0x10 - StructProperty Engine.Texture.LightingGuid */
	int32_t LODBias; /* Ofs: 0x48 Size: 0x4 - IntProperty Engine.Texture.LODBias */
	int32_t NumCinematicMipLevels; /* Ofs: 0x4C Size: 0x4 - IntProperty Engine.Texture.NumCinematicMipLevels */
	int32_t GlobalLODBias; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.Texture.GlobalLODBias */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.Texture.AssetUserData */
	int32_t CachedCombinedLODBias; /* Ofs: 0x68 Size: 0x4 - IntProperty Engine.Texture.CachedCombinedLODBias */
	uint8_t boolField6C;
	uint8_t UnknownData6D[0x3];
	TEnumAsByte<enum TextureCompressionSettings> CompressionSettings; /* Ofs: 0x70 Size: 0x1 - ByteProperty Engine.Texture.CompressionSettings */
	TEnumAsByte<enum TextureFilter> Filter; /* Ofs: 0x71 Size: 0x1 - ByteProperty Engine.Texture.Filter */
	TEnumAsByte<enum TextureGroup> LODGroup; /* Ofs: 0x72 Size: 0x1 - ByteProperty Engine.Texture.LODGroup */
	uint8_t UnknownData73[0x5D];


	inline bool SetLightingGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x38, value); }
	inline bool SetLODBias(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool SetNumCinematicMipLevels(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C, value); }
	inline bool SetGlobalLODBias(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SRGB()
	{
		return boolField54& 0x1;
	}
	inline bool SetSRGB(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool NeverStream()
	{
		return boolField54& 0x2;
	}
	inline bool SetNeverStream(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bNoTiling()
	{
		return boolField54& 0x4;
	}
	inline bool SetbNoTiling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUseCinematicMipLevels()
	{
		return boolField54& 0x8;
	}
	inline bool SetbUseCinematicMipLevels(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x58, value); }
	inline bool SetCachedCombinedLODBias(t_structHelper inst, int32_t value) { inst.WriteOffset(0x68, value); }
	inline bool bAsyncResourceReleaseHasBeenStarted()
	{
		return boolField6C& 0x1;
	}
	inline bool SetbAsyncResourceReleaseHasBeenStarted(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCompressionSettings(t_structHelper inst, TEnumAsByte<enum TextureCompressionSettings> value) { inst.WriteOffset(0x70, value); }
	inline bool SetFilter(t_structHelper inst, TEnumAsByte<enum TextureFilter> value) { inst.WriteOffset(0x71, value); }
	inline bool SetLODGroup(t_structHelper inst, TEnumAsByte<enum TextureGroup> value) { inst.WriteOffset(0x72, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTexture = sizeof(UTexture); // 208
    static_assert(sizeof(UTexture) == 0xD0, "Size of UTexture is not correct.");
	auto constexpr UTexture_LightingGuid_Offset = offsetof(UTexture, LightingGuid);
	static_assert(UTexture_LightingGuid_Offset == 0x38, "UTexture::LightingGuid offset is not 38");
	auto constexpr UTexture_LODBias_Offset = offsetof(UTexture, LODBias);
	static_assert(UTexture_LODBias_Offset == 0x48, "UTexture::LODBias offset is not 48");
	auto constexpr UTexture_NumCinematicMipLevels_Offset = offsetof(UTexture, NumCinematicMipLevels);
	static_assert(UTexture_NumCinematicMipLevels_Offset == 0x4c, "UTexture::NumCinematicMipLevels offset is not 4c");
	auto constexpr UTexture_GlobalLODBias_Offset = offsetof(UTexture, GlobalLODBias);
	static_assert(UTexture_GlobalLODBias_Offset == 0x50, "UTexture::GlobalLODBias offset is not 50");
	auto constexpr UTexture_boolField54_Offset = offsetof(UTexture, boolField54);
	static_assert(UTexture_boolField54_Offset == 0x54, "UTexture::boolField54 offset is not 54");
	auto constexpr UTexture_AssetUserData_Offset = offsetof(UTexture, AssetUserData);
	static_assert(UTexture_AssetUserData_Offset == 0x58, "UTexture::AssetUserData offset is not 58");
	auto constexpr UTexture_CachedCombinedLODBias_Offset = offsetof(UTexture, CachedCombinedLODBias);
	static_assert(UTexture_CachedCombinedLODBias_Offset == 0x68, "UTexture::CachedCombinedLODBias offset is not 68");
	auto constexpr UTexture_boolField6C_Offset = offsetof(UTexture, boolField6C);
	static_assert(UTexture_boolField6C_Offset == 0x6c, "UTexture::boolField6C offset is not 6c");
	auto constexpr UTexture_CompressionSettings_Offset = offsetof(UTexture, CompressionSettings);
	static_assert(UTexture_CompressionSettings_Offset == 0x70, "UTexture::CompressionSettings offset is not 70");
	auto constexpr UTexture_Filter_Offset = offsetof(UTexture, Filter);
	static_assert(UTexture_Filter_Offset == 0x71, "UTexture::Filter offset is not 71");
	auto constexpr UTexture_LODGroup_Offset = offsetof(UTexture, LODGroup);
	static_assert(UTexture_LODGroup_Offset == 0x72, "UTexture::LODGroup offset is not 72");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
