#ifndef GEOMETRY_H
#define GEOMETRY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {



class GD_CPP_BINDING_API Geometry : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static Array build_box_planes(const Vector3 extents);
	static Array build_cylinder_planes(const float radius, const float height, const int sides, const int axis = 2);
	static Array build_capsule_planes(const float radius, const float height, const int sides, const int lats, const int axis = 2);
	static float segment_intersects_circle(const Vector2 segment_from, const Vector2 segment_to, const Vector2 circle_pos, const float circle_radius);
	static void segment_intersects_segment_2d(const Vector2 from_a, const Vector2 to_a, const Vector2 from_b, const Vector2 to_b);
	static PoolVector2Array get_closest_points_between_segments_2d(const Vector2 p1, const Vector2 q1, const Vector2 p2, const Vector2 q2);
	static PoolVector3Array get_closest_points_between_segments(const Vector3 p1, const Vector3 p2, const Vector3 q1, const Vector3 q2);
	static Vector2 get_closest_point_to_segment_2d(const Vector2 point, const Vector2 s1, const Vector2 s2);
	static Vector3 get_closest_point_to_segment(const Vector3 point, const Vector3 s1, const Vector3 s2);
	static Vector2 get_closest_point_to_segment_uncapped_2d(const Vector2 point, const Vector2 s1, const Vector2 s2);
	static Vector3 get_closest_point_to_segment_uncapped(const Vector3 point, const Vector3 s1, const Vector3 s2);
	static int get_uv84_normal_bit(const Vector3 normal);
	static void ray_intersects_triangle(const Vector3 from, const Vector3 dir, const Vector3 a, const Vector3 b, const Vector3 c);
	static void segment_intersects_triangle(const Vector3 from, const Vector3 to, const Vector3 a, const Vector3 b, const Vector3 c);
	static PoolVector3Array segment_intersects_sphere(const Vector3 from, const Vector3 to, const Vector3 spos, const float sradius);
	static PoolVector3Array segment_intersects_cylinder(const Vector3 from, const Vector3 to, const float height, const float radius);
	static PoolVector3Array segment_intersects_convex(const Vector3 from, const Vector3 to, const Array planes);
	static bool point_is_inside_triangle(const Vector2 point, const Vector2 a, const Vector2 b, const Vector2 c);
	static PoolIntArray triangulate_polygon(const PoolVector2Array polygon);
	static Dictionary make_atlas(const PoolVector2Array sizes);
};

}
#endif
