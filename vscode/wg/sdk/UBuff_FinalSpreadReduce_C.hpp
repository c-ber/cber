#pragma once
#include "UTslBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_FinalSpreadReduce_C // Size: 0x484
	: public UTslBuff // Size: 0x470
{
private:
	typedef UBuff_FinalSpreadReduce_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88485); // id32("BlueprintGeneratedClass Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.DefaultSceneRoot */
	float FinalSpreadFactor; /* Ofs: 0x480 Size: 0x4 - FloatProperty Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.FinalSpreadFactor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetFinalSpreadFactor(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_FinalSpreadReduce_C = sizeof(UBuff_FinalSpreadReduce_C); // 1156
    static_assert(sizeof(UBuff_FinalSpreadReduce_C) == 0x484, "Size of UBuff_FinalSpreadReduce_C is not correct.");
	auto constexpr UBuff_FinalSpreadReduce_C_UberGraphFrame_Offset = offsetof(UBuff_FinalSpreadReduce_C, UberGraphFrame);
	static_assert(UBuff_FinalSpreadReduce_C_UberGraphFrame_Offset == 0x470, "UBuff_FinalSpreadReduce_C::UberGraphFrame offset is not 470");
	auto constexpr UBuff_FinalSpreadReduce_C_DefaultSceneRoot_Offset = offsetof(UBuff_FinalSpreadReduce_C, DefaultSceneRoot);
	static_assert(UBuff_FinalSpreadReduce_C_DefaultSceneRoot_Offset == 0x478, "UBuff_FinalSpreadReduce_C::DefaultSceneRoot offset is not 478");
	auto constexpr UBuff_FinalSpreadReduce_C_FinalSpreadFactor_Offset = offsetof(UBuff_FinalSpreadReduce_C, FinalSpreadFactor);
	static_assert(UBuff_FinalSpreadReduce_C_FinalSpreadFactor_Offset == 0x480, "UBuff_FinalSpreadReduce_C::FinalSpreadFactor offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
