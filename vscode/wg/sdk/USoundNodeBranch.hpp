#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeBranch // Size: 0x48
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeBranch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1214); // id32("Class Engine.SoundNodeBranch")
		return ptr;
	}
	FName BoolParameterName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.SoundNodeBranch.BoolParameterName */


	inline bool SetBoolParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeBranch = sizeof(USoundNodeBranch); // 72
    static_assert(sizeof(USoundNodeBranch) == 0x48, "Size of USoundNodeBranch is not correct.");
	auto constexpr USoundNodeBranch_BoolParameterName_Offset = offsetof(USoundNodeBranch, BoolParameterName);
	static_assert(USoundNodeBranch_BoolParameterName_Offset == 0x40, "USoundNodeBranch::BoolParameterName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
