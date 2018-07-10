#ifndef EDITORSPATIALGIZMO_H
#define EDITORSPATIALGIZMO_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "SpatialGizmo.hpp"


namespace godot {

class Mesh;
class Material;
class Spatial;
class Camera;
class TriangleMesh;


class GD_CPP_BINDING_API EditorSpatialGizmo : public SpatialGizmo {
public:

	void _init();



	void redraw();
	String get_handle_name(const int index);
	Variant get_handle_value(const int index);
	void set_handle(const int index, const Camera *camera, const Vector2 point);
	void commit_handle(const int index, const Variant restore, const bool cancel);
	void add_lines(const PoolVector3Array lines, const Material *material, const bool billboard = false);
	void add_mesh(const Mesh *mesh, const bool billboard = false, const RID skeleton = RID());
	void add_collision_segments(const PoolVector3Array segments);
	void add_collision_triangles(const TriangleMesh *triangles);
	void add_unscaled_billboard(const Material *material, const float default_scale = 1);
	void add_handles(const PoolVector3Array handles, const bool billboard = false, const bool secondary = false);
	void set_spatial_node(const Spatial *node);
	void clear();
};

}
#endif
