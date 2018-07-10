#ifndef AUDIOEFFECTDISTORTION_H
#define AUDIOEFFECTDISTORTION_H

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



class GD_CPP_BINDING_API AudioEffectDistortion : public AudioEffect {
public:

	void _init();



	void set_mode(const int mode);
	int get_mode() const;
	void set_pre_gain(const float pre_gain);
	float get_pre_gain() const;
	void set_keep_hf_hz(const float keep_hf_hz);
	float get_keep_hf_hz() const;
	void set_drive(const float drive);
	float get_drive() const;
	void set_post_gain(const float post_gain);
	float get_post_gain() const;
};

}
#endif
