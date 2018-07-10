#ifndef PHYSICSSERVER_H
#define PHYSICSSERVER_H

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

class PhysicsDirectSpaceState;
class Object;


class GD_CPP_BINDING_API PhysicsServer : public Object {
private:
	static void ___singleton_init();
public:

	void _init();

	const static int AREA_BODY_ADDED = 0;
	const static int AREA_BODY_REMOVED = 1;
	const static int AREA_PARAM_ANGULAR_DAMP = 6;
	const static int AREA_PARAM_GRAVITY = 0;
	const static int AREA_PARAM_GRAVITY_DISTANCE_SCALE = 3;
	const static int AREA_PARAM_GRAVITY_IS_POINT = 2;
	const static int AREA_PARAM_GRAVITY_POINT_ATTENUATION = 4;
	const static int AREA_PARAM_GRAVITY_VECTOR = 1;
	const static int AREA_PARAM_LINEAR_DAMP = 5;
	const static int AREA_PARAM_PRIORITY = 7;
	const static int AREA_SPACE_OVERRIDE_COMBINE = 1;
	const static int AREA_SPACE_OVERRIDE_COMBINE_REPLACE = 2;
	const static int AREA_SPACE_OVERRIDE_DISABLED = 0;
	const static int AREA_SPACE_OVERRIDE_REPLACE = 3;
	const static int AREA_SPACE_OVERRIDE_REPLACE_COMBINE = 4;
	const static int BODY_MODE_CHARACTER = 3;
	const static int BODY_MODE_KINEMATIC = 1;
	const static int BODY_MODE_RIGID = 2;
	const static int BODY_MODE_STATIC = 0;
	const static int BODY_PARAM_ANGULAR_DAMP = 5;
	const static int BODY_PARAM_BOUNCE = 0;
	const static int BODY_PARAM_FRICTION = 1;
	const static int BODY_PARAM_GRAVITY_SCALE = 3;
	const static int BODY_PARAM_LINEAR_DAMP = 4;
	const static int BODY_PARAM_MASS = 2;
	const static int BODY_PARAM_MAX = 6;
	const static int BODY_STATE_ANGULAR_VELOCITY = 2;
	const static int BODY_STATE_CAN_SLEEP = 4;
	const static int BODY_STATE_LINEAR_VELOCITY = 1;
	const static int BODY_STATE_SLEEPING = 3;
	const static int BODY_STATE_TRANSFORM = 0;
	const static int CONE_TWIST_JOINT_BIAS = 2;
	const static int CONE_TWIST_JOINT_RELAXATION = 4;
	const static int CONE_TWIST_JOINT_SOFTNESS = 3;
	const static int CONE_TWIST_JOINT_SWING_SPAN = 0;
	const static int CONE_TWIST_JOINT_TWIST_SPAN = 1;
	const static int G6DOF_JOINT_ANGULAR_DAMPING = 8;
	const static int G6DOF_JOINT_ANGULAR_ERP = 11;
	const static int G6DOF_JOINT_ANGULAR_FORCE_LIMIT = 10;
	const static int G6DOF_JOINT_ANGULAR_LIMIT_SOFTNESS = 7;
	const static int G6DOF_JOINT_ANGULAR_LOWER_LIMIT = 5;
	const static int G6DOF_JOINT_ANGULAR_MOTOR_FORCE_LIMIT = 13;
	const static int G6DOF_JOINT_ANGULAR_MOTOR_TARGET_VELOCITY = 12;
	const static int G6DOF_JOINT_ANGULAR_RESTITUTION = 9;
	const static int G6DOF_JOINT_ANGULAR_UPPER_LIMIT = 6;
	const static int G6DOF_JOINT_FLAG_ENABLE_ANGULAR_LIMIT = 1;
	const static int G6DOF_JOINT_FLAG_ENABLE_LINEAR_LIMIT = 0;
	const static int G6DOF_JOINT_FLAG_ENABLE_MOTOR = 2;
	const static int G6DOF_JOINT_LINEAR_DAMPING = 4;
	const static int G6DOF_JOINT_LINEAR_LIMIT_SOFTNESS = 2;
	const static int G6DOF_JOINT_LINEAR_LOWER_LIMIT = 0;
	const static int G6DOF_JOINT_LINEAR_RESTITUTION = 3;
	const static int G6DOF_JOINT_LINEAR_UPPER_LIMIT = 1;
	const static int HINGE_JOINT_BIAS = 0;
	const static int HINGE_JOINT_FLAG_ENABLE_MOTOR = 1;
	const static int HINGE_JOINT_FLAG_USE_LIMIT = 0;
	const static int HINGE_JOINT_LIMIT_BIAS = 3;
	const static int HINGE_JOINT_LIMIT_LOWER = 2;
	const static int HINGE_JOINT_LIMIT_RELAXATION = 5;
	const static int HINGE_JOINT_LIMIT_SOFTNESS = 4;
	const static int HINGE_JOINT_LIMIT_UPPER = 1;
	const static int HINGE_JOINT_MOTOR_MAX_IMPULSE = 7;
	const static int HINGE_JOINT_MOTOR_TARGET_VELOCITY = 6;
	const static int INFO_ACTIVE_OBJECTS = 0;
	const static int INFO_COLLISION_PAIRS = 1;
	const static int INFO_ISLAND_COUNT = 2;
	const static int JOINT_6DOF = 4;
	const static int JOINT_CONE_TWIST = 3;
	const static int JOINT_HINGE = 1;
	const static int JOINT_PIN = 0;
	const static int JOINT_SLIDER = 2;
	const static int PIN_JOINT_BIAS = 0;
	const static int PIN_JOINT_DAMPING = 1;
	const static int PIN_JOINT_IMPULSE_CLAMP = 2;
	const static int SHAPE_BOX = 3;
	const static int SHAPE_CAPSULE = 4;
	const static int SHAPE_CONCAVE_POLYGON = 6;
	const static int SHAPE_CONVEX_POLYGON = 5;
	const static int SHAPE_CUSTOM = 8;
	const static int SHAPE_HEIGHTMAP = 7;
	const static int SHAPE_PLANE = 0;
	const static int SHAPE_RAY = 1;
	const static int SHAPE_SPHERE = 2;
	const static int SLIDER_JOINT_ANGULAR_LIMIT_DAMPING = 15;
	const static int SLIDER_JOINT_ANGULAR_LIMIT_LOWER = 12;
	const static int SLIDER_JOINT_ANGULAR_LIMIT_RESTITUTION = 14;
	const static int SLIDER_JOINT_ANGULAR_LIMIT_SOFTNESS = 13;
	const static int SLIDER_JOINT_ANGULAR_LIMIT_UPPER = 11;
	const static int SLIDER_JOINT_ANGULAR_MOTION_DAMPING = 18;
	const static int SLIDER_JOINT_ANGULAR_MOTION_RESTITUTION = 17;
	const static int SLIDER_JOINT_ANGULAR_MOTION_SOFTNESS = 16;
	const static int SLIDER_JOINT_ANGULAR_ORTHOGONAL_DAMPING = 21;
	const static int SLIDER_JOINT_ANGULAR_ORTHOGONAL_RESTITUTION = 20;
	const static int SLIDER_JOINT_ANGULAR_ORTHOGONAL_SOFTNESS = 19;
	const static int SLIDER_JOINT_LINEAR_LIMIT_DAMPING = 4;
	const static int SLIDER_JOINT_LINEAR_LIMIT_LOWER = 1;
	const static int SLIDER_JOINT_LINEAR_LIMIT_RESTITUTION = 3;
	const static int SLIDER_JOINT_LINEAR_LIMIT_SOFTNESS = 2;
	const static int SLIDER_JOINT_LINEAR_LIMIT_UPPER = 0;
	const static int SLIDER_JOINT_LINEAR_MOTION_DAMPING = 7;
	const static int SLIDER_JOINT_LINEAR_MOTION_RESTITUTION = 6;
	const static int SLIDER_JOINT_LINEAR_MOTION_SOFTNESS = 5;
	const static int SLIDER_JOINT_LINEAR_ORTHOGONAL_DAMPING = 10;
	const static int SLIDER_JOINT_LINEAR_ORTHOGONAL_RESTITUTION = 9;
	const static int SLIDER_JOINT_LINEAR_ORTHOGONAL_SOFTNESS = 8;
	const static int SLIDER_JOINT_MAX = 22;


