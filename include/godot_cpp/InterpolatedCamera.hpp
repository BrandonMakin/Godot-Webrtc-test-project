#ifndef INTERPOLATEDCAMERA_H
#define INTERPOLATEDCAMERA_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Camera.hpp"


namespace godot {

class Camera;


class GD_CPP_BINDING_API InterpolatedCamera : public Camera {
public:

	void _init();



	void set_target_path(const NodePath target_path);
	NodePath get_target_path() const;
	void set_target(const Camera *target);
	void set_speed(const float speed);
	float get_speed() const;
	void set_interpolation_enabled(const bool target_path);
	bool is_interpolation_enabled() const;
};

}
#endif
