#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_RedZoneExplosion_C // Size: 0xDD
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_RedZoneExplosion_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125053); // id32("BlueprintGeneratedClass Task_RedZoneExplosion.Task_RedZoneExplosion_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_RedZoneExplosion.Task_RedZoneExplosion_C.UberGraphFrame */
	FBlackboardKeySelector RedZonePosition; /* Ofs: 0xB0 Size: 0x28 - StructProperty Task_RedZoneExplosion.Task_RedZoneExplosion_C.RedZonePosition */
	float ElapseTime; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Task_RedZoneExplosion.Task_RedZoneExplosion_C.ElapseTime */
	uint8_t boolFieldDC;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
	inline bool SetRedZonePosition(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xB0, value); }
	inline bool SetElapseTime(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool BombingStart()
	{
		return boolFieldDC& 0x1;
	}
	inline bool SetBombingStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xDC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_RedZoneExplosion_C = sizeof(UTask_RedZoneExplosion_C); // 221
    static_assert(sizeof(UTask_RedZoneExplosion_C) == 0xDD, "Size of UTask_RedZoneExplosion_C is not correct.");
	auto constexpr UTask_RedZoneExplosion_C_UberGraphFrame_Offset = offsetof(UTask_RedZoneExplosion_C, UberGraphFrame);
	static_assert(UTask_RedZoneExplosion_C_UberGraphFrame_Offset == 0xa8, "UTask_RedZoneExplosion_C::UberGraphFrame offset is not a8");
	auto constexpr UTask_RedZoneExplosion_C_RedZonePosition_Offset = offsetof(UTask_RedZoneExplosion_C, RedZonePosition);
	static_assert(UTask_RedZoneExplosion_C_RedZonePosition_Offset == 0xb0, "UTask_RedZoneExplosion_C::RedZonePosition offset is not b0");
	auto constexpr UTask_RedZoneExplosion_C_ElapseTime_Offset = offsetof(UTask_RedZoneExplosion_C, ElapseTime);
	static_assert(UTask_RedZoneExplosion_C_ElapseTime_Offset == 0xd8, "UTask_RedZoneExplosion_C::ElapseTime offset is not d8");
	auto constexpr UTask_RedZoneExplosion_C_boolFieldDC_Offset = offsetof(UTask_RedZoneExplosion_C, boolFieldDC);
	static_assert(UTask_RedZoneExplosion_C_boolFieldDC_Offset == 0xdc, "UTask_RedZoneExplosion_C::boolFieldDC offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
