#pragma once
#include "USoundNodeDistanceCrossFade.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeParamCrossFade // Size: 0x58
	: public USoundNodeDistanceCrossFade // Size: 0x50
{
private:
	typedef USoundNodeParamCrossFade t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1219); // id32("Class Engine.SoundNodeParamCrossFade")
		return ptr;
	}
	FName ParamName; /* Ofs: 0x50 Size: 0x8 - NameProperty Engine.SoundNodeParamCrossFade.ParamName */


	inline bool SetParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeParamCrossFade = sizeof(USoundNodeParamCrossFade); // 88
    static_assert(sizeof(USoundNodeParamCrossFade) == 0x58, "Size of USoundNodeParamCrossFade is not correct.");
	auto constexpr USoundNodeParamCrossFade_ParamName_Offset = offsetof(USoundNodeParamCrossFade, ParamName);
	static_assert(USoundNodeParamCrossFade_ParamName_Offset == 0x50, "USoundNodeParamCrossFade::ParamName offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
