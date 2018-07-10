#ifndef INPUT_H
#define INPUT_H

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

class Texture;


class GD_CPP_BINDING_API Input : public Object {
private:
	static void ___singleton_init();
public:

	void _init();

	const static int MOUSE_MODE_CAPTURED = 2;
	const static int MOUSE_MODE_CONFINED = 3;
	const static int MOUSE_MODE_HIDDEN = 1;
	const static int MOUSE_MODE_VISIBLE = 0;


	static bool is_key_pressed(const int scancode);
	static bool is_mouse_button_pressed(const int button);
	static bool is_joy_button_pressed(const int device, const int button);
	static bool is_action_pressed(const String action);
	static bool is_action_just_pressed(const String action);
	static bool is_action_just_released(const String action);
	static void add_joy_mapping(const String mapping, const bool update_existing = false);
	static void remove_joy_mapping(const String guid);
	static bool is_joy_known(const int device);
	static float get_joy_axis(const int device, const int axis);
	static String get_joy_name(const int device);
	static String get_joy_guid(const int device);
	static Array get_connected_joypads();
	static Vector2 get_joy_vibration_strength(const int device);
	static float get_joy_vibration_duration(const int device);
	static String get_joy_button_string(const int button_index);
	static int get_joy_button_index_from_string(const String button);
	static String get_joy_axis_string(const int axis_index);
	static int get_joy_axis_index_from_string(const String axis);
	static void start_joy_vibration(const int device, const float weak_magnitude, const float strong_magnitude, const float duration = 0);
	static void stop_joy_vibration(const int device);
	static Vector3 get_gravity();
	static Vector3 get_accelerometer();
	static Vector3 get_magnetometer();
	static Vector3 get_gyroscope();
	static Vector2 get_last_mouse_speed();
	static int get_mouse_button_mask();
	static void set_mouse_mode(const int mode);
	static int get_mouse_mode();
	static void warp_mouse_pos(const Vector2 to);
	static void action_press(const String action);
	static void action_release(const String action);
	static void set_custom_mouse_cursor(const Texture *image, const Vector2 hotspot = Vector2(0, 0));
	static void parse_input_event(const InputEvent event);
};

}
#endif
