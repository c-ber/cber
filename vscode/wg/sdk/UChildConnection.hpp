#pragma once
#include "UNetConnection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UChildConnection // Size: 0x65680
	: public UNetConnection // Size: 0x65680
{
private:
	typedef UChildConnection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1185); // id32("Class Engine.ChildConnection")
		return ptr;
	}
//	ExternalPtr<struct UNetConnection> Parent; /* Ofs: 0x65678 Size: 0x8 - ObjectProperty Engine.ChildConnection.Parent */


//	inline bool SetParent(t_structHelper inst, ExternalPtr<struct UNetConnection> value) { inst.WriteOffset(0x65678, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUChildConnection = sizeof(UChildConnection); // 415360
    static_assert(sizeof(UChildConnection) == 0x65680, "Size of UChildConnection is not correct.");
//	auto constexpr UChildConnection_Parent_Offset = offsetof(UChildConnection, Parent);
//	static_assert(UChildConnection_Parent_Offset == 0x65678, "UChildConnection::Parent offset is not 65678");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
