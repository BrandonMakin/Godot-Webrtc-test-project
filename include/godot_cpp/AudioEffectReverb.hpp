#ifndef AUDIOEFFECTREVERB_H
#define AUDIOEFFECTREVERB_H

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



class GD_CPP_BINDING_API AudioEffectReverb : public AudioEffect {
public:

	void _init();



	void set_predelay_msec(const float msec);
	float get_predelay_msec() const;
	void set_predelay_feedback(const float feedback);
	float get_predelay_feedback() const;
	void set_room_size(const float size);
	float get_room_size() const;
	void set_damping(const float amount);
	float get_damping() const;
	void set_spread(const float amount);
	float get_spread() const;
	void set_dry(const float amount);
	float get_dry() const;
	void set_wet(const float amount);
	float get_wet() const;
	void set_hpf(const float amount);
	float get_hpf() const;
};

}
#endif
