#pragma once
#include "UForceFeedbackEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslForceFeedbackEffect // Size: 0x50
	: public UForceFeedbackEffect // Size: 0x48
{
private:
	typedef UTslForceFeedbackEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1384); // id32("Class TslGame.TslForceFeedbackEffect")
		return ptr;
	}
	float UserValueMultiplier; /* Ofs: 0x48 Size: 0x4 - FloatProperty TslGame.TslForceFeedbackEffect.UserValueMultiplier */
	uint8_t UnknownData4C[0x4];


	inline bool SetUserValueMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslForceFeedbackEffect = sizeof(UTslForceFeedbackEffect); // 80
    static_assert(sizeof(UTslForceFeedbackEffect) == 0x50, "Size of UTslForceFeedbackEffect is not correct.");
	auto constexpr UTslForceFeedbackEffect_UserValueMultiplier_Offset = offsetof(UTslForceFeedbackEffect, UserValueMultiplier);
	static_assert(UTslForceFeedbackEffect_UserValueMultiplier_Offset == 0x48, "UTslForceFeedbackEffect::UserValueMultiplier offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
