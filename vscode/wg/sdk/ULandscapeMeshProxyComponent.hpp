#pragma once
#include "UStaticMeshComponent.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeMeshProxyComponent // Size: 0xAB0
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef ULandscapeMeshProxyComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1294); // id32("Class Landscape.LandscapeMeshProxyComponent")
		return ptr;
	}
	FGuid LandscapeGuid; /* Ofs: 0xA80 Size: 0x10 - StructProperty Landscape.LandscapeMeshProxyComponent.LandscapeGuid */
	TArray<struct FIntPoint> ProxyComponentBases; /* Ofs: 0xA90 Size: 0x10 - ArrayProperty Landscape.LandscapeMeshProxyComponent.ProxyComponentBases */
	int8_t ProxyLOD; /* Ofs: 0xAA0 Size: 0x1 - Int8Property Landscape.LandscapeMeshProxyComponent.ProxyLOD */
	uint8_t UnknownDataAA1[0xF];


	inline bool SetLandscapeGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0xA80, value); }
	inline bool SetProxyComponentBases(t_structHelper inst, TArray<struct FIntPoint> value) { inst.WriteOffset(0xA90, value); }
	inline bool SetProxyLOD(t_structHelper inst, int8_t value) { inst.WriteOffset(0xAA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeMeshProxyComponent = sizeof(ULandscapeMeshProxyComponent); // 2736
    static_assert(sizeof(ULandscapeMeshProxyComponent) == 0xAB0, "Size of ULandscapeMeshProxyComponent is not correct.");
	auto constexpr ULandscapeMeshProxyComponent_LandscapeGuid_Offset = offsetof(ULandscapeMeshProxyComponent, LandscapeGuid);
	static_assert(ULandscapeMeshProxyComponent_LandscapeGuid_Offset == 0xa80, "ULandscapeMeshProxyComponent::LandscapeGuid offset is not a80");
	auto constexpr ULandscapeMeshProxyComponent_ProxyComponentBases_Offset = offsetof(ULandscapeMeshProxyComponent, ProxyComponentBases);
	static_assert(ULandscapeMeshProxyComponent_ProxyComponentBases_Offset == 0xa90, "ULandscapeMeshProxyComponent::ProxyComponentBases offset is not a90");
	auto constexpr ULandscapeMeshProxyComponent_ProxyLOD_Offset = offsetof(ULandscapeMeshProxyComponent, ProxyLOD);
	static_assert(ULandscapeMeshProxyComponent_ProxyLOD_Offset == 0xaa0, "ULandscapeMeshProxyComponent::ProxyLOD offset is not aa0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
