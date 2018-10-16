#pragma once
#include "FStringClassReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameModeName // Size: 0x20
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty EngineSettings.GameModeName.Name */
    FStringClassReference GameMode; /* Ofs: 0x10 Size: 0x10 StructProperty EngineSettings.GameModeName.GameMode */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameModeName = sizeof(FGameModeName); // 32
    static_assert(sizeof(FGameModeName) == 0x20, "Size of FGameModeName is not correct.");
	auto constexpr FGameModeName_Name_Offset = offsetof(FGameModeName, Name);
	static_assert(FGameModeName_Name_Offset == 0x0, "FGameModeName::Name offset is not 0");
	auto constexpr FGameModeName_GameMode_Offset = offsetof(FGameModeName, GameMode);
	static_assert(FGameModeName_GameMode_Offset == 0x10, "FGameModeName::GameMode offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
