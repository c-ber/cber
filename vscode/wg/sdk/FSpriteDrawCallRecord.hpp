#pragma once
#include "FVector.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSpriteDrawCallRecord // Size: 0xD0
{
public:
    FVector Destination; /* Ofs: 0x0 Size: 0xC StructProperty Paper2D.SpriteDrawCallRecord.Destination */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct UTexture> BaseTexture; /* Ofs: 0x10 Size: 0x8 ObjectProperty Paper2D.SpriteDrawCallRecord.BaseTexture */
    uint8_t UnknownData18[0x30];
    FColor Color; /* Ofs: 0x48 Size: 0x4 StructProperty Paper2D.SpriteDrawCallRecord.Color */
    uint8_t UnknownData4C[0x84];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSpriteDrawCallRecord = sizeof(FSpriteDrawCallRecord); // 208
    static_assert(sizeof(FSpriteDrawCallRecord) == 0xD0, "Size of FSpriteDrawCallRecord is not correct.");
	auto constexpr FSpriteDrawCallRecord_Destination_Offset = offsetof(FSpriteDrawCallRecord, Destination);
	static_assert(FSpriteDrawCallRecord_Destination_Offset == 0x0, "FSpriteDrawCallRecord::Destination offset is not 0");
	auto constexpr FSpriteDrawCallRecord_BaseTexture_Offset = offsetof(FSpriteDrawCallRecord, BaseTexture);
	static_assert(FSpriteDrawCallRecord_BaseTexture_Offset == 0x10, "FSpriteDrawCallRecord::BaseTexture offset is not 10");
	auto constexpr FSpriteDrawCallRecord_Color_Offset = offsetof(FSpriteDrawCallRecord, Color);
	static_assert(FSpriteDrawCallRecord_Color_Offset == 0x48, "FSpriteDrawCallRecord::Color offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
