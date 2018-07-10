#ifndef PHYSICS2DSERVER_H
#define PHYSICS2DSERVER_H

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

class Physics2DTestMotionResult;
class Physics2DDirectSpaceState;
class Object;


class GD_CPP_BINDING_API Physics2DServer : public Object {
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
	const static int BODY_PARAM_ANGULAR_DAMP = 6;
	const static int BODY_PARAM_BOUNCE = 0;
	const static int BODY_PARAM_FRICTION = 1;
	const static int BODY_PARAM_GRAVITY_SCALE = 4;
	const static int BODY_PARAM_INERTIA = 3;
	const static int BODY_PARAM_LINEAR_DAMP = 5;
	const static int BODY_PARAM_MASS = 2;
	const static int BODY_PARAM_MAX = 7;
	const static int BODY_STATE_ANGULAR_VELOCITY = 2;
	const static int BODY_STATE_CAN_SLEEP = 4;
	const static int BODY_STATE_LINEAR_VELOCITY = 1;
	const static int BODY_STATE_SLEEPING = 3;
	const static int BODY_STATE_TRANSFORM = 0;
	const static int CCD_MODE_CAST_RAY = 1;
	const static int CCD_MODE_CAST_SHAPE = 2;
	const static int CCD_MODE_DISABLED = 0;
	const static int DAMPED_STRING_DAMPING = 2;
	const static int DAMPED_STRING_REST_LENGTH = 0;
	const static int DAMPED_STRING_STIFFNESS = 1;
	const static int INFO_ACTIVE_OBJECTS = 0;
	const static int INFO_COLLISION_PAIRS = 1;
	const static int INFO_ISLAND_COUNT = 2;
	const static int JOINT_DAMPED_SPRING = 2;
	const static int JOINT_GROOVE = 1;
	const static int JOINT_PIN = 0;
	const static int SHAPE_CAPSULE = 5;
	const static int SHAPE_CIRCLE = 3;
	const static int SHAPE_CONCAVE_POLYGON = 7;
	const static int SHAPE_CONVEX_POLYGON = 6;
	const static int SHAPE_CUSTOM = 8;
	const static int SHAPE_LINE = 0;
	const static int SHAPE_RECTANGLE = 4;
	const static int SHAPE_SEGMENT = 2;
	const static int SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_TRESHOLD = 4;
	const static int SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_TRESHOLD = 3;
	const static int SPACE_PARAM_BODY_MAX_ALLOWED_PENETRATION = 2;
	const static int SPACE_PARAM_BODY_TIME_TO_SLEEP = 5;
	const static int SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS = 6;
	const static int SPACE_PARAM_CONTACT_MAX_SEPARATION = 1;
	const static int SPACE_PARAM_CONTACT_RECYCLE_RADIUS = 0;


