#pragma once
#include "UGameplayTagsList.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTagsSettings // Size: 0xA8
	: public UGameplayTagsList // Size: 0x50
{
private:
	typedef UGameplayTagsSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(179); // id32("Class GameplayTags.GameplayTagsSettings")
		return ptr;
	}
	uint8_t boolField50;
	uint8_t boolField51;
	uint8_t UnknownData52[0x6];
	TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; /* Ofs: 0x58 Size: 0x10 - ArrayProperty GameplayTags.GameplayTagsSettings.CategoryRemapping */
	uint8_t boolField68;
	uint8_t UnknownData69[0x7];
	TArray<struct FStringAssetReference> GameplayTagTableList; /* Ofs: 0x70 Size: 0x10 - ArrayProperty GameplayTags.GameplayTagsSettings.GameplayTagTableList */
	TArray<struct FGameplayTagRedirect> GameplayTagRedirects; /* Ofs: 0x80 Size: 0x10 - ArrayProperty GameplayTags.GameplayTagsSettings.GameplayTagRedirects */
	TArray<struct FName> CommonlyReplicatedTags; /* Ofs: 0x90 Size: 0x10 - ArrayProperty GameplayTags.GameplayTagsSettings.CommonlyReplicatedTags */
	int32_t NumBitsForContainerSize; /* Ofs: 0xA0 Size: 0x4 - IntProperty GameplayTags.GameplayTagsSettings.NumBitsForContainerSize */
	int32_t NetIndexFirstBitSegment; /* Ofs: 0xA4 Size: 0x4 - IntProperty GameplayTags.GameplayTagsSettings.NetIndexFirstBitSegment */


	inline bool ImportTagsFromConfig()
	{
		return boolField50& 0x1;
	}
	inline bool SetImportTagsFromConfig(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool WarnOnInvalidTags()
	{
		return boolField51& 0x1;
	}
	inline bool SetWarnOnInvalidTags(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x51, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCategoryRemapping(t_structHelper inst, TArray<struct FGameplayTagCategoryRemap> value) { inst.WriteOffset(0x58, value); }
	inline bool FastReplication()
	{
		return boolField68& 0x1;
	}
	inline bool SetFastReplication(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGameplayTagTableList(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x70, value); }
	inline bool SetGameplayTagRedirects(t_structHelper inst, TArray<struct FGameplayTagRedirect> value) { inst.WriteOffset(0x80, value); }
	inline bool SetCommonlyReplicatedTags(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x90, value); }
	inline bool SetNumBitsForContainerSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA0, value); }
	inline bool SetNetIndexFirstBitSegment(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTagsSettings = sizeof(UGameplayTagsSettings); // 168
    static_assert(sizeof(UGameplayTagsSettings) == 0xA8, "Size of UGameplayTagsSettings is not correct.");
	auto constexpr UGameplayTagsSettings_boolField50_Offset = offsetof(UGameplayTagsSettings, boolField50);
	static_assert(UGameplayTagsSettings_boolField50_Offset == 0x50, "UGameplayTagsSettings::boolField50 offset is not 50");
	auto constexpr UGameplayTagsSettings_boolField51_Offset = offsetof(UGameplayTagsSettings, boolField51);
	static_assert(UGameplayTagsSettings_boolField51_Offset == 0x51, "UGameplayTagsSettings::boolField51 offset is not 51");
	auto constexpr UGameplayTagsSettings_CategoryRemapping_Offset = offsetof(UGameplayTagsSettings, CategoryRemapping);
	static_assert(UGameplayTagsSettings_CategoryRemapping_Offset == 0x58, "UGameplayTagsSettings::CategoryRemapping offset is not 58");
	auto constexpr UGameplayTagsSettings_boolField68_Offset = offsetof(UGameplayTagsSettings, boolField68);
	static_assert(UGameplayTagsSettings_boolField68_Offset == 0x68, "UGameplayTagsSettings::boolField68 offset is not 68");
	auto constexpr UGameplayTagsSettings_GameplayTagTableList_Offset = offsetof(UGameplayTagsSettings, GameplayTagTableList);
	static_assert(UGameplayTagsSettings_GameplayTagTableList_Offset == 0x70, "UGameplayTagsSettings::GameplayTagTableList offset is not 70");
	auto constexpr UGameplayTagsSettings_GameplayTagRedirects_Offset = offsetof(UGameplayTagsSettings, GameplayTagRedirects);
	static_assert(UGameplayTagsSettings_GameplayTagRedirects_Offset == 0x80, "UGameplayTagsSettings::GameplayTagRedirects offset is not 80");
	auto constexpr UGameplayTagsSettings_CommonlyReplicatedTags_Offset = offsetof(UGameplayTagsSettings, CommonlyReplicatedTags);
	static_assert(UGameplayTagsSettings_CommonlyReplicatedTags_Offset == 0x90, "UGameplayTagsSettings::CommonlyReplicatedTags offset is not 90");
	auto constexpr UGameplayTagsSettings_NumBitsForContainerSize_Offset = offsetof(UGameplayTagsSettings, NumBitsForContainerSize);
	static_assert(UGameplayTagsSettings_NumBitsForContainerSize_Offset == 0xa0, "UGameplayTagsSettings::NumBitsForContainerSize offset is not a0");
	auto constexpr UGameplayTagsSettings_NetIndexFirstBitSegment_Offset = offsetof(UGameplayTagsSettings, NetIndexFirstBitSegment);
	static_assert(UGameplayTagsSettings_NetIndexFirstBitSegment_Offset == 0xa4, "UGameplayTagsSettings::NetIndexFirstBitSegment offset is not a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
