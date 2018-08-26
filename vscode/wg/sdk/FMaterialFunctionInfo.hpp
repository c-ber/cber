#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialFunctionInfo // Size: 0x18
{
public:
    FGuid StateId; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.MaterialFunctionInfo.StateId */
    ExternalPtr<struct UMaterialFunction> Function; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.MaterialFunctionInfo.Function */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialFunctionInfo = sizeof(FMaterialFunctionInfo); // 24
    static_assert(sizeof(FMaterialFunctionInfo) == 0x18, "Size of FMaterialFunctionInfo is not correct.");
	auto constexpr FMaterialFunctionInfo_StateId_Offset = offsetof(FMaterialFunctionInfo, StateId);
	static_assert(FMaterialFunctionInfo_StateId_Offset == 0x0, "FMaterialFunctionInfo::StateId offset is not 0");
	auto constexpr FMaterialFunctionInfo_Function_Offset = offsetof(FMaterialFunctionInfo, Function);
	static_assert(FMaterialFunctionInfo_Function_Offset == 0x10, "FMaterialFunctionInfo::Function offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
