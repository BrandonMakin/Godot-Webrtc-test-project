#ifndef SPATIAL_H
#define SPATIAL_H

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

class Object;
class SpatialGizmo;
class World;


class GD_CPP_BINDING_API Spatial : public Node {
public:

	void _init();

	const static int NOTIFICATION_ENTER_WORLD = 41;
	const static int NOTIFICATION_EXIT_WORLD = 42;
	const static int NOTIFICATION_TRANSFORM_CHANGED = 29;
	const static int NOTIFICATION_VISIBILITY_CHANGED = 43;


	void set_transform(const Transform local);
	Transform get_transform() const;
	void set_translation(const Vector3 translation);
	Vector3 get_translation() const;
	void set_rotation(const Vector3 rotation_rad);
	Vector3 get_rotation() const;
	void set_rotation_deg(const Vector3 rotation_deg);
	Vector3 get_rotation_deg() const;
	void set_scale(const Vector3 scale);
	Vector3 get_scale() const;
	void set_global_transform(const Transform global);
	Transform get_global_transform() const;
	Object *get_parent_spatial() const;
	void set_ignore_transform_notification(const bool enabled);
	void set_as_toplevel(const bool enable);
	bool is_set_as_toplevel() const;
	World *get_world() const;
	void _set_rotation_deg(const Vector3 rotation_deg);
	Vector3 _get_rotation_deg() const;
	void _update_gizmo();
	void _set_import_transform(const Transform arg0);
	Transform _get_import_transform() const;
	void update_gizmo();
	void set_gizmo(const SpatialGizmo *gizmo);
	SpatialGizmo *get_gizmo() const;
	void set_visible(const bool arg0);
	bool is_visible() const;
	bool is_visible_in_tree() const;
	void show();
	void hide();
	void set_notify_local_transform(const bool enable);
	bool is_local_transform_notification_enabled() const;
	void set_notify_transform(const bool enable);
	bool is_transform_notification_enabled() const;
	void rotate(const Vector3 normal, const float radians);
	void global_rotate(const Vector3 normal, const float radians);
	void rotate_x(const float radians);
	void rotate_y(const float radians);
	void rotate_z(const float radians);
	void translate(const Vector3 offset);
	void global_translate(const Vector3 offset);
	void orthonormalize();
	void set_identity();
	void look_at(const Vector3 target, const Vector3 up);
	void look_at_from_pos(const Vector3 pos, const Vector3 target, const Vector3 up);
};

}
#endif
