#ifndef SPRITEFRAMES_H
#define SPRITEFRAMES_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Resource.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API SpriteFrames : public Resource {
public:

	void _init();



	void add_animation(const String anim);
	bool has_animation(const String anim) const;
	void remove_animation(const String anim);
	void rename_animation(const String anim, const String newname);
	void set_animation_speed(const String anim, const float speed);
	float get_animation_speed(const String anim) const;
	void set_animation_loop(const String anim, const bool loop);
	bool get_animation_loop(const String anim) const;
	void add_frame(const String anim, const Object *frame, const int atpos = -1);
	int get_frame_count(const String anim) const;
	Object *get_frame(const String anim, const int idx) const;
	void set_frame(const String anim, const int idx, const Object *txt);
	void remove_frame(const String anim, const int idx);
	void clear(const String anim);
	void clear_all();
	void _set_frames(const Array arg0);
	Array _get_frames() const;
	void _set_animations(const Array arg0);
	Array _get_animations() const;
};

}
#endif
