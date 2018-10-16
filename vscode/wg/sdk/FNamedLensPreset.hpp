#pragma once
#include "FCameraLensSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedLensPreset // Size: 0x28
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty CinematicCamera.NamedLensPreset.Name */
    FCameraLensSettings LensSettings; /* Ofs: 0x10 Size: 0x14 StructProperty CinematicCamera.NamedLensPreset.LensSettings */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedLensPreset = sizeof(FNamedLensPreset); // 40
    static_assert(sizeof(FNamedLensPreset) == 0x28, "Size of FNamedLensPreset is not correct.");
	auto constexpr FNamedLensPreset_Name_Offset = offsetof(FNamedLensPreset, Name);
	static_assert(FNamedLensPreset_Name_Offset == 0x0, "FNamedLensPreset::Name offset is not 0");
	auto constexpr FNamedLensPreset_LensSettings_Offset = offsetof(FNamedLensPreset, LensSettings);
	static_assert(FNamedLensPreset_LensSettings_Offset == 0x10, "FNamedLensPreset::LensSettings offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
