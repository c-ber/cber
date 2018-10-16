#pragma once
#include "UCharacterBreathBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_DecreaseBreathInHolding_C // Size: 0x490
	: public UCharacterBreathBuff // Size: 0x480
{
private:
	typedef UBuff_DecreaseBreathInHolding_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88483); // id32("BlueprintGeneratedClass Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x480 Size: 0x8 - StructProperty Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x488 Size: 0x8 - ObjectProperty Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.DefaultSceneRoot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x480, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x488, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_DecreaseBreathInHolding_C = sizeof(UBuff_DecreaseBreathInHolding_C); // 1168
    static_assert(sizeof(UBuff_DecreaseBreathInHolding_C) == 0x490, "Size of UBuff_DecreaseBreathInHolding_C is not correct.");
	auto constexpr UBuff_DecreaseBreathInHolding_C_UberGraphFrame_Offset = offsetof(UBuff_DecreaseBreathInHolding_C, UberGraphFrame);
	static_assert(UBuff_DecreaseBreathInHolding_C_UberGraphFrame_Offset == 0x480, "UBuff_DecreaseBreathInHolding_C::UberGraphFrame offset is not 480");
	auto constexpr UBuff_DecreaseBreathInHolding_C_DefaultSceneRoot_Offset = offsetof(UBuff_DecreaseBreathInHolding_C, DefaultSceneRoot);
	static_assert(UBuff_DecreaseBreathInHolding_C_DefaultSceneRoot_Offset == 0x488, "UBuff_DecreaseBreathInHolding_C::DefaultSceneRoot offset is not 488");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
