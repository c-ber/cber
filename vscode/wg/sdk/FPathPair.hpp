#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPathPair // Size: 0x10
{
public:
    FVector2D StartPosition; /* Ofs: 0x0 Size: 0x8 StructProperty TslGame.PathPair.StartPosition */
    FVector2D EndPosition; /* Ofs: 0x8 Size: 0x8 StructProperty TslGame.PathPair.EndPosition */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPathPair = sizeof(FPathPair); // 16
    static_assert(sizeof(FPathPair) == 0x10, "Size of FPathPair is not correct.");
	auto constexpr FPathPair_StartPosition_Offset = offsetof(FPathPair, StartPosition);
	static_assert(FPathPair_StartPosition_Offset == 0x0, "FPathPair::StartPosition offset is not 0");
	auto constexpr FPathPair_EndPosition_Offset = offsetof(FPathPair, EndPosition);
	static_assert(FPathPair_EndPosition_Offset == 0x8, "FPathPair::EndPosition offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
