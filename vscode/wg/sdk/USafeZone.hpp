#pragma once
#include "UContentWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USafeZone // Size: 0x160
	: public UContentWidget // Size: 0x148
{
private:
	typedef USafeZone t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(503); // id32("Class UMG.SafeZone")
		return ptr;
	}
	uint8_t boolField148;
	uint8_t boolField149;
	uint8_t boolField14A;
	uint8_t boolField14B;
	uint8_t UnknownData14C[0x14];


	inline bool PadLeft()
	{
		return boolField148& 0x1;
	}
	inline bool SetPadLeft(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool PadRight()
	{
		return boolField149& 0x1;
	}
	inline bool SetPadRight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x149, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool PadTop()
	{
		return boolField14A& 0x1;
	}
	inline bool SetPadTop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x14A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool PadBottom()
	{
		return boolField14B& 0x1;
	}
	inline bool SetPadBottom(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x14B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSafeZone = sizeof(USafeZone); // 352
    static_assert(sizeof(USafeZone) == 0x160, "Size of USafeZone is not correct.");
	auto constexpr USafeZone_boolField148_Offset = offsetof(USafeZone, boolField148);
	static_assert(USafeZone_boolField148_Offset == 0x148, "USafeZone::boolField148 offset is not 148");
	auto constexpr USafeZone_boolField149_Offset = offsetof(USafeZone, boolField149);
	static_assert(USafeZone_boolField149_Offset == 0x149, "USafeZone::boolField149 offset is not 149");
	auto constexpr USafeZone_boolField14A_Offset = offsetof(USafeZone, boolField14A);
	static_assert(USafeZone_boolField14A_Offset == 0x14a, "USafeZone::boolField14A offset is not 14a");
	auto constexpr USafeZone_boolField14B_Offset = offsetof(USafeZone, boolField14B);
	static_assert(USafeZone_boolField14B_Offset == 0x14b, "USafeZone::boolField14B offset is not 14b");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
