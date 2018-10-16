#pragma once
#include "UPrimitiveComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBrushComponent // Size: 0x910
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UBrushComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(201); // id32("Class Engine.BrushComponent")
		return ptr;
	}
//	ExternalPtr<struct UModel> Brush; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty Engine.BrushComponent.Brush */
	ExternalPtr<struct UBodySetup> BrushBodySetup; /* Ofs: 0x8F0 Size: 0x8 - ObjectProperty Engine.BrushComponent.BrushBodySetup */
	FVector PrePivot; /* Ofs: 0x8F8 Size: 0xC - StructProperty Engine.BrushComponent.PrePivot */
	uint8_t UnknownData904[0xC];


//	inline bool SetBrush(t_structHelper inst, ExternalPtr<struct UModel> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetBrushBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetPrePivot(t_structHelper inst, FVector value) { inst.WriteOffset(0x8F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBrushComponent = sizeof(UBrushComponent); // 2320
    static_assert(sizeof(UBrushComponent) == 0x910, "Size of UBrushComponent is not correct.");
//	auto constexpr UBrushComponent_Brush_Offset = offsetof(UBrushComponent, Brush);
//	static_assert(UBrushComponent_Brush_Offset == 0x8e8, "UBrushComponent::Brush offset is not 8e8");
	auto constexpr UBrushComponent_BrushBodySetup_Offset = offsetof(UBrushComponent, BrushBodySetup);
	static_assert(UBrushComponent_BrushBodySetup_Offset == 0x8f0, "UBrushComponent::BrushBodySetup offset is not 8f0");
	auto constexpr UBrushComponent_PrePivot_Offset = offsetof(UBrushComponent, PrePivot);
	static_assert(UBrushComponent_PrePivot_Offset == 0x8f8, "UBrushComponent::PrePivot offset is not 8f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
