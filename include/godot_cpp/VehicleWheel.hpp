#ifndef VEHICLEWHEEL_H
#define VEHICLEWHEEL_H

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



class GD_CPP_BINDING_API VehicleWheel : public Spatial {
public:

	void _init();



	void set_radius(const float length);
	float get_radius() const;
	void set_suspension_rest_length(const float length);
	float get_suspension_rest_length() const;
	void set_suspension_travel(const float length);
	float get_suspension_travel() const;
	void set_suspension_stiffness(const float length);
	float get_suspension_stiffness() const;
	void set_suspension_max_force(const float length);
	float get_suspension_max_force() const;
	void set_damping_compression(const float length);
	float get_damping_compression() const;
	void set_damping_relaxation(const float length);
	float get_damping_relaxation() const;
	void set_use_as_traction(const bool enable);
	bool is_used_as_traction() const;
	void set_use_as_steering(const bool enable);
	bool is_used_as_steering() const;
	void set_friction_slip(const float length);
	float get_friction_slip() const;
};

}
#endif
