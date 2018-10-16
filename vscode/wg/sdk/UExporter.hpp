#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExporter // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UExporter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(772); // id32("Class Engine.Exporter")
		return ptr;
	}
	ExternalPtr<struct UClass> SupportedClass; /* Ofs: 0x30 Size: 0x8 - ClassProperty Engine.Exporter.SupportedClass */
	ExternalPtr<struct UObject> ExportRootScope; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.Exporter.ExportRootScope */
	TArray<struct FString> FormatExtension; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.Exporter.FormatExtension */
	TArray<struct FString> FormatDescription; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.Exporter.FormatDescription */
	int32_t PreferredFormatIndex; /* Ofs: 0x60 Size: 0x4 - IntProperty Engine.Exporter.PreferredFormatIndex */
	int32_t TextIndent; /* Ofs: 0x64 Size: 0x4 - IntProperty Engine.Exporter.TextIndent */
	uint8_t boolField68;
	uint8_t UnknownData69[0x7];


	inline bool SetSupportedClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x30, value); }
	inline bool SetExportRootScope(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x38, value); }
	inline bool SetFormatExtension(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x40, value); }
	inline bool SetFormatDescription(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x50, value); }
	inline bool SetPreferredFormatIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetTextIndent(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool bText()
	{
		return boolField68& 0x1;
	}
	inline bool SetbText(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSelectedOnly()
	{
		return boolField68& 0x2;
	}
	inline bool SetbSelectedOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bForceFileOperations()
	{
		return boolField68& 0x4;
	}
	inline bool SetbForceFileOperations(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExporter = sizeof(UExporter); // 112
    static_assert(sizeof(UExporter) == 0x70, "Size of UExporter is not correct.");
	auto constexpr UExporter_SupportedClass_Offset = offsetof(UExporter, SupportedClass);
	static_assert(UExporter_SupportedClass_Offset == 0x30, "UExporter::SupportedClass offset is not 30");
	auto constexpr UExporter_ExportRootScope_Offset = offsetof(UExporter, ExportRootScope);
	static_assert(UExporter_ExportRootScope_Offset == 0x38, "UExporter::ExportRootScope offset is not 38");
	auto constexpr UExporter_FormatExtension_Offset = offsetof(UExporter, FormatExtension);
	static_assert(UExporter_FormatExtension_Offset == 0x40, "UExporter::FormatExtension offset is not 40");
	auto constexpr UExporter_FormatDescription_Offset = offsetof(UExporter, FormatDescription);
	static_assert(UExporter_FormatDescription_Offset == 0x50, "UExporter::FormatDescription offset is not 50");
	auto constexpr UExporter_PreferredFormatIndex_Offset = offsetof(UExporter, PreferredFormatIndex);
	static_assert(UExporter_PreferredFormatIndex_Offset == 0x60, "UExporter::PreferredFormatIndex offset is not 60");
	auto constexpr UExporter_TextIndent_Offset = offsetof(UExporter, TextIndent);
	static_assert(UExporter_TextIndent_Offset == 0x64, "UExporter::TextIndent offset is not 64");
	auto constexpr UExporter_boolField68_Offset = offsetof(UExporter, boolField68);
	static_assert(UExporter_boolField68_Offset == 0x68, "UExporter::boolField68 offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
