#pragma once
#include "UActor.hpp"
#include "EBrushType.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBrush // Size: 0x440
	: public UActor // Size: 0x410
{
private:
	typedef UBrush t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(394); // id32("Class Engine.Brush")
		return ptr;
	}
//	TEnumAsByte<enum EBrushType> BrushType; /* Ofs: 0x408 Size: 0x1 - ByteProperty Engine.Brush.BrushType */
//	FColor BrushColor; /* Ofs: 0x40C Size: 0x4 - StructProperty Engine.Brush.BrushColor */
	int32_t PolyFlags; /* Ofs: 0x410 Size: 0x4 - IntProperty Engine.Brush.PolyFlags */
	uint8_t boolField414;
	uint8_t UnknownData415[0x3];
	ExternalPtr<struct UModel> Brush; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.Brush.Brush */
	ExternalPtr<struct UBrushComponent> BrushComponent; /* Ofs: 0x420 Size: 0x8 - ObjectProperty Engine.Brush.BrushComponent */
	uint8_t boolField428;
	uint8_t UnknownData429[0x7];
	TArray<struct FGeomSelection> SavedSelections; /* Ofs: 0x430 Size: 0x10 - ArrayProperty Engine.Brush.SavedSelections */


//	inline bool SetBrushType(t_structHelper inst, TEnumAsByte<enum EBrushType> value) { inst.WriteOffset(0x408, value); }
//	inline bool SetBrushColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x40C, value); }
	inline bool SetPolyFlags(t_structHelper inst, int32_t value) { inst.WriteOffset(0x410, value); }
	inline bool bColored()
	{
		return boolField414& 0x1;
	}
	inline bool SetbColored(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x414, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSolidWhenSelected()
	{
		return boolField414& 0x2;
	}
	inline bool SetbSolidWhenSelected(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x414, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bPlaceableFromClassBrowser()
	{
		return boolField414& 0x4;
	}
	inline bool SetbPlaceableFromClassBrowser(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x414, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bNotForClientOrServer()
	{
		return boolField414& 0x8;
	}
	inline bool SetbNotForClientOrServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x414, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetBrush(t_structHelper inst, ExternalPtr<struct UModel> value) { inst.WriteOffset(0x418, value); }
	inline bool SetBrushComponent(t_structHelper inst, ExternalPtr<struct UBrushComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool bInManipulation()
	{
		return boolField428& 0x1;
	}
	inline bool SetbInManipulation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSavedSelections(t_structHelper inst, TArray<struct FGeomSelection> value) { inst.WriteOffset(0x430, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBrush = sizeof(UBrush); // 1088
    static_assert(sizeof(UBrush) == 0x440, "Size of UBrush is not correct.");
//	auto constexpr UBrush_BrushType_Offset = offsetof(UBrush, BrushType);
//	static_assert(UBrush_BrushType_Offset == 0x408, "UBrush::BrushType offset is not 408");
//	auto constexpr UBrush_BrushColor_Offset = offsetof(UBrush, BrushColor);
//	static_assert(UBrush_BrushColor_Offset == 0x40c, "UBrush::BrushColor offset is not 40c");
	auto constexpr UBrush_PolyFlags_Offset = offsetof(UBrush, PolyFlags);
	static_assert(UBrush_PolyFlags_Offset == 0x410, "UBrush::PolyFlags offset is not 410");
	auto constexpr UBrush_boolField414_Offset = offsetof(UBrush, boolField414);
	static_assert(UBrush_boolField414_Offset == 0x414, "UBrush::boolField414 offset is not 414");
	auto constexpr UBrush_Brush_Offset = offsetof(UBrush, Brush);
	static_assert(UBrush_Brush_Offset == 0x418, "UBrush::Brush offset is not 418");
	auto constexpr UBrush_BrushComponent_Offset = offsetof(UBrush, BrushComponent);
	static_assert(UBrush_BrushComponent_Offset == 0x420, "UBrush::BrushComponent offset is not 420");
	auto constexpr UBrush_boolField428_Offset = offsetof(UBrush, boolField428);
	static_assert(UBrush_boolField428_Offset == 0x428, "UBrush::boolField428 offset is not 428");
	auto constexpr UBrush_SavedSelections_Offset = offsetof(UBrush, SavedSelections);
	static_assert(UBrush_SavedSelections_Offset == 0x430, "UBrush::SavedSelections offset is not 430");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
