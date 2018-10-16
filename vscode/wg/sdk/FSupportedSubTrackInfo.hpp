#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSupportedSubTrackInfo // Size: 0x20
{
public:
    ExternalPtr<struct UClass> SupportedClass; /* Ofs: 0x0 Size: 0x8 ClassProperty Engine.SupportedSubTrackInfo.SupportedClass */
    FString SubTrackName; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.SupportedSubTrackInfo.SubTrackName */
    int32_t GroupIndex; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.SupportedSubTrackInfo.GroupIndex */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSupportedSubTrackInfo = sizeof(FSupportedSubTrackInfo); // 32
    static_assert(sizeof(FSupportedSubTrackInfo) == 0x20, "Size of FSupportedSubTrackInfo is not correct.");
	auto constexpr FSupportedSubTrackInfo_SupportedClass_Offset = offsetof(FSupportedSubTrackInfo, SupportedClass);
	static_assert(FSupportedSubTrackInfo_SupportedClass_Offset == 0x0, "FSupportedSubTrackInfo::SupportedClass offset is not 0");
	auto constexpr FSupportedSubTrackInfo_SubTrackName_Offset = offsetof(FSupportedSubTrackInfo, SubTrackName);
	static_assert(FSupportedSubTrackInfo_SubTrackName_Offset == 0x8, "FSupportedSubTrackInfo::SubTrackName offset is not 8");
	auto constexpr FSupportedSubTrackInfo_GroupIndex_Offset = offsetof(FSupportedSubTrackInfo, GroupIndex);
	static_assert(FSupportedSubTrackInfo_GroupIndex_Offset == 0x18, "FSupportedSubTrackInfo::GroupIndex offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
