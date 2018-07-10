#ifndef ANIMATIONPLAYER_H
#define ANIMATIONPLAYER_H

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

class Animation;
class Object;


class GD_CPP_BINDING_API AnimationPlayer : public Node {
public:

	void _init();

	const static int ANIMATION_PROCESS_FIXED = 0;
	const static int ANIMATION_PROCESS_IDLE = 1;


	void _node_removed(const Object *arg0);
	void _animation_changed();
	int add_animation(const String name, const Animation *animation);
	void remove_animation(const String name);
	void rename_animation(const String name, const String newname);
	bool has_animation(const String name) const;
	Animation *get_animation(const String name) const;
	PoolStringArray get_animation_list() const;
	void animation_set_next(const String anim_from, const String anim_to);
	String animation_get_next(const String anim_from) const;
	void set_blend_time(const String anim_from, const String anim_to, const float sec);
	float get_blend_time(const String anim_from, const String anim_to) const;
	void set_default_blend_time(const float sec);
	float get_default_blend_time() const;
	void play(const String name, const float custom_blend = -1, const float custom_speed = 1, const bool from_end = false);
	void play_backwards(const String name, const float custom_blend = -1);
	void stop(const bool reset = true);
	void stop_all();
	bool is_playing() const;
	void set_current_animation(const String anim);
	String get_current_animation() const;
	void queue(const String name);
	void clear_queue();
	void set_active(const bool active);
	bool is_active() const;
	void set_speed_scale(const float speed);
	float get_speed_scale() const;
	void set_autoplay(const String name);
	String get_autoplay() const;
	void set_root(const NodePath path);
	NodePath get_root() const;
	void seek(const float pos_sec, const bool update = false);
	float get_pos() const;
	String find_animation(const Animation *animation) const;
	void clear_caches();
	void set_animation_process_mode(const int mode);
	int get_animation_process_mode() const;
	float get_current_animation_pos() const;
	float get_current_animation_length() const;
	void advance(const float delta);
};

}
#endif
