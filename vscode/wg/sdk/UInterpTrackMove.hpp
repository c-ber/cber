#pragma once
#include "UInterpTrack.hpp"
#include "FInterpCurveVector.hpp"
#include "FInterpLookupTrack.hpp"
#include "EInterpTrackMoveRotMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackMove // Size: 0xD0
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackMove t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(807); // id32("Class Engine.InterpTrackMove")
		return ptr;
	}
	FInterpCurveVector PosTrack; /* Ofs: 0x78 Size: 0x18 - StructProperty Engine.InterpTrackMove.PosTrack */
	FInterpCurveVector EulerTrack; /* Ofs: 0x90 Size: 0x18 - StructProperty Engine.InterpTrackMove.EulerTrack */
	FInterpLookupTrack LookupTrack; /* Ofs: 0xA8 Size: 0x10 - StructProperty Engine.InterpTrackMove.LookupTrack */
	FName LookAtGroupName; /* Ofs: 0xB8 Size: 0x8 - NameProperty Engine.InterpTrackMove.LookAtGroupName */
	float LinCurveTension; /* Ofs: 0xC0 Size: 0x4 - FloatProperty Engine.InterpTrackMove.LinCurveTension */
	float AngCurveTension; /* Ofs: 0xC4 Size: 0x4 - FloatProperty Engine.InterpTrackMove.AngCurveTension */
	uint8_t boolFieldC8;
	uint8_t UnknownDataC9[0x3];
	TEnumAsByte<enum EInterpTrackMoveRotMode> RotMode; /* Ofs: 0xCC Size: 0x1 - ByteProperty Engine.InterpTrackMove.RotMode */
	uint8_t UnknownDataCD[0x3];


	inline bool SetPosTrack(t_structHelper inst, FInterpCurveVector value) { inst.WriteOffset(0x78, value); }
	inline bool SetEulerTrack(t_structHelper inst, FInterpCurveVector value) { inst.WriteOffset(0x90, value); }
	inline bool SetLookupTrack(t_structHelper inst, FInterpLookupTrack value) { inst.WriteOffset(0xA8, value); }
	inline bool SetLookAtGroupName(t_structHelper inst, FName value) { inst.WriteOffset(0xB8, value); }
	inline bool SetLinCurveTension(t_structHelper inst, float value) { inst.WriteOffset(0xC0, value); }
	inline bool SetAngCurveTension(t_structHelper inst, float value) { inst.WriteOffset(0xC4, value); }
	inline bool bUseQuatInterpolation()
	{
		return boolFieldC8& 0x1;
	}
	inline bool SetbUseQuatInterpolation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowArrowAtKeys()
	{
		return boolFieldC8& 0x2;
	}
	inline bool SetbShowArrowAtKeys(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDisableMovement()
	{
		return boolFieldC8& 0x4;
	}
	inline bool SetbDisableMovement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bShowTranslationOnCurveEd()
	{
		return boolFieldC8& 0x8;
	}
	inline bool SetbShowTranslationOnCurveEd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bShowRotationOnCurveEd()
	{
		return boolFieldC8& 0x10;
	}
	inline bool SetbShowRotationOnCurveEd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bHide3DTrack()
	{
		return boolFieldC8& 0x20;
	}
	inline bool SetbHide3DTrack(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetRotMode(t_structHelper inst, TEnumAsByte<enum EInterpTrackMoveRotMode> value) { inst.WriteOffset(0xCC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackMove = sizeof(UInterpTrackMove); // 208
    static_assert(sizeof(UInterpTrackMove) == 0xD0, "Size of UInterpTrackMove is not correct.");
	auto constexpr UInterpTrackMove_PosTrack_Offset = offsetof(UInterpTrackMove, PosTrack);
	static_assert(UInterpTrackMove_PosTrack_Offset == 0x78, "UInterpTrackMove::PosTrack offset is not 78");
	auto constexpr UInterpTrackMove_EulerTrack_Offset = offsetof(UInterpTrackMove, EulerTrack);
	static_assert(UInterpTrackMove_EulerTrack_Offset == 0x90, "UInterpTrackMove::EulerTrack offset is not 90");
	auto constexpr UInterpTrackMove_LookupTrack_Offset = offsetof(UInterpTrackMove, LookupTrack);
	static_assert(UInterpTrackMove_LookupTrack_Offset == 0xa8, "UInterpTrackMove::LookupTrack offset is not a8");
	auto constexpr UInterpTrackMove_LookAtGroupName_Offset = offsetof(UInterpTrackMove, LookAtGroupName);
	static_assert(UInterpTrackMove_LookAtGroupName_Offset == 0xb8, "UInterpTrackMove::LookAtGroupName offset is not b8");
	auto constexpr UInterpTrackMove_LinCurveTension_Offset = offsetof(UInterpTrackMove, LinCurveTension);
	static_assert(UInterpTrackMove_LinCurveTension_Offset == 0xc0, "UInterpTrackMove::LinCurveTension offset is not c0");
	auto constexpr UInterpTrackMove_AngCurveTension_Offset = offsetof(UInterpTrackMove, AngCurveTension);
	static_assert(UInterpTrackMove_AngCurveTension_Offset == 0xc4, "UInterpTrackMove::AngCurveTension offset is not c4");
	auto constexpr UInterpTrackMove_boolFieldC8_Offset = offsetof(UInterpTrackMove, boolFieldC8);
	static_assert(UInterpTrackMove_boolFieldC8_Offset == 0xc8, "UInterpTrackMove::boolFieldC8 offset is not c8");
	auto constexpr UInterpTrackMove_RotMode_Offset = offsetof(UInterpTrackMove, RotMode);
	static_assert(UInterpTrackMove_RotMode_Offset == 0xcc, "UInterpTrackMove::RotMode offset is not cc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
