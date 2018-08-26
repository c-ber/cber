#pragma once
#include "ECameraAnimPlaySpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraAnimInst // Size: 0x120
	: public UObject // Size: 0x30
{
private:
	typedef UCameraAnimInst t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(687); // id32("Class Engine.CameraAnimInst")
		return ptr;
	}
	ExternalPtr<struct UCameraAnim> CamAnim; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.CameraAnimInst.CamAnim */
	ExternalPtr<struct UInterpGroupInst> InterpGroupInst; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.CameraAnimInst.InterpGroupInst */
	uint8_t UnknownData40[0x18];
	float PlayRate; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.CameraAnimInst.PlayRate */
	uint8_t UnknownData5C[0x14];
	ExternalPtr<struct UInterpTrackMove> MoveTrack; /* Ofs: 0x70 Size: 0x8 - ObjectProperty Engine.CameraAnimInst.MoveTrack */
	ExternalPtr<struct UInterpTrackInstMove> MoveInst; /* Ofs: 0x78 Size: 0x8 - ObjectProperty Engine.CameraAnimInst.MoveInst */
	TEnumAsByte<enum ECameraAnimPlaySpace> PlaySpace; /* Ofs: 0x80 Size: 0x1 - ByteProperty Engine.CameraAnimInst.PlaySpace */
	uint8_t UnknownData81[0x9F];


	inline bool SetCamAnim(t_structHelper inst, ExternalPtr<struct UCameraAnim> value) { inst.WriteOffset(0x30, value); }
	inline bool SetInterpGroupInst(t_structHelper inst, ExternalPtr<struct UInterpGroupInst> value) { inst.WriteOffset(0x38, value); }
	inline bool SetPlayRate(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetMoveTrack(t_structHelper inst, ExternalPtr<struct UInterpTrackMove> value) { inst.WriteOffset(0x70, value); }
	inline bool SetMoveInst(t_structHelper inst, ExternalPtr<struct UInterpTrackInstMove> value) { inst.WriteOffset(0x78, value); }
	inline bool SetPlaySpace(t_structHelper inst, TEnumAsByte<enum ECameraAnimPlaySpace> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraAnimInst = sizeof(UCameraAnimInst); // 288
    static_assert(sizeof(UCameraAnimInst) == 0x120, "Size of UCameraAnimInst is not correct.");
	auto constexpr UCameraAnimInst_CamAnim_Offset = offsetof(UCameraAnimInst, CamAnim);
	static_assert(UCameraAnimInst_CamAnim_Offset == 0x30, "UCameraAnimInst::CamAnim offset is not 30");
	auto constexpr UCameraAnimInst_InterpGroupInst_Offset = offsetof(UCameraAnimInst, InterpGroupInst);
	static_assert(UCameraAnimInst_InterpGroupInst_Offset == 0x38, "UCameraAnimInst::InterpGroupInst offset is not 38");
	auto constexpr UCameraAnimInst_PlayRate_Offset = offsetof(UCameraAnimInst, PlayRate);
	static_assert(UCameraAnimInst_PlayRate_Offset == 0x58, "UCameraAnimInst::PlayRate offset is not 58");
	auto constexpr UCameraAnimInst_MoveTrack_Offset = offsetof(UCameraAnimInst, MoveTrack);
	static_assert(UCameraAnimInst_MoveTrack_Offset == 0x70, "UCameraAnimInst::MoveTrack offset is not 70");
	auto constexpr UCameraAnimInst_MoveInst_Offset = offsetof(UCameraAnimInst, MoveInst);
	static_assert(UCameraAnimInst_MoveInst_Offset == 0x78, "UCameraAnimInst::MoveInst offset is not 78");
	auto constexpr UCameraAnimInst_PlaySpace_Offset = offsetof(UCameraAnimInst, PlaySpace);
	static_assert(UCameraAnimInst_PlaySpace_Offset == 0x80, "UCameraAnimInst::PlaySpace offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
