#ifndef PARTICLEATTRACTOR2D_H
#define PARTICLEATTRACTOR2D_H

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



class GD_CPP_BINDING_API ParticleAttractor2D : public Node2D {
public:

	void _init();



	void set_enabled(const bool enabled);
	bool is_enabled() const;
	void set_radius(const float radius);
	float get_radius() const;
	void set_disable_radius(const float radius);
	float get_disable_radius() const;
	void set_gravity(const float gravity);
	float get_gravity() const;
	void set_absorption(const float absorption);
	float get_absorption() const;
	void set_particles_path(const NodePath path);
	NodePath get_particles_path() const;
};

}
#endif
