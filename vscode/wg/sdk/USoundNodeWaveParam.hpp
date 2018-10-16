#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeWaveParam // Size: 0x48
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeWaveParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1233); // id32("Class Engine.SoundNodeWaveParam")
		return ptr;
	}
	FName WaveParameterName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.SoundNodeWaveParam.WaveParameterName */


	inline bool SetWaveParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeWaveParam = sizeof(USoundNodeWaveParam); // 72
    static_assert(sizeof(USoundNodeWaveParam) == 0x48, "Size of USoundNodeWaveParam is not correct.");
	auto constexpr USoundNodeWaveParam_WaveParameterName_Offset = offsetof(USoundNodeWaveParam, WaveParameterName);
	static_assert(USoundNodeWaveParam_WaveParameterName_Offset == 0x40, "USoundNodeWaveParam::WaveParameterName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
