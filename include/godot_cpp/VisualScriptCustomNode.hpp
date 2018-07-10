#ifndef VISUALSCRIPTCUSTOMNODE_H
#define VISUALSCRIPTCUSTOMNODE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualScriptNode.hpp"


namespace godot {



class GD_CPP_BINDING_API VisualScriptCustomNode : public VisualScriptNode {
public:

	void _init();

	const static int START_MODE_BEGIN_SEQUENCE = 0;
	const static int START_MODE_CONTINUE_SEQUENCE = 1;
	const static int START_MODE_RESUME_YIELD = 2;
	const static int STEP_EXIT_FUNCTION_BIT = 134217728;
	const static int STEP_GO_BACK_BIT = 33554432;
	const static int STEP_NO_ADVANCE_BIT = 67108864;
	const static int STEP_PUSH_STACK_BIT = 16777216;
	const static int STEP_YIELD_BIT = 268435456;


	int _get_output_sequence_port_count();
	bool _has_input_sequence_port();
	String _get_output_sequence_port_text(const int idx);
	int _get_input_value_port_count();
	int _get_output_value_port_count();
	int _get_input_value_port_type(const int idx);
	String _get_input_value_port_name(const int idx);
	int _get_output_value_port_type(const int idx);
	String _get_output_value_port_name(const int idx);
	String _get_caption();
	String _get_text();
	String _get_category();
	int _get_working_memory_size();
	Variant _step(const Array inputs, const Array outputs, const int start_mode, const Array working_mem);
};

}
#endif
