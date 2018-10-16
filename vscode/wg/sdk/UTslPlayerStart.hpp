#pragma once
#include "UPlayerStart.hpp"
#include "EMatchStartType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPlayerStart // Size: 0x470
	: public UPlayerStart // Size: 0x440
{
private:
	typedef UTslPlayerStart t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1961); // id32("Class TslGame.TslPlayerStart")
		return ptr;
	}
//	TEnumAsByte<enum EMatchStartType> MatchStartType; /* Ofs: 0x438 Size: 0x1 - EnumProperty TslGame.TslPlayerStart.MatchStartType */
//	float StartRadius; /* Ofs: 0x43C Size: 0x4 - FloatProperty TslGame.TslPlayerStart.StartRadius */
	uint8_t boolField440;
	uint8_t UnknownData441[0x7];
	TArray<ExternalPtr<struct UStartActivationVolume>> ActivationVolumes; /* Ofs: 0x448 Size: 0x10 - ArrayProperty TslGame.TslPlayerStart.ActivationVolumes */
	uint8_t boolField458;
	uint8_t UnknownData459[0x3];
	int32_t Weight; /* Ofs: 0x45C Size: 0x4 - IntProperty TslGame.TslPlayerStart.Weight */
	uint8_t UnknownData460[0x10];


//	inline bool SetMatchStartType(t_structHelper inst, TEnumAsByte<enum EMatchStartType> value) { inst.WriteOffset(0x438, value); }
//	inline bool SetStartRadius(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool bRandomRotation()
	{
		return boolField440& 0x1;
	}
	inline bool SetbRandomRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x440, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActivationVolumes(t_structHelper inst, TArray<ExternalPtr<struct UStartActivationVolume>> value) { inst.WriteOffset(0x448, value); }
	inline bool bForceSelect()
	{
		return boolField458& 0x1;
	}
	inline bool SetbForceSelect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x458, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x45C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPlayerStart = sizeof(UTslPlayerStart); // 1136
    static_assert(sizeof(UTslPlayerStart) == 0x470, "Size of UTslPlayerStart is not correct.");
//	auto constexpr UTslPlayerStart_MatchStartType_Offset = offsetof(UTslPlayerStart, MatchStartType);
//	static_assert(UTslPlayerStart_MatchStartType_Offset == 0x438, "UTslPlayerStart::MatchStartType offset is not 438");
//	auto constexpr UTslPlayerStart_StartRadius_Offset = offsetof(UTslPlayerStart, StartRadius);
//	static_assert(UTslPlayerStart_StartRadius_Offset == 0x43c, "UTslPlayerStart::StartRadius offset is not 43c");
	auto constexpr UTslPlayerStart_boolField440_Offset = offsetof(UTslPlayerStart, boolField440);
	static_assert(UTslPlayerStart_boolField440_Offset == 0x440, "UTslPlayerStart::boolField440 offset is not 440");
	auto constexpr UTslPlayerStart_ActivationVolumes_Offset = offsetof(UTslPlayerStart, ActivationVolumes);
	static_assert(UTslPlayerStart_ActivationVolumes_Offset == 0x448, "UTslPlayerStart::ActivationVolumes offset is not 448");
	auto constexpr UTslPlayerStart_boolField458_Offset = offsetof(UTslPlayerStart, boolField458);
	static_assert(UTslPlayerStart_boolField458_Offset == 0x458, "UTslPlayerStart::boolField458 offset is not 458");
	auto constexpr UTslPlayerStart_Weight_Offset = offsetof(UTslPlayerStart, Weight);
	static_assert(UTslPlayerStart_Weight_Offset == 0x45c, "UTslPlayerStart::Weight offset is not 45c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
