#pragma once
#include "EParticleSysParamType.hpp"
#include "FVector.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleSysParam // Size: 0x80
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ParticleSysParam.Name */
    TEnumAsByte<enum EParticleSysParamType> ParamType; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.ParticleSysParam.ParamType */
    uint8_t UnknownData9[0x3];
    float Scalar; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.ParticleSysParam.Scalar */
    float Scalar_Low; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.ParticleSysParam.Scalar_Low */
    FVector Vector; /* Ofs: 0x14 Size: 0xC StructProperty Engine.ParticleSysParam.Vector */
    FVector Vector_Low; /* Ofs: 0x20 Size: 0xC StructProperty Engine.ParticleSysParam.Vector_Low */
    FColor Color; /* Ofs: 0x2C Size: 0x4 StructProperty Engine.ParticleSysParam.Color */
    ExternalPtr<struct UActor> Actor; /* Ofs: 0x30 Size: 0x8 ObjectProperty Engine.ParticleSysParam.Actor */
    ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0x38 Size: 0x8 ObjectProperty Engine.ParticleSysParam.Material */
    uint8_t UnknownData40[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleSysParam = sizeof(FParticleSysParam); // 128
    static_assert(sizeof(FParticleSysParam) == 0x80, "Size of FParticleSysParam is not correct.");
	auto constexpr FParticleSysParam_Name_Offset = offsetof(FParticleSysParam, Name);
	static_assert(FParticleSysParam_Name_Offset == 0x0, "FParticleSysParam::Name offset is not 0");
	auto constexpr FParticleSysParam_ParamType_Offset = offsetof(FParticleSysParam, ParamType);
	static_assert(FParticleSysParam_ParamType_Offset == 0x8, "FParticleSysParam::ParamType offset is not 8");
	auto constexpr FParticleSysParam_Scalar_Offset = offsetof(FParticleSysParam, Scalar);
	static_assert(FParticleSysParam_Scalar_Offset == 0xc, "FParticleSysParam::Scalar offset is not c");
	auto constexpr FParticleSysParam_Scalar_Low_Offset = offsetof(FParticleSysParam, Scalar_Low);
	static_assert(FParticleSysParam_Scalar_Low_Offset == 0x10, "FParticleSysParam::Scalar_Low offset is not 10");
	auto constexpr FParticleSysParam_Vector_Offset = offsetof(FParticleSysParam, Vector);
	static_assert(FParticleSysParam_Vector_Offset == 0x14, "FParticleSysParam::Vector offset is not 14");
	auto constexpr FParticleSysParam_Vector_Low_Offset = offsetof(FParticleSysParam, Vector_Low);
	static_assert(FParticleSysParam_Vector_Low_Offset == 0x20, "FParticleSysParam::Vector_Low offset is not 20");
	auto constexpr FParticleSysParam_Color_Offset = offsetof(FParticleSysParam, Color);
	static_assert(FParticleSysParam_Color_Offset == 0x2c, "FParticleSysParam::Color offset is not 2c");
	auto constexpr FParticleSysParam_Actor_Offset = offsetof(FParticleSysParam, Actor);
	static_assert(FParticleSysParam_Actor_Offset == 0x30, "FParticleSysParam::Actor offset is not 30");
	auto constexpr FParticleSysParam_Material_Offset = offsetof(FParticleSysParam, Material);
	static_assert(FParticleSysParam_Material_Offset == 0x38, "FParticleSysParam::Material offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
