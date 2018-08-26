#pragma once
#include "ZipUtilityCompressionFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UZipFileFunctionInternalCallback // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UZipFileFunctionInternalCallback t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2002); // id32("Class ZipUtility.ZipFileFunctionInternalCallback")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TEnumAsByte<enum ZipUtilityCompressionFormat> CompressionFormat; /* Ofs: 0x38 Size: 0x1 - ByteProperty ZipUtility.ZipFileFunctionInternalCallback.CompressionFormat */
	uint8_t UnknownData39[0x7];
	FString file; /* Ofs: 0x40 Size: 0x10 - StrProperty ZipUtility.ZipFileFunctionInternalCallback.file */
	FString DestinationFolder; /* Ofs: 0x50 Size: 0x10 - StrProperty ZipUtility.ZipFileFunctionInternalCallback.DestinationFolder */
	int32_t FileIndex; /* Ofs: 0x60 Size: 0x4 - IntProperty ZipUtility.ZipFileFunctionInternalCallback.FileIndex */
	uint8_t UnknownData64[0x4];
	ExternalPtr<struct UObject> Callback; /* Ofs: 0x68 Size: 0x8 - ObjectProperty ZipUtility.ZipFileFunctionInternalCallback.Callback */
	uint8_t boolField70;
	uint8_t boolField71;
	uint8_t boolField72;
	uint8_t UnknownData73[0x5];


	inline bool SetCompressionFormat(t_structHelper inst, TEnumAsByte<enum ZipUtilityCompressionFormat> value) { inst.WriteOffset(0x38, value); }
	inline bool Setfile(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetDestinationFolder(t_structHelper inst, FString value) { inst.WriteOffset(0x50, value); }
	inline bool SetFileIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetCallback(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x68, value); }
	inline bool bSingleFile()
	{
		return boolField70& 0x1;
	}
	inline bool SetbSingleFile(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFileFound()
	{
		return boolField71& 0x1;
	}
	inline bool SetbFileFound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x71, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUnzipto()
	{
		return boolField72& 0x1;
	}
	inline bool SetbUnzipto(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x72, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUZipFileFunctionInternalCallback = sizeof(UZipFileFunctionInternalCallback); // 120
    static_assert(sizeof(UZipFileFunctionInternalCallback) == 0x78, "Size of UZipFileFunctionInternalCallback is not correct.");
	auto constexpr UZipFileFunctionInternalCallback_CompressionFormat_Offset = offsetof(UZipFileFunctionInternalCallback, CompressionFormat);
	static_assert(UZipFileFunctionInternalCallback_CompressionFormat_Offset == 0x38, "UZipFileFunctionInternalCallback::CompressionFormat offset is not 38");
	auto constexpr UZipFileFunctionInternalCallback_file_Offset = offsetof(UZipFileFunctionInternalCallback, file);
	static_assert(UZipFileFunctionInternalCallback_file_Offset == 0x40, "UZipFileFunctionInternalCallback::file offset is not 40");
	auto constexpr UZipFileFunctionInternalCallback_DestinationFolder_Offset = offsetof(UZipFileFunctionInternalCallback, DestinationFolder);
	static_assert(UZipFileFunctionInternalCallback_DestinationFolder_Offset == 0x50, "UZipFileFunctionInternalCallback::DestinationFolder offset is not 50");
	auto constexpr UZipFileFunctionInternalCallback_FileIndex_Offset = offsetof(UZipFileFunctionInternalCallback, FileIndex);
	static_assert(UZipFileFunctionInternalCallback_FileIndex_Offset == 0x60, "UZipFileFunctionInternalCallback::FileIndex offset is not 60");
	auto constexpr UZipFileFunctionInternalCallback_Callback_Offset = offsetof(UZipFileFunctionInternalCallback, Callback);
	static_assert(UZipFileFunctionInternalCallback_Callback_Offset == 0x68, "UZipFileFunctionInternalCallback::Callback offset is not 68");
	auto constexpr UZipFileFunctionInternalCallback_boolField70_Offset = offsetof(UZipFileFunctionInternalCallback, boolField70);
	static_assert(UZipFileFunctionInternalCallback_boolField70_Offset == 0x70, "UZipFileFunctionInternalCallback::boolField70 offset is not 70");
	auto constexpr UZipFileFunctionInternalCallback_boolField71_Offset = offsetof(UZipFileFunctionInternalCallback, boolField71);
	static_assert(UZipFileFunctionInternalCallback_boolField71_Offset == 0x71, "UZipFileFunctionInternalCallback::boolField71 offset is not 71");
	auto constexpr UZipFileFunctionInternalCallback_boolField72_Offset = offsetof(UZipFileFunctionInternalCallback, boolField72);
	static_assert(UZipFileFunctionInternalCallback_boolField72_Offset == 0x72, "UZipFileFunctionInternalCallback::boolField72 offset is not 72");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
