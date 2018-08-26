#pragma once
#include "UNavMovementComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnMovementComponent // Size: 0x270
	: public UNavMovementComponent // Size: 0x270
{
private:
	typedef UPawnMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1310); // id32("Class Engine.PawnMovementComponent")
		return ptr;
	}
//	ExternalPtr<struct UPawn> PawnOwner; /* Ofs: 0x268 Size: 0x8 - ObjectProperty Engine.PawnMovementComponent.PawnOwner */


//	inline bool SetPawnOwner(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x268, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnMovementComponent = sizeof(UPawnMovementComponent); // 624
    static_assert(sizeof(UPawnMovementComponent) == 0x270, "Size of UPawnMovementComponent is not correct.");
//	auto constexpr UPawnMovementComponent_PawnOwner_Offset = offsetof(UPawnMovementComponent, PawnOwner);
//	static_assert(UPawnMovementComponent_PawnOwner_Offset == 0x268, "UPawnMovementComponent::PawnOwner offset is not 268");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
