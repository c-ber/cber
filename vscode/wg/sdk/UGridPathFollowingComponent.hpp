#pragma once
#include "UPathFollowingComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGridPathFollowingComponent // Size: 0x4D0
	: public UPathFollowingComponent // Size: 0x4A0
{
private:
	typedef UGridPathFollowingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(658); // id32("Class AIModule.GridPathFollowingComponent")
		return ptr;
	}
//	ExternalPtr<struct UNavLocalGridManager> GridManager; /* Ofs: 0x498 Size: 0x8 - ObjectProperty AIModule.GridPathFollowingComponent.GridManager */
	uint8_t UnknownData4A0[0x30];


//	inline bool SetGridManager(t_structHelper inst, ExternalPtr<struct UNavLocalGridManager> value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGridPathFollowingComponent = sizeof(UGridPathFollowingComponent); // 1232
    static_assert(sizeof(UGridPathFollowingComponent) == 0x4D0, "Size of UGridPathFollowingComponent is not correct.");
//	auto constexpr UGridPathFollowingComponent_GridManager_Offset = offsetof(UGridPathFollowingComponent, GridManager);
//	static_assert(UGridPathFollowingComponent_GridManager_Offset == 0x498, "UGridPathFollowingComponent::GridManager offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
