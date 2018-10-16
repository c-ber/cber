#pragma once
#include "UTslPostProcessEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UM_DBNOPostProcessEffect_C // Size: 0x468
	: public UTslPostProcessEffect // Size: 0x460
{
private:
	typedef UM_DBNOPostProcessEffect_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88652); // id32("BlueprintGeneratedClass M_DBNOPostProcessEffect.M_DBNOPostProcessEffect_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x460 Size: 0x8 - ObjectProperty M_DBNOPostProcessEffect.M_DBNOPostProcessEffect_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUM_DBNOPostProcessEffect_C = sizeof(UM_DBNOPostProcessEffect_C); // 1128
    static_assert(sizeof(UM_DBNOPostProcessEffect_C) == 0x468, "Size of UM_DBNOPostProcessEffect_C is not correct.");
	auto constexpr UM_DBNOPostProcessEffect_C_DefaultSceneRoot_Offset = offsetof(UM_DBNOPostProcessEffect_C, DefaultSceneRoot);
	static_assert(UM_DBNOPostProcessEffect_C_DefaultSceneRoot_Offset == 0x460, "UM_DBNOPostProcessEffect_C::DefaultSceneRoot offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
