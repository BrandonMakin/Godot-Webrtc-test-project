#ifndef QUAD_H
#define QUAD_H

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



class GD_CPP_BINDING_API Quad : public GeometryInstance {
public:

	void _init();



	void set_axis(const int axis);
	int get_axis() const;
	void set_size(const Vector2 size);
	Vector2 get_size() const;
	void set_centered(const bool centered);
	bool is_centered() const;
	void set_offset(const Vector2 offset);
	Vector2 get_offset() const;
};

}
#endif
