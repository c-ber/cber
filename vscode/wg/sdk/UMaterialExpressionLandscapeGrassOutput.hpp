#pragma once
#include "UMaterialExpressionCustomOutput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLandscapeGrassOutput // Size: 0x78
	: public UMaterialExpressionCustomOutput // Size: 0x68
{
private:
	typedef UMaterialExpressionLandscapeGrassOutput t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1301); // id32("Class Landscape.MaterialExpressionLandscapeGrassOutput")
		return ptr;
	}
	TArray<struct FGrassInput> GrassTypes; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Landscape.MaterialExpressionLandscapeGrassOutput.GrassTypes */


	inline bool SetGrassTypes(t_structHelper inst, TArray<struct FGrassInput> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLandscapeGrassOutput = sizeof(UMaterialExpressionLandscapeGrassOutput); // 120
    static_assert(sizeof(UMaterialExpressionLandscapeGrassOutput) == 0x78, "Size of UMaterialExpressionLandscapeGrassOutput is not correct.");
	auto constexpr UMaterialExpressionLandscapeGrassOutput_GrassTypes_Offset = offsetof(UMaterialExpressionLandscapeGrassOutput, GrassTypes);
	static_assert(UMaterialExpressionLandscapeGrassOutput_GrassTypes_Offset == 0x68, "UMaterialExpressionLandscapeGrassOutput::GrassTypes offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
