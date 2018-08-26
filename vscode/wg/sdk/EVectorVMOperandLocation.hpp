#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVectorVMOperandLocation
{
   EVectorVMOperandLocation__Register = 0,
   EVectorVMOperandLocation__Constant = 1,
   EVectorVMOperandLocation__Num = 2,
   EVectorVMOperandLocation__EVectorVMOperandLocation_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
