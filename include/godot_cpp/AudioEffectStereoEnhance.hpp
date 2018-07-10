#ifndef AUDIOEFFECTSTEREOENHANCE_H
#define AUDIOEFFECTSTEREOENHANCE_H

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



class GD_CPP_BINDING_API AudioEffectStereoEnhance : public AudioEffect {
public:

	void _init();



	void set_pan_pullout(const float amount);
	float get_pan_pullout() const;
	void set_time_pullout(const float amount);
	float get_time_pullout() const;
	void set_surround(const float amount);
	float get_surround() const;
};

}
#endif
