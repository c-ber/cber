#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVehicleDifferential4W
{
   EVehicleDifferential4W__LimitedSlip_4W = 0,
   EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
   EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
   EVehicleDifferential4W__Open_4W = 3,
   EVehicleDifferential4W__Open_FrontDrive = 4,
   EVehicleDifferential4W__Open_RearDrive = 5,
   EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
