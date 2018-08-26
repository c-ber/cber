#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEmoteComponent // Size: 0x220
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslEmoteComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1880); // id32("Class TslGame.TslEmoteComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x18];
	float EmotePlayTimeout; /* Ofs: 0x208 Size: 0x4 - FloatProperty TslGame.TslEmoteComponent.EmotePlayTimeout */
	float SimulatedProxyFailedChecksTollerance; /* Ofs: 0x20C Size: 0x4 - FloatProperty TslGame.TslEmoteComponent.SimulatedProxyFailedChecksTollerance */
	uint8_t UnknownData210[0x10];


	inline bool SetEmotePlayTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x208, value); }
	inline bool SetSimulatedProxyFailedChecksTollerance(t_structHelper inst, float value) { inst.WriteOffset(0x20C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEmoteComponent = sizeof(UTslEmoteComponent); // 544
    static_assert(sizeof(UTslEmoteComponent) == 0x220, "Size of UTslEmoteComponent is not correct.");
	auto constexpr UTslEmoteComponent_EmotePlayTimeout_Offset = offsetof(UTslEmoteComponent, EmotePlayTimeout);
	static_assert(UTslEmoteComponent_EmotePlayTimeout_Offset == 0x208, "UTslEmoteComponent::EmotePlayTimeout offset is not 208");
	auto constexpr UTslEmoteComponent_SimulatedProxyFailedChecksTollerance_Offset = offsetof(UTslEmoteComponent, SimulatedProxyFailedChecksTollerance);
	static_assert(UTslEmoteComponent_SimulatedProxyFailedChecksTollerance_Offset == 0x20c, "UTslEmoteComponent::SimulatedProxyFailedChecksTollerance offset is not 20c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
