#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraModifier // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UCameraModifier t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(688); // id32("Class Engine.CameraModifier")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x3];
	uint8_t Priority; /* Ofs: 0x34 Size: 0x1 - ByteProperty Engine.CameraModifier.Priority */
	uint8_t UnknownData35[0x3];
	ExternalPtr<struct UPlayerCameraManager> CameraOwner; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.CameraModifier.CameraOwner */
	float AlphaInTime; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.CameraModifier.AlphaInTime */
	float AlphaOutTime; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.CameraModifier.AlphaOutTime */
	float Alpha; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.CameraModifier.Alpha */
	uint8_t UnknownData4C[0x4];


	inline bool bDebug()
	{
		return boolField30& 0x1;
	}
	inline bool SetbDebug(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bExclusive()
	{
		return boolField30& 0x2;
	}
	inline bool SetbExclusive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetPriority(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x34, value); }
	inline bool SetCameraOwner(t_structHelper inst, ExternalPtr<struct UPlayerCameraManager> value) { inst.WriteOffset(0x38, value); }
	inline bool SetAlphaInTime(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetAlphaOutTime(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraModifier = sizeof(UCameraModifier); // 80
    static_assert(sizeof(UCameraModifier) == 0x50, "Size of UCameraModifier is not correct.");
	auto constexpr UCameraModifier_boolField30_Offset = offsetof(UCameraModifier, boolField30);
	static_assert(UCameraModifier_boolField30_Offset == 0x30, "UCameraModifier::boolField30 offset is not 30");
	auto constexpr UCameraModifier_Priority_Offset = offsetof(UCameraModifier, Priority);
	static_assert(UCameraModifier_Priority_Offset == 0x34, "UCameraModifier::Priority offset is not 34");
	auto constexpr UCameraModifier_CameraOwner_Offset = offsetof(UCameraModifier, CameraOwner);
	static_assert(UCameraModifier_CameraOwner_Offset == 0x38, "UCameraModifier::CameraOwner offset is not 38");
	auto constexpr UCameraModifier_AlphaInTime_Offset = offsetof(UCameraModifier, AlphaInTime);
	static_assert(UCameraModifier_AlphaInTime_Offset == 0x40, "UCameraModifier::AlphaInTime offset is not 40");
	auto constexpr UCameraModifier_AlphaOutTime_Offset = offsetof(UCameraModifier, AlphaOutTime);
	static_assert(UCameraModifier_AlphaOutTime_Offset == 0x44, "UCameraModifier::AlphaOutTime offset is not 44");
	auto constexpr UCameraModifier_Alpha_Offset = offsetof(UCameraModifier, Alpha);
	static_assert(UCameraModifier_Alpha_Offset == 0x48, "UCameraModifier::Alpha offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
