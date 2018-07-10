#ifndef GRAPHEDIT_H
#define GRAPHEDIT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Control.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API GraphEdit : public Control {
public:

	void _init();



	Error connect_node(const String from, const int from_port, const String to, const int to_port);
	bool is_node_connected(const String from, const int from_port, const String to, const int to_port);
	void disconnect_node(const String from, const int from_port, const String to, const int to_port);
	Array get_connection_list() const;
	Vector2 get_scroll_ofs() const;
	void set_scroll_ofs(const Vector2 ofs);
	void set_zoom(const float p_zoom);
	float get_zoom() const;
	void set_snap(const int pixels);
	int get_snap() const;
	void set_use_snap(const bool enable);
	bool is_using_snap() const;
	void set_right_disconnects(const bool enable);
	bool is_right_disconnects_enabled() const;
	void _graph_node_moved(const Object *arg0);
	void _graph_node_raised(const Object *arg0);
	void _top_layer_input(const InputEvent arg0);
	void _top_layer_draw();
	void _scroll_moved(const float arg0);
	void _zoom_minus();
	void _zoom_reset();
	void _zoom_plus();
	void _snap_toggled();
	void _snap_value_changed(const float arg0);
	void _gui_input(const InputEvent arg0);
	void _update_scroll_offset();
	void _connections_layer_draw();
	void set_selected(const Object *node);
};

}
#endif