	static RID shape_create(const int type);
	static void shape_set_data(const RID shape, const Variant data);
	static int shape_get_type(const RID shape);
	static void shape_get_data(const RID shape);
	static RID space_create();
	static void space_set_active(const RID space, const bool active);
	static bool space_is_active(const RID space);
	static void space_set_param(const RID space, const int param, const float value);
	static float space_get_param(const RID space, const int param);
	static PhysicsDirectSpaceState *space_get_direct_state(const RID space);
	static RID area_create();
	static void area_set_space(const RID area, const RID space);
	static RID area_get_space(const RID area);
	static void area_set_space_override_mode(const RID area, const int mode);
	static int area_get_space_override_mode(const RID area);
	static void area_add_shape(const RID area, const RID shape, const Transform transform = Transform());
	static void area_set_shape(const RID area, const int shape_idx, const RID shape);
	static void area_set_shape_transform(const RID area, const int shape_idx, const Transform transform);
	static int area_get_shape_count(const RID area);
	static RID area_get_shape(const RID area, const int shape_idx);
	static Transform area_get_shape_transform(const RID area, const int shape_idx);
	static void area_remove_shape(const RID area, const int shape_idx);
	static void area_clear_shapes(const RID area);
	static void area_set_layer_mask(const RID area, const int mask);
	static void area_set_collision_mask(const RID area, const int mask);
	static void area_set_param(const RID area, const int param, const Variant value);
	static void area_set_transform(const RID area, const Transform transform);
	static void area_get_param(const RID area, const int param);
	static Transform area_get_transform(const RID area);
	static void area_attach_object_instance_ID(const RID area, const int id);
	static int area_get_object_instance_ID(const RID area);
	static void area_set_monitor_callback(const RID area, const Object *receiver, const String method);
	static void area_set_ray_pickable(const RID area, const bool enable);
	static bool area_is_ray_pickable(const RID area);
	static RID body_create(const int mode = 2, const bool init_sleeping = false);
	static void body_set_space(const RID body, const RID space);
	static RID body_get_space(const RID body);
	static void body_set_mode(const RID body, const int mode);
	static int body_get_mode(const RID body);
	static void body_set_layer_mask(const RID body, const int mask);
	static int body_get_layer_mask(const RID body, const int arg1);
	static void body_set_collision_mask(const RID body, const int mask);
	static int body_get_collision_mask(const RID body, const int arg1);
	static void body_add_shape(const RID body, const RID shape, const Transform transform = Transform());
	static void body_set_shape(const RID body, const int shape_idx, const RID shape);
	static void body_set_shape_transform(const RID body, const int shape_idx, const Transform transform);
	static int body_get_shape_count(const RID body);
	static RID body_get_shape(const RID body, const int shape_idx);
	static Transform body_get_shape_transform(const RID body, const int shape_idx);
	static void body_remove_shape(const RID body, const int shape_idx);
	static void body_clear_shapes(const RID body);
	static void body_attach_object_instance_ID(const RID body, const int id);
	static int body_get_object_instance_ID(const RID body);
	static void body_set_enable_continuous_collision_detection(const RID body, const bool enable);
	static bool body_is_continuous_collision_detection_enabled(const RID body);
	static void body_set_param(const RID body, const int param, const float value);
	static float body_get_param(const RID body, const int param);
	static void body_set_state(const RID body, const int state, const Variant value);
	static void body_get_state(const RID body, const int state);
	static void body_apply_impulse(const RID body, const Vector3 pos, const Vector3 impulse);
	static void body_apply_torque_impulse(const RID body, const Vector3 impulse);
	static void body_set_axis_velocity(const RID body, const Vector3 axis_velocity);
	static void body_set_axis_lock(const RID body, const int axis);
	static int body_get_axis_lock(const RID body);
	static void body_add_collision_exception(const RID body, const RID excepted_body);
	static void body_remove_collision_exception(const RID body, const RID excepted_body);
	static void body_set_max_contacts_reported(const RID body, const int amount);
	static int body_get_max_contacts_reported(const RID body);
	static void body_set_omit_force_integration(const RID body, const bool enable);
	static bool body_is_omitting_force_integration(const RID body);
	static void body_set_force_integration_callback(const RID body, const Object *receiver, const String method, const Variant userdata = Variant());
	static void body_set_ray_pickable(const RID body, const bool enable);
	static bool body_is_ray_pickable(const RID body);
	static RID joint_create_pin(const RID body_A, const Vector3 local_A, const RID body_B, const Vector3 local_B);
	static void pin_joint_set_param(const RID joint, const int param, const float value);
	static float pin_joint_get_param(const RID joint, const int param);
	static void pin_joint_set_local_A(const RID joint, const Vector3 local_A);
	static Vector3 pin_joint_get_local_A(const RID joint);
	static void pin_joint_set_local_B(const RID joint, const Vector3 local_B);
	static Vector3 pin_joint_get_local_B(const RID joint);
	static RID joint_create_hinge(const RID body_A, const Transform hinge_A, const RID body_B, const Transform hinge_B);
	static void hinge_joint_set_param(const RID joint, const int param, const float value);
	static float hinge_joint_get_param(const RID joint, const int param);
	static void hinge_joint_set_flag(const RID joint, const int flag, const bool enabled);
	static bool hinge_joint_get_flag(const RID joint, const int flag);
	static RID joint_create_slider(const RID body_A, const Transform local_ref_A, const RID body_B, const Transform local_ref_B);
	static void slider_joint_set_param(const RID joint, const int param, const float value);
	static float slider_joint_get_param(const RID joint, const int param);
	static RID joint_create_cone_twist(const RID body_A, const Transform local_ref_A, const RID body_B, const Transform local_ref_B);
	static void cone_twist_joint_set_param(const RID joint, const int param, const float value);
	static float cone_twist_joint_get_param(const RID joint, const int param);
	static int joint_get_type(const RID joint);
	static void joint_set_solver_priority(const RID joint, const int priority);
	static int joint_get_solver_priority(const RID joint);
	static RID joint_create_generic_6dof(const RID body_A, const Transform local_ref_A, const RID body_B, const Transform local_ref_B);
	static void generic_6dof_joint_set_param(const RID joint, const int axis, const int param, const float value);
	static float generic_6dof_joint_get_param(const RID joint, const int axis, const int param);
	static void generic_6dof_joint_set_flag(const RID joint, const int axis, const int flag, const bool enable);
	static bool generic_6dof_joint_get_flag(const RID joint, const int axis, const int flag);
	static void free_rid(const RID rid);
	static void set_active(const bool active);
	static int get_process_info(const int process_info);
};

}
#endif
