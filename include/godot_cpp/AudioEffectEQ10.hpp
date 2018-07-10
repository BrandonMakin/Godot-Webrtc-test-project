#ifndef AUDIOEFFECTEQ10_H
#define AUDIOEFFECTEQ10_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "AudioEffectEQ.hpp"


namespace godot {



class GD_CPP_BINDING_API AudioEffectEQ10 : public AudioEffectEQ {
public:

	void _init();



};

}
#endif
