#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Control.hpp"


namespace godot {

class Texture;
class VideoStream;


class GD_CPP_BINDING_API VideoPlayer : public Control {
public:

	void _init();



	void set_stream(const VideoStream *stream);
	VideoStream *get_stream() const;
	void play();
	void stop();
	bool is_playing() const;
	void set_paused(const bool paused);
	bool is_paused() const;
	void set_volume(const float volume);
	float get_volume() const;
	void set_volume_db(const float db);
	float get_volume_db() const;
	void set_audio_track(const int track);
	int get_audio_track() const;
	String get_stream_name() const;
	float get_stream_pos() const;
	void set_autoplay(const bool enabled);
	bool has_autoplay() const;
	void set_expand(const bool enable);
	bool has_expand() const;
	void set_buffering_msec(const int msec);
	int get_buffering_msec() const;
	Texture *get_video_texture();
};

}
#endif
