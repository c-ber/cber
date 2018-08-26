#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlendProfile // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UBlendProfile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(286); // id32("Class Engine.BlendProfile")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct USkeleton> OwningSkeleton; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.BlendProfile.OwningSkeleton */
	TArray<struct FBlendProfileBoneEntry> ProfileEntries; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.BlendProfile.ProfileEntries */


	inline bool SetOwningSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x38, value); }
	inline bool SetProfileEntries(t_structHelper inst, TArray<struct FBlendProfileBoneEntry> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlendProfile = sizeof(UBlendProfile); // 80
    static_assert(sizeof(UBlendProfile) == 0x50, "Size of UBlendProfile is not correct.");
	auto constexpr UBlendProfile_OwningSkeleton_Offset = offsetof(UBlendProfile, OwningSkeleton);
	static_assert(UBlendProfile_OwningSkeleton_Offset == 0x38, "UBlendProfile::OwningSkeleton offset is not 38");
	auto constexpr UBlendProfile_ProfileEntries_Offset = offsetof(UBlendProfile, ProfileEntries);
	static_assert(UBlendProfile_ProfileEntries_Offset == 0x40, "UBlendProfile::ProfileEntries offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
