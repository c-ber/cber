#pragma once
#include "UNavAreaMeta.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavAreaMeta_SwitchByAgent // Size: 0xC8
	: public UNavAreaMeta // Size: 0x48
{
private:
	typedef UNavAreaMeta_SwitchByAgent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1033); // id32("Class Engine.NavAreaMeta_SwitchByAgent")
		return ptr;
	}
	ExternalPtr<struct UClass> Agent0Area; /* Ofs: 0x48 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent0Area */
	ExternalPtr<struct UClass> Agent1Area; /* Ofs: 0x50 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent1Area */
	ExternalPtr<struct UClass> Agent2Area; /* Ofs: 0x58 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent2Area */
	ExternalPtr<struct UClass> Agent3Area; /* Ofs: 0x60 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent3Area */
	ExternalPtr<struct UClass> Agent4Area; /* Ofs: 0x68 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent4Area */
	ExternalPtr<struct UClass> Agent5Area; /* Ofs: 0x70 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent5Area */
	ExternalPtr<struct UClass> Agent6Area; /* Ofs: 0x78 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent6Area */
	ExternalPtr<struct UClass> Agent7Area; /* Ofs: 0x80 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent7Area */
	ExternalPtr<struct UClass> Agent8Area; /* Ofs: 0x88 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent8Area */
	ExternalPtr<struct UClass> Agent9Area; /* Ofs: 0x90 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent9Area */
	ExternalPtr<struct UClass> Agent10Area; /* Ofs: 0x98 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent10Area */
	ExternalPtr<struct UClass> Agent11Area; /* Ofs: 0xA0 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent11Area */
	ExternalPtr<struct UClass> Agent12Area; /* Ofs: 0xA8 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent12Area */
	ExternalPtr<struct UClass> Agent13Area; /* Ofs: 0xB0 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent13Area */
	ExternalPtr<struct UClass> Agent14Area; /* Ofs: 0xB8 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent14Area */
	ExternalPtr<struct UClass> Agent15Area; /* Ofs: 0xC0 Size: 0x8 - ClassProperty Engine.NavAreaMeta_SwitchByAgent.Agent15Area */


	inline bool SetAgent0Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x48, value); }
	inline bool SetAgent1Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x50, value); }
	inline bool SetAgent2Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x58, value); }
	inline bool SetAgent3Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x60, value); }
	inline bool SetAgent4Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x68, value); }
	inline bool SetAgent5Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x70, value); }
	inline bool SetAgent6Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x78, value); }
	inline bool SetAgent7Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x80, value); }
	inline bool SetAgent8Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x88, value); }
	inline bool SetAgent9Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x90, value); }
	inline bool SetAgent10Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x98, value); }
	inline bool SetAgent11Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetAgent12Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetAgent13Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetAgent14Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetAgent15Area(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavAreaMeta_SwitchByAgent = sizeof(UNavAreaMeta_SwitchByAgent); // 200
    static_assert(sizeof(UNavAreaMeta_SwitchByAgent) == 0xC8, "Size of UNavAreaMeta_SwitchByAgent is not correct.");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent0Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent0Area_Offset == 0x48, "UNavAreaMeta_SwitchByAgent::Agent0Area offset is not 48");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent1Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent1Area_Offset == 0x50, "UNavAreaMeta_SwitchByAgent::Agent1Area offset is not 50");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent2Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent2Area_Offset == 0x58, "UNavAreaMeta_SwitchByAgent::Agent2Area offset is not 58");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent3Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent3Area_Offset == 0x60, "UNavAreaMeta_SwitchByAgent::Agent3Area offset is not 60");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent4Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent4Area_Offset == 0x68, "UNavAreaMeta_SwitchByAgent::Agent4Area offset is not 68");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent5Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent5Area_Offset == 0x70, "UNavAreaMeta_SwitchByAgent::Agent5Area offset is not 70");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent6Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent6Area_Offset == 0x78, "UNavAreaMeta_SwitchByAgent::Agent6Area offset is not 78");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent7Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent7Area_Offset == 0x80, "UNavAreaMeta_SwitchByAgent::Agent7Area offset is not 80");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent8Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent8Area_Offset == 0x88, "UNavAreaMeta_SwitchByAgent::Agent8Area offset is not 88");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent9Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent9Area_Offset == 0x90, "UNavAreaMeta_SwitchByAgent::Agent9Area offset is not 90");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent10Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent10Area_Offset == 0x98, "UNavAreaMeta_SwitchByAgent::Agent10Area offset is not 98");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent11Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent11Area_Offset == 0xa0, "UNavAreaMeta_SwitchByAgent::Agent11Area offset is not a0");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent12Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent12Area_Offset == 0xa8, "UNavAreaMeta_SwitchByAgent::Agent12Area offset is not a8");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent13Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent13Area_Offset == 0xb0, "UNavAreaMeta_SwitchByAgent::Agent13Area offset is not b0");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent14Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent14Area_Offset == 0xb8, "UNavAreaMeta_SwitchByAgent::Agent14Area offset is not b8");
	auto constexpr UNavAreaMeta_SwitchByAgent_Agent15Area_Offset = offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area);
	static_assert(UNavAreaMeta_SwitchByAgent_Agent15Area_Offset == 0xc0, "UNavAreaMeta_SwitchByAgent::Agent15Area offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
