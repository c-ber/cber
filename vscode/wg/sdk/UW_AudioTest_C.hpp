#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_AudioTest_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_AudioTest_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(95535); // id32("WidgetBlueprintGeneratedClass W_AudioTest.W_AudioTest_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> DistanceText; /* Ofs: 0x248 Size: 0x8 - ObjectProperty W_AudioTest.W_AudioTest_C.DistanceText */
	ExternalPtr<struct UTextBlock> OutputText; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_AudioTest.W_AudioTest_C.OutputText */


	inline bool SetDistanceText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetOutputText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_AudioTest_C = sizeof(UW_AudioTest_C); // 600
    static_assert(sizeof(UW_AudioTest_C) == 0x258, "Size of UW_AudioTest_C is not correct.");
	auto constexpr UW_AudioTest_C_DistanceText_Offset = offsetof(UW_AudioTest_C, DistanceText);
	static_assert(UW_AudioTest_C_DistanceText_Offset == 0x248, "UW_AudioTest_C::DistanceText offset is not 248");
	auto constexpr UW_AudioTest_C_OutputText_Offset = offsetof(UW_AudioTest_C, OutputText);
	static_assert(UW_AudioTest_C_OutputText_Offset == 0x250, "UW_AudioTest_C::OutputText offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
