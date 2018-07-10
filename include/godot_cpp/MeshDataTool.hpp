#ifndef MESHDATATOOL_H
#define MESHDATATOOL_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {

class Material;
class Object;


class GD_CPP_BINDING_API MeshDataTool : public Reference {
public:

	void _init();



	void clear();
	int create_from_surface(const Object *mesh, const int surface);
	int commit_to_surface(const Object *mesh);
	int get_format() const;
	int get_vertex_count() const;
	int get_edge_count() const;
	int get_face_count() const;
	void set_vertex(const int idx, const Vector3 vertex);
	Vector3 get_vertex(const int idx) const;
	void set_vertex_normal(const int idx, const Vector3 normal);
	Vector3 get_vertex_normal(const int idx) const;
	void set_vertex_tangent(const int idx, const Plane tangent);
	Plane get_vertex_tangent(const int idx) const;
	void set_vertex_uv(const int idx, const Vector2 uv);
	Vector2 get_vertex_uv(const int idx) const;
	void set_vertex_uv2(const int idx, const Vector2 uv2);
	Vector2 get_vertex_uv2(const int idx) const;
	void set_vertex_color(const int idx, const Color color);
	Color get_vertex_color(const int idx) const;
	void set_vertex_bones(const int idx, const PoolIntArray bones);
	PoolIntArray get_vertex_bones(const int idx) const;
	void set_vertex_weights(const int idx, const PoolRealArray weights);
	PoolRealArray get_vertex_weights(const int idx) const;
	void set_vertex_meta(const int idx, const Variant meta);
	void get_vertex_meta(const int idx) const;
	PoolIntArray get_vertex_edges(const int idx) const;
	PoolIntArray get_vertex_faces(const int idx) const;
	int get_edge_vertex(const int idx, const int vertex) const;
	PoolIntArray get_edge_faces(const int idx) const;
	void set_edge_meta(const int idx, const Variant meta);
	void get_edge_meta(const int idx) const;
	int get_face_vertex(const int idx, const int vertex) const;
	int get_face_edge(const int idx, const int edge) const;
	void set_face_meta(const int idx, const Variant meta);
	void get_face_meta(const int idx) const;
	Vector3 get_face_normal(const int idx) const;
	void set_material(const Material *material);
	Object *get_material() const;
};

}
#endif
