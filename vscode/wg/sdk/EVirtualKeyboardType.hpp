#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVirtualKeyboardType
{
   EVirtualKeyboardType__Default = 0,
   EVirtualKeyboardType__Number = 1,
   EVirtualKeyboardType__Web = 2,
   EVirtualKeyboardType__Email = 3,
   EVirtualKeyboardType__Password = 4,
   EVirtualKeyboardType__AlphaNumeric = 5,
   EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
