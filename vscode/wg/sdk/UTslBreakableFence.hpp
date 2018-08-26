#pragma once
#include "UTslFence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBreakableFence // Size: 0x510
	: public UTslFence // Size: 0x4B0
{
private:
	typedef UTslBreakableFence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1379); // id32("Class TslGame.TslBreakableFence")
		return ptr;
	}
//	ExternalPtr<struct UTslReactionData> ReactionData; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.ReactionData */
	ExternalPtr<struct UDestructibleMesh> BeginDestuctible1; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.BeginDestuctible1 */
	ExternalPtr<struct UDestructibleMesh> BeginDestuctible2; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.BeginDestuctible2 */
	ExternalPtr<struct UDestructibleMesh> BeginDestuctible3; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.BeginDestuctible3 */
	ExternalPtr<struct UDestructibleMesh> BeginDestuctible4; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.BeginDestuctible4 */
	ExternalPtr<struct UDestructibleMesh> EndDestuctible1; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.EndDestuctible1 */
	ExternalPtr<struct UDestructibleMesh> EndDestuctible2; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.EndDestuctible2 */
	ExternalPtr<struct UDestructibleMesh> EndDestuctible3; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.EndDestuctible3 */
	ExternalPtr<struct UDestructibleMesh> EndDestuctible4; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.EndDestuctible4 */
	ExternalPtr<struct UDestructibleMesh> MiddleDestuctible1; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.MiddleDestuctible1 */
	ExternalPtr<struct UDestructibleMesh> MiddleDestuctible2; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.MiddleDestuctible2 */
	ExternalPtr<struct UDestructibleMesh> MiddleDestuctible3; /* Ofs: 0x500 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.MiddleDestuctible3 */
	ExternalPtr<struct UDestructibleMesh> MiddleDestuctible4; /* Ofs: 0x508 Size: 0x8 - ObjectProperty TslGame.TslBreakableFence.MiddleDestuctible4 */


//	inline bool SetReactionData(t_structHelper inst, ExternalPtr<struct UTslReactionData> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetBeginDestuctible1(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetBeginDestuctible2(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetBeginDestuctible3(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetBeginDestuctible4(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetEndDestuctible1(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetEndDestuctible2(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetEndDestuctible3(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetEndDestuctible4(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetMiddleDestuctible1(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetMiddleDestuctible2(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetMiddleDestuctible3(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x500, value); }
	inline bool SetMiddleDestuctible4(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x508, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBreakableFence = sizeof(UTslBreakableFence); // 1296
    static_assert(sizeof(UTslBreakableFence) == 0x510, "Size of UTslBreakableFence is not correct.");
//	auto constexpr UTslBreakableFence_ReactionData_Offset = offsetof(UTslBreakableFence, ReactionData);
//	static_assert(UTslBreakableFence_ReactionData_Offset == 0x4a8, "UTslBreakableFence::ReactionData offset is not 4a8");
	auto constexpr UTslBreakableFence_BeginDestuctible1_Offset = offsetof(UTslBreakableFence, BeginDestuctible1);
	static_assert(UTslBreakableFence_BeginDestuctible1_Offset == 0x4b0, "UTslBreakableFence::BeginDestuctible1 offset is not 4b0");
	auto constexpr UTslBreakableFence_BeginDestuctible2_Offset = offsetof(UTslBreakableFence, BeginDestuctible2);
	static_assert(UTslBreakableFence_BeginDestuctible2_Offset == 0x4b8, "UTslBreakableFence::BeginDestuctible2 offset is not 4b8");
	auto constexpr UTslBreakableFence_BeginDestuctible3_Offset = offsetof(UTslBreakableFence, BeginDestuctible3);
	static_assert(UTslBreakableFence_BeginDestuctible3_Offset == 0x4c0, "UTslBreakableFence::BeginDestuctible3 offset is not 4c0");
	auto constexpr UTslBreakableFence_BeginDestuctible4_Offset = offsetof(UTslBreakableFence, BeginDestuctible4);
	static_assert(UTslBreakableFence_BeginDestuctible4_Offset == 0x4c8, "UTslBreakableFence::BeginDestuctible4 offset is not 4c8");
	auto constexpr UTslBreakableFence_EndDestuctible1_Offset = offsetof(UTslBreakableFence, EndDestuctible1);
	static_assert(UTslBreakableFence_EndDestuctible1_Offset == 0x4d0, "UTslBreakableFence::EndDestuctible1 offset is not 4d0");
	auto constexpr UTslBreakableFence_EndDestuctible2_Offset = offsetof(UTslBreakableFence, EndDestuctible2);
	static_assert(UTslBreakableFence_EndDestuctible2_Offset == 0x4d8, "UTslBreakableFence::EndDestuctible2 offset is not 4d8");
	auto constexpr UTslBreakableFence_EndDestuctible3_Offset = offsetof(UTslBreakableFence, EndDestuctible3);
	static_assert(UTslBreakableFence_EndDestuctible3_Offset == 0x4e0, "UTslBreakableFence::EndDestuctible3 offset is not 4e0");
	auto constexpr UTslBreakableFence_EndDestuctible4_Offset = offsetof(UTslBreakableFence, EndDestuctible4);
	static_assert(UTslBreakableFence_EndDestuctible4_Offset == 0x4e8, "UTslBreakableFence::EndDestuctible4 offset is not 4e8");
	auto constexpr UTslBreakableFence_MiddleDestuctible1_Offset = offsetof(UTslBreakableFence, MiddleDestuctible1);
	static_assert(UTslBreakableFence_MiddleDestuctible1_Offset == 0x4f0, "UTslBreakableFence::MiddleDestuctible1 offset is not 4f0");
	auto constexpr UTslBreakableFence_MiddleDestuctible2_Offset = offsetof(UTslBreakableFence, MiddleDestuctible2);
	static_assert(UTslBreakableFence_MiddleDestuctible2_Offset == 0x4f8, "UTslBreakableFence::MiddleDestuctible2 offset is not 4f8");
	auto constexpr UTslBreakableFence_MiddleDestuctible3_Offset = offsetof(UTslBreakableFence, MiddleDestuctible3);
	static_assert(UTslBreakableFence_MiddleDestuctible3_Offset == 0x500, "UTslBreakableFence::MiddleDestuctible3 offset is not 500");
	auto constexpr UTslBreakableFence_MiddleDestuctible4_Offset = offsetof(UTslBreakableFence, MiddleDestuctible4);
	static_assert(UTslBreakableFence_MiddleDestuctible4_Offset == 0x508, "UTslBreakableFence::MiddleDestuctible4 offset is not 508");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
