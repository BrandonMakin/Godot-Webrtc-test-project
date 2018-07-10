#ifndef CONTAINER_H
#define CONTAINER_H

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

class Control;


class GD_CPP_BINDING_API Container : public Control {
public:

	void _init();

	const static int NOTIFICATION_SORT_CHILDREN = 50;


	void _sort_children();
	void _child_minsize_changed();
	void queue_sort();
	void fit_child_in_rect(const Control *child, const Rect2 rect);
};

}
#endif
