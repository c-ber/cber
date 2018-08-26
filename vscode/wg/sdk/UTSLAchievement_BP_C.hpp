#pragma once
#include "UTslAchievement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTSLAchievement_BP_C // Size: 0x508
	: public UTslAchievement // Size: 0x500
{
private:
	typedef UTSLAchievement_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(57239); // id32("BlueprintGeneratedClass TSLAchievement_BP.TSLAchievement_BP_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x500 Size: 0x8 - ObjectProperty TSLAchievement_BP.TSLAchievement_BP_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x500, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTSLAchievement_BP_C = sizeof(UTSLAchievement_BP_C); // 1288
    static_assert(sizeof(UTSLAchievement_BP_C) == 0x508, "Size of UTSLAchievement_BP_C is not correct.");
	auto constexpr UTSLAchievement_BP_C_DefaultSceneRoot_Offset = offsetof(UTSLAchievement_BP_C, DefaultSceneRoot);
	static_assert(UTSLAchievement_BP_C_DefaultSceneRoot_Offset == 0x500, "UTSLAchievement_BP_C::DefaultSceneRoot offset is not 500");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
