#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedNetDriver // Size: 0x10
{
public:
    ExternalPtr<struct UNetDriver> NetDriver; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.NamedNetDriver.NetDriver */
    uint8_t UnknownData8[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedNetDriver = sizeof(FNamedNetDriver); // 16
    static_assert(sizeof(FNamedNetDriver) == 0x10, "Size of FNamedNetDriver is not correct.");
	auto constexpr FNamedNetDriver_NetDriver_Offset = offsetof(FNamedNetDriver, NetDriver);
	static_assert(FNamedNetDriver_NetDriver_Offset == 0x0, "FNamedNetDriver::NetDriver offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
