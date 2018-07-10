#ifndef MULTIMESH_H
#define MULTIMESH_H

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

class Mesh;


class GD_CPP_BINDING_API MultiMesh : public Resource {
public:

	void _init();

	const static int COLOR_8BIT = 1;
	const static int COLOR_FLOAT = 2;
	const static int COLOR_NONE = 0;
	const static int TRANSFORM_2D = 0;
	const static int TRANSFORM_3D = 1;


	void set_mesh(const Mesh *mesh);
	Mesh *get_mesh() const;
	void set_color_format(const int format);
	int get_color_format() const;
	void set_transform_format(const int format);
	int get_transform_format() const;
	void set_instance_count(const int count);
	int get_instance_count() const;
	void set_instance_transform(const int instance, const Transform transform);
	Transform get_instance_transform(const int instance) const;
	void set_instance_color(const int instance, const Color color);
	Color get_instance_color(const int instance) const;
	Rect3 get_aabb() const;
	void _set_transform_array(const PoolVector3Array arg0);
	PoolVector3Array _get_transform_array() const;
	void _set_color_array(const PoolColorArray arg0);
	PoolColorArray _get_color_array() const;
};

}
#endif
