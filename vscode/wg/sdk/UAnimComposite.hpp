#pragma once
#include "UAnimCompositeBase.hpp"
#include "FAnimTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimComposite // Size: 0xB8
	: public UAnimCompositeBase // Size: 0xA8
{
private:
	typedef UAnimComposite t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(249); // id32("Class Engine.AnimComposite")
		return ptr;
	}
	FAnimTrack AnimationTrack; /* Ofs: 0xA8 Size: 0x10 - StructProperty Engine.AnimComposite.AnimationTrack */


	inline bool SetAnimationTrack(t_structHelper inst, FAnimTrack value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimComposite = sizeof(UAnimComposite); // 184
    static_assert(sizeof(UAnimComposite) == 0xB8, "Size of UAnimComposite is not correct.");
	auto constexpr UAnimComposite_AnimationTrack_Offset = offsetof(UAnimComposite, AnimationTrack);
	static_assert(UAnimComposite_AnimationTrack_Offset == 0xa8, "UAnimComposite::AnimationTrack offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
