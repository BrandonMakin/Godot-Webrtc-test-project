#ifndef PATHFOLLOW2D_H
#define PATHFOLLOW2D_H

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



class GD_CPP_BINDING_API PathFollow2D : public Node2D {
public:

	void _init();



	void set_offset(const float offset);
	float get_offset() const;
	void set_h_offset(const float h_offset);
	float get_h_offset() const;
	void set_v_offset(const float v_offset);
	float get_v_offset() const;
	void set_unit_offset(const float unit_offset);
	float get_unit_offset() const;
	void set_rotate(const bool enable);
	bool is_rotating() const;
	void set_cubic_interpolation(const bool enable);
	bool get_cubic_interpolation() const;
	void set_loop(const bool loop);
	bool has_loop() const;
};

}
#endif
