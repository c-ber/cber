#pragma once
#include "UMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeometryCacheComponent // Size: 0xA60
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UGeometryCacheComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1995); // id32("Class GeometryCache.GeometryCacheComponent")
		return ptr;
	}
	ExternalPtr<struct UGeometryCache> GeometryCache; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty GeometryCache.GeometryCacheComponent.GeometryCache */
	uint8_t boolField9F8;
	uint8_t boolField9F9;
	uint8_t UnknownData9FA[0x2];
	float StartTimeOffset; /* Ofs: 0x9FC Size: 0x4 - FloatProperty GeometryCache.GeometryCacheComponent.StartTimeOffset */
	float PlaybackSpeed; /* Ofs: 0xA00 Size: 0x4 - FloatProperty GeometryCache.GeometryCacheComponent.PlaybackSpeed */
	int32_t NumTracks; /* Ofs: 0xA04 Size: 0x4 - IntProperty GeometryCache.GeometryCacheComponent.NumTracks */
	float ElapsedTime; /* Ofs: 0xA08 Size: 0x4 - FloatProperty GeometryCache.GeometryCacheComponent.ElapsedTime */
	uint8_t UnknownDataA0C[0x54];


	inline bool SetGeometryCache(t_structHelper inst, ExternalPtr<struct UGeometryCache> value) { inst.WriteOffset(0x9F0, value); }
	inline bool bRunning()
	{
		return boolField9F8& 0x1;
	}
	inline bool SetbRunning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLooping()
	{
		return boolField9F9& 0x1;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9F9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStartTimeOffset(t_structHelper inst, float value) { inst.WriteOffset(0x9FC, value); }
	inline bool SetPlaybackSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xA00, value); }
	inline bool SetNumTracks(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA04, value); }
	inline bool SetElapsedTime(t_structHelper inst, float value) { inst.WriteOffset(0xA08, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeometryCacheComponent = sizeof(UGeometryCacheComponent); // 2656
    static_assert(sizeof(UGeometryCacheComponent) == 0xA60, "Size of UGeometryCacheComponent is not correct.");
	auto constexpr UGeometryCacheComponent_GeometryCache_Offset = offsetof(UGeometryCacheComponent, GeometryCache);
	static_assert(UGeometryCacheComponent_GeometryCache_Offset == 0x9f0, "UGeometryCacheComponent::GeometryCache offset is not 9f0");
	auto constexpr UGeometryCacheComponent_boolField9F8_Offset = offsetof(UGeometryCacheComponent, boolField9F8);
	static_assert(UGeometryCacheComponent_boolField9F8_Offset == 0x9f8, "UGeometryCacheComponent::boolField9F8 offset is not 9f8");
	auto constexpr UGeometryCacheComponent_boolField9F9_Offset = offsetof(UGeometryCacheComponent, boolField9F9);
	static_assert(UGeometryCacheComponent_boolField9F9_Offset == 0x9f9, "UGeometryCacheComponent::boolField9F9 offset is not 9f9");
	auto constexpr UGeometryCacheComponent_StartTimeOffset_Offset = offsetof(UGeometryCacheComponent, StartTimeOffset);
	static_assert(UGeometryCacheComponent_StartTimeOffset_Offset == 0x9fc, "UGeometryCacheComponent::StartTimeOffset offset is not 9fc");
	auto constexpr UGeometryCacheComponent_PlaybackSpeed_Offset = offsetof(UGeometryCacheComponent, PlaybackSpeed);
	static_assert(UGeometryCacheComponent_PlaybackSpeed_Offset == 0xa00, "UGeometryCacheComponent::PlaybackSpeed offset is not a00");
	auto constexpr UGeometryCacheComponent_NumTracks_Offset = offsetof(UGeometryCacheComponent, NumTracks);
	static_assert(UGeometryCacheComponent_NumTracks_Offset == 0xa04, "UGeometryCacheComponent::NumTracks offset is not a04");
	auto constexpr UGeometryCacheComponent_ElapsedTime_Offset = offsetof(UGeometryCacheComponent, ElapsedTime);
	static_assert(UGeometryCacheComponent_ElapsedTime_Offset == 0xa08, "UGeometryCacheComponent::ElapsedTime offset is not a08");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
