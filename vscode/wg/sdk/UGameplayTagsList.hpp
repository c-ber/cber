#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTagsList // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UGameplayTagsList t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178); // id32("Class GameplayTags.GameplayTagsList")
		return ptr;
	}
	FString ConfigFileName; /* Ofs: 0x30 Size: 0x10 - StrProperty GameplayTags.GameplayTagsList.ConfigFileName */
	TArray<struct FGameplayTagTableRow> GameplayTagList; /* Ofs: 0x40 Size: 0x10 - ArrayProperty GameplayTags.GameplayTagsList.GameplayTagList */


	inline bool SetConfigFileName(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetGameplayTagList(t_structHelper inst, TArray<struct FGameplayTagTableRow> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTagsList = sizeof(UGameplayTagsList); // 80
    static_assert(sizeof(UGameplayTagsList) == 0x50, "Size of UGameplayTagsList is not correct.");
	auto constexpr UGameplayTagsList_ConfigFileName_Offset = offsetof(UGameplayTagsList, ConfigFileName);
	static_assert(UGameplayTagsList_ConfigFileName_Offset == 0x30, "UGameplayTagsList::ConfigFileName offset is not 30");
	auto constexpr UGameplayTagsList_GameplayTagList_Offset = offsetof(UGameplayTagsList, GameplayTagList);
	static_assert(UGameplayTagsList_GameplayTagList_Offset == 0x40, "UGameplayTagsList::GameplayTagList offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
