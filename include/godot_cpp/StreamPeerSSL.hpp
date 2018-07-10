#ifndef STREAMPEERSSL_H
#define STREAMPEERSSL_H

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

class StreamPeer;


class GD_CPP_BINDING_API StreamPeerSSL : public StreamPeer {
public:

	void _init();

	const static int STATUS_CONNECTED = 1;
	const static int STATUS_DISCONNECTED = 0;
	const static int STATUS_ERROR_HOSTNAME_MISMATCH = 3;
	const static int STATUS_ERROR_NO_CERTIFICATE = 2;


	Error accept_stream(const StreamPeer *stream);
	Error connect_to_stream(const StreamPeer *stream, const bool validate_certs = false, const String for_hostname = "");
	int get_status() const;
	void disconnect_from_stream();
};

}
#endif
