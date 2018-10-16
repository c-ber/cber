#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEditedDocumentInfo // Size: 0x18
{
public:
    ExternalPtr<struct UObject> EditedObject; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.EditedDocumentInfo.EditedObject */
    FVector2D SavedViewOffset; /* Ofs: 0x8 Size: 0x8 StructProperty Engine.EditedDocumentInfo.SavedViewOffset */
    float SavedZoomAmount; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.EditedDocumentInfo.SavedZoomAmount */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEditedDocumentInfo = sizeof(FEditedDocumentInfo); // 24
    static_assert(sizeof(FEditedDocumentInfo) == 0x18, "Size of FEditedDocumentInfo is not correct.");
	auto constexpr FEditedDocumentInfo_EditedObject_Offset = offsetof(FEditedDocumentInfo, EditedObject);
	static_assert(FEditedDocumentInfo_EditedObject_Offset == 0x0, "FEditedDocumentInfo::EditedObject offset is not 0");
	auto constexpr FEditedDocumentInfo_SavedViewOffset_Offset = offsetof(FEditedDocumentInfo, SavedViewOffset);
	static_assert(FEditedDocumentInfo_SavedViewOffset_Offset == 0x8, "FEditedDocumentInfo::SavedViewOffset offset is not 8");
	auto constexpr FEditedDocumentInfo_SavedZoomAmount_Offset = offsetof(FEditedDocumentInfo, SavedZoomAmount);
	static_assert(FEditedDocumentInfo_SavedZoomAmount_Offset == 0x10, "FEditedDocumentInfo::SavedZoomAmount offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
