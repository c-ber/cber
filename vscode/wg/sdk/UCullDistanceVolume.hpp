#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCullDistanceVolume // Size: 0x470
	: public UVolume // Size: 0x440
{
private:
	typedef UCullDistanceVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1710); // id32("Class Engine.CullDistanceVolume")
		return ptr;
	}
	TArray<struct FCullDistanceSizePair> CullDistances; /* Ofs: 0x440 Size: 0x10 - ArrayProperty Engine.CullDistanceVolume.CullDistances */
	uint8_t boolField450;
	uint8_t UnknownData451[0x3];
	float CullDistanceForLODActor; /* Ofs: 0x454 Size: 0x4 - FloatProperty Engine.CullDistanceVolume.CullDistanceForLODActor */
	float CullDistanceForLODActorTooFar; /* Ofs: 0x458 Size: 0x4 - FloatProperty Engine.CullDistanceVolume.CullDistanceForLODActorTooFar */
	uint8_t boolField45C;
	uint8_t UnknownData45D[0x3];
	float IgnoreActorBoundSize; /* Ofs: 0x460 Size: 0x4 - FloatProperty Engine.CullDistanceVolume.IgnoreActorBoundSize */
	uint8_t UnknownData464[0xC];


	inline bool SetCullDistances(t_structHelper inst, TArray<struct FCullDistanceSizePair> value) { inst.WriteOffset(0x440, value); }
	inline bool bEnabled()
	{
		return boolField450& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x450, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCullDistanceForLODActor(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetCullDistanceForLODActorTooFar(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool bUseActorBound()
	{
		return boolField45C& 0x1;
	}
	inline bool SetbUseActorBound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x45C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetIgnoreActorBoundSize(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCullDistanceVolume = sizeof(UCullDistanceVolume); // 1136
    static_assert(sizeof(UCullDistanceVolume) == 0x470, "Size of UCullDistanceVolume is not correct.");
	auto constexpr UCullDistanceVolume_CullDistances_Offset = offsetof(UCullDistanceVolume, CullDistances);
	static_assert(UCullDistanceVolume_CullDistances_Offset == 0x440, "UCullDistanceVolume::CullDistances offset is not 440");
	auto constexpr UCullDistanceVolume_boolField450_Offset = offsetof(UCullDistanceVolume, boolField450);
	static_assert(UCullDistanceVolume_boolField450_Offset == 0x450, "UCullDistanceVolume::boolField450 offset is not 450");
	auto constexpr UCullDistanceVolume_CullDistanceForLODActor_Offset = offsetof(UCullDistanceVolume, CullDistanceForLODActor);
	static_assert(UCullDistanceVolume_CullDistanceForLODActor_Offset == 0x454, "UCullDistanceVolume::CullDistanceForLODActor offset is not 454");
	auto constexpr UCullDistanceVolume_CullDistanceForLODActorTooFar_Offset = offsetof(UCullDistanceVolume, CullDistanceForLODActorTooFar);
	static_assert(UCullDistanceVolume_CullDistanceForLODActorTooFar_Offset == 0x458, "UCullDistanceVolume::CullDistanceForLODActorTooFar offset is not 458");
	auto constexpr UCullDistanceVolume_boolField45C_Offset = offsetof(UCullDistanceVolume, boolField45C);
	static_assert(UCullDistanceVolume_boolField45C_Offset == 0x45c, "UCullDistanceVolume::boolField45C offset is not 45c");
	auto constexpr UCullDistanceVolume_IgnoreActorBoundSize_Offset = offsetof(UCullDistanceVolume, IgnoreActorBoundSize);
	static_assert(UCullDistanceVolume_IgnoreActorBoundSize_Offset == 0x460, "UCullDistanceVolume::IgnoreActorBoundSize offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
