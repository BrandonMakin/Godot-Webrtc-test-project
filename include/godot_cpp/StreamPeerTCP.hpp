#ifndef STREAMPEERTCP_H
#define STREAMPEERTCP_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "StreamPeer.hpp"


namespace godot {



class GD_CPP_BINDING_API StreamPeerTCP : public StreamPeer {
public:

	void _init();

	const static int STATUS_CONNECTED = 2;
	const static int STATUS_CONNECTING = 1;
	const static int STATUS_ERROR = 3;
	const static int STATUS_NONE = 0;


	int connect_to_host(const String host, const int port);
	bool is_connected_to_host() const;
	int get_status() const;
	String get_connected_host() const;
	int get_connected_port() const;
	void disconnect_from_host();
};

}
#endif
