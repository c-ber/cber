#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlateSound // Size: 0x18
{
public:
    ExternalPtr<struct UObject> ResourceObject; /* Ofs: 0x0 Size: 0x8 ObjectProperty SlateCore.SlateSound.ResourceObject */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlateSound = sizeof(FSlateSound); // 24
    static_assert(sizeof(FSlateSound) == 0x18, "Size of FSlateSound is not correct.");
	auto constexpr FSlateSound_ResourceObject_Offset = offsetof(FSlateSound, ResourceObject);
	static_assert(FSlateSound_ResourceObject_Offset == 0x0, "FSlateSound::ResourceObject offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
