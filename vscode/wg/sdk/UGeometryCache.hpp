#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeometryCache // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef UGeometryCache t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1993); // id32("Class GeometryCache.GeometryCache")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TArray<ExternalPtr<struct UMaterialInterface>> Materials; /* Ofs: 0x38 Size: 0x10 - ArrayProperty GeometryCache.GeometryCache.Materials */
	TArray<ExternalPtr<struct UGeometryCacheTrack>> Tracks; /* Ofs: 0x48 Size: 0x10 - ArrayProperty GeometryCache.GeometryCache.Tracks */
	uint8_t UnknownData58[0x10];


	inline bool SetMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x38, value); }
	inline bool SetTracks(t_structHelper inst, TArray<ExternalPtr<struct UGeometryCacheTrack>> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeometryCache = sizeof(UGeometryCache); // 104
    static_assert(sizeof(UGeometryCache) == 0x68, "Size of UGeometryCache is not correct.");
	auto constexpr UGeometryCache_Materials_Offset = offsetof(UGeometryCache, Materials);
	static_assert(UGeometryCache_Materials_Offset == 0x38, "UGeometryCache::Materials offset is not 38");
	auto constexpr UGeometryCache_Tracks_Offset = offsetof(UGeometryCache, Tracks);
	static_assert(UGeometryCache_Tracks_Offset == 0x48, "UGeometryCache::Tracks offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
