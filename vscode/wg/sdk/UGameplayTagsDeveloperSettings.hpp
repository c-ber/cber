#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTagsDeveloperSettings // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UGameplayTagsDeveloperSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(180); // id32("Class GameplayTags.GameplayTagsDeveloperSettings")
		return ptr;
	}
	FString DeveloperConfigName; /* Ofs: 0x30 Size: 0x10 - StrProperty GameplayTags.GameplayTagsDeveloperSettings.DeveloperConfigName */


	inline bool SetDeveloperConfigName(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTagsDeveloperSettings = sizeof(UGameplayTagsDeveloperSettings); // 64
    static_assert(sizeof(UGameplayTagsDeveloperSettings) == 0x40, "Size of UGameplayTagsDeveloperSettings is not correct.");
	auto constexpr UGameplayTagsDeveloperSettings_DeveloperConfigName_Offset = offsetof(UGameplayTagsDeveloperSettings, DeveloperConfigName);
	static_assert(UGameplayTagsDeveloperSettings_DeveloperConfigName_Offset == 0x30, "UGameplayTagsDeveloperSettings::DeveloperConfigName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
