#include "CustomPackets.h"

WorldPacket const* WorldPackets::Custom::CustomCombatRating::Write()
{
    _worldPacket << int8(ratingID);
    _worldPacket << int32(ratingAmount);
    return &_worldPacket;
}
