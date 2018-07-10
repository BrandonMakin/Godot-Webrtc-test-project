#ifndef AUDIOSERVER_H
#define AUDIOSERVER_H

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

class AudioEffect;
class AudioBusLayout;
class Object;


class GD_CPP_BINDING_API AudioServer : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static void set_bus_count(const int amount);
	static int get_bus_count();
	static void remove_bus(const int index);
	static void add_bus(const int at_pos = -1);
	static void move_bus(const int index, const int to_index);
	static void set_bus_name(const int bus_idx, const String name);
	static String get_bus_name(const int bus_idx);
	static void set_bus_volume_db(const int bus_idx, const float volume_db);
	static float get_bus_volume_db(const int bus_idx);
	static void set_bus_send(const int bus_idx, const String send);
	static String get_bus_send(const int bus_idx);
	static void set_bus_solo(const int bus_idx, const bool enable);
	static bool is_bus_solo(const int bus_idx);
	static void set_bus_mute(const int bus_idx, const bool enable);
	static bool is_bus_mute(const int bus_idx);
	static void set_bus_bypass_effects(const int bus_idx, const bool enable);
	static bool is_bus_bypassing_effects(const int bus_idx);
	static void add_bus_effect(const int bus_idx, const AudioEffect *effect, const int arg2 = -1);
	static void remove_bus_effect(const int bus_idx, const int effect_idx);
	static void get_bus_effect_count(const int bus_idx, const Object *arg1, const int arg2);
	static AudioEffect *get_bus_effect(const int bus_idx, const int effect_idx);
	static void swap_bus_effects(const int bus_idx, const int effect_idx, const int by_effect_idx);
	static void set_bus_effect_enabled(const int bus_idx, const int effect_idx, const bool enabled);
	static bool is_bus_effect_enabled(const int bus_idx, const int effect_idx);
	static float get_bus_peak_volume_left_db(const int bus_idx, const int channel);
	static float get_bus_peak_volume_right_db(const int bus_idx, const int channel);
	static void lock();
	static void unlock();
	static int get_speaker_mode();
	static float get_mix_rate();
	static void set_bus_layout(const AudioBusLayout *bus_layout);
	static AudioBusLayout *generate_bus_layout();
};

}
#endif
