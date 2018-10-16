#pragma once
#include "UPrimitiveComponent.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UShapeComponent // Size: 0x910
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UShapeComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(197); // id32("Class Engine.ShapeComponent")
		return ptr;
	}
//	FColor ShapeColor; /* Ofs: 0x8E8 Size: 0x4 - StructProperty Engine.ShapeComponent.ShapeColor */
	ExternalPtr<struct UBodySetup> ShapeBodySetup; /* Ofs: 0x8F0 Size: 0x8 - ObjectProperty Engine.ShapeComponent.ShapeBodySetup */
	uint8_t boolField8F8;
	uint8_t UnknownData8F9[0x7];
	ExternalPtr<struct UClass> AreaClass; /* Ofs: 0x900 Size: 0x8 - ClassProperty Engine.ShapeComponent.AreaClass */
	uint8_t UnknownData908[0x8];


//	inline bool SetShapeColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetShapeBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0x8F0, value); }
	inline bool bDrawOnlyIfSelected()
	{
		return boolField8F8& 0x1;
	}
	inline bool SetbDrawOnlyIfSelected(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShouldCollideWhenPlacing()
	{
		return boolField8F8& 0x2;
	}
	inline bool SetbShouldCollideWhenPlacing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDynamicObstacle()
	{
		return boolField8F8& 0x4;
	}
	inline bool SetbDynamicObstacle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x900, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUShapeComponent = sizeof(UShapeComponent); // 2320
    static_assert(sizeof(UShapeComponent) == 0x910, "Size of UShapeComponent is not correct.");
//	auto constexpr UShapeComponent_ShapeColor_Offset = offsetof(UShapeComponent, ShapeColor);
//	static_assert(UShapeComponent_ShapeColor_Offset == 0x8e8, "UShapeComponent::ShapeColor offset is not 8e8");
	auto constexpr UShapeComponent_ShapeBodySetup_Offset = offsetof(UShapeComponent, ShapeBodySetup);
	static_assert(UShapeComponent_ShapeBodySetup_Offset == 0x8f0, "UShapeComponent::ShapeBodySetup offset is not 8f0");
	auto constexpr UShapeComponent_boolField8F8_Offset = offsetof(UShapeComponent, boolField8F8);
	static_assert(UShapeComponent_boolField8F8_Offset == 0x8f8, "UShapeComponent::boolField8F8 offset is not 8f8");
	auto constexpr UShapeComponent_AreaClass_Offset = offsetof(UShapeComponent, AreaClass);
	static_assert(UShapeComponent_AreaClass_Offset == 0x900, "UShapeComponent::AreaClass offset is not 900");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
