#ifndef VIEWPORT_H
#define VIEWPORT_H

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

class World2D;
class World;
class Camera;
class ViewportTexture;


class GD_CPP_BINDING_API Viewport : public Node {
public:

	void _init();

	const static int MSAA_16X = 4;
	const static int MSAA_2X = 1;
	const static int MSAA_4X = 2;
	const static int MSAA_8X = 3;
	const static int MSAA_DISABLED = 0;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_1 = 1;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_1024 = 6;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_16 = 3;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_256 = 5;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_4 = 2;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_64 = 4;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED = 0;
	const static int SHADOW_ATLAS_QUADRANT_SUBDIV_MAX = 7;
	const static int UPDATE_ALWAYS = 3;
	const static int UPDATE_DISABLED = 0;
	const static int UPDATE_ONCE = 1;
	const static int UPDATE_WHEN_VISIBLE = 2;


	void set_size(const Vector2 size);
	Vector2 get_size() const;
	void set_world_2d(const World2D *world_2d);
	World2D *get_world_2d() const;
	World2D *find_world_2d() const;
	void set_world(const World *world);
	World *get_world() const;
	World *find_world() const;
	void set_canvas_transform(const Transform2D xform);
	Transform2D get_canvas_transform() const;
	void set_global_canvas_transform(const Transform2D xform);
	Transform2D get_global_canvas_transform() const;
	Transform2D get_final_transform() const;
	Rect2 get_visible_rect() const;
	void set_transparent_background(const bool enable);
	bool has_transparent_background() const;
	void _parent_visibility_changed();
	void _parent_resized();
	void _vp_input(const InputEvent arg0);
	void _vp_input_text(const String text);
	void _vp_unhandled_input(const InputEvent arg0);
	void set_size_override(const bool enable, const Vector2 size = Vector2(-1, -1), const Vector2 margin = Vector2(0, 0));
	Vector2 get_size_override() const;
	bool is_size_override_enabled() const;
	void set_size_override_stretch(const bool enabled);
	bool is_size_override_stretch_enabled() const;
	void queue_screen_capture();
	Image get_screen_capture() const;
	void set_vflip(const bool enable);
	bool get_vflip() const;
	void set_clear_on_new_frame(const bool enable);
	bool get_clear_on_new_frame() const;
	void clear();
	void set_update_mode(const int mode);
	int get_update_mode() const;
	void set_msaa(const int msaa);
	int get_msaa() const;
	void set_hdr(const bool enable);
	bool get_hdr() const;
	ViewportTexture *get_texture() const;
	void set_physics_object_picking(const bool enable);
	bool get_physics_object_picking();
	RID get_viewport_rid() const;
	void input(const InputEvent local_event);
	void unhandled_input(const InputEvent local_event);
	void update_worlds();
	void set_use_own_world(const bool enable);
	bool is_using_own_world() const;
	Camera *get_camera() const;
	void set_as_audio_listener(const bool enable);
	bool is_audio_listener() const;
	void set_as_audio_listener_2d(const bool enable);
	bool is_audio_listener_2d() const;
	void set_attach_to_screen_rect(const Rect2 rect);
	Vector2 get_mouse_pos() const;
	void warp_mouse(const Vector2 to_pos);
	bool gui_has_modal_stack() const;
	Variant gui_get_drag_data() const;
	void set_disable_input(const bool disable);
	bool is_input_disabled() const;
	void set_disable_3d(const bool disable);
	bool is_3d_disabled() const;
	void _gui_show_tooltip();
	void _gui_remove_focus();
	void set_shadow_atlas_size(const int size);
	int get_shadow_atlas_size() const;
	void set_shadow_atlas_quadrant_subdiv(const int quadrant, const int subdiv);
	int get_shadow_atlas_quadrant_subdiv(const int quadrant) const;
};

}
#endif
