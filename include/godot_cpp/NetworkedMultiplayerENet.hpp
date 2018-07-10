#ifndef NETWORKEDMULTIPLAYERENET_H
#define NETWORKEDMULTIPLAYERENET_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "NetworkedMultiplayerPeer.hpp"


namespace godot {



class GD_CPP_BINDING_API NetworkedMultiplayerENet : public NetworkedMultiplayerPeer {
public:

	void _init();

	const static int COMPRESS_FASTLZ = 2;
	const static int COMPRESS_NONE = 0;
	const static int COMPRESS_RANGE_CODER = 1;
	const static int COMPRESS_ZLIB = 3;


	int create_server(const int port, const int max_clients = 32, const int in_bandwidth = 0, const int out_bandwidth = 0);
	int create_client(const String ip, const int port, const int in_bandwidth = 0, const int out_bandwidth = 0);
	void close_connection();
	void set_compression_mode(const int mode);
	int get_compression_mode() const;
	void set_bind_ip(const String ip);
};

}
#endif
