#pragma once
#include "UActor.hpp"
#include "ENavDataGatheringMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStaticMeshActor // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UStaticMeshActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(391); // id32("Class Engine.StaticMeshActor")
		return ptr;
	}
//	ExternalPtr<struct UStaticMeshComponent> StaticMeshComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.StaticMeshActor.StaticMeshComponent */
	uint8_t boolField410;
	TEnumAsByte<enum ENavDataGatheringMode> NavigationGeometryGatheringMode; /* Ofs: 0x411 Size: 0x1 - EnumProperty Engine.StaticMeshActor.NavigationGeometryGatheringMode */
	uint8_t UnknownData412[0xE];


//	inline bool SetStaticMeshComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool bStaticMeshReplicateMovement()
	{
		return boolField410& 0x1;
	}
	inline bool SetbStaticMeshReplicateMovement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNavigationGeometryGatheringMode(t_structHelper inst, TEnumAsByte<enum ENavDataGatheringMode> value) { inst.WriteOffset(0x411, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStaticMeshActor = sizeof(UStaticMeshActor); // 1056
    static_assert(sizeof(UStaticMeshActor) == 0x420, "Size of UStaticMeshActor is not correct.");
//	auto constexpr UStaticMeshActor_StaticMeshComponent_Offset = offsetof(UStaticMeshActor, StaticMeshComponent);
//	static_assert(UStaticMeshActor_StaticMeshComponent_Offset == 0x408, "UStaticMeshActor::StaticMeshComponent offset is not 408");
	auto constexpr UStaticMeshActor_boolField410_Offset = offsetof(UStaticMeshActor, boolField410);
	static_assert(UStaticMeshActor_boolField410_Offset == 0x410, "UStaticMeshActor::boolField410 offset is not 410");
	auto constexpr UStaticMeshActor_NavigationGeometryGatheringMode_Offset = offsetof(UStaticMeshActor, NavigationGeometryGatheringMode);
	static_assert(UStaticMeshActor_NavigationGeometryGatheringMode_Offset == 0x411, "UStaticMeshActor::NavigationGeometryGatheringMode offset is not 411");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
