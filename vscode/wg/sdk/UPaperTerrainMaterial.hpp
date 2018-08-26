#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTerrainMaterial // Size: 0x50
	: public UDataAsset // Size: 0x38
{
private:
	typedef UPaperTerrainMaterial t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2037); // id32("Class Paper2D.PaperTerrainMaterial")
		return ptr;
	}
	TArray<struct FPaperTerrainMaterialRule> Rules; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Paper2D.PaperTerrainMaterial.Rules */
	ExternalPtr<struct UPaperSprite> InteriorFill; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Paper2D.PaperTerrainMaterial.InteriorFill */


	inline bool SetRules(t_structHelper inst, TArray<struct FPaperTerrainMaterialRule> value) { inst.WriteOffset(0x38, value); }
	inline bool SetInteriorFill(t_structHelper inst, ExternalPtr<struct UPaperSprite> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTerrainMaterial = sizeof(UPaperTerrainMaterial); // 80
    static_assert(sizeof(UPaperTerrainMaterial) == 0x50, "Size of UPaperTerrainMaterial is not correct.");
	auto constexpr UPaperTerrainMaterial_Rules_Offset = offsetof(UPaperTerrainMaterial, Rules);
	static_assert(UPaperTerrainMaterial_Rules_Offset == 0x38, "UPaperTerrainMaterial::Rules offset is not 38");
	auto constexpr UPaperTerrainMaterial_InteriorFill_Offset = offsetof(UPaperTerrainMaterial, InteriorFill);
	static_assert(UPaperTerrainMaterial_InteriorFill_Offset == 0x48, "UPaperTerrainMaterial::InteriorFill offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
