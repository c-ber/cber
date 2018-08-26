#pragma once
#include "UItem.hpp"
#include "FSkinParam.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkinItem // Size: 0x1E0
	: public UItem // Size: 0x1C8
{
private:
	typedef USkinItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1851); // id32("Class TslGame.SkinItem")
		return ptr;
	}
	uint8_t boolField1C8;
	uint8_t UnknownData1C9[0x7];
	FSkinParam SkinParam; /* Ofs: 0x1D0 Size: 0x10 - StructProperty TslGame.SkinItem.SkinParam */


	inline bool bAutoAction()
	{
		return boolField1C8& 0x1;
	}
	inline bool SetbAutoAction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSkinParam(t_structHelper inst, FSkinParam value) { inst.WriteOffset(0x1D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkinItem = sizeof(USkinItem); // 480
    static_assert(sizeof(USkinItem) == 0x1E0, "Size of USkinItem is not correct.");
	auto constexpr USkinItem_boolField1C8_Offset = offsetof(USkinItem, boolField1C8);
	static_assert(USkinItem_boolField1C8_Offset == 0x1c8, "USkinItem::boolField1C8 offset is not 1c8");
	auto constexpr USkinItem_SkinParam_Offset = offsetof(USkinItem, SkinParam);
	static_assert(USkinItem_SkinParam_Offset == 0x1d0, "USkinItem::SkinParam offset is not 1d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
