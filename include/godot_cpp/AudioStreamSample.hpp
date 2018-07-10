#ifndef AUDIOSTREAMSAMPLE_H
#define AUDIOSTREAMSAMPLE_H

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



class GD_CPP_BINDING_API AudioStreamSample : public AudioStream {
public:

	void _init();



	void set_format(const int format);
	int get_format() const;
	void set_loop_mode(const int loop_mode);
	int get_loop_mode() const;
	void set_loop_begin(const int loop_begin);
	int get_loop_begin() const;
	void set_loop_end(const int loop_end);
	int get_loop_end() const;
	void set_mix_rate(const int mix_rate);
	int get_mix_rate() const;
	void set_stereo(const bool stereo);
	bool is_stereo() const;
	void set_data(const PoolByteArray data);
	PoolByteArray get_data() const;
};

}
#endif
