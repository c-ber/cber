#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKey // Size: 0x18
{
public:
    FName KeyName; /* Ofs: 0x0 Size: 0x8 NameProperty InputCore.Key.KeyName */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKey = sizeof(FKey); // 24
    static_assert(sizeof(FKey) == 0x18, "Size of FKey is not correct.");
	auto constexpr FKey_KeyName_Offset = offsetof(FKey, KeyName);
	static_assert(FKey_KeyName_Offset == 0x0, "FKey::KeyName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
