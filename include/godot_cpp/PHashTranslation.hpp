#ifndef PHASHTRANSLATION_H
#define PHASHTRANSLATION_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Translation.hpp"


namespace godot {

class Translation;


class GD_CPP_BINDING_API PHashTranslation : public Translation {
public:

	void _init();



	void generate(const Translation *from);
};

}
#endif
