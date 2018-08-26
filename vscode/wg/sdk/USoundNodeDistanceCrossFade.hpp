#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeDistanceCrossFade // Size: 0x50
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeDistanceCrossFade t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1218); // id32("Class Engine.SoundNodeDistanceCrossFade")
		return ptr;
	}
	TArray<struct FDistanceDatum> CrossFadeInput; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.SoundNodeDistanceCrossFade.CrossFadeInput */


	inline bool SetCrossFadeInput(t_structHelper inst, TArray<struct FDistanceDatum> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeDistanceCrossFade = sizeof(USoundNodeDistanceCrossFade); // 80
    static_assert(sizeof(USoundNodeDistanceCrossFade) == 0x50, "Size of USoundNodeDistanceCrossFade is not correct.");
	auto constexpr USoundNodeDistanceCrossFade_CrossFadeInput_Offset = offsetof(USoundNodeDistanceCrossFade, CrossFadeInput);
	static_assert(USoundNodeDistanceCrossFade_CrossFadeInput_Offset == 0x40, "USoundNodeDistanceCrossFade::CrossFadeInput offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
