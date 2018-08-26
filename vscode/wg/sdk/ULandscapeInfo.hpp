#pragma once
#include "FGuid.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeInfo // Size: 0x208
	: public UObject // Size: 0x30
{
private:
	typedef ULandscapeInfo t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1289); // id32("Class Landscape.LandscapeInfo")
		return ptr;
	}
	TLazyObjectPtr<ExternalPtr<struct ULandscape>> LandscapeActor; /* Ofs: 0x30 Size: 0x1C - LazyObjectProperty Landscape.LandscapeInfo.LandscapeActor */
	FGuid LandscapeGuid; /* Ofs: 0x4C Size: 0x10 - StructProperty Landscape.LandscapeInfo.LandscapeGuid */
	int32_t ComponentSizeQuads; /* Ofs: 0x5C Size: 0x4 - IntProperty Landscape.LandscapeInfo.ComponentSizeQuads */
	int32_t SubsectionSizeQuads; /* Ofs: 0x60 Size: 0x4 - IntProperty Landscape.LandscapeInfo.SubsectionSizeQuads */
	int32_t ComponentNumSubsections; /* Ofs: 0x64 Size: 0x4 - IntProperty Landscape.LandscapeInfo.ComponentNumSubsections */
	FVector DrawScale; /* Ofs: 0x68 Size: 0xC - StructProperty Landscape.LandscapeInfo.DrawScale */
	uint8_t UnknownData74[0x54];
	TSet<ExternalPtr<struct ULandscapeStreamingProxy>> Proxies; /* Ofs: 0xC8 Size: 0x50 - SetProperty Landscape.LandscapeInfo.Proxies */
	uint8_t UnknownData118[0xF0];


	inline bool SetLandscapeActor(t_structHelper inst, TLazyObjectPtr<ExternalPtr<struct ULandscape>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetLandscapeGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x4C, value); }
	inline bool SetComponentSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5C, value); }
	inline bool SetSubsectionSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetComponentNumSubsections(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool SetDrawScale(t_structHelper inst, FVector value) { inst.WriteOffset(0x68, value); }
	inline bool SetProxies(t_structHelper inst, TSet<ExternalPtr<struct ULandscapeStreamingProxy>> value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeInfo = sizeof(ULandscapeInfo); // 520
    static_assert(sizeof(ULandscapeInfo) == 0x208, "Size of ULandscapeInfo is not correct.");
	auto constexpr ULandscapeInfo_LandscapeActor_Offset = offsetof(ULandscapeInfo, LandscapeActor);
	static_assert(ULandscapeInfo_LandscapeActor_Offset == 0x30, "ULandscapeInfo::LandscapeActor offset is not 30");
	auto constexpr ULandscapeInfo_LandscapeGuid_Offset = offsetof(ULandscapeInfo, LandscapeGuid);
	static_assert(ULandscapeInfo_LandscapeGuid_Offset == 0x4c, "ULandscapeInfo::LandscapeGuid offset is not 4c");
	auto constexpr ULandscapeInfo_ComponentSizeQuads_Offset = offsetof(ULandscapeInfo, ComponentSizeQuads);
	static_assert(ULandscapeInfo_ComponentSizeQuads_Offset == 0x5c, "ULandscapeInfo::ComponentSizeQuads offset is not 5c");
	auto constexpr ULandscapeInfo_SubsectionSizeQuads_Offset = offsetof(ULandscapeInfo, SubsectionSizeQuads);
	static_assert(ULandscapeInfo_SubsectionSizeQuads_Offset == 0x60, "ULandscapeInfo::SubsectionSizeQuads offset is not 60");
	auto constexpr ULandscapeInfo_ComponentNumSubsections_Offset = offsetof(ULandscapeInfo, ComponentNumSubsections);
	static_assert(ULandscapeInfo_ComponentNumSubsections_Offset == 0x64, "ULandscapeInfo::ComponentNumSubsections offset is not 64");
	auto constexpr ULandscapeInfo_DrawScale_Offset = offsetof(ULandscapeInfo, DrawScale);
	static_assert(ULandscapeInfo_DrawScale_Offset == 0x68, "ULandscapeInfo::DrawScale offset is not 68");
	auto constexpr ULandscapeInfo_Proxies_Offset = offsetof(ULandscapeInfo, Proxies);
	static_assert(ULandscapeInfo_Proxies_Offset == 0xc8, "ULandscapeInfo::Proxies offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
