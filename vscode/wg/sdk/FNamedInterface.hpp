#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedInterface // Size: 0x10
{
public:
    FName InterfaceName; /* Ofs: 0x0 Size: 0x8 NameProperty OnlineSubsystem.NamedInterface.InterfaceName */
    ExternalPtr<struct UObject> InterfaceObject; /* Ofs: 0x8 Size: 0x8 ObjectProperty OnlineSubsystem.NamedInterface.InterfaceObject */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedInterface = sizeof(FNamedInterface); // 16
    static_assert(sizeof(FNamedInterface) == 0x10, "Size of FNamedInterface is not correct.");
	auto constexpr FNamedInterface_InterfaceName_Offset = offsetof(FNamedInterface, InterfaceName);
	static_assert(FNamedInterface_InterfaceName_Offset == 0x0, "FNamedInterface::InterfaceName offset is not 0");
	auto constexpr FNamedInterface_InterfaceObject_Offset = offsetof(FNamedInterface, InterfaceObject);
	static_assert(FNamedInterface_InterfaceObject_Offset == 0x8, "FNamedInterface::InterfaceObject offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
