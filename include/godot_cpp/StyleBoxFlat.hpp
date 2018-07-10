#ifndef STYLEBOXFLAT_H
#define STYLEBOXFLAT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "StyleBox.hpp"


namespace godot {



class GD_CPP_BINDING_API StyleBoxFlat : public StyleBox {
public:

	void _init();



	void set_bg_color(const Color color);
	Color get_bg_color() const;
	void set_light_color(const Color color);
	Color get_light_color() const;
	void set_dark_color(const Color color);
	Color get_dark_color() const;
	void set_border_size(const int size);
	int get_border_size() const;
	void set_border_blend(const bool blend);
	bool get_border_blend() const;
	void set_draw_center(const bool size);
	bool get_draw_center() const;
};

}
#endif
