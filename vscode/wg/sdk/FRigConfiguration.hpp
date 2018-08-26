#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRigConfiguration // Size: 0x18
{
public:
    ExternalPtr<struct URig> Rig; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.RigConfiguration.Rig */
    TArray<struct FNameMapping> BoneMappingTable; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.RigConfiguration.BoneMappingTable */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRigConfiguration = sizeof(FRigConfiguration); // 24
    static_assert(sizeof(FRigConfiguration) == 0x18, "Size of FRigConfiguration is not correct.");
	auto constexpr FRigConfiguration_Rig_Offset = offsetof(FRigConfiguration, Rig);
	static_assert(FRigConfiguration_Rig_Offset == 0x0, "FRigConfiguration::Rig offset is not 0");
	auto constexpr FRigConfiguration_BoneMappingTable_Offset = offsetof(FRigConfiguration, BoneMappingTable);
	static_assert(FRigConfiguration_BoneMappingTable_Offset == 0x8, "FRigConfiguration::BoneMappingTable offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
