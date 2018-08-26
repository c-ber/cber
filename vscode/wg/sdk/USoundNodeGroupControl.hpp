#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeGroupControl // Size: 0x50
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeGroupControl t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1222); // id32("Class Engine.SoundNodeGroupControl")
		return ptr;
	}
	TArray<int32_t> GroupSizes; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.SoundNodeGroupControl.GroupSizes */


	inline bool SetGroupSizes(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeGroupControl = sizeof(USoundNodeGroupControl); // 80
    static_assert(sizeof(USoundNodeGroupControl) == 0x50, "Size of USoundNodeGroupControl is not correct.");
	auto constexpr USoundNodeGroupControl_GroupSizes_Offset = offsetof(USoundNodeGroupControl, GroupSizes);
	static_assert(USoundNodeGroupControl_GroupSizes_Offset == 0x40, "USoundNodeGroupControl::GroupSizes offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
