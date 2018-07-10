#ifndef PACKETPEERUDP_H
#define PACKETPEERUDP_H

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



class GD_CPP_BINDING_API PacketPeerUDP : public PacketPeer {
public:

	void _init();



	Error listen(const int port, const String bind_address = "*", const int recv_buf_size = 65536);
	void close();
	Error wait();
	bool is_listening() const;
	String get_packet_ip() const;
	int get_packet_port() const;
	int set_dest_address(const String host, const int port);
};

}
#endif
