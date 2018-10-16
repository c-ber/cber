#pragma once
#include "UTslParticle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Vehicle_PunkSpark_BP_C // Size: 0x480
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_Vehicle_PunkSpark_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(122312); // id32("BlueprintGeneratedClass P_Vehicle_PunkSpark_BP.P_Vehicle_PunkSpark_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty P_Vehicle_PunkSpark_BP.P_Vehicle_PunkSpark_BP_C.UberGraphFrame */
	float fSign; /* Ofs: 0x478 Size: 0x4 - FloatProperty P_Vehicle_PunkSpark_BP.P_Vehicle_PunkSpark_BP_C.fSign */
	float spawnFactor; /* Ofs: 0x47C Size: 0x4 - FloatProperty P_Vehicle_PunkSpark_BP.P_Vehicle_PunkSpark_BP_C.spawnFactor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetfSign(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
	inline bool SetspawnFactor(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Vehicle_PunkSpark_BP_C = sizeof(UP_Vehicle_PunkSpark_BP_C); // 1152
    static_assert(sizeof(UP_Vehicle_PunkSpark_BP_C) == 0x480, "Size of UP_Vehicle_PunkSpark_BP_C is not correct.");
	auto constexpr UP_Vehicle_PunkSpark_BP_C_UberGraphFrame_Offset = offsetof(UP_Vehicle_PunkSpark_BP_C, UberGraphFrame);
	static_assert(UP_Vehicle_PunkSpark_BP_C_UberGraphFrame_Offset == 0x470, "UP_Vehicle_PunkSpark_BP_C::UberGraphFrame offset is not 470");
	auto constexpr UP_Vehicle_PunkSpark_BP_C_fSign_Offset = offsetof(UP_Vehicle_PunkSpark_BP_C, fSign);
	static_assert(UP_Vehicle_PunkSpark_BP_C_fSign_Offset == 0x478, "UP_Vehicle_PunkSpark_BP_C::fSign offset is not 478");
	auto constexpr UP_Vehicle_PunkSpark_BP_C_spawnFactor_Offset = offsetof(UP_Vehicle_PunkSpark_BP_C, spawnFactor);
	static_assert(UP_Vehicle_PunkSpark_BP_C_spawnFactor_Offset == 0x47c, "UP_Vehicle_PunkSpark_BP_C::spawnFactor offset is not 47c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
