#ifndef ANIMATION_H
#define ANIMATION_H

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



class GD_CPP_BINDING_API Animation : public Resource {
public:

	void _init();

	const static int INTERPOLATION_CUBIC = 2;
	const static int INTERPOLATION_LINEAR = 1;
	const static int INTERPOLATION_NEAREST = 0;
	const static int TYPE_METHOD = 2;
	const static int TYPE_TRANSFORM = 1;
	const static int TYPE_VALUE = 0;
	const static int UPDATE_CONTINUOUS = 0;
	const static int UPDATE_DISCRETE = 1;
	const static int UPDATE_TRIGGER = 2;


	int add_track(const int type, const int at_pos = -1);
	void remove_track(const int idx);
	int get_track_count() const;
	int track_get_type(const int idx) const;
	NodePath track_get_path(const int idx) const;
	void track_set_path(const int idx, const NodePath path);
	int find_track(const NodePath path) const;
	void track_move_up(const int idx);
	void track_move_down(const int idx);
	void track_set_imported(const int idx, const bool imported);
	bool track_is_imported(const int idx) const;
	int transform_track_insert_key(const int idx, const float time, const Vector3 loc, const Quat rot, const Vector3 scale);
	void track_insert_key(const int idx, const float time, const Variant key, const float transition = 1);
	void track_remove_key(const int idx, const int key_idx);
	void track_remove_key_at_pos(const int idx, const float pos);
	void track_set_key_value(const int idx, const int key, const Variant value);
	void track_set_key_transition(const int idx, const int key_idx, const float transition);
	float track_get_key_transition(const int idx, const int key_idx) const;
	int track_get_key_count(const int idx) const;
	void track_get_key_value(const int idx, const int key_idx) const;
	float track_get_key_time(const int idx, const int key_idx) const;
	int track_find_key(const int idx, const float time, const bool exact = false) const;
	void track_set_interpolation_type(const int idx, const int interpolation);
	int track_get_interpolation_type(const int idx) const;
	void track_set_interpolation_loop_wrap(const int idx, const bool interpolation);
	bool track_get_interpolation_loop_wrap(const int idx) const;
	Array transform_track_interpolate(const int idx, const float time_sec) const;
	void value_track_set_update_mode(const int idx, const int mode);
	int value_track_get_update_mode(const int idx) const;
	PoolIntArray value_track_get_key_indices(const int idx, const float time_sec, const float delta) const;
	PoolIntArray method_track_get_key_indices(const int idx, const float time_sec, const float delta) const;
	String method_track_get_name(const int idx, const int key_idx) const;
	Array method_track_get_params(const int idx, const int key_idx) const;
	void set_length(const float time_sec);
	float get_length() const;
	void set_loop(const bool enabled);
	bool has_loop() const;
	void set_step(const float size_sec);
	float get_step() const;
	void clear();
};

}
#endif
