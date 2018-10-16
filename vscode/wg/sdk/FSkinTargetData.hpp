#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinTargetData // Size: 0x10
{
public:
    FName TargetName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.SkinTargetData.TargetName */
    ExternalPtr<struct USkinDataConfig> SkinDataConfig; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.SkinTargetData.SkinDataConfig */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinTargetData = sizeof(FSkinTargetData); // 16
    static_assert(sizeof(FSkinTargetData) == 0x10, "Size of FSkinTargetData is not correct.");
	auto constexpr FSkinTargetData_TargetName_Offset = offsetof(FSkinTargetData, TargetName);
	static_assert(FSkinTargetData_TargetName_Offset == 0x0, "FSkinTargetData::TargetName offset is not 0");
	auto constexpr FSkinTargetData_SkinDataConfig_Offset = offsetof(FSkinTargetData, SkinDataConfig);
	static_assert(FSkinTargetData_SkinDataConfig_Offset == 0x8, "FSkinTargetData::SkinDataConfig offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
