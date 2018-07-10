#ifndef CONTROL_H
#define CONTROL_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "CanvasItem.hpp"


namespace godot {

class Font;
class Theme;
class Shader;
class StyleBox;
class Texture;
class Control;
class Object;


class GD_CPP_BINDING_API Control : public CanvasItem {
public:

	void _init();

	const static int ANCHOR_BEGIN = 0;
	const static int ANCHOR_CENTER = 2;
	const static int ANCHOR_END = 1;
	const static int CURSOR_ARROW = 0;
	const static int CURSOR_BDIAGSIZE = 11;
	const static int CURSOR_BUSY = 5;
	const static int CURSOR_CAN_DROP = 7;
	const static int CURSOR_CROSS = 3;
	const static int CURSOR_DRAG = 6;
	const static int CURSOR_FDIAGSIZE = 12;
	const static int CURSOR_FORBIDDEN = 8;
	const static int CURSOR_HELP = 16;
	const static int CURSOR_HSIZE = 10;
	const static int CURSOR_HSPLIT = 15;
	const static int CURSOR_IBEAM = 1;
	const static int CURSOR_MOVE = 13;
	const static int CURSOR_POINTING_HAND = 2;
	const static int CURSOR_VSIZE = 9;
	const static int CURSOR_VSPLIT = 14;
	const static int CURSOR_WAIT = 4;
	const static int FOCUS_ALL = 2;
	const static int FOCUS_CLICK = 1;
	const static int FOCUS_NONE = 0;
	const static int MOUSE_FILTER_IGNORE = 2;
	const static int MOUSE_FILTER_PASS = 1;
	const static int MOUSE_FILTER_STOP = 0;
	const static int NOTIFICATION_FOCUS_ENTER = 43;
	const static int NOTIFICATION_FOCUS_EXIT = 44;
	const static int NOTIFICATION_MODAL_CLOSE = 46;
	const static int NOTIFICATION_MOUSE_ENTER = 41;
	const static int NOTIFICATION_MOUSE_EXIT = 42;
	const static int NOTIFICATION_RESIZED = 40;
	const static int NOTIFICATION_THEME_CHANGED = 45;
	const static int SIZE_EXPAND = 2;
	const static int SIZE_EXPAND_FILL = 3;
	const static int SIZE_FILL = 1;


	void _gui_input(const InputEvent event) const;
	Vector2 _get_minimum_size() const;
	Object *get_drag_data(const Vector2 pos) const;
	bool can_drop_data(const Vector2 pos, const Variant data) const;
	void drop_data(const Vector2 pos, const Variant data) const;
	void has_point(const Vector2 point) const;
	void _size_changed();
	void _update_minimum_size();
	void accept_event();
	Vector2 get_minimum_size() const;
	Vector2 get_combined_minimum_size() const;
	void set_anchor(const int margin, const int anchor_mode, const bool keep_margin = false);
	void _set_anchor(const int margin, const int anchor_mode);
	int get_anchor(const int margin) const;
	void set_margin(const int margin, const float offset);
	void set_anchor_and_margin(const int margin, const int anchor_mode, const float offset);
	void set_begin(const Vector2 pos);
	void set_end(const Vector2 pos);
	void set_pos(const Vector2 pos);
	void set_size(const Vector2 size);
	void set_custom_minimum_size(const Vector2 size);
	void set_global_pos(const Vector2 pos);
	void set_rotation(const float radians);
	void set_rotation_deg(const float degrees);
	void _set_rotation_deg(const float degrees);
	void set_scale(const Vector2 scale);
	float get_margin(const int margin) const;
	Vector2 get_begin() const;
	Vector2 get_end() const;
	Vector2 get_pos() const;
	Vector2 get_size() const;
	float get_rotation() const;
	float get_rotation_deg() const;
	float _get_rotation_deg() const;
	Vector2 get_scale() const;
	Vector2 get_custom_minimum_size() const;
	Vector2 get_parent_area_size() const;
	Vector2 get_global_pos() const;
	Rect2 get_rect() const;
	Rect2 get_global_rect() const;
	void set_area_as_parent_rect(const int margin = 0);
	void show_modal(const bool exclusive = false);
	void set_focus_mode(const int mode);
	int get_focus_mode() const;
	bool has_focus() const;
	void grab_focus();
	void release_focus();
	Control *get_focus_owner() const;
	void set_h_size_flags(const int flags);
	int get_h_size_flags() const;
	void set_stretch_ratio(const float ratio);
	float get_stretch_ratio() const;
	void set_v_size_flags(const int flags);
	int get_v_size_flags() const;
	void set_theme(const Theme *theme);
	Theme *get_theme() const;
	void add_icon_override(const String name, const Texture *texture);
	void add_shader_override(const String name, const Shader *shader);
	void add_style_override(const String name, const StyleBox *stylebox);
	void add_font_override(const String name, const Font *font);
	void add_color_override(const String name, const Color color);
	void add_constant_override(const String name, const int constant);
	Texture *get_icon(const String name, const String type) const;
	StyleBox *get_stylebox(const String name, const String type) const;
	Font *get_font(const String name, const String type) const;
	Color get_color(const String name, const String type) const;
	int get_constant(const String name, const String type) const;
	bool has_icon_override(const String name) const;
	bool has_stylebox_override(const String name) const;
	bool has_font_override(const String name) const;
	bool has_color_override(const String name) const;
	bool has_constant_override(const String name) const;
	bool has_icon(const String name, const String type) const;
	bool has_stylebox(const String name, const String type) const;
	bool has_font(const String name, const String type) const;
	bool has_color(const String name, const String type) const;
	bool has_constant(const String name, const String type) const;
	Control *get_parent_control() const;
	void set_tooltip(const String tooltip);
	String get_tooltip(const Vector2 atpos = Vector2(0, 0)) const;
	String _get_tooltip() const;
	void set_default_cursor_shape(const int shape);
	int get_default_cursor_shape() const;
	int get_cursor_shape(const Vector2 pos = Vector2(0, 0)) const;
	void set_focus_neighbour(const int margin, const NodePath neighbour);
	NodePath get_focus_neighbour(const int margin) const;
	void force_drag(const Variant data, const Object *preview);
	void set_mouse_filter(const int filter);
	int get_mouse_filter() const;
	void set_clip_contents(const bool enable);
	bool is_clipping_contents();
	void grab_click_focus();
	void set_drag_forwarding(const Control *target);
	void set_drag_preview(const Control *control);
	void warp_mouse(const Vector2 to_pos);
	void minimum_size_changed();
	void _theme_changed();
	void _font_changed();
};

}
#endif
