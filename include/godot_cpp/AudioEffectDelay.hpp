#ifndef AUDIOEFFECTDELAY_H
#define AUDIOEFFECTDELAY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "AudioEffect.hpp"


namespace godot {



class GD_CPP_BINDING_API AudioEffectDelay : public AudioEffect {
public:

	void _init();



	void set_dry(const float amount);
	float get_dry();
	void set_tap1_active(const bool amount);
	bool is_tap1_active() const;
	void set_tap1_delay_ms(const float amount);
	float get_tap1_delay_ms() const;
	void set_tap1_level_db(const float amount);
	float get_tap1_level_db() const;
	void set_tap1_pan(const float amount);
	float get_tap1_pan() const;
	void set_tap2_active(const bool amount);
	bool is_tap2_active() const;
	void set_tap2_delay_ms(const float amount);
	float get_tap2_delay_ms() const;
	void set_tap2_level_db(const float amount);
	float get_tap2_level_db() const;
	void set_tap2_pan(const float amount);
	float get_tap2_pan() const;
	void set_feedback_active(const bool amount);
	bool is_feedback_active() const;
	void set_feedback_delay_ms(const float amount);
	float get_feedback_delay_ms() const;
	void set_feedback_level_db(const float amount);
	float get_feedback_level_db() const;
	void set_feedback_lowpass(const float amount);
	float get_feedback_lowpass() const;
};

}
#endif
