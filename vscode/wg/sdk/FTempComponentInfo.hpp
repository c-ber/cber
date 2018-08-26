#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTempComponentInfo // Size: 0x28
{
public:
    uint8_t UnknownData0[0x18];
    ExternalPtr<struct USceneComponent> ParentComponent; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.TempComponentInfo.ParentComponent */
    ExternalPtr<struct USceneComponent> CurrentComponent; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.TempComponentInfo.CurrentComponent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTempComponentInfo = sizeof(FTempComponentInfo); // 40
    static_assert(sizeof(FTempComponentInfo) == 0x28, "Size of FTempComponentInfo is not correct.");
	auto constexpr FTempComponentInfo_ParentComponent_Offset = offsetof(FTempComponentInfo, ParentComponent);
	static_assert(FTempComponentInfo_ParentComponent_Offset == 0x18, "FTempComponentInfo::ParentComponent offset is not 18");
	auto constexpr FTempComponentInfo_CurrentComponent_Offset = offsetof(FTempComponentInfo, CurrentComponent);
	static_assert(FTempComponentInfo_CurrentComponent_Offset == 0x20, "FTempComponentInfo::CurrentComponent offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
