#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComboBoxOption // Size: 0x28
{
public:
    FString Option_2_C6581DBE410A7C103FF128A81BE47388; /* Ofs: 0x0 Size: 0x10 StrProperty ComboBoxOption.ComboBoxOption.Option_2_C6581DBE410A7C103FF128A81BE47388 */
    FText DisplayOptionName_5_71F6878D4F686E950AAE279207CBAB84; /* Ofs: 0x10 Size: 0x18 TextProperty ComboBoxOption.ComboBoxOption.DisplayOptionName_5_71F6878D4F686E950AAE279207CBAB84 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComboBoxOption = sizeof(FComboBoxOption); // 40
    static_assert(sizeof(FComboBoxOption) == 0x28, "Size of FComboBoxOption is not correct.");
	auto constexpr FComboBoxOption_Option_2_C6581DBE410A7C103FF128A81BE47388_Offset = offsetof(FComboBoxOption, Option_2_C6581DBE410A7C103FF128A81BE47388);
	static_assert(FComboBoxOption_Option_2_C6581DBE410A7C103FF128A81BE47388_Offset == 0x0, "FComboBoxOption::Option_2_C6581DBE410A7C103FF128A81BE47388 offset is not 0");
	auto constexpr FComboBoxOption_DisplayOptionName_5_71F6878D4F686E950AAE279207CBAB84_Offset = offsetof(FComboBoxOption, DisplayOptionName_5_71F6878D4F686E950AAE279207CBAB84);
	static_assert(FComboBoxOption_DisplayOptionName_5_71F6878D4F686E950AAE279207CBAB84_Offset == 0x10, "FComboBoxOption::DisplayOptionName_5_71F6878D4F686E950AAE279207CBAB84 offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
