#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_FinishMatch_C // Size: 0xB0
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_FinishMatch_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114681); // id32("BlueprintGeneratedClass Task_FinishMatch.Task_FinishMatch_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_FinishMatch.Task_FinishMatch_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_FinishMatch_C = sizeof(UTask_FinishMatch_C); // 176
    static_assert(sizeof(UTask_FinishMatch_C) == 0xB0, "Size of UTask_FinishMatch_C is not correct.");
	auto constexpr UTask_FinishMatch_C_UberGraphFrame_Offset = offsetof(UTask_FinishMatch_C, UberGraphFrame);
	static_assert(UTask_FinishMatch_C_UberGraphFrame_Offset == 0xa8, "UTask_FinishMatch_C::UberGraphFrame offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
