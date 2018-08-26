#pragma once
#include "UActor.hpp"
#include "EBuffOverlapSolveMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBuff // Size: 0x470
	: public UActor // Size: 0x410
{
private:
	typedef UTslBuff t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1334); // id32("Class TslGame.TslBuff")
		return ptr;
	}
//	FName OverlapId; /* Ofs: 0x408 Size: 0x8 - NameProperty TslGame.TslBuff.OverlapId */
	TEnumAsByte<enum EBuffOverlapSolveMethod> OverlapSolveMethod; /* Ofs: 0x410 Size: 0x1 - EnumProperty TslGame.TslBuff.OverlapSolveMethod */
	uint8_t UnknownData411[0x3];
	float BuffTickInterval; /* Ofs: 0x414 Size: 0x4 - FloatProperty TslGame.TslBuff.BuffTickInterval */
	float BuffTickFirstDelay; /* Ofs: 0x418 Size: 0x4 - FloatProperty TslGame.TslBuff.BuffTickFirstDelay */
	float BuffDuration; /* Ofs: 0x41C Size: 0x4 - FloatProperty TslGame.TslBuff.BuffDuration */
	uint8_t boolField420;
	uint8_t UnknownData421[0x7];
	FName AttachSocket; /* Ofs: 0x428 Size: 0x8 - NameProperty TslGame.TslBuff.AttachSocket */
	ExternalPtr<struct UClass> AttachServerPaticleClass; /* Ofs: 0x430 Size: 0x8 - ClassProperty TslGame.TslBuff.AttachServerPaticleClass */
	uint8_t boolField438;
	uint8_t UnknownData439[0x7];
	ExternalPtr<struct UBuffComponet> OwnerBuffComponent; /* Ofs: 0x440 Size: 0x8 - ObjectProperty TslGame.TslBuff.OwnerBuffComponent */
	uint8_t UnknownData448[0x10];
	ExternalPtr<struct UTslServerParticle> AttachedServerPaticle; /* Ofs: 0x458 Size: 0x8 - ObjectProperty TslGame.TslBuff.AttachedServerPaticle */
	uint8_t UnknownData460[0x4];
	uint8_t boolField464;
	uint8_t boolField465;
	uint8_t UnknownData466[0xA];


//	inline bool SetOverlapId(t_structHelper inst, FName value) { inst.WriteOffset(0x408, value); }
	inline bool SetOverlapSolveMethod(t_structHelper inst, TEnumAsByte<enum EBuffOverlapSolveMethod> value) { inst.WriteOffset(0x410, value); }
	inline bool SetBuffTickInterval(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetBuffTickFirstDelay(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetBuffDuration(t_structHelper inst, float value) { inst.WriteOffset(0x41C, value); }
	inline bool Infinite()
	{
		return boolField420& 0x1;
	}
	inline bool SetInfinite(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x420, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAttachSocket(t_structHelper inst, FName value) { inst.WriteOffset(0x428, value); }
	inline bool SetAttachServerPaticleClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x430, value); }
	inline bool IsDebuff()
	{
		return boolField438& 0x1;
	}
	inline bool SetIsDebuff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x438, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOwnerBuffComponent(t_structHelper inst, ExternalPtr<struct UBuffComponet> value) { inst.WriteOffset(0x440, value); }
	inline bool SetAttachedServerPaticle(t_structHelper inst, ExternalPtr<struct UTslServerParticle> value) { inst.WriteOffset(0x458, value); }
	inline bool bClientNotifyStartBuff()
	{
		return boolField464& 0x1;
	}
	inline bool SetbClientNotifyStartBuff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x464, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bClientNotifyStopBuff()
	{
		return boolField465& 0x1;
	}
	inline bool SetbClientNotifyStopBuff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x465, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBuff = sizeof(UTslBuff); // 1136
    static_assert(sizeof(UTslBuff) == 0x470, "Size of UTslBuff is not correct.");
//	auto constexpr UTslBuff_OverlapId_Offset = offsetof(UTslBuff, OverlapId);
//	static_assert(UTslBuff_OverlapId_Offset == 0x408, "UTslBuff::OverlapId offset is not 408");
	auto constexpr UTslBuff_OverlapSolveMethod_Offset = offsetof(UTslBuff, OverlapSolveMethod);
	static_assert(UTslBuff_OverlapSolveMethod_Offset == 0x410, "UTslBuff::OverlapSolveMethod offset is not 410");
	auto constexpr UTslBuff_BuffTickInterval_Offset = offsetof(UTslBuff, BuffTickInterval);
	static_assert(UTslBuff_BuffTickInterval_Offset == 0x414, "UTslBuff::BuffTickInterval offset is not 414");
	auto constexpr UTslBuff_BuffTickFirstDelay_Offset = offsetof(UTslBuff, BuffTickFirstDelay);
	static_assert(UTslBuff_BuffTickFirstDelay_Offset == 0x418, "UTslBuff::BuffTickFirstDelay offset is not 418");
	auto constexpr UTslBuff_BuffDuration_Offset = offsetof(UTslBuff, BuffDuration);
	static_assert(UTslBuff_BuffDuration_Offset == 0x41c, "UTslBuff::BuffDuration offset is not 41c");
	auto constexpr UTslBuff_boolField420_Offset = offsetof(UTslBuff, boolField420);
	static_assert(UTslBuff_boolField420_Offset == 0x420, "UTslBuff::boolField420 offset is not 420");
	auto constexpr UTslBuff_AttachSocket_Offset = offsetof(UTslBuff, AttachSocket);
	static_assert(UTslBuff_AttachSocket_Offset == 0x428, "UTslBuff::AttachSocket offset is not 428");
	auto constexpr UTslBuff_AttachServerPaticleClass_Offset = offsetof(UTslBuff, AttachServerPaticleClass);
	static_assert(UTslBuff_AttachServerPaticleClass_Offset == 0x430, "UTslBuff::AttachServerPaticleClass offset is not 430");
	auto constexpr UTslBuff_boolField438_Offset = offsetof(UTslBuff, boolField438);
	static_assert(UTslBuff_boolField438_Offset == 0x438, "UTslBuff::boolField438 offset is not 438");
	auto constexpr UTslBuff_OwnerBuffComponent_Offset = offsetof(UTslBuff, OwnerBuffComponent);
	static_assert(UTslBuff_OwnerBuffComponent_Offset == 0x440, "UTslBuff::OwnerBuffComponent offset is not 440");
	auto constexpr UTslBuff_AttachedServerPaticle_Offset = offsetof(UTslBuff, AttachedServerPaticle);
	static_assert(UTslBuff_AttachedServerPaticle_Offset == 0x458, "UTslBuff::AttachedServerPaticle offset is not 458");
	auto constexpr UTslBuff_boolField464_Offset = offsetof(UTslBuff, boolField464);
	static_assert(UTslBuff_boolField464_Offset == 0x464, "UTslBuff::boolField464 offset is not 464");
	auto constexpr UTslBuff_boolField465_Offset = offsetof(UTslBuff, boolField465);
	static_assert(UTslBuff_boolField465_Offset == 0x465, "UTslBuff::boolField465 offset is not 465");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
