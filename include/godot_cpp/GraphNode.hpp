#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Container.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API GraphNode : public Container {
public:

	void _init();

	const static int OVERLAY_BREAKPOINT = 1;
	const static int OVERLAY_DISABLED = 0;
	const static int OVERLAY_POSITION = 2;


	void set_title(const String title);
	String get_title() const;
	void _gui_input(const InputEvent arg0);
	void set_slot(const int idx, const bool enable_left, const int type_left, const Color color_left, const bool enable_right, const int type_right, const Color color_right, const Object *custom_left = nullptr, const Object *custom_right = nullptr);
	void clear_slot(const int idx);
	void clear_all_slots();
	bool is_slot_enabled_left(const int idx) const;
	int get_slot_type_left(const int idx) const;
	Color get_slot_color_left(const int idx) const;
	bool is_slot_enabled_right(const int idx) const;
	int get_slot_type_right(const int idx) const;
	Color get_slot_color_right(const int idx) const;
	void set_offset(const Vector2 offset);
	Vector2 get_offset() const;
	void set_comment(const bool comment);
	bool is_comment() const;
	void set_resizeable(const bool resizeable);
	bool is_resizeable() const;
	void set_selected(const bool selected);
	bool is_selected();
	int get_connection_output_count();
	int get_connection_input_count();
	Vector2 get_connection_output_pos(const int idx);
	int get_connection_output_type(const int idx);
	Color get_connection_output_color(const int idx);
	Vector2 get_connection_input_pos(const int idx);
	int get_connection_input_type(const int idx);
	Color get_connection_input_color(const int idx);
	void set_show_close_button(const bool show);
	bool is_close_button_visible() const;
	void set_overlay(const int overlay);
	int get_overlay() const;
};

}
#endif
