#pragma once
#include "UTslPostProcessEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_PP_OutlineCustomDepthOcclusion_Inst_C // Size: 0x468
	: public UTslPostProcessEffect // Size: 0x460
{
private:
	typedef UBP_PP_OutlineCustomDepthOcclusion_Inst_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(46008); // id32("BlueprintGeneratedClass BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x460 Size: 0x8 - ObjectProperty BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_PP_OutlineCustomDepthOcclusion_Inst_C = sizeof(UBP_PP_OutlineCustomDepthOcclusion_Inst_C); // 1128
    static_assert(sizeof(UBP_PP_OutlineCustomDepthOcclusion_Inst_C) == 0x468, "Size of UBP_PP_OutlineCustomDepthOcclusion_Inst_C is not correct.");
	auto constexpr UBP_PP_OutlineCustomDepthOcclusion_Inst_C_DefaultSceneRoot_Offset = offsetof(UBP_PP_OutlineCustomDepthOcclusion_Inst_C, DefaultSceneRoot);
	static_assert(UBP_PP_OutlineCustomDepthOcclusion_Inst_C_DefaultSceneRoot_Offset == 0x460, "UBP_PP_OutlineCustomDepthOcclusion_Inst_C::DefaultSceneRoot offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
