#ifndef NODE_H
#define NODE_H

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

class Node;
class SceneTree;
class Object;


class GD_CPP_BINDING_API Node : public Object {
public:

	void _init();

	const static int DUPLICATE_GROUPS = 2;
	const static int DUPLICATE_SCRIPTS = 4;
	const static int DUPLICATE_SIGNALS = 1;
	const static int DUPLICATE_USE_INSTANCING = 8;
	const static int NETWORK_MODE_INHERIT = 0;
	const static int NETWORK_MODE_MASTER = 1;
	const static int NETWORK_MODE_SLAVE = 2;
	const static int NOTIFICATION_DRAG_BEGIN = 21;
	const static int NOTIFICATION_DRAG_END = 22;
	const static int NOTIFICATION_ENTER_TREE = 10;
	const static int NOTIFICATION_EXIT_TREE = 11;
	const static int NOTIFICATION_FIXED_PROCESS = 16;
	const static int NOTIFICATION_INSTANCED = 20;
	const static int NOTIFICATION_INTERNAL_FIXED_PROCESS = 26;
	const static int NOTIFICATION_INTERNAL_PROCESS = 25;
	const static int NOTIFICATION_MOVED_IN_PARENT = 12;
	const static int NOTIFICATION_PARENTED = 18;
	const static int NOTIFICATION_PATH_CHANGED = 23;
	const static int NOTIFICATION_PAUSED = 14;
	const static int NOTIFICATION_PROCESS = 17;
	const static int NOTIFICATION_READY = 13;
	const static int NOTIFICATION_TRANSLATION_CHANGED = 24;
	const static int NOTIFICATION_UNPARENTED = 19;
	const static int NOTIFICATION_UNPAUSED = 15;
	const static int PAUSE_MODE_INHERIT = 0;
	const static int PAUSE_MODE_PROCESS = 2;
	const static int PAUSE_MODE_STOP = 1;
	const static int RPC_MODE_DISABLED = 0;
	const static int RPC_MODE_MASTER = 3;
	const static int RPC_MODE_REMOTE = 1;
	const static int RPC_MODE_SLAVE = 4;
	const static int RPC_MODE_SYNC = 2;


	void _process(const float delta);
	void _fixed_process(const float delta);
	void _enter_tree();
	void _exit_tree();
	void _ready();
	void _input(const InputEvent event);
	void _unhandled_input(const InputEvent event);
	void _unhandled_key_input(const InputEvent key_event);
	void _add_child_below_node(const Node *node, const Node *child_node, const bool legible_unique_name = false);
	void set_name(const String name);
	String get_name() const;
	void add_child(const Node *node, const bool legible_unique_name = false);
	void remove_child(const Node *node);
	int get_child_count() const;
	Array get_children() const;
	Node *get_child(const int idx) const;
	bool has_node(const NodePath path) const;
	Node *get_node(const NodePath path) const;
	Node *get_parent() const;
	Node *find_node(const String mask, const bool recursive = true, const bool owned = true) const;
	bool has_node_and_resource(const NodePath path) const;
	Array get_node_and_resource(const NodePath path);
	bool is_inside_tree() const;
	bool is_a_parent_of(const Node *node) const;
	bool is_greater_than(const Node *node) const;
	NodePath get_path() const;
	NodePath get_path_to(const Node *node) const;
	void add_to_group(const String group, const bool persistent = false);
	void remove_from_group(const String group);
	bool is_in_group(const String group) const;
	void move_child(const Node *child_node, const int to_pos);
	Array get_groups() const;
	void raise();
	void set_owner(const Node *owner);
	Node *get_owner() const;
	void remove_and_skip();
	int get_index() const;
	void print_tree();
	void set_filename(const String filename);
	String get_filename() const;
	void propagate_notification(const int what);
	void set_fixed_process(const bool enable);
	float get_fixed_process_delta_time() const;
	bool is_fixed_processing() const;
	float get_process_delta_time() const;
	void set_process(const bool enable);
	bool is_processing() const;
	void set_process_input(const bool enable);
	bool is_processing_input() const;
	void set_process_unhandled_input(const bool enable);
	bool is_processing_unhandled_input() const;
	void set_process_unhandled_key_input(const bool enable);
	bool is_processing_unhandled_key_input() const;
	void set_pause_mode(const int mode);
	int get_pause_mode() const;
	bool can_process() const;
	void print_stray_nodes();
	int get_position_in_parent() const;
	void set_display_folded(const bool fold);
	bool is_displayed_folded() const;
	void set_process_internal(const bool enable);
	bool is_processing_internal() const;
	void set_fixed_process_internal(const bool enable);
	bool is_fixed_processing_internal() const;
	SceneTree *get_tree() const;
	Node *duplicate(const int flags = 15) const;
	void replace_by(const Node *node, const bool keep_data = false);
	void set_scene_instance_load_placeholder(const bool load_placeholder);
	bool get_scene_instance_load_placeholder() const;
	Object *get_viewport() const;
	void queue_free();
	void request_ready();
	void set_network_mode(const int mode);
	int get_network_mode() const;
	bool is_network_master() const;
	void rpc_config(const String method, const int mode);
	void rset_config(const String property, const int mode);
	void _set_import_path(const NodePath import_path);
	NodePath _get_import_path() const;
	void rpc(const String method);
	void rpc_unreliable(const String method);
	void rpc_id(const int peer_id, const String method);
	void rpc_unreliable_id(const int peer_id, const String method);
	void rset(const String property, const Variant value);
	void rset_id(const int peer_id, const String property, const Variant value);
	void rset_unreliable(const String property, const Variant value);
	void rset_unreliable_id(const int peer_id, const String property, const Variant value);
};

}
#endif
