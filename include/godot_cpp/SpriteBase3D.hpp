#ifndef SPRITEBASE3D_H
#define SPRITEBASE3D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "GeometryInstance.hpp"


namespace godot {



class GD_CPP_BINDING_API SpriteBase3D : public GeometryInstance {
public:

	void _init();

	const static int ALPHA_CUT_DISABLED = 0;
	const static int ALPHA_CUT_DISCARD = 1;
	const static int ALPHA_CUT_OPAQUE_PREPASS = 2;
	const static int FLAG_MAX = 2;
	const static int FLAG_SHADED = 1;
	const static int FLAG_TRANSPARENT = 0;


	void set_centered(const bool centered);
	bool is_centered() const;
	void set_offset(const Vector2 offset);
	Vector2 get_offset() const;
	void set_flip_h(const bool flip_h);
	bool is_flipped_h() const;
	void set_flip_v(const bool flip_v);
	bool is_flipped_v() const;
	void set_modulate(const Color modulate);
	Color get_modulate() const;
	void set_opacity(const float opacity);
	float get_opacity() const;
	void set_pixel_size(const float pixel_size);
	float get_pixel_size() const;
	void set_axis(const int axis);
	int get_axis() const;
	void set_draw_flag(const int flag, const bool enabled);
	bool get_draw_flag(const int flag) const;
	void set_alpha_cut_mode(const int mode);
	int get_alpha_cut_mode() const;
	Rect2 get_item_rect() const;
	void _queue_update();
	void _im_update();
};

}
#endif
