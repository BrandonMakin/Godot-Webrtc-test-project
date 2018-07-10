#ifndef MESH_H
#define MESH_H

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

class Material;


class GD_CPP_BINDING_API Mesh : public Resource {
public:

	void _init();

	const static int ARRAY_BONES = 6;
	const static int ARRAY_COLOR = 3;
	const static int ARRAY_FORMAT_BONES = 64;
	const static int ARRAY_FORMAT_COLOR = 8;
	const static int ARRAY_FORMAT_INDEX = 256;
	const static int ARRAY_FORMAT_NORMAL = 2;
	const static int ARRAY_FORMAT_TANGENT = 4;
	const static int ARRAY_FORMAT_TEX_UV = 16;
	const static int ARRAY_FORMAT_TEX_UV2 = 32;
	const static int ARRAY_FORMAT_VERTEX = 1;
	const static int ARRAY_FORMAT_WEIGHTS = 128;
	const static int ARRAY_INDEX = 8;
	const static int ARRAY_NORMAL = 1;
	const static int ARRAY_TANGENT = 2;
	const static int ARRAY_TEX_UV = 4;
	const static int ARRAY_TEX_UV2 = 5;
	const static int ARRAY_VERTEX = 0;
	const static int ARRAY_WEIGHTS = 7;
	const static int ARRAY_WEIGHTS_SIZE = 4;
	const static int NO_INDEX_ARRAY = -1;
	const static int PRIMITIVE_LINES = 1;
	const static int PRIMITIVE_LINE_LOOP = 3;
	const static int PRIMITIVE_LINE_STRIP = 2;
	const static int PRIMITIVE_POINTS = 0;
	const static int PRIMITIVE_TRIANGLES = 4;
	const static int PRIMITIVE_TRIANGLE_FAN = 6;
	const static int PRIMITIVE_TRIANGLE_STRIP = 5;


	void add_blend_shape(const String name);
	int get_blend_shape_count() const;
	String get_blend_shape_name(const int index) const;
	void clear_blend_shapes();
	void set_blend_shape_mode(const int mode);
	int get_blend_shape_mode() const;
	void add_surface_from_arrays(const int primitive, const Array arrays, const Array blend_shapes = Array(), const int compress_flags = 97792);
	int get_surface_count() const;
	void surface_remove(const int surf_idx);
	int surface_get_array_len(const int surf_idx) const;
	int surface_get_array_index_len(const int surf_idx) const;
	int surface_get_format(const int surf_idx) const;
	int surface_get_primitive_type(const int surf_idx) const;
	void surface_set_material(const int surf_idx, const Material *material);
	Material *surface_get_material(const int surf_idx) const;
	void surface_set_name(const int surf_idx, const String name);
	String surface_get_name(const int surf_idx) const;
	void center_geometry();
	void regen_normalmaps();
	void set_custom_aabb(const Rect3 aabb);
	Rect3 get_custom_aabb() const;
};

}
#endif
