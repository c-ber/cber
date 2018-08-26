#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialParametersData // Size: 0x20
{
public:
    TArray<struct FLinearColor> Vectors; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.MaterialParametersData.Vectors */
    TArray<ExternalPtr<struct UTexture>> Textures; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.MaterialParametersData.Textures */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialParametersData = sizeof(FMaterialParametersData); // 32
    static_assert(sizeof(FMaterialParametersData) == 0x20, "Size of FMaterialParametersData is not correct.");
	auto constexpr FMaterialParametersData_Vectors_Offset = offsetof(FMaterialParametersData, Vectors);
	static_assert(FMaterialParametersData_Vectors_Offset == 0x0, "FMaterialParametersData::Vectors offset is not 0");
	auto constexpr FMaterialParametersData_Textures_Offset = offsetof(FMaterialParametersData, Textures);
	static_assert(FMaterialParametersData_Textures_Offset == 0x10, "FMaterialParametersData::Textures offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
