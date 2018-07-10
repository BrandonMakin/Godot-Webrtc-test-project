#ifndef SKELETON_H
#define SKELETON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {

class Node;


class GD_CPP_BINDING_API Skeleton : public Spatial {
public:

	void _init();

	const static int NOTIFICATION_UPDATE_SKELETON = 50;


	void add_bone(const String name);
	int find_bone(const String name) const;
	String get_bone_name(const int bone_idx) const;
	int get_bone_parent(const int bone_idx) const;
	void set_bone_parent(const int bone_idx, const int parent_idx);
	int get_bone_count() const;
	void unparent_bone_and_rest(const int bone_idx);
	Transform get_bone_rest(const int bone_idx) const;
	void set_bone_rest(const int bone_idx, const Transform rest);
	void set_bone_disable_rest(const int bone_idx, const bool disable);
	bool is_bone_rest_disabled(const int bone_idx) const;
	void bind_child_node_to_bone(const int bone_idx, const Node *node);
	void unbind_child_node_from_bone(const int bone_idx, const Node *node);
	Array get_bound_child_nodes_to_bone(const int bone_idx) const;
	void clear_bones();
	Transform get_bone_pose(const int bone_idx) const;
	void set_bone_pose(const int bone_idx, const Transform pose);
	void set_bone_global_pose(const int bone_idx, const Transform pose);
	Transform get_bone_global_pose(const int bone_idx) const;
	Transform get_bone_custom_pose(const int bone_idx) const;
	void set_bone_custom_pose(const int bone_idx, const Transform custom_pose);
	Transform get_bone_transform(const int bone_idx) const;
};

}
#endif
