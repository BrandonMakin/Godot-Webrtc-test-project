#ifndef STREAMPEERBUFFER_H
#define STREAMPEERBUFFER_H

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

class StreamPeerBuffer;


class GD_CPP_BINDING_API StreamPeerBuffer : public StreamPeer {
public:

	void _init();



	void seek(const int pos);
	int get_size() const;
	int get_pos() const;
	void resize(const int size);
	void set_data_array(const PoolByteArray data);
	PoolByteArray get_data_array() const;
	void clear();
	StreamPeerBuffer *duplicate() const;
};

}
#endif
