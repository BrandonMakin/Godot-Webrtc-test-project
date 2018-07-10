#ifndef TEXTUREPROGRESS_H
#define TEXTUREPROGRESS_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Range.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API TextureProgress : public Range {
public:

	void _init();

	const static int FILL_BOTTOM_TO_TOP = 3;
	const static int FILL_CLOCKWISE = 4;
	const static int FILL_COUNTER_CLOCKWISE = 5;
	const static int FILL_LEFT_TO_RIGHT = 0;
	const static int FILL_RIGHT_TO_LEFT = 1;
	const static int FILL_TOP_TO_BOTTOM = 2;


	void set_under_texture(const Object *tex);
	Object *get_under_texture() const;
	void set_progress_texture(const Object *tex);
	Object *get_progress_texture() const;
	void set_over_texture(const Object *tex);
	Object *get_over_texture() const;
	void set_fill_mode(const int mode);
	int get_fill_mode();
	void set_radial_initial_angle(const float mode);
	float get_radial_initial_angle();
	void set_radial_center_offset(const Vector2 mode);
	Vector2 get_radial_center_offset();
	void set_fill_degrees(const float mode);
	float get_fill_degrees();
};

}
#endif
