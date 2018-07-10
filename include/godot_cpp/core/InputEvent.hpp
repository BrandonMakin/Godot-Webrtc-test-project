#ifndef INPUTEVENT_H
#define INPUTEVENT_H

#if defined(_WIN32)
#  ifdef _GD_CPP_CORE_API_IMPL
#    define GD_CPP_CORE_API __declspec(dllexport)
#  else
#    define GD_CPP_CORE_API __declspec(dllimport)
#  endif
#else
#  define GD_CPP_CORE_API
#endif

#include <cstdint>
#include <memory.h>

#include "String.hpp"

namespace godot {


enum {
	BUTTON_LEFT=1,
	BUTTON_RIGHT=2,
	BUTTON_MIDDLE=3,
	BUTTON_WHEEL_UP=4,
	BUTTON_WHEEL_DOWN=5,
	BUTTON_WHEEL_LEFT=6,
	BUTTON_WHEEL_RIGHT=7,
	BUTTON_MASK_LEFT=(1<<(BUTTON_LEFT-1)),
	BUTTON_MASK_RIGHT=(1<<(BUTTON_RIGHT-1)),
	BUTTON_MASK_MIDDLE=(1<<(BUTTON_MIDDLE-1)),

};

enum {

	JOY_BUTTON_0 = 0,
	JOY_BUTTON_1 = 1,
	JOY_BUTTON_2 = 2,
	JOY_BUTTON_3 = 3,
	JOY_BUTTON_4 = 4,
	JOY_BUTTON_5 = 5,
	JOY_BUTTON_6 = 6,
	JOY_BUTTON_7 = 7,
	JOY_BUTTON_8 = 8,
	JOY_BUTTON_9 = 9,
	JOY_BUTTON_10 = 10,
	JOY_BUTTON_11 = 11,
	JOY_BUTTON_12 = 12,
	JOY_BUTTON_13 = 13,
	JOY_BUTTON_14 = 14,
	JOY_BUTTON_15 = 15,
	JOY_BUTTON_MAX = 16,

	JOY_L = JOY_BUTTON_4,
	JOY_R = JOY_BUTTON_5,
	JOY_L2 = JOY_BUTTON_6,
	JOY_R2 = JOY_BUTTON_7,
	JOY_L3 = JOY_BUTTON_8,
	JOY_R3 = JOY_BUTTON_9,
	JOY_SELECT = JOY_BUTTON_10,
	JOY_START = JOY_BUTTON_11,
	JOY_DPAD_UP = JOY_BUTTON_12,
	JOY_DPAD_DOWN = JOY_BUTTON_13,
	JOY_DPAD_LEFT = JOY_BUTTON_14,
	JOY_DPAD_RIGHT = JOY_BUTTON_15,

	// a little history about game controllers (who copied who)

	JOY_SNES_B = JOY_BUTTON_0,
	JOY_SNES_A = JOY_BUTTON_1,
	JOY_SNES_Y = JOY_BUTTON_2,
	JOY_SNES_X = JOY_BUTTON_3,

	JOY_SONY_CIRCLE=JOY_SNES_A,
	JOY_SONY_X=JOY_SNES_B,
	JOY_SONY_SQUARE=JOY_SNES_Y,
	JOY_SONY_TRIANGLE=JOY_SNES_X,

	JOY_SEGA_B=JOY_SNES_A,
	JOY_SEGA_A=JOY_SNES_B,
	JOY_SEGA_X=JOY_SNES_Y,
	JOY_SEGA_Y=JOY_SNES_X,

	JOY_XBOX_B=JOY_SEGA_B,
	JOY_XBOX_A=JOY_SEGA_A,
	JOY_XBOX_X=JOY_SEGA_X,
	JOY_XBOX_Y=JOY_SEGA_Y,

	JOY_DS_A = JOY_SNES_A,
	JOY_DS_B = JOY_SNES_B,
	JOY_DS_X = JOY_SNES_X,
	JOY_DS_Y = JOY_SNES_Y,

	JOY_WII_C = JOY_BUTTON_5,
	JOY_WII_Z = JOY_BUTTON_6,

	JOY_WII_MINUS = JOY_BUTTON_9,
	JOY_WII_PLUS = JOY_BUTTON_10,

