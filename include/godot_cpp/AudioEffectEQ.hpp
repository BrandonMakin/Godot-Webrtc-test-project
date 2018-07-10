#ifndef AUDIOEFFECTEQ_H
#define AUDIOEFFECTEQ_H

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



class GD_CPP_BINDING_API AudioEffectEQ : public AudioEffect {
public:

	void _init();



	void set_band_gain_db(const int band_idx, const float volume_db);
	float get_band_gain_db(const int band_idx) const;
	int get_band_count() const;
};

}
#endif
