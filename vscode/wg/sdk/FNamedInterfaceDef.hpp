#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedInterfaceDef // Size: 0x18
{
public:
    FName InterfaceName; /* Ofs: 0x0 Size: 0x8 NameProperty OnlineSubsystem.NamedInterfaceDef.InterfaceName */
    FString InterfaceClassName; /* Ofs: 0x8 Size: 0x10 StrProperty OnlineSubsystem.NamedInterfaceDef.InterfaceClassName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedInterfaceDef = sizeof(FNamedInterfaceDef); // 24
    static_assert(sizeof(FNamedInterfaceDef) == 0x18, "Size of FNamedInterfaceDef is not correct.");
	auto constexpr FNamedInterfaceDef_InterfaceName_Offset = offsetof(FNamedInterfaceDef, InterfaceName);
	static_assert(FNamedInterfaceDef_InterfaceName_Offset == 0x0, "FNamedInterfaceDef::InterfaceName offset is not 0");
	auto constexpr FNamedInterfaceDef_InterfaceClassName_Offset = offsetof(FNamedInterfaceDef, InterfaceClassName);
	static_assert(FNamedInterfaceDef_InterfaceClassName_Offset == 0x8, "FNamedInterfaceDef::InterfaceClassName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
