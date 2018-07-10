#ifndef CANVASMODULATE_H
#define CANVASMODULATE_H

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



class GD_CPP_BINDING_API CanvasModulate : public Node2D {
public:

	void _init();



	void set_color(const Color color);
	Color get_color() const;
};

}
#endif