	static RID shape_create(const int type);
	static void shape_set_data(const RID shape, const Variant data);
	static int shape_get_type(const RID shape);
	static void shape_get_data(const RID shape);
	static RID space_create();
	static void space_set_active(const RID space, const bool active);
	static bool space_is_active(const RID space);
	static void space_set_param(const RID space, const int param, const float value);
	static float space_get_param(const RID space, const int param);
	static Physics2DDirectSpaceState *space_get_direct_state(const RID space);
	static RID area_create();
	static void area_set_space(const RID area, const RID space);
	static RID area_get_space(const RID area);
	static void area_set_space_override_mode(const RID area, const int mode);
	static int area_get_space_override_mode(const RID area);
	static void area_add_shape(const RID area, const RID shape, const Transform2D transform = Transform2D());
	static void area_set_shape(const RID area, const int shape_idx, const RID shape);
	static void area_set_shape_transform(const RID area, const int shape_idx, const Transform2D transform);
	static int area_get_shape_count(const RID area);
	static RID area_get_shape(const RID area, const int shape_idx);
	static Transform2D area_get_shape_transform(const RID area, const int shape_idx);
	static void area_remove_shape(const RID area, const int shape_idx);
	static void area_clear_shapes(const RID area);
	static void area_set_layer_mask(const RID area, const int mask);
	static void area_set_collision_mask(const RID area, const int mask);
	static void area_set_param(const RID area, const int param, const Variant value);
	static void area_set_transform(const RID area, const Transform2D transform);
	static void area_get_param(const RID area, const int param);
	static Transform2D area_get_transform(const RID area);
	static void area_attach_object_instance_ID(const RID area, const int id);
	static int area_get_object_instance_ID(const RID area);
	static void area_set_monitor_callback(const RID area, const Object *receiver, const String method);
	static RID body_create(const int mode = 2, const bool init_sleeping = false);
	static void body_set_space(const RID body, const RID space);
	static RID body_get_space(const RID body);
	static void body_set_mode(const RID body, const int mode);
	static int body_get_mode(const RID body);
	static void body_add_shape(const RID body, const RID shape, const Transform2D transform = Transform2D());
	static void body_set_shape(const RID body, const int shape_idx, const RID shape);
	static void body_set_shape_transform(const RID body, const int shape_idx, const Transform2D transform);
	static void body_set_shape_metadata(const RID body, const int shape_idx, const Variant metadata);
	static int body_get_shape_count(const RID body);
	static RID body_get_shape(const RID body, const int shape_idx);
	static Transform2D body_get_shape_transform(const RID body, const int shape_idx);
	static void body_get_shape_metadata(const RID body, const int shape_idx);
	static void body_remove_shape(const RID body, const int shape_idx);
	static void body_clear_shapes(const RID body);
	static void body_set_shape_as_trigger(const RID body, const int shape_idx, const bool enable);
	static bool body_is_shape_set_as_trigger(const RID body, const int shape_idx);
	static void body_attach_object_instance_ID(const RID body, const int id);
	static int body_get_object_instance_ID(const RID body);
	static void body_set_continuous_collision_detection_mode(const RID body, const int mode);
	static int body_get_continuous_collision_detection_mode(const RID body);
	static void body_set_layer_mask(const RID body, const int mask);
	static int body_get_layer_mask(const RID body);
	static void body_set_collision_mask(const RID body, const int mask);
	static int body_get_collision_mask(const RID body);
	static void body_set_param(const RID body, const int param, const float value);
	static float body_get_param(const RID body, const int param);
	static void body_set_state(const RID body, const int state, const Variant value);
	static void body_get_state(const RID body, const int state);
	static void body_apply_impulse(const RID body, const Vector2 pos, const Vector2 impulse);
	static void body_add_force(const RID body, const Vector2 offset, const Vector2 force);
	static void body_set_axis_velocity(const RID body, const Vector2 axis_velocity);
	static void body_add_collision_exception(const RID body, const RID excepted_body);
	static void body_remove_collision_exception(const RID body, const RID excepted_body);
	static void body_set_max_contacts_reported(const RID body, const int amount);
	static int body_get_max_contacts_reported(const RID body);
	static void body_set_one_way_collision_direction(const RID body, const Vector2 normal);
	static Vector2 body_get_one_way_collision_direction(const RID body);
	static void body_set_one_way_collision_max_depth(const RID body, const float depth);
	static float body_get_one_way_collision_max_depth(const RID body);
	static void body_set_omit_force_integration(const RID body, const bool enable);
	static bool body_is_omitting_force_integration(const RID body);
	static void body_set_force_integration_callback(const RID body, const Object *receiver, const String method, const Variant userdata = Variant());
	static bool body_test_motion(const RID body, const Transform2D from, const Vector2 motion, const float margin = 0.08, const Physics2DTestMotionResult *result = nullptr);
	static void joint_set_param(const RID joint, const int param, const float value);
	static float joint_get_param(const RID joint, const int param);
	static RID pin_joint_create(const Vector2 anchor, const RID body_a, const RID body_b = RID());
	static RID groove_joint_create(const Vector2 groove1_a, const Vector2 groove2_a, const Vector2 anchor_b, const RID body_a = RID(), const RID body_b = RID());
	static RID damped_spring_joint_create(const Vector2 anchor_a, const Vector2 anchor_b, const RID body_a, const RID body_b = RID());
	static void damped_string_joint_set_param(const RID joint, const int param, const float value);
	static float damped_string_joint_get_param(const RID joint, const int param);
	static int joint_get_type(const RID joint);
	static void free_rid(const RID rid);
	static void set_active(const bool active);
	static int get_process_info(const int process_info);
};

}
#endif
