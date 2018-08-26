#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPreviewAttachedObjectPair // Size: 0x30
{
public:
    TAssetPtr<ExternalPtr<struct UObject>> AttachedObject; /* Ofs: 0x0 Size: 0x1C AssetObjectProperty Engine.PreviewAttachedObjectPair.AttachedObject */
    uint8_t UnknownData1C[0x4];
    ExternalPtr<struct UObject> Object; /* Ofs: 0x20 Size: 0x8 ObjectProperty Engine.PreviewAttachedObjectPair.Object */
    FName AttachedTo; /* Ofs: 0x28 Size: 0x8 NameProperty Engine.PreviewAttachedObjectPair.AttachedTo */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPreviewAttachedObjectPair = sizeof(FPreviewAttachedObjectPair); // 48
    static_assert(sizeof(FPreviewAttachedObjectPair) == 0x30, "Size of FPreviewAttachedObjectPair is not correct.");
	auto constexpr FPreviewAttachedObjectPair_AttachedObject_Offset = offsetof(FPreviewAttachedObjectPair, AttachedObject);
	static_assert(FPreviewAttachedObjectPair_AttachedObject_Offset == 0x0, "FPreviewAttachedObjectPair::AttachedObject offset is not 0");
	auto constexpr FPreviewAttachedObjectPair_Object_Offset = offsetof(FPreviewAttachedObjectPair, Object);
	static_assert(FPreviewAttachedObjectPair_Object_Offset == 0x20, "FPreviewAttachedObjectPair::Object offset is not 20");
	auto constexpr FPreviewAttachedObjectPair_AttachedTo_Offset = offsetof(FPreviewAttachedObjectPair, AttachedTo);
	static_assert(FPreviewAttachedObjectPair_AttachedTo_Offset == 0x28, "FPreviewAttachedObjectPair::AttachedTo offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
