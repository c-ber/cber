#pragma once
#include "UDataAsset.hpp"
#include "FAnimInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimDB // Size: 0x180
	: public UDataAsset // Size: 0x38
{
private:
	typedef UAnimDB t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(408); // id32("Class TslGame.AnimDB")
		return ptr;
	}
	FAnimInfo Stand_Info; /* Ofs: 0x38 Size: 0x68 - StructProperty TslGame.AnimDB.Stand_Info */
	FAnimInfo Crouch_Info; /* Ofs: 0xA0 Size: 0x68 - StructProperty TslGame.AnimDB.Crouch_Info */
	FAnimInfo Prone_Info; /* Ofs: 0x108 Size: 0x68 - StructProperty TslGame.AnimDB.Prone_Info */
	float BlendSpaceSpeed_Walk; /* Ofs: 0x170 Size: 0x4 - FloatProperty TslGame.AnimDB.BlendSpaceSpeed_Walk */
	float BlendSpaceSpeed_Run; /* Ofs: 0x174 Size: 0x4 - FloatProperty TslGame.AnimDB.BlendSpaceSpeed_Run */
	float BlendSpaceSpeed_Sprint; /* Ofs: 0x178 Size: 0x4 - FloatProperty TslGame.AnimDB.BlendSpaceSpeed_Sprint */
	uint8_t UnknownData17C[0x4];


	inline bool SetStand_Info(t_structHelper inst, FAnimInfo value) { inst.WriteOffset(0x38, value); }
	inline bool SetCrouch_Info(t_structHelper inst, FAnimInfo value) { inst.WriteOffset(0xA0, value); }
	inline bool SetProne_Info(t_structHelper inst, FAnimInfo value) { inst.WriteOffset(0x108, value); }
	inline bool SetBlendSpaceSpeed_Walk(t_structHelper inst, float value) { inst.WriteOffset(0x170, value); }
	inline bool SetBlendSpaceSpeed_Run(t_structHelper inst, float value) { inst.WriteOffset(0x174, value); }
	inline bool SetBlendSpaceSpeed_Sprint(t_structHelper inst, float value) { inst.WriteOffset(0x178, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimDB = sizeof(UAnimDB); // 384
    static_assert(sizeof(UAnimDB) == 0x180, "Size of UAnimDB is not correct.");
	auto constexpr UAnimDB_Stand_Info_Offset = offsetof(UAnimDB, Stand_Info);
	static_assert(UAnimDB_Stand_Info_Offset == 0x38, "UAnimDB::Stand_Info offset is not 38");
	auto constexpr UAnimDB_Crouch_Info_Offset = offsetof(UAnimDB, Crouch_Info);
	static_assert(UAnimDB_Crouch_Info_Offset == 0xa0, "UAnimDB::Crouch_Info offset is not a0");
	auto constexpr UAnimDB_Prone_Info_Offset = offsetof(UAnimDB, Prone_Info);
	static_assert(UAnimDB_Prone_Info_Offset == 0x108, "UAnimDB::Prone_Info offset is not 108");
	auto constexpr UAnimDB_BlendSpaceSpeed_Walk_Offset = offsetof(UAnimDB, BlendSpaceSpeed_Walk);
	static_assert(UAnimDB_BlendSpaceSpeed_Walk_Offset == 0x170, "UAnimDB::BlendSpaceSpeed_Walk offset is not 170");
	auto constexpr UAnimDB_BlendSpaceSpeed_Run_Offset = offsetof(UAnimDB, BlendSpaceSpeed_Run);
	static_assert(UAnimDB_BlendSpaceSpeed_Run_Offset == 0x174, "UAnimDB::BlendSpaceSpeed_Run offset is not 174");
	auto constexpr UAnimDB_BlendSpaceSpeed_Sprint_Offset = offsetof(UAnimDB, BlendSpaceSpeed_Sprint);
	static_assert(UAnimDB_BlendSpaceSpeed_Sprint_Offset == 0x178, "UAnimDB::BlendSpaceSpeed_Sprint offset is not 178");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
