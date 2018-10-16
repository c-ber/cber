#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSmartName // Size: 0x10
{
public:
    FName DisplayName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.SmartName.DisplayName */
    uint8_t UnknownData8[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSmartName = sizeof(FSmartName); // 16
    static_assert(sizeof(FSmartName) == 0x10, "Size of FSmartName is not correct.");
	auto constexpr FSmartName_DisplayName_Offset = offsetof(FSmartName, DisplayName);
	static_assert(FSmartName_DisplayName_Offset == 0x0, "FSmartName::DisplayName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
