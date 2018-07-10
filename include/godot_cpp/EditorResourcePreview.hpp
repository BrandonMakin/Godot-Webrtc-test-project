#ifndef EDITORRESOURCEPREVIEW_H
#define EDITORRESOURCEPREVIEW_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class EditorResourcePreviewGenerator;
class Resource;
class Object;


class GD_CPP_BINDING_API EditorResourcePreview : public Node {
public:

	void _init();



	void _preview_ready(const String arg0, const Object *arg1, const int arg2, const String arg3, const Variant arg4);
	void queue_resource_preview(const String path, const Object *receiver, const String receiver_func, const Variant userdata);
	void queue_edited_resource_preview(const Resource *resource, const Object *receiver, const String receiver_func, const Variant userdata);
	void add_preview_generator(const EditorResourcePreviewGenerator *generator);
	void remove_preview_generator(const EditorResourcePreviewGenerator *generator);
	void check_for_invalidation(const String path);
};

}
#endif
