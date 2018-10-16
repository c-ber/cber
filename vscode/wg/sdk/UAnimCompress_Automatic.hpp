#pragma once
#include "UAnimCompress.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompress_Automatic // Size: 0x58
	: public UAnimCompress // Size: 0x50
{
private:
	typedef UAnimCompress_Automatic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(261); // id32("Class Engine.AnimCompress_Automatic")
		return ptr;
	}
	float MaxEndEffectorError; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.AnimCompress_Automatic.MaxEndEffectorError */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];


	inline bool SetMaxEndEffectorError(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool bTryFixedBitwiseCompression()
	{
		return boolField54& 0x1;
	}
	inline bool SetbTryFixedBitwiseCompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTryPerTrackBitwiseCompression()
	{
		return boolField54& 0x2;
	}
	inline bool SetbTryPerTrackBitwiseCompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bTryLinearKeyRemovalCompression()
	{
		return boolField54& 0x4;
	}
	inline bool SetbTryLinearKeyRemovalCompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bTryIntervalKeyRemoval()
	{
		return boolField54& 0x8;
	}
	inline bool SetbTryIntervalKeyRemoval(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bRunCurrentDefaultCompressor()
	{
		return boolField54& 0x10;
	}
	inline bool SetbRunCurrentDefaultCompressor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bAutoReplaceIfExistingErrorTooGreat()
	{
		return boolField54& 0x20;
	}
	inline bool SetbAutoReplaceIfExistingErrorTooGreat(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bRaiseMaxErrorToExisting()
	{
		return boolField54& 0x40;
	}
	inline bool SetbRaiseMaxErrorToExisting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompress_Automatic = sizeof(UAnimCompress_Automatic); // 88
    static_assert(sizeof(UAnimCompress_Automatic) == 0x58, "Size of UAnimCompress_Automatic is not correct.");
	auto constexpr UAnimCompress_Automatic_MaxEndEffectorError_Offset = offsetof(UAnimCompress_Automatic, MaxEndEffectorError);
	static_assert(UAnimCompress_Automatic_MaxEndEffectorError_Offset == 0x50, "UAnimCompress_Automatic::MaxEndEffectorError offset is not 50");
	auto constexpr UAnimCompress_Automatic_boolField54_Offset = offsetof(UAnimCompress_Automatic, boolField54);
	static_assert(UAnimCompress_Automatic_boolField54_Offset == 0x54, "UAnimCompress_Automatic::boolField54 offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
