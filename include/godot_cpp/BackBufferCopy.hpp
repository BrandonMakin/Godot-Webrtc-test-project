#ifndef BACKBUFFERCOPY_H
#define BACKBUFFERCOPY_H

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



class GD_CPP_BINDING_API BackBufferCopy : public Node2D {
public:

	void _init();

	const static int COPY_MODE_DISABLED = 0;
	const static int COPY_MODE_RECT = 1;
	const static int COPY_MODE_VIEWPORT = 2;


	void set_rect(const Rect2 rect);
	Rect2 get_rect() const;
	void set_copy_mode(const int copy_mode);
	int get_copy_mode() const;
};

}
#endif
