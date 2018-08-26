#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAutoCompleteVehiclePaths // Size: 0x20
{
public:
    FString Kind; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.AutoCompleteVehiclePaths.Kind */
    FString path; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.AutoCompleteVehiclePaths.path */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAutoCompleteVehiclePaths = sizeof(FAutoCompleteVehiclePaths); // 32
    static_assert(sizeof(FAutoCompleteVehiclePaths) == 0x20, "Size of FAutoCompleteVehiclePaths is not correct.");
	auto constexpr FAutoCompleteVehiclePaths_Kind_Offset = offsetof(FAutoCompleteVehiclePaths, Kind);
	static_assert(FAutoCompleteVehiclePaths_Kind_Offset == 0x0, "FAutoCompleteVehiclePaths::Kind offset is not 0");
	auto constexpr FAutoCompleteVehiclePaths_path_Offset = offsetof(FAutoCompleteVehiclePaths, path);
	static_assert(FAutoCompleteVehiclePaths_path_Offset == 0x10, "FAutoCompleteVehiclePaths::path offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
