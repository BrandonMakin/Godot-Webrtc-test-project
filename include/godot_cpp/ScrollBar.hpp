#ifndef SCROLLBAR_H
#define SCROLLBAR_H

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



class GD_CPP_BINDING_API ScrollBar : public Range {
public:

	void _init();



	void _gui_input(const InputEvent arg0);
	void set_custom_step(const float step);
	float get_custom_step() const;
	void _drag_slave_input(const InputEvent arg0);
	void _drag_slave_exit();
};

}
#endif
