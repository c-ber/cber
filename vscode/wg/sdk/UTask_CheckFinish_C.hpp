#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_CheckFinish_C // Size: 0xB1
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_CheckFinish_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114691); // id32("BlueprintGeneratedClass Task_CheckFinish.Task_CheckFinish_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_CheckFinish.Task_CheckFinish_C.UberGraphFrame */
	uint8_t boolFieldB0;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
	inline bool NewVar_1()
	{
		return boolFieldB0& 0x1;
	}
	inline bool SetNewVar_1(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_CheckFinish_C = sizeof(UTask_CheckFinish_C); // 177
    static_assert(sizeof(UTask_CheckFinish_C) == 0xB1, "Size of UTask_CheckFinish_C is not correct.");
	auto constexpr UTask_CheckFinish_C_UberGraphFrame_Offset = offsetof(UTask_CheckFinish_C, UberGraphFrame);
	static_assert(UTask_CheckFinish_C_UberGraphFrame_Offset == 0xa8, "UTask_CheckFinish_C::UberGraphFrame offset is not a8");
	auto constexpr UTask_CheckFinish_C_boolFieldB0_Offset = offsetof(UTask_CheckFinish_C, boolFieldB0);
	static_assert(UTask_CheckFinish_C_boolFieldB0_Offset == 0xb0, "UTask_CheckFinish_C::boolFieldB0 offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
