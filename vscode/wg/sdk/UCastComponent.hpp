#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCastComponent // Size: 0x220
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UCastComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1829); // id32("Class TslGame.CastComponent")
		return ptr;
	}
//	FScriptDelegate OnFinishCast; /* Ofs: 0x1E8 Size: 0x10 - DelegateProperty TslGame.CastComponent.OnFinishCast */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate OnCancelCast; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty TslGame.CastComponent.OnCancelCast */
	uint8_t UnknownData208[0x18];


//	inline bool SetOnFinishCast(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetOnCancelCast(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCastComponent = sizeof(UCastComponent); // 544
    static_assert(sizeof(UCastComponent) == 0x220, "Size of UCastComponent is not correct.");
//	auto constexpr UCastComponent_OnFinishCast_Offset = offsetof(UCastComponent, OnFinishCast);
//	static_assert(UCastComponent_OnFinishCast_Offset == 0x1e8, "UCastComponent::OnFinishCast offset is not 1e8");
	auto constexpr UCastComponent_OnCancelCast_Offset = offsetof(UCastComponent, OnCancelCast);
	static_assert(UCastComponent_OnCancelCast_Offset == 0x1f8, "UCastComponent::OnCancelCast offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
