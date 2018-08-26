#pragma once
#include "FSubsurfaceProfileStruct.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USubsurfaceProfile // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef USubsurfaceProfile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1237); // id32("Class Engine.SubsurfaceProfile")
		return ptr;
	}
	FSubsurfaceProfileStruct Settings; /* Ofs: 0x30 Size: 0x24 - StructProperty Engine.SubsurfaceProfile.Settings */
	uint8_t UnknownData54[0x4];


	inline bool SetSettings(t_structHelper inst, FSubsurfaceProfileStruct value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSubsurfaceProfile = sizeof(USubsurfaceProfile); // 88
    static_assert(sizeof(USubsurfaceProfile) == 0x58, "Size of USubsurfaceProfile is not correct.");
	auto constexpr USubsurfaceProfile_Settings_Offset = offsetof(USubsurfaceProfile, Settings);
	static_assert(USubsurfaceProfile_Settings_Offset == 0x30, "USubsurfaceProfile::Settings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
