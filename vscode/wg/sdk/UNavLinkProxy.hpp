#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLinkProxy // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UNavLinkProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1769); // id32("Class Engine.NavLinkProxy")
		return ptr;
	}
	uint8_t UnknownData410[0x8];
	TArray<struct FNavigationLink> PointLinks; /* Ofs: 0x418 Size: 0x10 - ArrayProperty Engine.NavLinkProxy.PointLinks */
	TArray<struct FNavigationSegmentLink> SegmentLinks; /* Ofs: 0x428 Size: 0x10 - ArrayProperty Engine.NavLinkProxy.SegmentLinks */
	ExternalPtr<struct UNavLinkCustomComponent> SmartLinkComp; /* Ofs: 0x438 Size: 0x8 - ObjectProperty Engine.NavLinkProxy.SmartLinkComp */
	uint8_t boolField440;
	uint8_t UnknownData441[0x7];
	FScriptMulticastDelegate OnSmartLinkReached; /* Ofs: 0x448 Size: 0x10 - MulticastDelegateProperty Engine.NavLinkProxy.OnSmartLinkReached */
	uint8_t UnknownData458[0x8];


	inline bool SetPointLinks(t_structHelper inst, TArray<struct FNavigationLink> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSegmentLinks(t_structHelper inst, TArray<struct FNavigationSegmentLink> value) { inst.WriteOffset(0x428, value); }
	inline bool SetSmartLinkComp(t_structHelper inst, ExternalPtr<struct UNavLinkCustomComponent> value) { inst.WriteOffset(0x438, value); }
	inline bool bSmartLinkIsRelevant()
	{
		return boolField440& 0x1;
	}
	inline bool SetbSmartLinkIsRelevant(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x440, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnSmartLinkReached(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x448, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLinkProxy = sizeof(UNavLinkProxy); // 1120
    static_assert(sizeof(UNavLinkProxy) == 0x460, "Size of UNavLinkProxy is not correct.");
	auto constexpr UNavLinkProxy_PointLinks_Offset = offsetof(UNavLinkProxy, PointLinks);
	static_assert(UNavLinkProxy_PointLinks_Offset == 0x418, "UNavLinkProxy::PointLinks offset is not 418");
	auto constexpr UNavLinkProxy_SegmentLinks_Offset = offsetof(UNavLinkProxy, SegmentLinks);
	static_assert(UNavLinkProxy_SegmentLinks_Offset == 0x428, "UNavLinkProxy::SegmentLinks offset is not 428");
	auto constexpr UNavLinkProxy_SmartLinkComp_Offset = offsetof(UNavLinkProxy, SmartLinkComp);
	static_assert(UNavLinkProxy_SmartLinkComp_Offset == 0x438, "UNavLinkProxy::SmartLinkComp offset is not 438");
	auto constexpr UNavLinkProxy_boolField440_Offset = offsetof(UNavLinkProxy, boolField440);
	static_assert(UNavLinkProxy_boolField440_Offset == 0x440, "UNavLinkProxy::boolField440 offset is not 440");
	auto constexpr UNavLinkProxy_OnSmartLinkReached_Offset = offsetof(UNavLinkProxy, OnSmartLinkReached);
	static_assert(UNavLinkProxy_OnSmartLinkReached_Offset == 0x448, "UNavLinkProxy::OnSmartLinkReached offset is not 448");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
