#ifndef REFLECTIONPROBE_H
#define REFLECTIONPROBE_H

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



class GD_CPP_BINDING_API ReflectionProbe : public VisualInstance {
public:

	void _init();

	const static int UPDATE_ALWAYS = 1;
	const static int UPDATE_ONCE = 0;


	void set_intensity(const float intensity);
	float get_intensity() const;
	void set_interior_ambient(const Color ambient);
	Color get_interior_ambient() const;
	void set_interior_ambient_energy(const float ambient_energy);
	float get_interior_ambient_energy() const;
	void set_interior_ambient_probe_contribution(const float ambient_probe_contribution);
	float get_interior_ambient_probe_contribution() const;
	void set_max_distance(const float max_distance);
	float get_max_distance() const;
	void set_extents(const Vector3 extents);
	Vector3 get_extents() const;
	void set_origin_offset(const Vector3 origin_offset);
	Vector3 get_origin_offset() const;
	void set_as_interior(const bool enable);
	bool is_set_as_interior() const;
	void set_enable_box_projection(const bool enable);
	bool is_box_projection_enabled() const;
	void set_enable_shadows(const bool enable);
	bool are_shadows_enabled() const;
	void set_cull_mask(const int layers);
	int get_cull_mask() const;
	void set_update_mode(const int mode);
	int get_update_mode() const;
};

}
#endif
