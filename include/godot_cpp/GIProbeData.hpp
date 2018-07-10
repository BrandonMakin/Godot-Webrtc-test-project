#ifndef GIPROBEDATA_H
#define GIPROBEDATA_H

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



class GD_CPP_BINDING_API GIProbeData : public Resource {
public:

	void _init();



	void set_bounds(const Rect3 bounds);
	Rect3 get_bounds() const;
	void set_cell_size(const float cell_size);
	float get_cell_size() const;
	void set_to_cell_xform(const Transform to_cell_xform);
	Transform get_to_cell_xform() const;
	void set_dynamic_data(const PoolIntArray dynamic_data);
	PoolIntArray get_dynamic_data() const;
	void set_dynamic_range(const int dynamic_range);
	int get_dynamic_range() const;
	void set_energy(const float energy);
	float get_energy() const;
	void set_bias(const float bias);
	float get_bias() const;
	void set_propagation(const float propagation);
	float get_propagation() const;
	void set_interior(const bool interior);
	bool is_interior() const;
	void set_compress(const bool compress);
	bool is_compressed() const;
};

}
#endif
