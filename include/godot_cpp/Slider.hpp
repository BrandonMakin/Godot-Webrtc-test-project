#ifndef SLIDER_H
#define SLIDER_H

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



class GD_CPP_BINDING_API Slider : public Range {
public:

	void _init();



	void _gui_input(const InputEvent arg0);
	void set_ticks(const int count);
	int get_ticks() const;
	bool get_ticks_on_borders() const;
	void set_ticks_on_borders(const bool ticks_on_border);
};

}
#endif
