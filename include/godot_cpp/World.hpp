#ifndef WORLD_H
#define WORLD_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Resource.hpp"


namespace godot {

class Environment;
class PhysicsDirectSpaceState;


class GD_CPP_BINDING_API World : public Resource {
public:

	void _init();



	RID get_space() const;
	RID get_scenario() const;
	void set_environment(const Environment *env);
	Environment *get_environment() const;
	PhysicsDirectSpaceState *get_direct_space_state();
};

}
#endif
