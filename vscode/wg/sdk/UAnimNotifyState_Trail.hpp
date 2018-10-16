#pragma once
#include "UAnimNotifyState.hpp"
#include "ETrailWidthMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotifyState_Trail // Size: 0x68
	: public UAnimNotifyState // Size: 0x38
{
private:
	typedef UAnimNotifyState_Trail t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(278); // id32("Class Engine.AnimNotifyState_Trail")
		return ptr;
	}
	ExternalPtr<struct UParticleSystem> PSTemplate; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.AnimNotifyState_Trail.PSTemplate */
	FName FirstSocketName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.AnimNotifyState_Trail.FirstSocketName */
	FName SecondSocketName; /* Ofs: 0x48 Size: 0x8 - NameProperty Engine.AnimNotifyState_Trail.SecondSocketName */
	TEnumAsByte<enum ETrailWidthMode> WidthScaleMode; /* Ofs: 0x50 Size: 0x1 - ByteProperty Engine.AnimNotifyState_Trail.WidthScaleMode */
	uint8_t UnknownData51[0x7];
	FName WidthScaleCurve; /* Ofs: 0x58 Size: 0x8 - NameProperty Engine.AnimNotifyState_Trail.WidthScaleCurve */
	uint8_t boolField60;
	uint8_t UnknownData61[0x7];


	inline bool SetPSTemplate(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x38, value); }
	inline bool SetFirstSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
	inline bool SetSecondSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x48, value); }
	inline bool SetWidthScaleMode(t_structHelper inst, TEnumAsByte<enum ETrailWidthMode> value) { inst.WriteOffset(0x50, value); }
	inline bool SetWidthScaleCurve(t_structHelper inst, FName value) { inst.WriteOffset(0x58, value); }
	inline bool bRecycleSpawnedSystems()
	{
		return boolField60& 0x1;
	}
	inline bool SetbRecycleSpawnedSystems(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotifyState_Trail = sizeof(UAnimNotifyState_Trail); // 104
    static_assert(sizeof(UAnimNotifyState_Trail) == 0x68, "Size of UAnimNotifyState_Trail is not correct.");
	auto constexpr UAnimNotifyState_Trail_PSTemplate_Offset = offsetof(UAnimNotifyState_Trail, PSTemplate);
	static_assert(UAnimNotifyState_Trail_PSTemplate_Offset == 0x38, "UAnimNotifyState_Trail::PSTemplate offset is not 38");
	auto constexpr UAnimNotifyState_Trail_FirstSocketName_Offset = offsetof(UAnimNotifyState_Trail, FirstSocketName);
	static_assert(UAnimNotifyState_Trail_FirstSocketName_Offset == 0x40, "UAnimNotifyState_Trail::FirstSocketName offset is not 40");
	auto constexpr UAnimNotifyState_Trail_SecondSocketName_Offset = offsetof(UAnimNotifyState_Trail, SecondSocketName);
	static_assert(UAnimNotifyState_Trail_SecondSocketName_Offset == 0x48, "UAnimNotifyState_Trail::SecondSocketName offset is not 48");
	auto constexpr UAnimNotifyState_Trail_WidthScaleMode_Offset = offsetof(UAnimNotifyState_Trail, WidthScaleMode);
	static_assert(UAnimNotifyState_Trail_WidthScaleMode_Offset == 0x50, "UAnimNotifyState_Trail::WidthScaleMode offset is not 50");
	auto constexpr UAnimNotifyState_Trail_WidthScaleCurve_Offset = offsetof(UAnimNotifyState_Trail, WidthScaleCurve);
	static_assert(UAnimNotifyState_Trail_WidthScaleCurve_Offset == 0x58, "UAnimNotifyState_Trail::WidthScaleCurve offset is not 58");
	auto constexpr UAnimNotifyState_Trail_boolField60_Offset = offsetof(UAnimNotifyState_Trail, boolField60);
	static_assert(UAnimNotifyState_Trail_boolField60_Offset == 0x60, "UAnimNotifyState_Trail::boolField60 offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
