#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWorldOffsetComponent // Size: 0x200
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslWorldOffsetComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(51); // id32("Class TslGame.TslWorldOffsetComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnApplyWorldOffset; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty TslGame.TslWorldOffsetComponent.OnApplyWorldOffset */
	uint8_t UnknownData1F0[0x10];


//	inline bool SetOnApplyWorldOffset(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWorldOffsetComponent = sizeof(UTslWorldOffsetComponent); // 512
    static_assert(sizeof(UTslWorldOffsetComponent) == 0x200, "Size of UTslWorldOffsetComponent is not correct.");
//	auto constexpr UTslWorldOffsetComponent_OnApplyWorldOffset_Offset = offsetof(UTslWorldOffsetComponent, OnApplyWorldOffset);
//	static_assert(UTslWorldOffsetComponent_OnApplyWorldOffset_Offset == 0x1e8, "UTslWorldOffsetComponent::OnApplyWorldOffset offset is not 1e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
