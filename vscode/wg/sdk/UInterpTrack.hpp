#pragma once
#include "ETrackActiveCondition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrack // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UInterpTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(796); // id32("Class Engine.InterpTrack")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	TArray<ExternalPtr<struct UInterpTrack>> SubTracks; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.InterpTrack.SubTracks */
	ExternalPtr<struct UClass> TrackInstClass; /* Ofs: 0x50 Size: 0x8 - ClassProperty Engine.InterpTrack.TrackInstClass */
	TEnumAsByte<enum ETrackActiveCondition> ActiveCondition; /* Ofs: 0x58 Size: 0x1 - ByteProperty Engine.InterpTrack.ActiveCondition */
	uint8_t UnknownData59[0x7];
	FString TrackTitle; /* Ofs: 0x60 Size: 0x10 - StrProperty Engine.InterpTrack.TrackTitle */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];


	inline bool SetSubTracks(t_structHelper inst, TArray<ExternalPtr<struct UInterpTrack>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetTrackInstClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x50, value); }
	inline bool SetActiveCondition(t_structHelper inst, TEnumAsByte<enum ETrackActiveCondition> value) { inst.WriteOffset(0x58, value); }
	inline bool SetTrackTitle(t_structHelper inst, FString value) { inst.WriteOffset(0x60, value); }
	inline bool bOnePerGroup()
	{
		return boolField70& 0x1;
	}
	inline bool SetbOnePerGroup(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDirGroupOnly()
	{
		return boolField70& 0x2;
	}
	inline bool SetbDirGroupOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDisableTrack()
	{
		return boolField70& 0x4;
	}
	inline bool SetbDisableTrack(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bIsSelected()
	{
		return boolField70& 0x8;
	}
	inline bool SetbIsSelected(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bIsAnimControlTrack()
	{
		return boolField70& 0x10;
	}
	inline bool SetbIsAnimControlTrack(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSubTrackOnly()
	{
		return boolField70& 0x20;
	}
	inline bool SetbSubTrackOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bVisible()
	{
		return boolField70& 0x40;
	}
	inline bool SetbVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bIsRecording()
	{
		return boolField70& 0x80;
	}
	inline bool SetbIsRecording(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrack = sizeof(UInterpTrack); // 120
    static_assert(sizeof(UInterpTrack) == 0x78, "Size of UInterpTrack is not correct.");
	auto constexpr UInterpTrack_SubTracks_Offset = offsetof(UInterpTrack, SubTracks);
	static_assert(UInterpTrack_SubTracks_Offset == 0x40, "UInterpTrack::SubTracks offset is not 40");
	auto constexpr UInterpTrack_TrackInstClass_Offset = offsetof(UInterpTrack, TrackInstClass);
	static_assert(UInterpTrack_TrackInstClass_Offset == 0x50, "UInterpTrack::TrackInstClass offset is not 50");
	auto constexpr UInterpTrack_ActiveCondition_Offset = offsetof(UInterpTrack, ActiveCondition);
	static_assert(UInterpTrack_ActiveCondition_Offset == 0x58, "UInterpTrack::ActiveCondition offset is not 58");
	auto constexpr UInterpTrack_TrackTitle_Offset = offsetof(UInterpTrack, TrackTitle);
	static_assert(UInterpTrack_TrackTitle_Offset == 0x60, "UInterpTrack::TrackTitle offset is not 60");
	auto constexpr UInterpTrack_boolField70_Offset = offsetof(UInterpTrack, boolField70);
	static_assert(UInterpTrack_boolField70_Offset == 0x70, "UInterpTrack::boolField70 offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
