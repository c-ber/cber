#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPathFollowingComponent // Size: 0x4A0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UPathFollowingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(656); // id32("Class AIModule.PathFollowingComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x120];
	ExternalPtr<struct UNavMovementComponent> MovementComp; /* Ofs: 0x310 Size: 0x8 - ObjectProperty AIModule.PathFollowingComponent.MovementComp */
	uint8_t UnknownData318[0x8];
	ExternalPtr<struct UNavigationData> MyNavData; /* Ofs: 0x320 Size: 0x8 - ObjectProperty AIModule.PathFollowingComponent.MyNavData */
	uint8_t UnknownData328[0x178];


	inline bool SetMovementComp(t_structHelper inst, ExternalPtr<struct UNavMovementComponent> value) { inst.WriteOffset(0x310, value); }
	inline bool SetMyNavData(t_structHelper inst, ExternalPtr<struct UNavigationData> value) { inst.WriteOffset(0x320, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPathFollowingComponent = sizeof(UPathFollowingComponent); // 1184
    static_assert(sizeof(UPathFollowingComponent) == 0x4A0, "Size of UPathFollowingComponent is not correct.");
	auto constexpr UPathFollowingComponent_MovementComp_Offset = offsetof(UPathFollowingComponent, MovementComp);
	static_assert(UPathFollowingComponent_MovementComp_Offset == 0x310, "UPathFollowingComponent::MovementComp offset is not 310");
	auto constexpr UPathFollowingComponent_MyNavData_Offset = offsetof(UPathFollowingComponent, MyNavData);
	static_assert(UPathFollowingComponent_MyNavData_Offset == 0x320, "UPathFollowingComponent::MyNavData offset is not 320");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
