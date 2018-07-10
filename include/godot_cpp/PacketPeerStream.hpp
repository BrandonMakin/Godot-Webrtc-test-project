#ifndef PACKETPEERSTREAM_H
#define PACKETPEERSTREAM_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "PacketPeer.hpp"


namespace godot {

class StreamPeer;


class GD_CPP_BINDING_API PacketPeerStream : public PacketPeer {
public:

	void _init();



	void set_stream_peer(const StreamPeer *peer);
};

}
#endif
