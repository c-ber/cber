#pragma once
#include "UCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UArchVisCharacter // Size: 0x8E0
	: public UCharacter // Size: 0x870
{
private:
	typedef UArchVisCharacter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2160); // id32("Class ArchVisCharacter.ArchVisCharacter")
		return ptr;
	}
	FString LookUpAxisName; /* Ofs: 0x870 Size: 0x10 - StrProperty ArchVisCharacter.ArchVisCharacter.LookUpAxisName */
	FString LookUpAtRateAxisName; /* Ofs: 0x880 Size: 0x10 - StrProperty ArchVisCharacter.ArchVisCharacter.LookUpAtRateAxisName */
	FString TurnAxisName; /* Ofs: 0x890 Size: 0x10 - StrProperty ArchVisCharacter.ArchVisCharacter.TurnAxisName */
	FString TurnAtRateAxisName; /* Ofs: 0x8A0 Size: 0x10 - StrProperty ArchVisCharacter.ArchVisCharacter.TurnAtRateAxisName */
	FString MoveForwardAxisName; /* Ofs: 0x8B0 Size: 0x10 - StrProperty ArchVisCharacter.ArchVisCharacter.MoveForwardAxisName */
	FString MoveRightAxisName; /* Ofs: 0x8C0 Size: 0x10 - StrProperty ArchVisCharacter.ArchVisCharacter.MoveRightAxisName */
	float MouseSensitivityScale_Pitch; /* Ofs: 0x8D0 Size: 0x4 - FloatProperty ArchVisCharacter.ArchVisCharacter.MouseSensitivityScale_Pitch */
	float MouseSensitivityScale_Yaw; /* Ofs: 0x8D4 Size: 0x4 - FloatProperty ArchVisCharacter.ArchVisCharacter.MouseSensitivityScale_Yaw */
	uint8_t UnknownData8D8[0x8];


	inline bool SetLookUpAxisName(t_structHelper inst, FString value) { inst.WriteOffset(0x870, value); }
	inline bool SetLookUpAtRateAxisName(t_structHelper inst, FString value) { inst.WriteOffset(0x880, value); }
	inline bool SetTurnAxisName(t_structHelper inst, FString value) { inst.WriteOffset(0x890, value); }
	inline bool SetTurnAtRateAxisName(t_structHelper inst, FString value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetMoveForwardAxisName(t_structHelper inst, FString value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetMoveRightAxisName(t_structHelper inst, FString value) { inst.WriteOffset(0x8C0, value); }
	inline bool SetMouseSensitivityScale_Pitch(t_structHelper inst, float value) { inst.WriteOffset(0x8D0, value); }
	inline bool SetMouseSensitivityScale_Yaw(t_structHelper inst, float value) { inst.WriteOffset(0x8D4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUArchVisCharacter = sizeof(UArchVisCharacter); // 2272
    static_assert(sizeof(UArchVisCharacter) == 0x8E0, "Size of UArchVisCharacter is not correct.");
	auto constexpr UArchVisCharacter_LookUpAxisName_Offset = offsetof(UArchVisCharacter, LookUpAxisName);
	static_assert(UArchVisCharacter_LookUpAxisName_Offset == 0x870, "UArchVisCharacter::LookUpAxisName offset is not 870");
	auto constexpr UArchVisCharacter_LookUpAtRateAxisName_Offset = offsetof(UArchVisCharacter, LookUpAtRateAxisName);
	static_assert(UArchVisCharacter_LookUpAtRateAxisName_Offset == 0x880, "UArchVisCharacter::LookUpAtRateAxisName offset is not 880");
	auto constexpr UArchVisCharacter_TurnAxisName_Offset = offsetof(UArchVisCharacter, TurnAxisName);
	static_assert(UArchVisCharacter_TurnAxisName_Offset == 0x890, "UArchVisCharacter::TurnAxisName offset is not 890");
	auto constexpr UArchVisCharacter_TurnAtRateAxisName_Offset = offsetof(UArchVisCharacter, TurnAtRateAxisName);
	static_assert(UArchVisCharacter_TurnAtRateAxisName_Offset == 0x8a0, "UArchVisCharacter::TurnAtRateAxisName offset is not 8a0");
	auto constexpr UArchVisCharacter_MoveForwardAxisName_Offset = offsetof(UArchVisCharacter, MoveForwardAxisName);
	static_assert(UArchVisCharacter_MoveForwardAxisName_Offset == 0x8b0, "UArchVisCharacter::MoveForwardAxisName offset is not 8b0");
	auto constexpr UArchVisCharacter_MoveRightAxisName_Offset = offsetof(UArchVisCharacter, MoveRightAxisName);
	static_assert(UArchVisCharacter_MoveRightAxisName_Offset == 0x8c0, "UArchVisCharacter::MoveRightAxisName offset is not 8c0");
	auto constexpr UArchVisCharacter_MouseSensitivityScale_Pitch_Offset = offsetof(UArchVisCharacter, MouseSensitivityScale_Pitch);
	static_assert(UArchVisCharacter_MouseSensitivityScale_Pitch_Offset == 0x8d0, "UArchVisCharacter::MouseSensitivityScale_Pitch offset is not 8d0");
	auto constexpr UArchVisCharacter_MouseSensitivityScale_Yaw_Offset = offsetof(UArchVisCharacter, MouseSensitivityScale_Yaw);
	static_assert(UArchVisCharacter_MouseSensitivityScale_Yaw_Offset == 0x8d4, "UArchVisCharacter::MouseSensitivityScale_Yaw offset is not 8d4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
