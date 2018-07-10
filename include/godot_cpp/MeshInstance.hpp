#ifndef MESHINSTANCE_H
#define MESHINSTANCE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "GeometryInstance.hpp"


namespace godot {

class Mesh;


class GD_CPP_BINDING_API MeshInstance : public GeometryInstance {
public:

	void _init();



	void set_mesh(const Mesh *mesh);
	Mesh *get_mesh() const;
	void set_skeleton_path(const NodePath skeleton_path);
	NodePath get_skeleton_path();
	void create_trimesh_collision();
	void create_convex_collision();
	void _mesh_changed();
};

}
#endif
