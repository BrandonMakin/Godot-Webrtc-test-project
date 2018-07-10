#ifndef ANIMATEDSPRITE3D_H
#define ANIMATEDSPRITE3D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "SpriteBase3D.hpp"


namespace godot {

class SpriteFrames;


class GD_CPP_BINDING_API AnimatedSprite3D : public SpriteBase3D {
public:

	void _init();



	void set_sprite_frames(const SpriteFrames *sprite_frames);
	SpriteFrames *get_sprite_frames() const;
	void set_animation(const String animation);
	String get_animation() const;
	void _set_playing(const bool playing);
	bool _is_playing() const;
	void play(const String anim);
	void stop();
	bool is_playing() const;
	void set_frame(const int frame);
	int get_frame() const;
	void _res_changed();
};

}
#endif
