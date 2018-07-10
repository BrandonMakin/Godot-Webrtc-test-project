#ifndef COLORRAMP_H
#define COLORRAMP_H

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



class GD_CPP_BINDING_API ColorRamp : public Resource {
public:

	void _init();



	void add_point(const float offset, const Color color);
	void remove_point(const int offset);
	void set_offset(const int point, const float offset);
	float get_offset(const int point) const;
	void set_color(const int point, const Color color);
	Color get_color(const int point) const;
	Color interpolate(const float offset);
	int get_point_count() const;
	void set_offsets(const PoolRealArray offsets);
	PoolRealArray get_offsets() const;
	void set_colors(const PoolColorArray colors);
	PoolColorArray get_colors() const;
};

}
#endif
