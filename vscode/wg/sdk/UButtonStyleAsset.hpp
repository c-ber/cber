#pragma once
#include "FButtonStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UButtonStyleAsset // Size: 0x2D8
	: public UObject // Size: 0x30
{
private:
	typedef UButtonStyleAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(685); // id32("Class Engine.ButtonStyleAsset")
		return ptr;
	}
	FButtonStyle ButtonStyle; /* Ofs: 0x30 Size: 0x2A8 - StructProperty Engine.ButtonStyleAsset.ButtonStyle */


	inline bool SetButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUButtonStyleAsset = sizeof(UButtonStyleAsset); // 728
    static_assert(sizeof(UButtonStyleAsset) == 0x2D8, "Size of UButtonStyleAsset is not correct.");
	auto constexpr UButtonStyleAsset_ButtonStyle_Offset = offsetof(UButtonStyleAsset, ButtonStyle);
	static_assert(UButtonStyleAsset_ButtonStyle_Offset == 0x30, "UButtonStyleAsset::ButtonStyle offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
