#ifndef VEHICLEBODY_H
#define VEHICLEBODY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "PhysicsBody.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API VehicleBody : public PhysicsBody {
public:

	void _init();



	void set_mass(const float mass);
	float get_mass() const;
	void set_friction(const float friction);
	float get_friction() const;
	void set_engine_force(const float engine_force);
	float get_engine_force() const;
	void set_brake(const float brake);
	float get_brake() const;
	void set_steering(const float steering);
	float get_steering() const;
	Vector3 get_linear_velocity() const;
	void _direct_state_changed(const Object *arg0);
};

}
#endif
