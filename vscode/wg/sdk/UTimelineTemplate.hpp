#pragma once
#include "ETimelineLengthMode.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTimelineTemplate // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UTimelineTemplate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1252); // id32("Class Engine.TimelineTemplate")
		return ptr;
	}
	float TimelineLength; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.TimelineTemplate.TimelineLength */
	TEnumAsByte<enum ETimelineLengthMode> LengthMode; /* Ofs: 0x34 Size: 0x1 - ByteProperty Engine.TimelineTemplate.LengthMode */
	uint8_t UnknownData35[0x3];
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];
	TArray<struct FTTEventTrack> EventTracks; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.TimelineTemplate.EventTracks */
	TArray<struct FTTFloatTrack> FloatTracks; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.TimelineTemplate.FloatTracks */
	TArray<struct FTTVectorTrack> VectorTracks; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.TimelineTemplate.VectorTracks */
	TArray<struct FTTLinearColorTrack> LinearColorTracks; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.TimelineTemplate.LinearColorTracks */
	TArray<struct FBPVariableMetaDataEntry> MetaDataArray; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.TimelineTemplate.MetaDataArray */
	FGuid TimelineGuid; /* Ofs: 0x90 Size: 0x10 - StructProperty Engine.TimelineTemplate.TimelineGuid */


	inline bool SetTimelineLength(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetLengthMode(t_structHelper inst, TEnumAsByte<enum ETimelineLengthMode> value) { inst.WriteOffset(0x34, value); }
	inline bool bAutoPlay()
	{
		return boolField38& 0x1;
	}
	inline bool SetbAutoPlay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLoop()
	{
		return boolField38& 0x2;
	}
	inline bool SetbLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bReplicated()
	{
		return boolField38& 0x4;
	}
	inline bool SetbReplicated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bValidatedAsWired()
	{
		return boolField38& 0x8;
	}
	inline bool SetbValidatedAsWired(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bIgnoreTimeDilation()
	{
		return boolField38& 0x10;
	}
	inline bool SetbIgnoreTimeDilation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetEventTracks(t_structHelper inst, TArray<struct FTTEventTrack> value) { inst.WriteOffset(0x40, value); }
	inline bool SetFloatTracks(t_structHelper inst, TArray<struct FTTFloatTrack> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVectorTracks(t_structHelper inst, TArray<struct FTTVectorTrack> value) { inst.WriteOffset(0x60, value); }
	inline bool SetLinearColorTracks(t_structHelper inst, TArray<struct FTTLinearColorTrack> value) { inst.WriteOffset(0x70, value); }
	inline bool SetMetaDataArray(t_structHelper inst, TArray<struct FBPVariableMetaDataEntry> value) { inst.WriteOffset(0x80, value); }
	inline bool SetTimelineGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTimelineTemplate = sizeof(UTimelineTemplate); // 160
    static_assert(sizeof(UTimelineTemplate) == 0xA0, "Size of UTimelineTemplate is not correct.");
	auto constexpr UTimelineTemplate_TimelineLength_Offset = offsetof(UTimelineTemplate, TimelineLength);
	static_assert(UTimelineTemplate_TimelineLength_Offset == 0x30, "UTimelineTemplate::TimelineLength offset is not 30");
	auto constexpr UTimelineTemplate_LengthMode_Offset = offsetof(UTimelineTemplate, LengthMode);
	static_assert(UTimelineTemplate_LengthMode_Offset == 0x34, "UTimelineTemplate::LengthMode offset is not 34");
	auto constexpr UTimelineTemplate_boolField38_Offset = offsetof(UTimelineTemplate, boolField38);
	static_assert(UTimelineTemplate_boolField38_Offset == 0x38, "UTimelineTemplate::boolField38 offset is not 38");
	auto constexpr UTimelineTemplate_EventTracks_Offset = offsetof(UTimelineTemplate, EventTracks);
	static_assert(UTimelineTemplate_EventTracks_Offset == 0x40, "UTimelineTemplate::EventTracks offset is not 40");
	auto constexpr UTimelineTemplate_FloatTracks_Offset = offsetof(UTimelineTemplate, FloatTracks);
	static_assert(UTimelineTemplate_FloatTracks_Offset == 0x50, "UTimelineTemplate::FloatTracks offset is not 50");
	auto constexpr UTimelineTemplate_VectorTracks_Offset = offsetof(UTimelineTemplate, VectorTracks);
	static_assert(UTimelineTemplate_VectorTracks_Offset == 0x60, "UTimelineTemplate::VectorTracks offset is not 60");
	auto constexpr UTimelineTemplate_LinearColorTracks_Offset = offsetof(UTimelineTemplate, LinearColorTracks);
	static_assert(UTimelineTemplate_LinearColorTracks_Offset == 0x70, "UTimelineTemplate::LinearColorTracks offset is not 70");
	auto constexpr UTimelineTemplate_MetaDataArray_Offset = offsetof(UTimelineTemplate, MetaDataArray);
	static_assert(UTimelineTemplate_MetaDataArray_Offset == 0x80, "UTimelineTemplate::MetaDataArray offset is not 80");
	auto constexpr UTimelineTemplate_TimelineGuid_Offset = offsetof(UTimelineTemplate, TimelineGuid);
	static_assert(UTimelineTemplate_TimelineGuid_Offset == 0x90, "UTimelineTemplate::TimelineGuid offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
