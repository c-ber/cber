#pragma once
#include "UTslParticle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_MotoDrive_Snow_Front_BP_C // Size: 0x479
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_MotoDrive_Snow_Front_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(119236); // id32("BlueprintGeneratedClass P_MotoDrive_Snow_Front_BP.P_MotoDrive_Snow_Front_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty P_MotoDrive_Snow_Front_BP.P_MotoDrive_Snow_Front_BP_C.UberGraphFrame */
	uint8_t boolField478;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool UseDebug_String()
	{
		return boolField478& 0x1;
	}
	inline bool SetUseDebug_String(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_MotoDrive_Snow_Front_BP_C = sizeof(UP_MotoDrive_Snow_Front_BP_C); // 1145
    static_assert(sizeof(UP_MotoDrive_Snow_Front_BP_C) == 0x479, "Size of UP_MotoDrive_Snow_Front_BP_C is not correct.");
	auto constexpr UP_MotoDrive_Snow_Front_BP_C_UberGraphFrame_Offset = offsetof(UP_MotoDrive_Snow_Front_BP_C, UberGraphFrame);
	static_assert(UP_MotoDrive_Snow_Front_BP_C_UberGraphFrame_Offset == 0x470, "UP_MotoDrive_Snow_Front_BP_C::UberGraphFrame offset is not 470");
	auto constexpr UP_MotoDrive_Snow_Front_BP_C_boolField478_Offset = offsetof(UP_MotoDrive_Snow_Front_BP_C, boolField478);
	static_assert(UP_MotoDrive_Snow_Front_BP_C_boolField478_Offset == 0x478, "UP_MotoDrive_Snow_Front_BP_C::boolField478 offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
