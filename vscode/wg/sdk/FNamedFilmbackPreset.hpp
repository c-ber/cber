#pragma once
#include "FCameraFilmbackSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedFilmbackPreset // Size: 0x20
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty CinematicCamera.NamedFilmbackPreset.Name */
    FCameraFilmbackSettings FilmbackSettings; /* Ofs: 0x10 Size: 0xC StructProperty CinematicCamera.NamedFilmbackPreset.FilmbackSettings */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedFilmbackPreset = sizeof(FNamedFilmbackPreset); // 32
    static_assert(sizeof(FNamedFilmbackPreset) == 0x20, "Size of FNamedFilmbackPreset is not correct.");
	auto constexpr FNamedFilmbackPreset_Name_Offset = offsetof(FNamedFilmbackPreset, Name);
	static_assert(FNamedFilmbackPreset_Name_Offset == 0x0, "FNamedFilmbackPreset::Name offset is not 0");
	auto constexpr FNamedFilmbackPreset_FilmbackSettings_Offset = offsetof(FNamedFilmbackPreset, FilmbackSettings);
	static_assert(FNamedFilmbackPreset_FilmbackSettings_Offset == 0x10, "FNamedFilmbackPreset::FilmbackSettings offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
