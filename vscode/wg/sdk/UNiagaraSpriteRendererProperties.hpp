#pragma once
#include "UNiagaraEffectRendererProperties.hpp"
#include "FVector2D.hpp"
#include "ENiagaraSpriteAlignment.hpp"
#include "ENiagaraSpriteFacingMode.hpp"
#include "FVector.hpp"
#include "ENiagaraSortMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraSpriteRendererProperties // Size: 0x50
	: public UNiagaraEffectRendererProperties // Size: 0x30
{
private:
	typedef UNiagaraSpriteRendererProperties t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(23); // id32("Class Niagara.NiagaraSpriteRendererProperties")
		return ptr;
	}
	FVector2D SubImageSize; /* Ofs: 0x30 Size: 0x8 - StructProperty Niagara.NiagaraSpriteRendererProperties.SubImageSize */
	TEnumAsByte<enum ENiagaraSpriteAlignment> Alignment; /* Ofs: 0x38 Size: 0x1 - EnumProperty Niagara.NiagaraSpriteRendererProperties.Alignment */
	TEnumAsByte<enum ENiagaraSpriteFacingMode> FacingMode; /* Ofs: 0x39 Size: 0x1 - EnumProperty Niagara.NiagaraSpriteRendererProperties.FacingMode */
	uint8_t UnknownData3A[0x2];
	FVector CustomFacingVectorMask; /* Ofs: 0x3C Size: 0xC - StructProperty Niagara.NiagaraSpriteRendererProperties.CustomFacingVectorMask */
	TEnumAsByte<enum ENiagaraSortMode> SortMode; /* Ofs: 0x48 Size: 0x1 - EnumProperty Niagara.NiagaraSpriteRendererProperties.SortMode */
	uint8_t UnknownData49[0x7];


	inline bool SetSubImageSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x30, value); }
	inline bool SetAlignment(t_structHelper inst, TEnumAsByte<enum ENiagaraSpriteAlignment> value) { inst.WriteOffset(0x38, value); }
	inline bool SetFacingMode(t_structHelper inst, TEnumAsByte<enum ENiagaraSpriteFacingMode> value) { inst.WriteOffset(0x39, value); }
	inline bool SetCustomFacingVectorMask(t_structHelper inst, FVector value) { inst.WriteOffset(0x3C, value); }
	inline bool SetSortMode(t_structHelper inst, TEnumAsByte<enum ENiagaraSortMode> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraSpriteRendererProperties = sizeof(UNiagaraSpriteRendererProperties); // 80
    static_assert(sizeof(UNiagaraSpriteRendererProperties) == 0x50, "Size of UNiagaraSpriteRendererProperties is not correct.");
	auto constexpr UNiagaraSpriteRendererProperties_SubImageSize_Offset = offsetof(UNiagaraSpriteRendererProperties, SubImageSize);
	static_assert(UNiagaraSpriteRendererProperties_SubImageSize_Offset == 0x30, "UNiagaraSpriteRendererProperties::SubImageSize offset is not 30");
	auto constexpr UNiagaraSpriteRendererProperties_Alignment_Offset = offsetof(UNiagaraSpriteRendererProperties, Alignment);
	static_assert(UNiagaraSpriteRendererProperties_Alignment_Offset == 0x38, "UNiagaraSpriteRendererProperties::Alignment offset is not 38");
	auto constexpr UNiagaraSpriteRendererProperties_FacingMode_Offset = offsetof(UNiagaraSpriteRendererProperties, FacingMode);
	static_assert(UNiagaraSpriteRendererProperties_FacingMode_Offset == 0x39, "UNiagaraSpriteRendererProperties::FacingMode offset is not 39");
	auto constexpr UNiagaraSpriteRendererProperties_CustomFacingVectorMask_Offset = offsetof(UNiagaraSpriteRendererProperties, CustomFacingVectorMask);
	static_assert(UNiagaraSpriteRendererProperties_CustomFacingVectorMask_Offset == 0x3c, "UNiagaraSpriteRendererProperties::CustomFacingVectorMask offset is not 3c");
	auto constexpr UNiagaraSpriteRendererProperties_SortMode_Offset = offsetof(UNiagaraSpriteRendererProperties, SortMode);
	static_assert(UNiagaraSpriteRendererProperties_SortMode_Offset == 0x48, "UNiagaraSpriteRendererProperties::SortMode offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
