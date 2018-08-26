#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlateDataSheet // Size: 0x438
	: public UObject // Size: 0x30
{
private:
	typedef USlateDataSheet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1647); // id32("Class UMG.SlateDataSheet")
		return ptr;
	}
	ExternalPtr<struct UTexture2D> DataTexture; /* Ofs: 0x30 Size: 0x8 - ObjectProperty UMG.SlateDataSheet.DataTexture */
	uint8_t UnknownData38[0x400];


	inline bool SetDataTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlateDataSheet = sizeof(USlateDataSheet); // 1080
    static_assert(sizeof(USlateDataSheet) == 0x438, "Size of USlateDataSheet is not correct.");
	auto constexpr USlateDataSheet_DataTexture_Offset = offsetof(USlateDataSheet, DataTexture);
	static_assert(USlateDataSheet_DataTexture_Offset == 0x30, "USlateDataSheet::DataTexture offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
