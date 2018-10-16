#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationInvokerComponent // Size: 0x1F0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UNavigationInvokerComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1804); // id32("Class Engine.NavigationInvokerComponent")
		return ptr;
	}
//	float TileGenerationRadius; /* Ofs: 0x1E8 Size: 0x4 - FloatProperty Engine.NavigationInvokerComponent.TileGenerationRadius */
//	float TileRemovalRadius; /* Ofs: 0x1EC Size: 0x4 - FloatProperty Engine.NavigationInvokerComponent.TileRemovalRadius */


//	inline bool SetTileGenerationRadius(t_structHelper inst, float value) { inst.WriteOffset(0x1E8, value); }
//	inline bool SetTileRemovalRadius(t_structHelper inst, float value) { inst.WriteOffset(0x1EC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationInvokerComponent = sizeof(UNavigationInvokerComponent); // 496
    static_assert(sizeof(UNavigationInvokerComponent) == 0x1F0, "Size of UNavigationInvokerComponent is not correct.");
//	auto constexpr UNavigationInvokerComponent_TileGenerationRadius_Offset = offsetof(UNavigationInvokerComponent, TileGenerationRadius);
//	static_assert(UNavigationInvokerComponent_TileGenerationRadius_Offset == 0x1e8, "UNavigationInvokerComponent::TileGenerationRadius offset is not 1e8");
//	auto constexpr UNavigationInvokerComponent_TileRemovalRadius_Offset = offsetof(UNavigationInvokerComponent, TileRemovalRadius);
//	static_assert(UNavigationInvokerComponent_TileRemovalRadius_Offset == 0x1ec, "UNavigationInvokerComponent::TileRemovalRadius offset is not 1ec");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
