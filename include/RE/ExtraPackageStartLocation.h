#pragma once

#include "RE/BSExtraData.h"
#include "RE/ExtraDataTypes.h"
#include "RE/NiPoint3.h"


namespace RE
{
	class TESForm;


	struct WORLD_LOCATION
	{
		TESForm*	locationForm;	// 00
		NiPoint3	locPt;			// 08
		float		zRot;			// 14
	};
	STATIC_ASSERT(sizeof(WORLD_LOCATION) == 0x18);


	class ExtraPackageStartLocation : public BSExtraData
	{
	public:
		inline static constexpr auto RTTI = RTTI_ExtraPackageStartLocation;


		enum { kExtraTypeID = ExtraDataType::kPackageStartLocation };


		virtual ~ExtraPackageStartLocation();											// 00

		// override (BSExtraData)
		virtual ExtraDataType	GetType() const override;								// 01 - { return kPackageStartLocation; }
		virtual bool			IsNotEqual(const BSExtraData* a_rhs) const override;	// 02


		// members
		WORLD_LOCATION worldLoc;	// 10
	};
	STATIC_ASSERT(sizeof(ExtraPackageStartLocation) == 0x28);
}
