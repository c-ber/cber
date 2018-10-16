#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEngineShowFlagsSetting // Size: 0x18
{
public:
    FString ShowFlagName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.EngineShowFlagsSetting.ShowFlagName */
    bool Enabled; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.EngineShowFlagsSetting.Enabled */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEngineShowFlagsSetting = sizeof(FEngineShowFlagsSetting); // 24
    static_assert(sizeof(FEngineShowFlagsSetting) == 0x18, "Size of FEngineShowFlagsSetting is not correct.");
	auto constexpr FEngineShowFlagsSetting_ShowFlagName_Offset = offsetof(FEngineShowFlagsSetting, ShowFlagName);
	static_assert(FEngineShowFlagsSetting_ShowFlagName_Offset == 0x0, "FEngineShowFlagsSetting::ShowFlagName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
