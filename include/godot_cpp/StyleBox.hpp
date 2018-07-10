#ifndef STYLEBOX_H
#define STYLEBOX_H

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



class GD_CPP_BINDING_API StyleBox : public Resource {
public:

	void _init();



	bool test_mask(const Vector2 point, const Rect2 rect) const;
	void set_default_margin(const int margin, const float offset);
	float get_default_margin(const int margin) const;
	float get_margin(const int margin) const;
	Vector2 get_minimum_size() const;
	Vector2 get_center_size() const;
	Vector2 get_offset() const;
	void draw(const RID canvas_item, const Rect2 rect) const;
};

}
#endif
