#ifndef NETWORKEDMULTIPLAYERPEER_H
#define NETWORKEDMULTIPLAYERPEER_H

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



class GD_CPP_BINDING_API NetworkedMultiplayerPeer : public PacketPeer {
public:

	void _init();

	const static int CONNECTION_CONNECTED = 2;
	const static int CONNECTION_CONNECTING = 1;
	const static int CONNECTION_DISCONNECTED = 0;
	const static int TARGET_PEER_BROADCAST = 0;
	const static int TARGET_PEER_SERVER = 1;
	const static int TRANSFER_MODE_RELIABLE = 2;
	const static int TRANSFER_MODE_UNRELIABLE = 0;
	const static int TRANSFER_MODE_UNRELIABLE_ORDERED = 1;


	void set_transfer_mode(const int mode);
	void set_target_peer(const int id);
	int get_packet_peer() const;
	void poll();
	int get_connection_status() const;
	int get_unique_id() const;
	void set_refuse_new_connections(const bool enable);
	bool is_refusing_new_connections() const;
};

}
#endif
