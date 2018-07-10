#ifndef AUDIOEFFECTPITCHSHIFT_H
#define AUDIOEFFECTPITCHSHIFT_H

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



class GD_CPP_BINDING_API AudioEffectPitchShift : public AudioEffect {
public:

	void _init();



	void set_pitch_scale(const float rate);
	float get_pitch_scale() const;
};

}
#endif
