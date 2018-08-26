#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWidgetDesignFlags
{
   EWidgetDesignFlags__None = 0,
   EWidgetDesignFlags__Designing = 1,
   EWidgetDesignFlags__ShowOutline = 2,
   EWidgetDesignFlags__ExecutePreConstruct = 4,
   EWidgetDesignFlags__EWidgetDesignFlags_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
