#pragma once

#include "../Core/Packet.h"
#include "../Math/BlockPos.h"
#include "../dll.h"

class BlockEventPacket : public Packet {
  BlockPos pos;
  int a, b;

  inline ~BlockEventPacket() {}
  MCAPI virtual MinecraftPacketIds getId() const;
  MCAPI virtual std::string getName() const;
  MCAPI virtual void write(BinaryStream &) const;
  MCAPI virtual PacketReadResult read(ReadOnlyBinaryStream &);
};