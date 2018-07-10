#ifndef AUDIOSTREAMOGGVORBIS_H
#define AUDIOSTREAMOGGVORBIS_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "AudioStream.hpp"


namespace godot {



class GD_CPP_BINDING_API AudioStreamOGGVorbis : public AudioStream {
public:

	void _init();



	void set_data(const PoolByteArray data);
	PoolByteArray get_data() const;
	void set_loop(const bool enable);
	bool has_loop() const;
};

}
#endif
