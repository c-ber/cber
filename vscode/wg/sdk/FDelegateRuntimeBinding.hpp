#pragma once
#include "FDynamicPropertyPath.hpp"
#include "EBindingKind.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDelegateRuntimeBinding // Size: 0x38
{
public:
    FString ObjectName; /* Ofs: 0x0 Size: 0x10 StrProperty UMG.DelegateRuntimeBinding.ObjectName */
    FName PropertyName; /* Ofs: 0x10 Size: 0x8 NameProperty UMG.DelegateRuntimeBinding.PropertyName */
    FName FunctionName; /* Ofs: 0x18 Size: 0x8 NameProperty UMG.DelegateRuntimeBinding.FunctionName */
    FDynamicPropertyPath SourcePath; /* Ofs: 0x20 Size: 0x10 StructProperty UMG.DelegateRuntimeBinding.SourcePath */
    TEnumAsByte<enum EBindingKind> Kind; /* Ofs: 0x30 Size: 0x1 EnumProperty UMG.DelegateRuntimeBinding.Kind */
    uint8_t UnknownData31[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDelegateRuntimeBinding = sizeof(FDelegateRuntimeBinding); // 56
    static_assert(sizeof(FDelegateRuntimeBinding) == 0x38, "Size of FDelegateRuntimeBinding is not correct.");
	auto constexpr FDelegateRuntimeBinding_ObjectName_Offset = offsetof(FDelegateRuntimeBinding, ObjectName);
	static_assert(FDelegateRuntimeBinding_ObjectName_Offset == 0x0, "FDelegateRuntimeBinding::ObjectName offset is not 0");
	auto constexpr FDelegateRuntimeBinding_PropertyName_Offset = offsetof(FDelegateRuntimeBinding, PropertyName);
	static_assert(FDelegateRuntimeBinding_PropertyName_Offset == 0x10, "FDelegateRuntimeBinding::PropertyName offset is not 10");
	auto constexpr FDelegateRuntimeBinding_FunctionName_Offset = offsetof(FDelegateRuntimeBinding, FunctionName);
	static_assert(FDelegateRuntimeBinding_FunctionName_Offset == 0x18, "FDelegateRuntimeBinding::FunctionName offset is not 18");
	auto constexpr FDelegateRuntimeBinding_SourcePath_Offset = offsetof(FDelegateRuntimeBinding, SourcePath);
	static_assert(FDelegateRuntimeBinding_SourcePath_Offset == 0x20, "FDelegateRuntimeBinding::SourcePath offset is not 20");
	auto constexpr FDelegateRuntimeBinding_Kind_Offset = offsetof(FDelegateRuntimeBinding, Kind);
	static_assert(FDelegateRuntimeBinding_Kind_Offset == 0x30, "FDelegateRuntimeBinding::Kind offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
