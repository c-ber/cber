#pragma once
#include "EPostCopyOperation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExposedValueCopyRecord // Size: 0x70
{
public:
    ExternalPtr<struct UProperty> SourceProperty; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.ExposedValueCopyRecord.SourceProperty */
    FName SourcePropertyName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.ExposedValueCopyRecord.SourcePropertyName */
    FName SourceSubPropertyName; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.ExposedValueCopyRecord.SourceSubPropertyName */
    int32_t SourceArrayIndex; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.ExposedValueCopyRecord.SourceArrayIndex */
    uint8_t UnknownData1C[0x4];
    ExternalPtr<struct UProperty> DestProperty; /* Ofs: 0x20 Size: 0x8 ObjectProperty Engine.ExposedValueCopyRecord.DestProperty */
    int32_t DestArrayIndex; /* Ofs: 0x28 Size: 0x4 IntProperty Engine.ExposedValueCopyRecord.DestArrayIndex */
    int32_t Size; /* Ofs: 0x2C Size: 0x4 IntProperty Engine.ExposedValueCopyRecord.Size */
    bool bInstanceIsTarget; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.ExposedValueCopyRecord.bInstanceIsTarget */
    TEnumAsByte<enum EPostCopyOperation> PostCopyOperation; /* Ofs: 0x31 Size: 0x1 EnumProperty Engine.ExposedValueCopyRecord.PostCopyOperation */
    uint8_t UnknownData32[0x6];
    ExternalPtr<struct UBoolProperty> CachedBoolSourceProperty; /* Ofs: 0x38 Size: 0x8 ObjectProperty Engine.ExposedValueCopyRecord.CachedBoolSourceProperty */
    ExternalPtr<struct UBoolProperty> CachedBoolDestProperty; /* Ofs: 0x40 Size: 0x8 ObjectProperty Engine.ExposedValueCopyRecord.CachedBoolDestProperty */
    ExternalPtr<struct UStructProperty> CachedStructDestProperty; /* Ofs: 0x48 Size: 0x8 ObjectProperty Engine.ExposedValueCopyRecord.CachedStructDestProperty */
    uint8_t UnknownData50[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExposedValueCopyRecord = sizeof(FExposedValueCopyRecord); // 112
    static_assert(sizeof(FExposedValueCopyRecord) == 0x70, "Size of FExposedValueCopyRecord is not correct.");
	auto constexpr FExposedValueCopyRecord_SourceProperty_Offset = offsetof(FExposedValueCopyRecord, SourceProperty);
	static_assert(FExposedValueCopyRecord_SourceProperty_Offset == 0x0, "FExposedValueCopyRecord::SourceProperty offset is not 0");
	auto constexpr FExposedValueCopyRecord_SourcePropertyName_Offset = offsetof(FExposedValueCopyRecord, SourcePropertyName);
	static_assert(FExposedValueCopyRecord_SourcePropertyName_Offset == 0x8, "FExposedValueCopyRecord::SourcePropertyName offset is not 8");
	auto constexpr FExposedValueCopyRecord_SourceSubPropertyName_Offset = offsetof(FExposedValueCopyRecord, SourceSubPropertyName);
	static_assert(FExposedValueCopyRecord_SourceSubPropertyName_Offset == 0x10, "FExposedValueCopyRecord::SourceSubPropertyName offset is not 10");
	auto constexpr FExposedValueCopyRecord_SourceArrayIndex_Offset = offsetof(FExposedValueCopyRecord, SourceArrayIndex);
	static_assert(FExposedValueCopyRecord_SourceArrayIndex_Offset == 0x18, "FExposedValueCopyRecord::SourceArrayIndex offset is not 18");
	auto constexpr FExposedValueCopyRecord_DestProperty_Offset = offsetof(FExposedValueCopyRecord, DestProperty);
	static_assert(FExposedValueCopyRecord_DestProperty_Offset == 0x20, "FExposedValueCopyRecord::DestProperty offset is not 20");
	auto constexpr FExposedValueCopyRecord_DestArrayIndex_Offset = offsetof(FExposedValueCopyRecord, DestArrayIndex);
	static_assert(FExposedValueCopyRecord_DestArrayIndex_Offset == 0x28, "FExposedValueCopyRecord::DestArrayIndex offset is not 28");
	auto constexpr FExposedValueCopyRecord_Size_Offset = offsetof(FExposedValueCopyRecord, Size);
	static_assert(FExposedValueCopyRecord_Size_Offset == 0x2c, "FExposedValueCopyRecord::Size offset is not 2c");
	auto constexpr FExposedValueCopyRecord_PostCopyOperation_Offset = offsetof(FExposedValueCopyRecord, PostCopyOperation);
	static_assert(FExposedValueCopyRecord_PostCopyOperation_Offset == 0x31, "FExposedValueCopyRecord::PostCopyOperation offset is not 31");
	auto constexpr FExposedValueCopyRecord_CachedBoolSourceProperty_Offset = offsetof(FExposedValueCopyRecord, CachedBoolSourceProperty);
	static_assert(FExposedValueCopyRecord_CachedBoolSourceProperty_Offset == 0x38, "FExposedValueCopyRecord::CachedBoolSourceProperty offset is not 38");
	auto constexpr FExposedValueCopyRecord_CachedBoolDestProperty_Offset = offsetof(FExposedValueCopyRecord, CachedBoolDestProperty);
	static_assert(FExposedValueCopyRecord_CachedBoolDestProperty_Offset == 0x40, "FExposedValueCopyRecord::CachedBoolDestProperty offset is not 40");
	auto constexpr FExposedValueCopyRecord_CachedStructDestProperty_Offset = offsetof(FExposedValueCopyRecord, CachedStructDestProperty);
	static_assert(FExposedValueCopyRecord_CachedStructDestProperty_Offset == 0x48, "FExposedValueCopyRecord::CachedStructDestProperty offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
