#pragma once
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlateBrushAsset // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef USlateBrushAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1199); // id32("Class Engine.SlateBrushAsset")
		return ptr;
	}
	FSlateBrush Brush; /* Ofs: 0x30 Size: 0x90 - StructProperty Engine.SlateBrushAsset.Brush */


	inline bool SetBrush(t_structHelper inst, FSlateBrush value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlateBrushAsset = sizeof(USlateBrushAsset); // 192
    static_assert(sizeof(USlateBrushAsset) == 0xC0, "Size of USlateBrushAsset is not correct.");
	auto constexpr USlateBrushAsset_Brush_Offset = offsetof(USlateBrushAsset, Brush);
	static_assert(USlateBrushAsset_Brush_Offset == 0x30, "USlateBrushAsset::Brush offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
