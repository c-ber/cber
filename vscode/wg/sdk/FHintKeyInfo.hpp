#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHintKeyInfo // Size: 0x18
{
public:
    FName KeyName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.HintKeyInfo.KeyName */
    FName SecondKeyName; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.HintKeyInfo.SecondKeyName */
    float Scale; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.HintKeyInfo.Scale */
    float SecondScale; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.HintKeyInfo.SecondScale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHintKeyInfo = sizeof(FHintKeyInfo); // 24
    static_assert(sizeof(FHintKeyInfo) == 0x18, "Size of FHintKeyInfo is not correct.");
	auto constexpr FHintKeyInfo_KeyName_Offset = offsetof(FHintKeyInfo, KeyName);
	static_assert(FHintKeyInfo_KeyName_Offset == 0x0, "FHintKeyInfo::KeyName offset is not 0");
	auto constexpr FHintKeyInfo_SecondKeyName_Offset = offsetof(FHintKeyInfo, SecondKeyName);
	static_assert(FHintKeyInfo_SecondKeyName_Offset == 0x8, "FHintKeyInfo::SecondKeyName offset is not 8");
	auto constexpr FHintKeyInfo_Scale_Offset = offsetof(FHintKeyInfo, Scale);
	static_assert(FHintKeyInfo_Scale_Offset == 0x10, "FHintKeyInfo::Scale offset is not 10");
	auto constexpr FHintKeyInfo_SecondScale_Offset = offsetof(FHintKeyInfo, SecondScale);
	static_assert(FHintKeyInfo_SecondScale_Offset == 0x14, "FHintKeyInfo::SecondScale offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
