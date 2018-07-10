#ifndef ASTAR_H
#define ASTAR_H

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



class GD_CPP_BINDING_API AStar : public Reference {
public:

	void _init();



	void _estimate_cost(const int from_id, const int to_id) const;
	void _compute_cost(const int from_id, const int to_id) const;
	int get_available_point_id() const;
	void add_point(const int id, const Vector3 pos, const float weight_scale = 1);
	Vector3 get_point_pos(const int id) const;
	float get_point_weight_scale(const int id) const;
	void remove_point(const int id);
	void connect_points(const int id, const int to_id);
	void disconnect_points(const int id, const int to_id);
	bool are_points_connected(const int id, const int to_id) const;
	void clear();
	int get_closest_point(const Vector3 to_pos) const;
	Vector3 get_closest_pos_in_segment(const Vector3 to_pos) const;
	PoolVector3Array get_point_path(const int from_id, const int to_id);
	PoolIntArray get_id_path(const int from_id, const int to_id);
};

}
#endif
