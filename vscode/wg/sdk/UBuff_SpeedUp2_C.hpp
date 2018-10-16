#pragma once
#include "UTslBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_SpeedUp2_C // Size: 0x484
	: public UTslBuff // Size: 0x470
{
private:
	typedef UBuff_SpeedUp2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88643); // id32("BlueprintGeneratedClass Buff_SpeedUp2.Buff_SpeedUp2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty Buff_SpeedUp2.Buff_SpeedUp2_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Buff_SpeedUp2.Buff_SpeedUp2_C.DefaultSceneRoot */
	float AddSpeedUpFactor; /* Ofs: 0x480 Size: 0x4 - FloatProperty Buff_SpeedUp2.Buff_SpeedUp2_C.AddSpeedUpFactor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetAddSpeedUpFactor(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_SpeedUp2_C = sizeof(UBuff_SpeedUp2_C); // 1156
    static_assert(sizeof(UBuff_SpeedUp2_C) == 0x484, "Size of UBuff_SpeedUp2_C is not correct.");
	auto constexpr UBuff_SpeedUp2_C_UberGraphFrame_Offset = offsetof(UBuff_SpeedUp2_C, UberGraphFrame);
	static_assert(UBuff_SpeedUp2_C_UberGraphFrame_Offset == 0x470, "UBuff_SpeedUp2_C::UberGraphFrame offset is not 470");
	auto constexpr UBuff_SpeedUp2_C_DefaultSceneRoot_Offset = offsetof(UBuff_SpeedUp2_C, DefaultSceneRoot);
	static_assert(UBuff_SpeedUp2_C_DefaultSceneRoot_Offset == 0x478, "UBuff_SpeedUp2_C::DefaultSceneRoot offset is not 478");
	auto constexpr UBuff_SpeedUp2_C_AddSpeedUpFactor_Offset = offsetof(UBuff_SpeedUp2_C, AddSpeedUpFactor);
	static_assert(UBuff_SpeedUp2_C_AddSpeedUpFactor_Offset == 0x480, "UBuff_SpeedUp2_C::AddSpeedUpFactor offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
