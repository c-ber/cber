#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFontCharacter // Size: 0x18
{
public:
    int32_t StartU; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.FontCharacter.StartU */
    int32_t StartV; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.FontCharacter.StartV */
    int32_t USize; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.FontCharacter.USize */
    int32_t VSize; /* Ofs: 0xC Size: 0x4 IntProperty Engine.FontCharacter.VSize */
    uint8_t TextureIndex; /* Ofs: 0x10 Size: 0x1 ByteProperty Engine.FontCharacter.TextureIndex */
    uint8_t UnknownData11[0x3];
    int32_t VerticalOffset; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.FontCharacter.VerticalOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFontCharacter = sizeof(FFontCharacter); // 24
    static_assert(sizeof(FFontCharacter) == 0x18, "Size of FFontCharacter is not correct.");
	auto constexpr FFontCharacter_StartU_Offset = offsetof(FFontCharacter, StartU);
	static_assert(FFontCharacter_StartU_Offset == 0x0, "FFontCharacter::StartU offset is not 0");
	auto constexpr FFontCharacter_StartV_Offset = offsetof(FFontCharacter, StartV);
	static_assert(FFontCharacter_StartV_Offset == 0x4, "FFontCharacter::StartV offset is not 4");
	auto constexpr FFontCharacter_USize_Offset = offsetof(FFontCharacter, USize);
	static_assert(FFontCharacter_USize_Offset == 0x8, "FFontCharacter::USize offset is not 8");
	auto constexpr FFontCharacter_VSize_Offset = offsetof(FFontCharacter, VSize);
	static_assert(FFontCharacter_VSize_Offset == 0xc, "FFontCharacter::VSize offset is not c");
	auto constexpr FFontCharacter_TextureIndex_Offset = offsetof(FFontCharacter, TextureIndex);
	static_assert(FFontCharacter_TextureIndex_Offset == 0x10, "FFontCharacter::TextureIndex offset is not 10");
	auto constexpr FFontCharacter_VerticalOffset_Offset = offsetof(FFontCharacter, VerticalOffset);
	static_assert(FFontCharacter_VerticalOffset_Offset == 0x14, "FFontCharacter::VerticalOffset offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
