#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimTickRecord // Size: 0x48
{
public:
    ExternalPtr<struct UAnimationAsset> SourceAsset; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.AnimTickRecord.SourceAsset */
    uint8_t UnknownData8[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimTickRecord = sizeof(FAnimTickRecord); // 72
    static_assert(sizeof(FAnimTickRecord) == 0x48, "Size of FAnimTickRecord is not correct.");
	auto constexpr FAnimTickRecord_SourceAsset_Offset = offsetof(FAnimTickRecord, SourceAsset);
	static_assert(FAnimTickRecord_SourceAsset_Offset == 0x0, "FAnimTickRecord::SourceAsset offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
