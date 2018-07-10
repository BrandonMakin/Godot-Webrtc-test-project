#ifndef CONFIRMATIONDIALOG_H
#define CONFIRMATIONDIALOG_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "AcceptDialog.hpp"


namespace godot {

class Button;


class GD_CPP_BINDING_API ConfirmationDialog : public AcceptDialog {
public:

	void _init();



	Button *get_cancel();
};

}
#endif
