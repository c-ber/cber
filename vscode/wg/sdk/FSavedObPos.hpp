#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSavedObPos // Size: 0x18
{
public:
    FVector Loc; /* Ofs: 0x0 Size: 0xC StructProperty TslGame.SavedObPos.Loc */
    FRotator Rot; /* Ofs: 0xC Size: 0xC StructProperty TslGame.SavedObPos.Rot */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSavedObPos = sizeof(FSavedObPos); // 24
    static_assert(sizeof(FSavedObPos) == 0x18, "Size of FSavedObPos is not correct.");
	auto constexpr FSavedObPos_Loc_Offset = offsetof(FSavedObPos, Loc);
	static_assert(FSavedObPos_Loc_Offset == 0x0, "FSavedObPos::Loc offset is not 0");
	auto constexpr FSavedObPos_Rot_Offset = offsetof(FSavedObPos, Rot);
	static_assert(FSavedObPos_Rot_Offset == 0xc, "FSavedObPos::Rot offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
