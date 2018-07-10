#ifndef AUDIOEFFECTCOMPRESSOR_H
#define AUDIOEFFECTCOMPRESSOR_H

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



class GD_CPP_BINDING_API AudioEffectCompressor : public AudioEffect {
public:

	void _init();



	void set_treshold(const float treshold);
	float get_treshold() const;
	void set_ratio(const float ratio);
	float get_ratio() const;
	void set_gain(const float gain);
	float get_gain() const;
	void set_attack_us(const float attack_us);
	float get_attack_us() const;
	void set_release_ms(const float release_ms);
	float get_release_ms() const;
	void set_mix(const float mix);
	float get_mix() const;
	void set_sidechain(const String sidechain);
	String get_sidechain() const;
};

}
#endif
