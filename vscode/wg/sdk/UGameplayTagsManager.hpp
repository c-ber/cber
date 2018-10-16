#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTagsManager // Size: 0x188
	: public UObject // Size: 0x30
{
private:
	typedef UGameplayTagsManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177); // id32("Class GameplayTags.GameplayTagsManager")
		return ptr;
	}
	uint8_t UnknownData30[0x80];
	TArray<struct FGameplayTagSource> TagSources; /* Ofs: 0xB0 Size: 0x10 - ArrayProperty GameplayTags.GameplayTagsManager.TagSources */
	uint8_t UnknownDataC0[0x68];
	TArray<ExternalPtr<struct UDataTable>> GameplayTagTables; /* Ofs: 0x128 Size: 0x10 - ArrayProperty GameplayTags.GameplayTagsManager.GameplayTagTables */
	uint8_t UnknownData138[0x50];


	inline bool SetTagSources(t_structHelper inst, TArray<struct FGameplayTagSource> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetGameplayTagTables(t_structHelper inst, TArray<ExternalPtr<struct UDataTable>> value) { inst.WriteOffset(0x128, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTagsManager = sizeof(UGameplayTagsManager); // 392
    static_assert(sizeof(UGameplayTagsManager) == 0x188, "Size of UGameplayTagsManager is not correct.");
	auto constexpr UGameplayTagsManager_TagSources_Offset = offsetof(UGameplayTagsManager, TagSources);
	static_assert(UGameplayTagsManager_TagSources_Offset == 0xb0, "UGameplayTagsManager::TagSources offset is not b0");
	auto constexpr UGameplayTagsManager_GameplayTagTables_Offset = offsetof(UGameplayTagsManager, GameplayTagTables);
	static_assert(UGameplayTagsManager_GameplayTagTables_Offset == 0x128, "UGameplayTagsManager::GameplayTagTables offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
