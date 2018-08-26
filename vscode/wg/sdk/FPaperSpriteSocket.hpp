#pragma once
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaperSpriteSocket // Size: 0x40
{
public:
    FTransform LocalTransform; /* Ofs: 0x0 Size: 0x30 StructProperty Paper2D.PaperSpriteSocket.LocalTransform */
    FName SocketName; /* Ofs: 0x30 Size: 0x8 NameProperty Paper2D.PaperSpriteSocket.SocketName */
    uint8_t UnknownData38[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaperSpriteSocket = sizeof(FPaperSpriteSocket); // 64
    static_assert(sizeof(FPaperSpriteSocket) == 0x40, "Size of FPaperSpriteSocket is not correct.");
	auto constexpr FPaperSpriteSocket_LocalTransform_Offset = offsetof(FPaperSpriteSocket, LocalTransform);
	static_assert(FPaperSpriteSocket_LocalTransform_Offset == 0x0, "FPaperSpriteSocket::LocalTransform offset is not 0");
	auto constexpr FPaperSpriteSocket_SocketName_Offset = offsetof(FPaperSpriteSocket, SocketName);
	static_assert(FPaperSpriteSocket_SocketName_Offset == 0x30, "FPaperSpriteSocket::SocketName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
