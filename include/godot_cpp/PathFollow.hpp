#ifndef PATHFOLLOW_H
#define PATHFOLLOW_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {



class GD_CPP_BINDING_API PathFollow : public Spatial {
public:

	void _init();

	const static int ROTATION_NONE = 0;
	const static int ROTATION_XY = 2;
	const static int ROTATION_XYZ = 3;
	const static int ROTATION_Y = 1;


	void set_offset(const float offset);
	float get_offset() const;
	void set_h_offset(const float h_offset);
	float get_h_offset() const;
	void set_v_offset(const float v_offset);
	float get_v_offset() const;
	void set_unit_offset(const float unit_offset);
	float get_unit_offset() const;
	void set_rotation_mode(const int rotation_mode);
	int get_rotation_mode() const;
	void set_cubic_interpolation(const bool enable);
	bool get_cubic_interpolation() const;
	void set_loop(const bool loop);
	bool has_loop() const;
};

}
#endif
