#ifndef AUDIOEFFECTFILTER_H
#define AUDIOEFFECTFILTER_H

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



class GD_CPP_BINDING_API AudioEffectFilter : public AudioEffect {
public:

	void _init();



	void set_cutoff(const float freq);
	float get_cutoff() const;
	void set_resonance(const float amount);
	float get_resonance() const;
	void set_gain(const float amount);
	float get_gain() const;
	void set_db(const int amount);
	int get_db() const;
};

}
#endif
