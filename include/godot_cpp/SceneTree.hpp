#ifndef SCENETREE_H
#define SCENETREE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "MainLoop.hpp"


namespace godot {

class SceneTreeTimer;
class Object;
class PackedScene;
class Viewport;
class NetworkedMultiplayerPeer;
class Node;


class GD_CPP_BINDING_API SceneTree : public MainLoop {
public:

	void _init();

	const static int GROUP_CALL_DEFAULT = 0;
	const static int GROUP_CALL_REALTIME = 2;
	const static int GROUP_CALL_REVERSE = 1;
	const static int GROUP_CALL_UNIQUE = 4;
	const static int STRETCH_ASPECT_IGNORE = 0;
	const static int STRETCH_ASPECT_KEEP = 1;
	const static int STRETCH_ASPECT_KEEP_HEIGHT = 3;
	const static int STRETCH_ASPECT_KEEP_WIDTH = 2;
	const static int STRETCH_MODE_2D = 1;
	const static int STRETCH_MODE_DISABLED = 0;
	const static int STRETCH_MODE_VIEWPORT = 2;


	Viewport *get_root() const;
	bool has_group(const String name) const;
	void set_auto_accept_quit(const bool enabled);
	void set_editor_hint(const bool enable);
	bool is_editor_hint() const;
	void set_debug_collisions_hint(const bool enable);
	bool is_debugging_collisions_hint() const;
	void set_debug_navigation_hint(const bool enable);
	bool is_debugging_navigation_hint() const;
	void set_edited_scene_root(const Object *scene);
	Object *get_edited_scene_root() const;
	void set_pause(const bool enable);
	bool is_paused() const;
	void set_input_as_handled();
	bool is_input_handled();
	SceneTreeTimer *create_timer(const float time_sec, const bool pause_mode_process = true);
	int get_node_count() const;
	int get_frame() const;
	void quit();
	void set_screen_stretch(const int mode, const int aspect, const Vector2 minsize);
	void queue_delete(const Object *obj);
	void call_group_flags(const int flags, const String group, const String method);
	void notify_group_flags(const int call_flags, const String group, const int notification);
	void set_group_flags(const int call_flags, const String group, const String property, const Variant value);
	void call_group(const String group, const String method);
	void notify_group(const String call_flags, const int group);
	void set_group(const String call_flags, const String group, const Variant property);
	Array get_nodes_in_group(const String group);
	void set_current_scene(const Node *child_node);
	Node *get_current_scene() const;
	int change_scene(const String path);
	int change_scene_to(const PackedScene *packed_scene);
	int reload_current_scene();
	void _change_scene(const Object *arg0);
	void set_network_peer(const NetworkedMultiplayerPeer *peer);
	bool is_network_server() const;
	bool has_network_peer() const;
	int get_network_unique_id() const;
	void set_refuse_new_network_connections(const bool refuse);
	bool is_refusing_new_network_connections() const;
	void _network_peer_connected(const int arg0);
	void _network_peer_disconnected(const int arg0);
	void _connected_to_server();
	void _connection_failed();
	void _server_disconnected();
};

}
#endif
