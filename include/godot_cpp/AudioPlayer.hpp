#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class AudioStream;
class Object;


class GD_CPP_BINDING_API AudioPlayer : public Node {
public:

	void _init();



	void set_stream(const AudioStream *stream);
	Object *get_stream() const;
	void set_volume_db(const float volume_db);
	float get_volume_db() const;
	void play(const float from_pos = 0);
	void seek(const float to_pos);
	void stop();
	bool is_playing() const;
	float get_pos();
	void set_bus(const String bus);
	String get_bus() const;
	void set_autoplay(const bool enable);
	bool is_autoplay_enabled();
	void set_mix_target(const int mix_target);
	int get_mix_target() const;
	void _set_playing(const bool enable);
	bool _is_active() const;
	void _bus_layout_changed();
};

}
#endif
