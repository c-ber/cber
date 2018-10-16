#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNetDriverDefinition // Size: 0x18
{
public:
    FName DefName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.NetDriverDefinition.DefName */
    FName DriverClassName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.NetDriverDefinition.DriverClassName */
    FName DriverClassNameFallback; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.NetDriverDefinition.DriverClassNameFallback */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNetDriverDefinition = sizeof(FNetDriverDefinition); // 24
    static_assert(sizeof(FNetDriverDefinition) == 0x18, "Size of FNetDriverDefinition is not correct.");
	auto constexpr FNetDriverDefinition_DefName_Offset = offsetof(FNetDriverDefinition, DefName);
	static_assert(FNetDriverDefinition_DefName_Offset == 0x0, "FNetDriverDefinition::DefName offset is not 0");
	auto constexpr FNetDriverDefinition_DriverClassName_Offset = offsetof(FNetDriverDefinition, DriverClassName);
	static_assert(FNetDriverDefinition_DriverClassName_Offset == 0x8, "FNetDriverDefinition::DriverClassName offset is not 8");
	auto constexpr FNetDriverDefinition_DriverClassNameFallback_Offset = offsetof(FNetDriverDefinition, DriverClassNameFallback);
	static_assert(FNetDriverDefinition_DriverClassNameFallback_Offset == 0x10, "FNetDriverDefinition::DriverClassNameFallback offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
