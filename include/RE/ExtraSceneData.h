#pragma once

#include "RE/BSExtraData.h"
#include "RE/ExtraDataTypes.h"


namespace RE
{
	class BGSScene;


	class ExtraSceneData : public BSExtraData
	{
	public:
		inline static constexpr auto RTTI = RTTI_ExtraSceneData;


		enum { kExtraTypeID = ExtraDataType::kSceneData };


		virtual ~ExtraSceneData();														// 00

		// override (BSExtraData)
		virtual ExtraDataType	GetType() const override;								// 01 - { return kSceneData; }
		virtual bool			IsNotEqual(const BSExtraData* a_rhs) const override;	// 02 - { return unk10 != a_rhs->unk10; }


		// members
		BGSScene* scene;	// 10
	};
	STATIC_ASSERT(sizeof(ExtraSceneData) == 0x18);
}
