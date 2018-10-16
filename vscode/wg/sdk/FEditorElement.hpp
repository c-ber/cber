#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEditorElement // Size: 0x18
{
public:
    int32_t Indices[3]; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.EditorElement.Indices */
    float Weights[3]; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.EditorElement.Weights */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEditorElement = sizeof(FEditorElement); // 24
    static_assert(sizeof(FEditorElement) == 0x18, "Size of FEditorElement is not correct.");
	auto constexpr FEditorElement_Indices_Offset = offsetof(FEditorElement, Indices);
	static_assert(FEditorElement_Indices_Offset == 0x0, "FEditorElement::Indices offset is not 0");
	auto constexpr FEditorElement_Weights_Offset = offsetof(FEditorElement, Weights);
	static_assert(FEditorElement_Weights_Offset == 0xc, "FEditorElement::Weights offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
