#ifndef AUDIOEFFECTCHORUS_H
#define AUDIOEFFECTCHORUS_H

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



class GD_CPP_BINDING_API AudioEffectChorus : public AudioEffect {
public:

	void _init();



	void set_voice_count(const int voices);
	int get_voice_count() const;
	void set_voice_delay_ms(const int voice_idx, const float delay_ms);
	float get_voice_delay_ms(const int voice_idx) const;
	void set_voice_rate_hz(const int voice_idx, const float rate_hz);
	float get_voice_rate_hz(const int voice_idx) const;
	void set_voice_depth_ms(const int voice_idx, const float depth_ms);
	float get_voice_depth_ms(const int voice_idx) const;
	void set_voice_level_db(const int voice_idx, const float level_db);
	float get_voice_level_db(const int voice_idx) const;
	void set_voice_cutoff_hz(const int voice_idx, const float cutoff_hz);
	float get_voice_cutoff_hz(const int voice_idx) const;
	void set_voice_pan(const int voice_idx, const float pan);
	float get_voice_pan(const int voice_idx) const;
	void set_wet(const float amount);
	float get_wet() const;
	void set_dry(const float amount);
	float get_dry() const;
};

}
#endif