	// end of history

	JOY_AXIS_0=0,
	JOY_AXIS_1=1,
	JOY_AXIS_2=2,
	JOY_AXIS_3=3,
	JOY_AXIS_4=4,
	JOY_AXIS_5=5,
	JOY_AXIS_6=6,
	JOY_AXIS_7=7,
	JOY_AXIS_MAX=8,

	JOY_ANALOG_0_X = JOY_AXIS_0,
	JOY_ANALOG_0_Y = JOY_AXIS_1,

	JOY_ANALOG_1_X = JOY_AXIS_2,
	JOY_ANALOG_1_Y = JOY_AXIS_3,

	JOY_ANALOG_2_X = JOY_AXIS_4,
	JOY_ANALOG_2_Y = JOY_AXIS_5,

	JOY_ANALOG_L2 = JOY_AXIS_6,
	JOY_ANALOG_R2 = JOY_AXIS_7,
};


/**
 * Input Modifier Status
 * for keyboard/mouse events.
 */
struct GD_CPP_CORE_API InputModifierState {

	bool shift;
	bool alt;
#ifdef APPLE_STYLE_KEYS
	union {
	bool command;
	bool meta; //< windows/mac key
	};

	bool control;
#else
	union {
	bool command; //< windows/mac key
	bool control;
	};
	bool meta; //< windows/mac key

#endif

	inline bool operator==(const InputModifierState& rvalue) const {

		return ( (shift==rvalue.shift) && (alt==rvalue.alt) && (control==rvalue.control) && (meta==rvalue.meta));
	}
};






struct InputEventKey  {

	InputModifierState mod;

	bool pressed; /// otherwise release

	uint32_t scancode; ///< check keyboard.h , KeyCode enum, without modifier masks
	uint32_t unicode; ///unicode

	bool echo; /// true if this is an echo key
};


struct InputEventMouse  {

	InputModifierState mod;
	int button_mask;
	float x,y;
	float global_x,global_y;
	int pointer_index;
};

struct InputEventMouseButton : public InputEventMouse {


	int button_index;
	bool pressed; //otherwise released
	bool doubleclick; //last even less than doubleclick time

};

struct InputEventMouseMotion : public InputEventMouse {

	float relative_x,relative_y;
	float speed_x,speed_y;
};

struct InputEventJoypadMotion  {

	int axis; ///< Joypad axis
	float axis_value; ///< -1 to 1
};

struct InputEventJoypadButton  {

	int button_index;
	bool pressed;
	float pressure; //0 to 1
};

struct InputEventScreenTouch  {

	int index;
	float x,y;
	bool pressed;
};
struct InputEventScreenDrag  {

	int index;
	float x,y;
	float relative_x,relative_y;
	float speed_x,speed_y;
};

struct InputEventAction  {

	int action;
	bool pressed;
};


class Transform2D;

struct GD_CPP_CORE_API InputEvent {

	enum Type {
		NONE,
		KEY,
		MOUSE_MOTION,
		MOUSE_BUTTON,
		JOYPAD_MOTION,
		JOYPAD_BUTTON,
		SCREEN_TOUCH,
		SCREEN_DRAG,
		ACTION,
		TYPE_MAX
	};

	uint32_t ID;
	int type;
	int device;

	union {
		InputEventMouseMotion mouse_motion;
		InputEventMouseButton mouse_button;
		InputEventJoypadMotion joy_motion;
		InputEventJoypadButton joy_button;
		InputEventKey key;
		InputEventScreenTouch screen_touch;
		InputEventScreenDrag screen_drag;
		InputEventAction action;
	};

	bool is_pressed() const;
	bool is_action(const String& p_action) const;
	bool is_action_pressed(const String& p_action) const;
	bool is_action_released(const String& p_action) const;
	bool is_echo() const;
	void set_as_action(const String& p_action, bool p_pressed);

	InputEvent xform_by(const Transform2D& p_xform) const;
	bool operator==(const InputEvent &p_event) const;
	operator String() const;
	inline InputEvent() { memset(this,0,sizeof(InputEvent)); }
};

}

#endif // INPUTEVENT_H
