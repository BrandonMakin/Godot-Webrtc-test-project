#ifndef CAMERA2D_H
#define CAMERA2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node2D.hpp"


namespace godot {

class Viewport;
class Object;


class GD_CPP_BINDING_API Camera2D : public Node2D {
public:

	void _init();

	const static int ANCHOR_MODE_DRAG_CENTER = 1;
	const static int ANCHOR_MODE_FIXED_TOP_LEFT = 0;


	void set_offset(const Vector2 offset);
	Vector2 get_offset() const;
	void set_anchor_mode(const int anchor_mode);
	int get_anchor_mode() const;
	void set_rotating(const bool rotating);
	bool is_rotating() const;
	void make_current();
	void clear_current();
	void _make_current(const Object *arg0);
	void _update_scroll();
	void _set_current(const bool current);
	bool is_current() const;
	void set_limit(const int margin, const int limit);
	int get_limit(const int margin) const;
	void set_limit_smoothing_enabled(const bool limit_smoothing_enabled);
	bool is_limit_smoothing_enabled() const;
	void set_v_drag_enabled(const bool enabled);
	bool is_v_drag_enabled() const;
	void set_h_drag_enabled(const bool enabled);
	bool is_h_drag_enabled() const;
	void set_v_offset(const float ofs);
	float get_v_offset() const;
	void set_h_offset(const float ofs);
	float get_h_offset() const;
	void set_drag_margin(const int margin, const float drag_margin);
	float get_drag_margin(const int margin) const;
	Vector2 get_camera_pos() const;
	Vector2 get_camera_screen_center() const;
	void set_zoom(const Vector2 zoom);
	Vector2 get_zoom() const;
	void set_custom_viewport(const Viewport *viewport);
	Viewport *get_custom_viewport() const;
	void set_follow_smoothing(const float follow_smoothing);
	float get_follow_smoothing() const;
	void set_enable_follow_smoothing(const bool follow_smoothing);
	bool is_follow_smoothing_enabled() const;
	void force_update_scroll();
	void reset_smoothing();
	void align();
	void _set_old_smoothing(const float follow_smoothing);
};

}
#endif
