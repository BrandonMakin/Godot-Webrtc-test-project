#ifndef PROXIMITYGROUP_H
#define PROXIMITYGROUP_H

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



class GD_CPP_BINDING_API ProximityGroup : public Spatial {
public:

	void _init();



	void set_group_name(const String name);
	void broadcast(const String name, const Variant parameters);
	void set_dispatch_mode(const int mode);
	void _proximity_group_broadcast(const String name, const Variant params);
	void set_grid_radius(const Vector3 radius);
	Vector3 get_grid_radius() const;
};

}
#endif
