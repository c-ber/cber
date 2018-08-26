#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHighlightRecordConfig // Size: 0xC
{
public:
    float BeforeDurationSec; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.HighlightRecordConfig.BeforeDurationSec */
    float AfterDurationSec; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.HighlightRecordConfig.AfterDurationSec */
    float LinkWaitDurationSec; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.HighlightRecordConfig.LinkWaitDurationSec */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHighlightRecordConfig = sizeof(FHighlightRecordConfig); // 12
    static_assert(sizeof(FHighlightRecordConfig) == 0xC, "Size of FHighlightRecordConfig is not correct.");
	auto constexpr FHighlightRecordConfig_BeforeDurationSec_Offset = offsetof(FHighlightRecordConfig, BeforeDurationSec);
	static_assert(FHighlightRecordConfig_BeforeDurationSec_Offset == 0x0, "FHighlightRecordConfig::BeforeDurationSec offset is not 0");
	auto constexpr FHighlightRecordConfig_AfterDurationSec_Offset = offsetof(FHighlightRecordConfig, AfterDurationSec);
	static_assert(FHighlightRecordConfig_AfterDurationSec_Offset == 0x4, "FHighlightRecordConfig::AfterDurationSec offset is not 4");
	auto constexpr FHighlightRecordConfig_LinkWaitDurationSec_Offset = offsetof(FHighlightRecordConfig, LinkWaitDurationSec);
	static_assert(FHighlightRecordConfig_LinkWaitDurationSec_Offset == 0x8, "FHighlightRecordConfig::LinkWaitDurationSec offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
