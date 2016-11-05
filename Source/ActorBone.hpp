#ifndef _NIMA_ACTORBONE_HPP_
#define _NIMA_ACTORBONE_HPP_

#include "ActorNode.hpp"

#include <nima/Vec2D.hpp>

namespace nima
{
	class Actor;
	class BlockReader;
	class ActorNode;

	class ActorBone : public ActorNode
	{
		protected:
			float m_Length;
			bool m_IsConnectedToImage;

		public:
			ActorBone();
			float length() const;
			void length(float l);
			bool isConnectedToImage() const;
			void isConnectedToImage(bool isIt);
			void getTipWorldTranslation(Vec2D& result);

			void resolveNodeIndices(ActorNode** nodes);
			ActorNode* makeInstance(Actor* resetActor);
			void copy(ActorBone* node, Actor* resetActor);

			static ActorBone* read(Actor* actor, BlockReader* reader, ActorBone* node = NULL);
	};
}
#endif