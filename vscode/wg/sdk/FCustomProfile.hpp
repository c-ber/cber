#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomProfile // Size: 0x18
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.CustomProfile.Name */
    TArray<struct FResponseChannel> CustomResponses; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.CustomProfile.CustomResponses */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomProfile = sizeof(FCustomProfile); // 24
    static_assert(sizeof(FCustomProfile) == 0x18, "Size of FCustomProfile is not correct.");
	auto constexpr FCustomProfile_Name_Offset = offsetof(FCustomProfile, Name);
	static_assert(FCustomProfile_Name_Offset == 0x0, "FCustomProfile::Name offset is not 0");
	auto constexpr FCustomProfile_CustomResponses_Offset = offsetof(FCustomProfile, CustomResponses);
	static_assert(FCustomProfile_CustomResponses_Offset == 0x8, "FCustomProfile::CustomResponses offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
