#pragma once


namespace RE
{
	class BGSPerkEntry;


	class PerkEntryVisitor
	{
	public:
		inline static constexpr auto RTTI = RTTI_PerkEntryVisitor;


		enum class ReturnType : UInt32
		{
			kBreak,
			kContinue
		};


		virtual ReturnType Visit(BGSPerkEntry* a_perkEntry) = 0;	// 00
	};
}
