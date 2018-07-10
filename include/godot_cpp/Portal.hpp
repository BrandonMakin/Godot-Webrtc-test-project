#ifndef PORTAL_H
#define PORTAL_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualInstance.hpp"


namespace godot {



class GD_CPP_BINDING_API Portal : public VisualInstance {
public:

	void _init();



	void set_shape(const PoolVector2Array points);
	PoolVector2Array get_shape() const;
	void set_enabled(const bool enable);
	bool is_enabled() const;
	void set_disable_distance(const float distance);
	float get_disable_distance() const;
	void set_disabled_color(const Color color);
	Color get_disabled_color() const;
	void set_connect_range(const float range);
	float get_connect_range() const;
};

}
#endif
