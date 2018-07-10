#ifndef NINEPATCHRECT_H
#define NINEPATCHRECT_H

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

class Object;


class GD_CPP_BINDING_API NinePatchRect : public Control {
public:

	void _init();



	void set_texture(const Object *texture);
	Object *get_texture() const;
	void set_patch_margin(const int margin, const int value);
	int get_patch_margin(const int margin) const;
	void set_region_rect(const Rect2 rect);
	Rect2 get_region_rect() const;
	void set_draw_center(const bool draw_center);
	bool get_draw_center() const;
};

}
#endif
