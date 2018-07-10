#ifndef PACKETPEER_H
#define PACKETPEER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {



class GD_CPP_BINDING_API PacketPeer : public Reference {
public:

	void _init();



	Variant get_var() const;
	int put_var(const Variant var);
	PoolByteArray get_packet() const;
	Error put_packet(const PoolByteArray buffer);
	Error get_packet_error() const;
	int get_available_packet_count() const;
};

}
#endif
