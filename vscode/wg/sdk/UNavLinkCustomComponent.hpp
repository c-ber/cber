#pragma once
#include "UNavRelevantComponent.hpp"
#include "FVector.hpp"
#include "ENavLinkDirection.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLinkCustomComponent // Size: 0x330
	: public UNavRelevantComponent // Size: 0x220
{
private:
	typedef UNavLinkCustomComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1807); // id32("Class Engine.NavLinkCustomComponent")
		return ptr;
	}
	uint32_t NavLinkUserId; /* Ofs: 0x220 Size: 0x4 - UInt32Property Engine.NavLinkCustomComponent.NavLinkUserId */
	uint8_t UnknownData224[0x4];
	ExternalPtr<struct UClass> EnabledAreaClass; /* Ofs: 0x228 Size: 0x8 - ClassProperty Engine.NavLinkCustomComponent.EnabledAreaClass */
	ExternalPtr<struct UClass> DisabledAreaClass; /* Ofs: 0x230 Size: 0x8 - ClassProperty Engine.NavLinkCustomComponent.DisabledAreaClass */
	FVector LinkRelativeStart; /* Ofs: 0x238 Size: 0xC - StructProperty Engine.NavLinkCustomComponent.LinkRelativeStart */
	FVector LinkRelativeEnd; /* Ofs: 0x244 Size: 0xC - StructProperty Engine.NavLinkCustomComponent.LinkRelativeEnd */
	TEnumAsByte<enum ENavLinkDirection> LinkDirection; /* Ofs: 0x250 Size: 0x1 - ByteProperty Engine.NavLinkCustomComponent.LinkDirection */
	uint8_t UnknownData251[0x3];
	uint8_t boolField254;
	uint8_t UnknownData255[0x3];
	FVector ObstacleOffset; /* Ofs: 0x258 Size: 0xC - StructProperty Engine.NavLinkCustomComponent.ObstacleOffset */
	FVector ObstacleExtent; /* Ofs: 0x264 Size: 0xC - StructProperty Engine.NavLinkCustomComponent.ObstacleExtent */
	ExternalPtr<struct UClass> ObstacleAreaClass; /* Ofs: 0x270 Size: 0x8 - ClassProperty Engine.NavLinkCustomComponent.ObstacleAreaClass */
	float BroadcastRadius; /* Ofs: 0x278 Size: 0x4 - FloatProperty Engine.NavLinkCustomComponent.BroadcastRadius */
	float BroadcastInterval; /* Ofs: 0x27C Size: 0x4 - FloatProperty Engine.NavLinkCustomComponent.BroadcastInterval */
	TEnumAsByte<enum ECollisionChannel> BroadcastChannel; /* Ofs: 0x280 Size: 0x1 - ByteProperty Engine.NavLinkCustomComponent.BroadcastChannel */
	uint8_t UnknownData281[0xAF];


	inline bool SetNavLinkUserId(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x220, value); }
	inline bool SetEnabledAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x228, value); }
	inline bool SetDisabledAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x230, value); }
	inline bool SetLinkRelativeStart(t_structHelper inst, FVector value) { inst.WriteOffset(0x238, value); }
	inline bool SetLinkRelativeEnd(t_structHelper inst, FVector value) { inst.WriteOffset(0x244, value); }
	inline bool SetLinkDirection(t_structHelper inst, TEnumAsByte<enum ENavLinkDirection> value) { inst.WriteOffset(0x250, value); }
	inline bool bLinkEnabled()
	{
		return boolField254& 0x1;
	}
	inline bool SetbLinkEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bNotifyWhenEnabled()
	{
		return boolField254& 0x2;
	}
	inline bool SetbNotifyWhenEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bNotifyWhenDisabled()
	{
		return boolField254& 0x4;
	}
	inline bool SetbNotifyWhenDisabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCreateBoxObstacle()
	{
		return boolField254& 0x8;
	}
	inline bool SetbCreateBoxObstacle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetObstacleOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x258, value); }
	inline bool SetObstacleExtent(t_structHelper inst, FVector value) { inst.WriteOffset(0x264, value); }
	inline bool SetObstacleAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x270, value); }
	inline bool SetBroadcastRadius(t_structHelper inst, float value) { inst.WriteOffset(0x278, value); }
	inline bool SetBroadcastInterval(t_structHelper inst, float value) { inst.WriteOffset(0x27C, value); }
	inline bool SetBroadcastChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x280, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLinkCustomComponent = sizeof(UNavLinkCustomComponent); // 816
    static_assert(sizeof(UNavLinkCustomComponent) == 0x330, "Size of UNavLinkCustomComponent is not correct.");
	auto constexpr UNavLinkCustomComponent_NavLinkUserId_Offset = offsetof(UNavLinkCustomComponent, NavLinkUserId);
	static_assert(UNavLinkCustomComponent_NavLinkUserId_Offset == 0x220, "UNavLinkCustomComponent::NavLinkUserId offset is not 220");
	auto constexpr UNavLinkCustomComponent_EnabledAreaClass_Offset = offsetof(UNavLinkCustomComponent, EnabledAreaClass);
	static_assert(UNavLinkCustomComponent_EnabledAreaClass_Offset == 0x228, "UNavLinkCustomComponent::EnabledAreaClass offset is not 228");
	auto constexpr UNavLinkCustomComponent_DisabledAreaClass_Offset = offsetof(UNavLinkCustomComponent, DisabledAreaClass);
	static_assert(UNavLinkCustomComponent_DisabledAreaClass_Offset == 0x230, "UNavLinkCustomComponent::DisabledAreaClass offset is not 230");
	auto constexpr UNavLinkCustomComponent_LinkRelativeStart_Offset = offsetof(UNavLinkCustomComponent, LinkRelativeStart);
	static_assert(UNavLinkCustomComponent_LinkRelativeStart_Offset == 0x238, "UNavLinkCustomComponent::LinkRelativeStart offset is not 238");
	auto constexpr UNavLinkCustomComponent_LinkRelativeEnd_Offset = offsetof(UNavLinkCustomComponent, LinkRelativeEnd);
	static_assert(UNavLinkCustomComponent_LinkRelativeEnd_Offset == 0x244, "UNavLinkCustomComponent::LinkRelativeEnd offset is not 244");
	auto constexpr UNavLinkCustomComponent_LinkDirection_Offset = offsetof(UNavLinkCustomComponent, LinkDirection);
	static_assert(UNavLinkCustomComponent_LinkDirection_Offset == 0x250, "UNavLinkCustomComponent::LinkDirection offset is not 250");
	auto constexpr UNavLinkCustomComponent_boolField254_Offset = offsetof(UNavLinkCustomComponent, boolField254);
	static_assert(UNavLinkCustomComponent_boolField254_Offset == 0x254, "UNavLinkCustomComponent::boolField254 offset is not 254");
	auto constexpr UNavLinkCustomComponent_ObstacleOffset_Offset = offsetof(UNavLinkCustomComponent, ObstacleOffset);
	static_assert(UNavLinkCustomComponent_ObstacleOffset_Offset == 0x258, "UNavLinkCustomComponent::ObstacleOffset offset is not 258");
	auto constexpr UNavLinkCustomComponent_ObstacleExtent_Offset = offsetof(UNavLinkCustomComponent, ObstacleExtent);
	static_assert(UNavLinkCustomComponent_ObstacleExtent_Offset == 0x264, "UNavLinkCustomComponent::ObstacleExtent offset is not 264");
	auto constexpr UNavLinkCustomComponent_ObstacleAreaClass_Offset = offsetof(UNavLinkCustomComponent, ObstacleAreaClass);
	static_assert(UNavLinkCustomComponent_ObstacleAreaClass_Offset == 0x270, "UNavLinkCustomComponent::ObstacleAreaClass offset is not 270");
	auto constexpr UNavLinkCustomComponent_BroadcastRadius_Offset = offsetof(UNavLinkCustomComponent, BroadcastRadius);
	static_assert(UNavLinkCustomComponent_BroadcastRadius_Offset == 0x278, "UNavLinkCustomComponent::BroadcastRadius offset is not 278");
	auto constexpr UNavLinkCustomComponent_BroadcastInterval_Offset = offsetof(UNavLinkCustomComponent, BroadcastInterval);
	static_assert(UNavLinkCustomComponent_BroadcastInterval_Offset == 0x27c, "UNavLinkCustomComponent::BroadcastInterval offset is not 27c");
	auto constexpr UNavLinkCustomComponent_BroadcastChannel_Offset = offsetof(UNavLinkCustomComponent, BroadcastChannel);
	static_assert(UNavLinkCustomComponent_BroadcastChannel_Offset == 0x280, "UNavLinkCustomComponent::BroadcastChannel offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
