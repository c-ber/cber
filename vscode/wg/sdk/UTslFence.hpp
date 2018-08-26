#pragma once
#include "UActor.hpp"
#include "ETslFenceSelector.hpp"
#include "FRandomStream.hpp"
#include "FCollisionProfileName.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslFence // Size: 0x4B0
	: public UActor // Size: 0x410
{
private:
	typedef UTslFence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1376); // id32("Class TslGame.TslFence")
		return ptr;
	}
//	ExternalPtr<struct USplineComponent> SplineComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslFence.SplineComponent */
	TEnumAsByte<enum ETslFenceSelector> BeginSelector; /* Ofs: 0x410 Size: 0x1 - EnumProperty TslGame.TslFence.BeginSelector */
	uint8_t UnknownData411[0x7];
	ExternalPtr<struct UStaticMesh> BeginMesh1; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.TslFence.BeginMesh1 */
	ExternalPtr<struct UStaticMesh> BeginMesh2; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslFence.BeginMesh2 */
	ExternalPtr<struct UStaticMesh> BeginMesh3; /* Ofs: 0x428 Size: 0x8 - ObjectProperty TslGame.TslFence.BeginMesh3 */
	ExternalPtr<struct UStaticMesh> BeginMesh4; /* Ofs: 0x430 Size: 0x8 - ObjectProperty TslGame.TslFence.BeginMesh4 */
	TEnumAsByte<enum ETslFenceSelector> EndSelector; /* Ofs: 0x438 Size: 0x1 - EnumProperty TslGame.TslFence.EndSelector */
	uint8_t UnknownData439[0x7];
	ExternalPtr<struct UStaticMesh> EndMesh1; /* Ofs: 0x440 Size: 0x8 - ObjectProperty TslGame.TslFence.EndMesh1 */
	ExternalPtr<struct UStaticMesh> EndMesh2; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.TslFence.EndMesh2 */
	ExternalPtr<struct UStaticMesh> EndMesh3; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.TslFence.EndMesh3 */
	ExternalPtr<struct UStaticMesh> EndMesh4; /* Ofs: 0x458 Size: 0x8 - ObjectProperty TslGame.TslFence.EndMesh4 */
	uint8_t boolField460;
	uint8_t boolField461;
	uint8_t UnknownData462[0x2];
	float UnitLengthForMiddle; /* Ofs: 0x464 Size: 0x4 - FloatProperty TslGame.TslFence.UnitLengthForMiddle */
	float UnitSpacingForMiddle; /* Ofs: 0x468 Size: 0x4 - FloatProperty TslGame.TslFence.UnitSpacingForMiddle */
	float PivotOffsetForMiddle; /* Ofs: 0x46C Size: 0x4 - FloatProperty TslGame.TslFence.PivotOffsetForMiddle */
	FRandomStream RandomStreamForMiddle; /* Ofs: 0x470 Size: 0x8 - StructProperty TslGame.TslFence.RandomStreamForMiddle */
	ExternalPtr<struct UStaticMesh> MiddleMesh1; /* Ofs: 0x478 Size: 0x8 - ObjectProperty TslGame.TslFence.MiddleMesh1 */
	ExternalPtr<struct UStaticMesh> MiddleMesh2; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.TslFence.MiddleMesh2 */
	ExternalPtr<struct UStaticMesh> MiddleMesh3; /* Ofs: 0x488 Size: 0x8 - ObjectProperty TslGame.TslFence.MiddleMesh3 */
	ExternalPtr<struct UStaticMesh> MiddleMesh4; /* Ofs: 0x490 Size: 0x8 - ObjectProperty TslGame.TslFence.MiddleMesh4 */
	FCollisionProfileName FenceCollisionProfile; /* Ofs: 0x498 Size: 0x8 - StructProperty TslGame.TslFence.FenceCollisionProfile */
	uint8_t UnknownData4A0[0x10];


