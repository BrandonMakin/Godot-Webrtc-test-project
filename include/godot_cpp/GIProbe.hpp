#ifndef GIPROBE_H
#define GIPROBE_H

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

class Object;


class GD_CPP_BINDING_API GIProbe : public VisualInstance {
public:

	void _init();

	const static int SUBDIV_128 = 1;
	const static int SUBDIV_256 = 2;
	const static int SUBDIV_64 = 0;
	const static int SUBDIV_MAX = 4;


	void set_probe_data(const Object *data);
	Object *get_probe_data() const;
	void set_subdiv(const int subdiv);
	int get_subdiv() const;
	void set_extents(const Vector3 extents);
	Vector3 get_extents() const;
	void set_dynamic_range(const int max);
	int get_dynamic_range() const;
	void set_energy(const float max);
	float get_energy() const;
	void set_bias(const float max);
	float get_bias() const;
	void set_propagation(const float max);
	float get_propagation() const;
	void set_interior(const bool enable);
	bool is_interior() const;
	void set_compress(const bool enable);
	bool is_compressed() const;
	void bake(const Object *from_node = nullptr, const bool create_visual_debug = false);
	void debug_bake();
};

}
#endif
