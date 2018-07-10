#ifndef SCENESTATE_H
#define SCENESTATE_H

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

class PackedScene;


class GD_CPP_BINDING_API SceneState : public Reference {
public:

	void _init();

	const static int GEN_EDIT_STATE_DISABLED = 0;
	const static int GEN_EDIT_STATE_INSTANCE = 1;
	const static int GEN_EDIT_STATE_MAIN = 2;


	int get_node_count() const;
	String get_node_type(const int idx) const;
	String get_node_name(const int idx) const;
	NodePath get_node_path(const int idx, const bool for_parent = false) const;
	NodePath get_node_owner_path(const int idx) const;
	bool is_node_instance_placeholder(const int idx) const;
	String get_node_instance_placeholder(const int idx) const;
	PackedScene *get_node_instance(const int idx) const;
	PoolStringArray get_node_groups(const int idx) const;
	int get_node_property_count(const int idx) const;
	String get_node_property_name(const int idx, const int prop_idx) const;
	void get_node_property_value(const int idx, const int prop_idx) const;
	int get_connection_count() const;
	NodePath get_connection_source(const int idx) const;
	String get_connection_signal(const int idx) const;
	NodePath get_connection_target(const int idx) const;
	String get_connection_method(const int idx) const;
	int get_connection_flags(const int idx) const;
	Array get_connection_binds(const int idx) const;
};

}
#endif
