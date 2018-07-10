#ifndef NAVIGATIONPOLYGONINSTANCE_H
#define NAVIGATIONPOLYGONINSTANCE_H

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

class NavigationPolygon;


class GD_CPP_BINDING_API NavigationPolygonInstance : public Node2D {
public:

	void _init();



	void set_navigation_polygon(const NavigationPolygon *navpoly);
	NavigationPolygon *get_navigation_polygon() const;
	void set_enabled(const bool enabled);
	bool is_enabled() const;
	void _navpoly_changed();
};

}
#endif
