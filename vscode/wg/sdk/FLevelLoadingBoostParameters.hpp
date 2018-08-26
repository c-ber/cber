#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelLoadingBoostParameters // Size: 0x10
{
public:
    float AsyncLoadingTimeLimit; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.LevelLoadingBoostParameters.AsyncLoadingTimeLimit */
    float PriorityAsyncLoadingExtraTime; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.LevelLoadingBoostParameters.PriorityAsyncLoadingExtraTime */
    float LevelStreamingActorsUpdateTimeLimit; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.LevelLoadingBoostParameters.LevelStreamingActorsUpdateTimeLimit */
    int32_t LevelStreamingComponentsRegistrationGranularity; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.LevelLoadingBoostParameters.LevelStreamingComponentsRegistrationGranularity */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelLoadingBoostParameters = sizeof(FLevelLoadingBoostParameters); // 16
    static_assert(sizeof(FLevelLoadingBoostParameters) == 0x10, "Size of FLevelLoadingBoostParameters is not correct.");
	auto constexpr FLevelLoadingBoostParameters_AsyncLoadingTimeLimit_Offset = offsetof(FLevelLoadingBoostParameters, AsyncLoadingTimeLimit);
	static_assert(FLevelLoadingBoostParameters_AsyncLoadingTimeLimit_Offset == 0x0, "FLevelLoadingBoostParameters::AsyncLoadingTimeLimit offset is not 0");
	auto constexpr FLevelLoadingBoostParameters_PriorityAsyncLoadingExtraTime_Offset = offsetof(FLevelLoadingBoostParameters, PriorityAsyncLoadingExtraTime);
	static_assert(FLevelLoadingBoostParameters_PriorityAsyncLoadingExtraTime_Offset == 0x4, "FLevelLoadingBoostParameters::PriorityAsyncLoadingExtraTime offset is not 4");
	auto constexpr FLevelLoadingBoostParameters_LevelStreamingActorsUpdateTimeLimit_Offset = offsetof(FLevelLoadingBoostParameters, LevelStreamingActorsUpdateTimeLimit);
	static_assert(FLevelLoadingBoostParameters_LevelStreamingActorsUpdateTimeLimit_Offset == 0x8, "FLevelLoadingBoostParameters::LevelStreamingActorsUpdateTimeLimit offset is not 8");
	auto constexpr FLevelLoadingBoostParameters_LevelStreamingComponentsRegistrationGranularity_Offset = offsetof(FLevelLoadingBoostParameters, LevelStreamingComponentsRegistrationGranularity);
	static_assert(FLevelLoadingBoostParameters_LevelStreamingComponentsRegistrationGranularity_Offset == 0xc, "FLevelLoadingBoostParameters::LevelStreamingComponentsRegistrationGranularity offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
