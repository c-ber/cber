#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperRuntimeSettings // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UPaperRuntimeSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2029); // id32("Class Paper2D.PaperRuntimeSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t boolField31;
	uint8_t boolField32;
	uint8_t UnknownData33[0x5];


	inline bool bEnableSpriteAtlasGroups()
	{
		return boolField30& 0x1;
	}
	inline bool SetbEnableSpriteAtlasGroups(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableTerrainSplineEditing()
	{
		return boolField31& 0x1;
	}
	inline bool SetbEnableTerrainSplineEditing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bResizeSpriteDataToMatchTextures()
	{
		return boolField32& 0x1;
	}
	inline bool SetbResizeSpriteDataToMatchTextures(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x32, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperRuntimeSettings = sizeof(UPaperRuntimeSettings); // 56
    static_assert(sizeof(UPaperRuntimeSettings) == 0x38, "Size of UPaperRuntimeSettings is not correct.");
	auto constexpr UPaperRuntimeSettings_boolField30_Offset = offsetof(UPaperRuntimeSettings, boolField30);
	static_assert(UPaperRuntimeSettings_boolField30_Offset == 0x30, "UPaperRuntimeSettings::boolField30 offset is not 30");
	auto constexpr UPaperRuntimeSettings_boolField31_Offset = offsetof(UPaperRuntimeSettings, boolField31);
	static_assert(UPaperRuntimeSettings_boolField31_Offset == 0x31, "UPaperRuntimeSettings::boolField31 offset is not 31");
	auto constexpr UPaperRuntimeSettings_boolField32_Offset = offsetof(UPaperRuntimeSettings, boolField32);
	static_assert(UPaperRuntimeSettings_boolField32_Offset == 0x32, "UPaperRuntimeSettings::boolField32 offset is not 32");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
