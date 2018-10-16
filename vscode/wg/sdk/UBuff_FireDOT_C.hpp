#pragma once
#include "UBuff_DamageOverTime_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_FireDOT_C // Size: 0x498
	: public UBuff_DamageOverTime_C // Size: 0x490
{
private:
	typedef UBuff_FireDOT_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130275); // id32("BlueprintGeneratedClass Buff_FireDOT.Buff_FireDOT_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x490 Size: 0x8 - StructProperty Buff_FireDOT.Buff_FireDOT_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_FireDOT_C = sizeof(UBuff_FireDOT_C); // 1176
    static_assert(sizeof(UBuff_FireDOT_C) == 0x498, "Size of UBuff_FireDOT_C is not correct.");
	auto constexpr UBuff_FireDOT_C_UberGraphFrame_Offset = offsetof(UBuff_FireDOT_C, UberGraphFrame);
	static_assert(UBuff_FireDOT_C_UberGraphFrame_Offset == 0x490, "UBuff_FireDOT_C::UberGraphFrame offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
