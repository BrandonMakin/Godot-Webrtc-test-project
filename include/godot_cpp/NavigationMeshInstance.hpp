#ifndef NAVIGATIONMESHINSTANCE_H
#define NAVIGATIONMESHINSTANCE_H

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

class Object;


class GD_CPP_BINDING_API NavigationMeshInstance : public Spatial {
public:

	void _init();



	void set_navigation_mesh(const Object *navmesh);
	Object *get_navigation_mesh() const;
	void set_enabled(const bool enabled);
	bool is_enabled() const;
};

}
#endif