//	inline bool SetSplineComponent(t_structHelper inst, ExternalPtr<struct USplineComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetBeginSelector(t_structHelper inst, TEnumAsByte<enum ETslFenceSelector> value) { inst.WriteOffset(0x410, value); }
	inline bool SetBeginMesh1(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x418, value); }
	inline bool SetBeginMesh2(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x420, value); }
	inline bool SetBeginMesh3(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x428, value); }
	inline bool SetBeginMesh4(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x430, value); }
	inline bool SetEndSelector(t_structHelper inst, TEnumAsByte<enum ETslFenceSelector> value) { inst.WriteOffset(0x438, value); }
	inline bool SetEndMesh1(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x440, value); }
	inline bool SetEndMesh2(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x448, value); }
	inline bool SetEndMesh3(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x450, value); }
	inline bool SetEndMesh4(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x458, value); }
	inline bool bUseRandomForMiddle()
	{
		return boolField460& 0x1;
	}
	inline bool SetbUseRandomForMiddle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseMiddleSegmentsInOrder()
	{
		return boolField461& 0x1;
	}
	inline bool SetbUseMiddleSegmentsInOrder(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x461, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetUnitLengthForMiddle(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetUnitSpacingForMiddle(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetPivotOffsetForMiddle(t_structHelper inst, float value) { inst.WriteOffset(0x46C, value); }
	inline bool SetRandomStreamForMiddle(t_structHelper inst, FRandomStream value) { inst.WriteOffset(0x470, value); }
	inline bool SetMiddleMesh1(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x478, value); }
	inline bool SetMiddleMesh2(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x480, value); }
	inline bool SetMiddleMesh3(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x488, value); }
	inline bool SetMiddleMesh4(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x490, value); }
	inline bool SetFenceCollisionProfile(t_structHelper inst, FCollisionProfileName value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslFence = sizeof(UTslFence); // 1200
    static_assert(sizeof(UTslFence) == 0x4B0, "Size of UTslFence is not correct.");
//	auto constexpr UTslFence_SplineComponent_Offset = offsetof(UTslFence, SplineComponent);
//	static_assert(UTslFence_SplineComponent_Offset == 0x408, "UTslFence::SplineComponent offset is not 408");
	auto constexpr UTslFence_BeginSelector_Offset = offsetof(UTslFence, BeginSelector);
	static_assert(UTslFence_BeginSelector_Offset == 0x410, "UTslFence::BeginSelector offset is not 410");
	auto constexpr UTslFence_BeginMesh1_Offset = offsetof(UTslFence, BeginMesh1);
	static_assert(UTslFence_BeginMesh1_Offset == 0x418, "UTslFence::BeginMesh1 offset is not 418");
	auto constexpr UTslFence_BeginMesh2_Offset = offsetof(UTslFence, BeginMesh2);
	static_assert(UTslFence_BeginMesh2_Offset == 0x420, "UTslFence::BeginMesh2 offset is not 420");
	auto constexpr UTslFence_BeginMesh3_Offset = offsetof(UTslFence, BeginMesh3);
	static_assert(UTslFence_BeginMesh3_Offset == 0x428, "UTslFence::BeginMesh3 offset is not 428");
	auto constexpr UTslFence_BeginMesh4_Offset = offsetof(UTslFence, BeginMesh4);
	static_assert(UTslFence_BeginMesh4_Offset == 0x430, "UTslFence::BeginMesh4 offset is not 430");
	auto constexpr UTslFence_EndSelector_Offset = offsetof(UTslFence, EndSelector);
	static_assert(UTslFence_EndSelector_Offset == 0x438, "UTslFence::EndSelector offset is not 438");
	auto constexpr UTslFence_EndMesh1_Offset = offsetof(UTslFence, EndMesh1);
	static_assert(UTslFence_EndMesh1_Offset == 0x440, "UTslFence::EndMesh1 offset is not 440");
	auto constexpr UTslFence_EndMesh2_Offset = offsetof(UTslFence, EndMesh2);
	static_assert(UTslFence_EndMesh2_Offset == 0x448, "UTslFence::EndMesh2 offset is not 448");
	auto constexpr UTslFence_EndMesh3_Offset = offsetof(UTslFence, EndMesh3);
	static_assert(UTslFence_EndMesh3_Offset == 0x450, "UTslFence::EndMesh3 offset is not 450");
	auto constexpr UTslFence_EndMesh4_Offset = offsetof(UTslFence, EndMesh4);
	static_assert(UTslFence_EndMesh4_Offset == 0x458, "UTslFence::EndMesh4 offset is not 458");
	auto constexpr UTslFence_boolField460_Offset = offsetof(UTslFence, boolField460);
	static_assert(UTslFence_boolField460_Offset == 0x460, "UTslFence::boolField460 offset is not 460");
	auto constexpr UTslFence_boolField461_Offset = offsetof(UTslFence, boolField461);
	static_assert(UTslFence_boolField461_Offset == 0x461, "UTslFence::boolField461 offset is not 461");
	auto constexpr UTslFence_UnitLengthForMiddle_Offset = offsetof(UTslFence, UnitLengthForMiddle);
	static_assert(UTslFence_UnitLengthForMiddle_Offset == 0x464, "UTslFence::UnitLengthForMiddle offset is not 464");
	auto constexpr UTslFence_UnitSpacingForMiddle_Offset = offsetof(UTslFence, UnitSpacingForMiddle);
	static_assert(UTslFence_UnitSpacingForMiddle_Offset == 0x468, "UTslFence::UnitSpacingForMiddle offset is not 468");
	auto constexpr UTslFence_PivotOffsetForMiddle_Offset = offsetof(UTslFence, PivotOffsetForMiddle);
	static_assert(UTslFence_PivotOffsetForMiddle_Offset == 0x46c, "UTslFence::PivotOffsetForMiddle offset is not 46c");
	auto constexpr UTslFence_RandomStreamForMiddle_Offset = offsetof(UTslFence, RandomStreamForMiddle);
	static_assert(UTslFence_RandomStreamForMiddle_Offset == 0x470, "UTslFence::RandomStreamForMiddle offset is not 470");
	auto constexpr UTslFence_MiddleMesh1_Offset = offsetof(UTslFence, MiddleMesh1);
	static_assert(UTslFence_MiddleMesh1_Offset == 0x478, "UTslFence::MiddleMesh1 offset is not 478");
	auto constexpr UTslFence_MiddleMesh2_Offset = offsetof(UTslFence, MiddleMesh2);
	static_assert(UTslFence_MiddleMesh2_Offset == 0x480, "UTslFence::MiddleMesh2 offset is not 480");
	auto constexpr UTslFence_MiddleMesh3_Offset = offsetof(UTslFence, MiddleMesh3);
	static_assert(UTslFence_MiddleMesh3_Offset == 0x488, "UTslFence::MiddleMesh3 offset is not 488");
	auto constexpr UTslFence_MiddleMesh4_Offset = offsetof(UTslFence, MiddleMesh4);
	static_assert(UTslFence_MiddleMesh4_Offset == 0x490, "UTslFence::MiddleMesh4 offset is not 490");
	auto constexpr UTslFence_FenceCollisionProfile_Offset = offsetof(UTslFence, FenceCollisionProfile);
	static_assert(UTslFence_FenceCollisionProfile_Offset == 0x498, "UTslFence::FenceCollisionProfile offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
