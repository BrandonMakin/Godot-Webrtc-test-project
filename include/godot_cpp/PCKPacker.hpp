#ifndef PCKPACKER_H
#define PCKPACKER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {



class GD_CPP_BINDING_API PCKPacker : public Reference {
public:

	void _init();



	int pck_start(const String pck_name, const int alignment);
	int add_file(const String pck_path, const String source_path);
	int flush(const bool verbose);
};

}
#endif
