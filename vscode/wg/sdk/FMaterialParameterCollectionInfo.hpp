#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialParameterCollectionInfo // Size: 0x18
{
public:
    FGuid StateId; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.MaterialParameterCollectionInfo.StateId */
    ExternalPtr<struct UMaterialParameterCollection> ParameterCollection; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.MaterialParameterCollectionInfo.ParameterCollection */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialParameterCollectionInfo = sizeof(FMaterialParameterCollectionInfo); // 24
    static_assert(sizeof(FMaterialParameterCollectionInfo) == 0x18, "Size of FMaterialParameterCollectionInfo is not correct.");
	auto constexpr FMaterialParameterCollectionInfo_StateId_Offset = offsetof(FMaterialParameterCollectionInfo, StateId);
	static_assert(FMaterialParameterCollectionInfo_StateId_Offset == 0x0, "FMaterialParameterCollectionInfo::StateId offset is not 0");
	auto constexpr FMaterialParameterCollectionInfo_ParameterCollection_Offset = offsetof(FMaterialParameterCollectionInfo, ParameterCollection);
	static_assert(FMaterialParameterCollectionInfo_ParameterCollection_Offset == 0x10, "FMaterialParameterCollectionInfo::ParameterCollection offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
