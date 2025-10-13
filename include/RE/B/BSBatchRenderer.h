#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTHashMap.h"

namespace RE
{
	class BSRenderPass;

	class BSBatchRenderer
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSBatchRenderer;
		inline static constexpr auto VTABLE = VTABLE_BSBatchRenderer;

		struct PersistentPassList
		{
			BSRenderPass* head;  // 000
			BSRenderPass* tail;  // 008
		};
		static_assert(sizeof(PersistentPassList) == 0x10);

		enum GeometryGroupUsage
		{
			kLOD0 = 0,
			kLOD1 = 1,
			kOpaqueDecalsMode89 = 2,  // refers to depth bias mode
			kOpaqueDecalsMode67 = 3,
			kBlendedDecals = 4,
			kDepth5 = 5,
			kDepth6 = 6,
			kTotal = 16
		};

		struct GeometryGroup
		{
			BSBatchRenderer*   batchRenderer;  // 000
			PersistentPassList passList;       // 008
			std::uintptr_t     UnkPtr4;        // 018
			float              depth;          // 020 Distance from geometry to camera location
			std::uint16_t      count;          // 024
			std::uint8_t       flags;          // 026
		};
		static_assert(sizeof(GeometryGroup) == 0x28);

		struct PassGroup
		{
			BSRenderPass* passes[5];      // 000
			std::uint32_t validPassBits;  // 028 OR'd with (1 << PassIndex)
		};
		static_assert(sizeof(PassGroup) == 0x30);

		virtual ~BSBatchRenderer();  // 00

		// add
		virtual void RegisterPass(BSRenderPass* a_pass, std::uint32_t a_technique);                                             // 01
		virtual void RegisterPassUnsorted(BSRenderPass* a_pass, std::uint32_t a_technique);                                     // 02
		virtual void RenderBatches(std::uint32_t a_startTechnique, std::uint32_t a_endTechnique, std::uint32_t a_renderFlags);  // 03

		// members
		BSTArray<PassGroup>                      renderPasses;         // 008
		BSTHashMap<std::uint32_t, std::uint32_t> renderPassMap;        // 020 - techniqueId -> passIndex
		std::uint32_t                            currentFirstPass;     // 050
		std::uint32_t                            currentLastPass;      // 054
		BSSimpleList<std::uint32_t>              activePassIndexList;  // 058
		std::int32_t                             groupingAlphas;       // 068
		bool                                     autoClearPasses;      // 06C
		GeometryGroup*                           geometryGroups[16];   // 070
		GeometryGroup*                           alphaGroup;           // 0F0
		void*                                    unk0F8;               // 0F8
		void*                                    unk100;               // 100
	};
	static_assert(sizeof(BSBatchRenderer) == 0x108);
}
