#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundGroups // Size: 0x90
	: public UObject // Size: 0x30
{
private:
	typedef USoundGroups t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1206); // id32("Class Engine.SoundGroups")
		return ptr;
	}
	TArray<struct FSoundGroup> SoundGroupProfiles; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.SoundGroups.SoundGroupProfiles */
	uint8_t UnknownData40[0x50];


	inline bool SetSoundGroupProfiles(t_structHelper inst, TArray<struct FSoundGroup> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundGroups = sizeof(USoundGroups); // 144
    static_assert(sizeof(USoundGroups) == 0x90, "Size of USoundGroups is not correct.");
	auto constexpr USoundGroups_SoundGroupProfiles_Offset = offsetof(USoundGroups, SoundGroupProfiles);
	static_assert(USoundGroups_SoundGroupProfiles_Offset == 0x30, "USoundGroups::SoundGroupProfiles offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
