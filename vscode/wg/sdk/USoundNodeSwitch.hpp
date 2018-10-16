#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeSwitch // Size: 0x48
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeSwitch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1232); // id32("Class Engine.SoundNodeSwitch")
		return ptr;
	}
	FName IntParameterName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.SoundNodeSwitch.IntParameterName */


	inline bool SetIntParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeSwitch = sizeof(USoundNodeSwitch); // 72
    static_assert(sizeof(USoundNodeSwitch) == 0x48, "Size of USoundNodeSwitch is not correct.");
	auto constexpr USoundNodeSwitch_IntParameterName_Offset = offsetof(USoundNodeSwitch, IntParameterName);
	static_assert(USoundNodeSwitch_IntParameterName_Offset == 0x40, "USoundNodeSwitch::IntParameterName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
