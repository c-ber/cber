#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDoorDataAsset // Size: 0x70
	: public UDataAsset // Size: 0x38
{
private:
	typedef UDoorDataAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1848); // id32("Class TslGame.DoorDataAsset")
		return ptr;
	}
	float OpenAngle; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.DoorDataAsset.OpenAngle */
	uint8_t UnknownData3C[0x4];
	ExternalPtr<struct UCurveFloat> OpenCurve; /* Ofs: 0x40 Size: 0x8 - ObjectProperty TslGame.DoorDataAsset.OpenCurve */
	float OpenCurveDuration; /* Ofs: 0x48 Size: 0x4 - FloatProperty TslGame.DoorDataAsset.OpenCurveDuration */
	uint8_t UnknownData4C[0x4];
	ExternalPtr<struct UCurveFloat> CloseCurve; /* Ofs: 0x50 Size: 0x8 - ObjectProperty TslGame.DoorDataAsset.CloseCurve */
	float CloseCurveDuration; /* Ofs: 0x58 Size: 0x4 - FloatProperty TslGame.DoorDataAsset.CloseCurveDuration */
	uint8_t UnknownData5C[0x4];
	ExternalPtr<struct UAkAudioEvent> OpenSound; /* Ofs: 0x60 Size: 0x8 - ObjectProperty TslGame.DoorDataAsset.OpenSound */
	ExternalPtr<struct UAkAudioEvent> CloseSound; /* Ofs: 0x68 Size: 0x8 - ObjectProperty TslGame.DoorDataAsset.CloseSound */


	inline bool SetOpenAngle(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetOpenCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x40, value); }
	inline bool SetOpenCurveDuration(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetCloseCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x50, value); }
	inline bool SetCloseCurveDuration(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetOpenSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x60, value); }
	inline bool SetCloseSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDoorDataAsset = sizeof(UDoorDataAsset); // 112
    static_assert(sizeof(UDoorDataAsset) == 0x70, "Size of UDoorDataAsset is not correct.");
	auto constexpr UDoorDataAsset_OpenAngle_Offset = offsetof(UDoorDataAsset, OpenAngle);
	static_assert(UDoorDataAsset_OpenAngle_Offset == 0x38, "UDoorDataAsset::OpenAngle offset is not 38");
	auto constexpr UDoorDataAsset_OpenCurve_Offset = offsetof(UDoorDataAsset, OpenCurve);
	static_assert(UDoorDataAsset_OpenCurve_Offset == 0x40, "UDoorDataAsset::OpenCurve offset is not 40");
	auto constexpr UDoorDataAsset_OpenCurveDuration_Offset = offsetof(UDoorDataAsset, OpenCurveDuration);
	static_assert(UDoorDataAsset_OpenCurveDuration_Offset == 0x48, "UDoorDataAsset::OpenCurveDuration offset is not 48");
	auto constexpr UDoorDataAsset_CloseCurve_Offset = offsetof(UDoorDataAsset, CloseCurve);
	static_assert(UDoorDataAsset_CloseCurve_Offset == 0x50, "UDoorDataAsset::CloseCurve offset is not 50");
	auto constexpr UDoorDataAsset_CloseCurveDuration_Offset = offsetof(UDoorDataAsset, CloseCurveDuration);
	static_assert(UDoorDataAsset_CloseCurveDuration_Offset == 0x58, "UDoorDataAsset::CloseCurveDuration offset is not 58");
	auto constexpr UDoorDataAsset_OpenSound_Offset = offsetof(UDoorDataAsset, OpenSound);
	static_assert(UDoorDataAsset_OpenSound_Offset == 0x60, "UDoorDataAsset::OpenSound offset is not 60");
	auto constexpr UDoorDataAsset_CloseSound_Offset = offsetof(UDoorDataAsset, CloseSound);
	static_assert(UDoorDataAsset_CloseSound_Offset == 0x68, "UDoorDataAsset::CloseSound offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
