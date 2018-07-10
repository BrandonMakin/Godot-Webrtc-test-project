#ifndef SURFACETOOL_H
#define SURFACETOOL_H

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
class Mesh;


class GD_CPP_BINDING_API SurfaceTool : public Reference {
public:

	void _init();



	void begin(const int primitive);
	void add_vertex(const Vector3 vertex);
	void add_color(const Color color);
	void add_normal(const Vector3 normal);
	void add_tangent(const Plane tangent);
	void add_uv(const Vector2 uv);
	void add_uv2(const Vector2 uv2);
	void add_bones(const PoolIntArray bones);
	void add_weights(const PoolRealArray weights);
	void add_smooth_group(const bool smooth);
	void add_triangle_fan(const PoolVector3Array vertexes, const PoolVector2Array uvs = PoolVector2Array(), const PoolColorArray colors = PoolColorArray(), const PoolVector2Array uv2s = PoolVector2Array(), const PoolVector3Array normals = PoolVector3Array(), const Array tangents = Array());
	void set_material(const Material *material);
	void index();
	void deindex();
	void generate_normals();
	void add_index(const int index);
	Mesh *commit(const Mesh *existing = nullptr);
	void clear();
};

}
#endif
