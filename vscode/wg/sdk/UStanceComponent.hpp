#pragma once
#include "UActorComponent.hpp"
#include "FStanceTransitionData.hpp"
#include "EStanceMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStanceComponent // Size: 0x280
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UStanceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1960); // id32("Class TslGame.StanceComponent")
		return ptr;
	}
	FStanceTransitionData StanceTransitionData; /* Ofs: 0x1F0 Size: 0x60 - StructProperty TslGame.StanceComponent.StanceTransitionData */
	TEnumAsByte<enum EStanceMode> CurrentStance; /* Ofs: 0x250 Size: 0x1 - ByteProperty TslGame.StanceComponent.CurrentStance */
	uint8_t UnknownData251[0x2F];


	inline bool SetStanceTransitionData(t_structHelper inst, FStanceTransitionData value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetCurrentStance(t_structHelper inst, TEnumAsByte<enum EStanceMode> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStanceComponent = sizeof(UStanceComponent); // 640
    static_assert(sizeof(UStanceComponent) == 0x280, "Size of UStanceComponent is not correct.");
	auto constexpr UStanceComponent_StanceTransitionData_Offset = offsetof(UStanceComponent, StanceTransitionData);
	static_assert(UStanceComponent_StanceTransitionData_Offset == 0x1f0, "UStanceComponent::StanceTransitionData offset is not 1f0");
	auto constexpr UStanceComponent_CurrentStance_Offset = offsetof(UStanceComponent, CurrentStance);
	static_assert(UStanceComponent_CurrentStance_Offset == 0x250, "UStanceComponent::CurrentStance offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
