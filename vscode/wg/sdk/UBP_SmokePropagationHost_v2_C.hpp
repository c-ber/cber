#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_SmokePropagationHost_v2_C // Size: 0x428
	: public UActor // Size: 0x410
{
private:
	typedef UBP_SmokePropagationHost_v2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125722); // id32("BlueprintGeneratedClass BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.UberGraphFrame */
	ExternalPtr<struct UTslSmokePropagationComponent> TslSmokePropagation; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.TslSmokePropagation */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.DefaultSceneRoot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetTslSmokePropagation(t_structHelper inst, ExternalPtr<struct UTslSmokePropagationComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_SmokePropagationHost_v2_C = sizeof(UBP_SmokePropagationHost_v2_C); // 1064
    static_assert(sizeof(UBP_SmokePropagationHost_v2_C) == 0x428, "Size of UBP_SmokePropagationHost_v2_C is not correct.");
	auto constexpr UBP_SmokePropagationHost_v2_C_UberGraphFrame_Offset = offsetof(UBP_SmokePropagationHost_v2_C, UberGraphFrame);
	static_assert(UBP_SmokePropagationHost_v2_C_UberGraphFrame_Offset == 0x410, "UBP_SmokePropagationHost_v2_C::UberGraphFrame offset is not 410");
	auto constexpr UBP_SmokePropagationHost_v2_C_TslSmokePropagation_Offset = offsetof(UBP_SmokePropagationHost_v2_C, TslSmokePropagation);
	static_assert(UBP_SmokePropagationHost_v2_C_TslSmokePropagation_Offset == 0x418, "UBP_SmokePropagationHost_v2_C::TslSmokePropagation offset is not 418");
	auto constexpr UBP_SmokePropagationHost_v2_C_DefaultSceneRoot_Offset = offsetof(UBP_SmokePropagationHost_v2_C, DefaultSceneRoot);
	static_assert(UBP_SmokePropagationHost_v2_C_DefaultSceneRoot_Offset == 0x420, "UBP_SmokePropagationHost_v2_C::DefaultSceneRoot offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
