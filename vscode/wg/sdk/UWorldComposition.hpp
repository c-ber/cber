#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWorldComposition // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef UWorldComposition t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1261); // id32("Class Engine.WorldComposition")
		return ptr;
	}
	uint8_t UnknownData30[0x20];
	TArray<ExternalPtr<struct ULevelStreaming>> TilesStreaming; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.WorldComposition.TilesStreaming */
	double TilesStreamingTimeThreshold; /* Ofs: 0x60 Size: 0x8 - DoubleProperty Engine.WorldComposition.TilesStreamingTimeThreshold */
	uint8_t boolField68;
	uint8_t boolField69;
	uint8_t UnknownData6A[0x2];
	float RebaseOriginDistance; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.WorldComposition.RebaseOriginDistance */
	TArray<struct FString> IgnoreStreamingPrefix; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.WorldComposition.IgnoreStreamingPrefix */


	inline bool SetTilesStreaming(t_structHelper inst, TArray<ExternalPtr<struct ULevelStreaming>> value) { inst.WriteOffset(0x50, value); }
	inline bool SetTilesStreamingTimeThreshold(t_structHelper inst, double value) { inst.WriteOffset(0x60, value); }
	inline bool bLoadAllTilesDuringCinematic()
	{
		return boolField68& 0x1;
	}
	inline bool SetbLoadAllTilesDuringCinematic(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRebaseOriginIn3DSpace()
	{
		return boolField69& 0x1;
	}
	inline bool SetbRebaseOriginIn3DSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x69, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRebaseOriginDistance(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetIgnoreStreamingPrefix(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWorldComposition = sizeof(UWorldComposition); // 128
    static_assert(sizeof(UWorldComposition) == 0x80, "Size of UWorldComposition is not correct.");
	auto constexpr UWorldComposition_TilesStreaming_Offset = offsetof(UWorldComposition, TilesStreaming);
	static_assert(UWorldComposition_TilesStreaming_Offset == 0x50, "UWorldComposition::TilesStreaming offset is not 50");
	auto constexpr UWorldComposition_TilesStreamingTimeThreshold_Offset = offsetof(UWorldComposition, TilesStreamingTimeThreshold);
	static_assert(UWorldComposition_TilesStreamingTimeThreshold_Offset == 0x60, "UWorldComposition::TilesStreamingTimeThreshold offset is not 60");
	auto constexpr UWorldComposition_boolField68_Offset = offsetof(UWorldComposition, boolField68);
	static_assert(UWorldComposition_boolField68_Offset == 0x68, "UWorldComposition::boolField68 offset is not 68");
	auto constexpr UWorldComposition_boolField69_Offset = offsetof(UWorldComposition, boolField69);
	static_assert(UWorldComposition_boolField69_Offset == 0x69, "UWorldComposition::boolField69 offset is not 69");
	auto constexpr UWorldComposition_RebaseOriginDistance_Offset = offsetof(UWorldComposition, RebaseOriginDistance);
	static_assert(UWorldComposition_RebaseOriginDistance_Offset == 0x6c, "UWorldComposition::RebaseOriginDistance offset is not 6c");
	auto constexpr UWorldComposition_IgnoreStreamingPrefix_Offset = offsetof(UWorldComposition, IgnoreStreamingPrefix);
	static_assert(UWorldComposition_IgnoreStreamingPrefix_Offset == 0x70, "UWorldComposition::IgnoreStreamingPrefix offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
