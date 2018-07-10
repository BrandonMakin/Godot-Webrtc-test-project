#ifndef CANVASITEM_H
#define CANVASITEM_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class Font;
class Object;
class Texture;
class StyleBox;
class CanvasItemMaterial;


class GD_CPP_BINDING_API CanvasItem : public Node {
public:

	void _init();

	const static int BLEND_MODE_ADD = 1;
	const static int BLEND_MODE_MIX = 0;
	const static int BLEND_MODE_MUL = 3;
	const static int BLEND_MODE_PREMULT_ALPHA = 4;
	const static int BLEND_MODE_SUB = 2;
	const static int NOTIFICATION_DRAW = 30;
	const static int NOTIFICATION_ENTER_CANVAS = 32;
	const static int NOTIFICATION_EXIT_CANVAS = 33;
	const static int NOTIFICATION_TRANSFORM_CHANGED = 29;
	const static int NOTIFICATION_VISIBILITY_CHANGED = 31;


	void _draw() const;
	void _toplevel_raise_self();
	void _update_callback();
	void edit_set_state(const Variant state);
	Variant edit_get_state() const;
	void edit_set_rect(const Rect2 rect);
	void edit_rotate(const float degrees);
	Rect2 get_item_rect() const;
	Rect2 get_item_and_children_rect() const;
	RID get_canvas_item() const;
	void set_visible(const bool arg0);
	bool is_visible() const;
	bool is_visible_in_tree() const;
	void show();
	void hide();
	void update();
	void set_as_toplevel(const bool enable);
	bool is_set_as_toplevel() const;
	void set_light_mask(const int light_mask);
	int get_light_mask() const;
	void set_modulate(const Color modulate);
	Color get_modulate() const;
	void set_self_modulate(const Color self_modulate);
	Color get_self_modulate() const;
	void set_draw_behind_parent(const bool enable);
	bool is_draw_behind_parent_enabled() const;
	void _set_on_top(const bool on_top);
	bool _is_on_top() const;
	void draw_line(const Vector2 from, const Vector2 to, const Color color, const float width = 1, const bool antialiased = false);
	void draw_rect(const Rect2 rect, const Color color);
	void draw_circle(const Vector2 pos, const float radius, const Color color);
	void draw_texture(const Texture *texture, const Vector2 pos, const Color modulate = Color(1,1,1,1));
	void draw_texture_rect(const Texture *texture, const Rect2 rect, const bool tile, const Color modulate = Color(1,1,1,1), const bool transpose = false);
	void draw_texture_rect_region(const Texture *texture, const Rect2 rect, const Rect2 src_rect, const Color modulate = Color(1,1,1,1), const bool transpose = false);
	void draw_style_box(const StyleBox *style_box, const Rect2 rect);
	void draw_primitive(const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs, const Texture *texture = nullptr, const float width = 1);
	void draw_polygon(const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs = PoolVector2Array(), const Texture *texture = nullptr);
	void draw_colored_polygon(const PoolVector2Array points, const Color color, const PoolVector2Array uvs = PoolVector2Array(), const Texture *texture = nullptr);
	void draw_string(const Font *font, const Vector2 pos, const String text, const Color modulate = Color(1,1,1,1), const int clip_w = -1);
	float draw_char(const Font *font, const Vector2 pos, const String _char, const String next, const Color modulate = Color(1,1,1,1));
	void draw_set_transform(const Vector2 pos, const float rot, const Vector2 scale);
	void draw_set_transform_matrix(const Transform2D xform);
	Transform2D get_transform() const;
	Transform2D get_global_transform() const;
	Transform2D get_global_transform_with_canvas() const;
	Transform2D get_viewport_transform() const;
	Rect2 get_viewport_rect() const;
	Transform2D get_canvas_transform() const;
	Vector2 get_local_mouse_pos() const;
	Vector2 get_global_mouse_pos() const;
	RID get_canvas() const;
	Object *get_world_2d() const;
	void set_material(const CanvasItemMaterial *material);
	CanvasItemMaterial *get_material() const;
	void set_use_parent_material(const bool enable);
	bool get_use_parent_material() const;
	void set_notify_local_transform(const bool enable);
	bool is_local_transform_notification_enabled() const;
	void set_notify_transform(const bool enable);
	bool is_transform_notification_enabled() const;
	Vector2 make_canvas_pos_local(const Vector2 screen_point) const;
	InputEvent make_input_local(const InputEvent event) const;
};

}
#endif
