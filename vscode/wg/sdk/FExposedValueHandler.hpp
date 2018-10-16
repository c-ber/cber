#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExposedValueHandler // Size: 0x28
{
public:
    FName BoundFunction; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ExposedValueHandler.BoundFunction */
    TArray<struct FExposedValueCopyRecord> CopyRecords; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.ExposedValueHandler.CopyRecords */
    uint8_t UnknownData18[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExposedValueHandler = sizeof(FExposedValueHandler); // 40
    static_assert(sizeof(FExposedValueHandler) == 0x28, "Size of FExposedValueHandler is not correct.");
	auto constexpr FExposedValueHandler_BoundFunction_Offset = offsetof(FExposedValueHandler, BoundFunction);
	static_assert(FExposedValueHandler_BoundFunction_Offset == 0x0, "FExposedValueHandler::BoundFunction offset is not 0");
	auto constexpr FExposedValueHandler_CopyRecords_Offset = offsetof(FExposedValueHandler, CopyRecords);
	static_assert(FExposedValueHandler_CopyRecords_Offset == 0x8, "FExposedValueHandler::CopyRecords offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
