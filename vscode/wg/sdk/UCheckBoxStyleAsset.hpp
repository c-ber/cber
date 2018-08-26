#pragma once
#include "FCheckBoxStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCheckBoxStyleAsset // Size: 0x610
	: public UObject // Size: 0x30
{
private:
	typedef UCheckBoxStyleAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(699); // id32("Class Engine.CheckBoxStyleAsset")
		return ptr;
	}
	FCheckBoxStyle CheckBoxStyle; /* Ofs: 0x30 Size: 0x5E0 - StructProperty Engine.CheckBoxStyleAsset.CheckBoxStyle */


	inline bool SetCheckBoxStyle(t_structHelper inst, FCheckBoxStyle value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCheckBoxStyleAsset = sizeof(UCheckBoxStyleAsset); // 1552
    static_assert(sizeof(UCheckBoxStyleAsset) == 0x610, "Size of UCheckBoxStyleAsset is not correct.");
	auto constexpr UCheckBoxStyleAsset_CheckBoxStyle_Offset = offsetof(UCheckBoxStyleAsset, CheckBoxStyle);
	static_assert(UCheckBoxStyleAsset_CheckBoxStyle_Offset == 0x30, "UCheckBoxStyleAsset::CheckBoxStyle offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
