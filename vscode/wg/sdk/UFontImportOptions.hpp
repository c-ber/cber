#pragma once
#include "FFontImportOptionsData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFontImportOptions // Size: 0xE0
	: public UObject // Size: 0x30
{
private:
	typedef UFontImportOptions t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(774); // id32("Class Engine.FontImportOptions")
		return ptr;
	}
	FFontImportOptionsData Data; /* Ofs: 0x30 Size: 0xB0 - StructProperty Engine.FontImportOptions.Data */


	inline bool SetData(t_structHelper inst, FFontImportOptionsData value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFontImportOptions = sizeof(UFontImportOptions); // 224
    static_assert(sizeof(UFontImportOptions) == 0xE0, "Size of UFontImportOptions is not correct.");
	auto constexpr UFontImportOptions_Data_Offset = offsetof(UFontImportOptions, Data);
	static_assert(UFontImportOptions_Data_Offset == 0x30, "UFontImportOptions::Data offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
