#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEditorMapPerformanceTestDefinition // Size: 0x18
{
public:
    FStringAssetReference PerformanceTestmap; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.EditorMapPerformanceTestDefinition.PerformanceTestmap */
    int32_t TestTimer; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.EditorMapPerformanceTestDefinition.TestTimer */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEditorMapPerformanceTestDefinition = sizeof(FEditorMapPerformanceTestDefinition); // 24
    static_assert(sizeof(FEditorMapPerformanceTestDefinition) == 0x18, "Size of FEditorMapPerformanceTestDefinition is not correct.");
	auto constexpr FEditorMapPerformanceTestDefinition_PerformanceTestmap_Offset = offsetof(FEditorMapPerformanceTestDefinition, PerformanceTestmap);
	static_assert(FEditorMapPerformanceTestDefinition_PerformanceTestmap_Offset == 0x0, "FEditorMapPerformanceTestDefinition::PerformanceTestmap offset is not 0");
	auto constexpr FEditorMapPerformanceTestDefinition_TestTimer_Offset = offsetof(FEditorMapPerformanceTestDefinition, TestTimer);
	static_assert(FEditorMapPerformanceTestDefinition_TestTimer_Offset == 0x10, "FEditorMapPerformanceTestDefinition::TestTimer offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
