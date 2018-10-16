#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCollisionProfile // Size: 0x160
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UCollisionProfile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(300); // id32("Class Engine.CollisionProfile")
		return ptr;
	}
	TArray<struct FCollisionResponseTemplate> Profiles; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.CollisionProfile.Profiles */
	TArray<struct FCustomChannelSetup> DefaultChannelResponses; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.CollisionProfile.DefaultChannelResponses */
	TArray<struct FCustomProfile> EditProfiles; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.CollisionProfile.EditProfiles */
	TArray<struct FRedirector> ProfileRedirects; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.CollisionProfile.ProfileRedirects */
	TArray<struct FRedirector> CollisionChannelRedirects; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.CollisionProfile.CollisionChannelRedirects */
	uint8_t UnknownData90[0xD0];


	inline bool SetProfiles(t_structHelper inst, TArray<struct FCollisionResponseTemplate> value) { inst.WriteOffset(0x40, value); }
	inline bool SetDefaultChannelResponses(t_structHelper inst, TArray<struct FCustomChannelSetup> value) { inst.WriteOffset(0x50, value); }
	inline bool SetEditProfiles(t_structHelper inst, TArray<struct FCustomProfile> value) { inst.WriteOffset(0x60, value); }
	inline bool SetProfileRedirects(t_structHelper inst, TArray<struct FRedirector> value) { inst.WriteOffset(0x70, value); }
	inline bool SetCollisionChannelRedirects(t_structHelper inst, TArray<struct FRedirector> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCollisionProfile = sizeof(UCollisionProfile); // 352
    static_assert(sizeof(UCollisionProfile) == 0x160, "Size of UCollisionProfile is not correct.");
	auto constexpr UCollisionProfile_Profiles_Offset = offsetof(UCollisionProfile, Profiles);
	static_assert(UCollisionProfile_Profiles_Offset == 0x40, "UCollisionProfile::Profiles offset is not 40");
	auto constexpr UCollisionProfile_DefaultChannelResponses_Offset = offsetof(UCollisionProfile, DefaultChannelResponses);
	static_assert(UCollisionProfile_DefaultChannelResponses_Offset == 0x50, "UCollisionProfile::DefaultChannelResponses offset is not 50");
	auto constexpr UCollisionProfile_EditProfiles_Offset = offsetof(UCollisionProfile, EditProfiles);
	static_assert(UCollisionProfile_EditProfiles_Offset == 0x60, "UCollisionProfile::EditProfiles offset is not 60");
	auto constexpr UCollisionProfile_ProfileRedirects_Offset = offsetof(UCollisionProfile, ProfileRedirects);
	static_assert(UCollisionProfile_ProfileRedirects_Offset == 0x70, "UCollisionProfile::ProfileRedirects offset is not 70");
	auto constexpr UCollisionProfile_CollisionChannelRedirects_Offset = offsetof(UCollisionProfile, CollisionChannelRedirects);
	static_assert(UCollisionProfile_CollisionChannelRedirects_Offset == 0x80, "UCollisionProfile::CollisionChannelRedirects offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
