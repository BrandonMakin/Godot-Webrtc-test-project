#ifndef TRANSLATIONSERVER_H
#define TRANSLATIONSERVER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {

class Translation;


class GD_CPP_BINDING_API TranslationServer : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static void set_locale(const String locale);
	static String get_locale();
	static String translate(const String message);
	static void add_translation(const Translation *translation);
	static void remove_translation(const Translation *translation);
	static void clear();
};

}
#endif
