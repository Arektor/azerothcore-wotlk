#ifndef CustomPackets_h__
#define CustomPackets_h__

#include "Packet.h"

namespace WorldPackets
{
    namespace Custom
    {
        class CustomCombatRating final : public ServerPacket
        {
        public:
            CustomCombatRating() : ServerPacket(SMSG_UPDATE_CUSTOM_COMBAT_RATING, 1 + 4) {}

            WorldPacket const* Write() override;

            int8 ratingID = 0;
            int32 ratingAmount = 0;
        };
    }
}

#endif // CustomPackets_h__
