#ifndef AUDIOEFFECTLIMITER_H
#define AUDIOEFFECTLIMITER_H

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



class GD_CPP_BINDING_API AudioEffectLimiter : public AudioEffect {
public:

	void _init();



	void set_ceiling_db(const float ceiling);
	float get_ceiling_db() const;
	void set_treshold_db(const float treshold);
	float get_treshold_db() const;
	void set_soft_clip_db(const float soft_clip);
	float get_soft_clip_db() const;
	void set_soft_clip_ratio(const float soft_clip);
	float get_soft_clip_ratio() const;
};

}
#endif
