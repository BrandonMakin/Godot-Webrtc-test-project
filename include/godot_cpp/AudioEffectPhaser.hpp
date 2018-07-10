#ifndef AUDIOEFFECTPHASER_H
#define AUDIOEFFECTPHASER_H

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



class GD_CPP_BINDING_API AudioEffectPhaser : public AudioEffect {
public:

	void _init();



	void set_range_min_hz(const float hz);
	float get_range_min_hz() const;
	void set_range_max_hz(const float hz);
	float get_range_max_hz() const;
	void set_rate_hz(const float hz);
	float get_rate_hz() const;
	void set_feedback(const float fbk);
	float get_feedback() const;
	void set_depth(const float depth);
	float get_depth() const;
};

}
#endif
