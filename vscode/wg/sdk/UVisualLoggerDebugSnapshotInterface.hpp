#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVisualLoggerDebugSnapshotInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UVisualLoggerDebugSnapshotInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1260); // id32("Class Engine.VisualLoggerDebugSnapshotInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVisualLoggerDebugSnapshotInterface = sizeof(UVisualLoggerDebugSnapshotInterface); // 48
    static_assert(sizeof(UVisualLoggerDebugSnapshotInterface) == 0x30, "Size of UVisualLoggerDebugSnapshotInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
