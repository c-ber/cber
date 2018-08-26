#pragma once
#include "UActorComponent.hpp"
#include "FTimerHandle.hpp"
#include "FHornPlayInfo.hpp"
#include "FHornSoundInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslHornComponent // Size: 0x230
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslHornComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1401); // id32("Class TslGame.TslHornComponent")
		return ptr;
	}
//	FTimerHandle TimerHandle_Horn; /* Ofs: 0x1E8 Size: 0x8 - StructProperty TslGame.TslHornComponent.TimerHandle_Horn */
	float LongHornStartingTime; /* Ofs: 0x1F0 Size: 0x4 - FloatProperty TslGame.TslHornComponent.LongHornStartingTime */
	float CurrHornKeyPressedTime; /* Ofs: 0x1F4 Size: 0x4 - FloatProperty TslGame.TslHornComponent.CurrHornKeyPressedTime */
	uint8_t boolField1F8;
	uint8_t boolField1F9;
	uint8_t UnknownData1FA[0x2];
	FHornPlayInfo HornPlayInfo; /* Ofs: 0x1FC Size: 0x8 - StructProperty TslGame.TslHornComponent.HornPlayInfo */
	uint8_t UnknownData204[0x4];
	FHornSoundInfo HornSounds_Local; /* Ofs: 0x208 Size: 0x10 - StructProperty TslGame.TslHornComponent.HornSounds_Local */
	FHornSoundInfo HornSounds_Remote; /* Ofs: 0x218 Size: 0x10 - StructProperty TslGame.TslHornComponent.HornSounds_Remote */
	uint8_t UnknownData228[0x8];


//	inline bool SetTimerHandle_Horn(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetLongHornStartingTime(t_structHelper inst, float value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetCurrHornKeyPressedTime(t_structHelper inst, float value) { inst.WriteOffset(0x1F4, value); }
	inline bool bHornKeyDown()
	{
		return boolField1F8& 0x1;
	}
	inline bool SetbHornKeyDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPlayingLongHorn()
	{
		return boolField1F9& 0x1;
	}
	inline bool SetbPlayingLongHorn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1F9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHornPlayInfo(t_structHelper inst, FHornPlayInfo value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetHornSounds_Local(t_structHelper inst, FHornSoundInfo value) { inst.WriteOffset(0x208, value); }
	inline bool SetHornSounds_Remote(t_structHelper inst, FHornSoundInfo value) { inst.WriteOffset(0x218, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslHornComponent = sizeof(UTslHornComponent); // 560
    static_assert(sizeof(UTslHornComponent) == 0x230, "Size of UTslHornComponent is not correct.");
//	auto constexpr UTslHornComponent_TimerHandle_Horn_Offset = offsetof(UTslHornComponent, TimerHandle_Horn);
//	static_assert(UTslHornComponent_TimerHandle_Horn_Offset == 0x1e8, "UTslHornComponent::TimerHandle_Horn offset is not 1e8");
	auto constexpr UTslHornComponent_LongHornStartingTime_Offset = offsetof(UTslHornComponent, LongHornStartingTime);
	static_assert(UTslHornComponent_LongHornStartingTime_Offset == 0x1f0, "UTslHornComponent::LongHornStartingTime offset is not 1f0");
	auto constexpr UTslHornComponent_CurrHornKeyPressedTime_Offset = offsetof(UTslHornComponent, CurrHornKeyPressedTime);
	static_assert(UTslHornComponent_CurrHornKeyPressedTime_Offset == 0x1f4, "UTslHornComponent::CurrHornKeyPressedTime offset is not 1f4");
	auto constexpr UTslHornComponent_boolField1F8_Offset = offsetof(UTslHornComponent, boolField1F8);
	static_assert(UTslHornComponent_boolField1F8_Offset == 0x1f8, "UTslHornComponent::boolField1F8 offset is not 1f8");
	auto constexpr UTslHornComponent_boolField1F9_Offset = offsetof(UTslHornComponent, boolField1F9);
	static_assert(UTslHornComponent_boolField1F9_Offset == 0x1f9, "UTslHornComponent::boolField1F9 offset is not 1f9");
	auto constexpr UTslHornComponent_HornPlayInfo_Offset = offsetof(UTslHornComponent, HornPlayInfo);
	static_assert(UTslHornComponent_HornPlayInfo_Offset == 0x1fc, "UTslHornComponent::HornPlayInfo offset is not 1fc");
	auto constexpr UTslHornComponent_HornSounds_Local_Offset = offsetof(UTslHornComponent, HornSounds_Local);
	static_assert(UTslHornComponent_HornSounds_Local_Offset == 0x208, "UTslHornComponent::HornSounds_Local offset is not 208");
	auto constexpr UTslHornComponent_HornSounds_Remote_Offset = offsetof(UTslHornComponent, HornSounds_Remote);
	static_assert(UTslHornComponent_HornSounds_Remote_Offset == 0x218, "UTslHornComponent::HornSounds_Remote offset is not 218");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
