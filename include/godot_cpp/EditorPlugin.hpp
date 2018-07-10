#ifndef EDITORPLUGIN_H
#define EDITORPLUGIN_H

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

class EditorResourcePreview;
class EditorSettings;
class Camera;
class Control;
class Texture;
class EditorSelection;
class Spatial;
class Object;
class UndoRedo;
class EditorSpatialGizmo;
class PopupMenu;
class ToolButton;
class EditorFileSystem;
class ConfigFile;
class Script;


class GD_CPP_BINDING_API EditorPlugin : public Node {
public:

	void _init();

	const static int CONTAINER_CANVAS_EDITOR_MENU = 4;
	const static int CONTAINER_CANVAS_EDITOR_SIDE = 5;
	const static int CONTAINER_PROPERTY_EDITOR_BOTTOM = 7;
	const static int CONTAINER_SPATIAL_EDITOR_BOTTOM = 3;
	const static int CONTAINER_SPATIAL_EDITOR_MENU = 1;
	const static int CONTAINER_SPATIAL_EDITOR_SIDE = 2;
	const static int CONTAINER_TOOLBAR = 0;
	const static int DOCK_SLOT_LEFT_BL = 1;
	const static int DOCK_SLOT_LEFT_BR = 3;
	const static int DOCK_SLOT_LEFT_UL = 0;
	const static int DOCK_SLOT_LEFT_UR = 2;
	const static int DOCK_SLOT_MAX = 8;
	const static int DOCK_SLOT_RIGHT_BL = 5;
	const static int DOCK_SLOT_RIGHT_BR = 7;
	const static int DOCK_SLOT_RIGHT_UL = 4;
	const static int DOCK_SLOT_RIGHT_UR = 6;


	bool forward_canvas_gui_input(const Transform2D canvas_xform, const InputEvent event) const;
	void forward_draw_over_canvas(const Transform2D canvas_xform, const Control *canvas) const;
	bool forward_spatial_gui_input(const Camera *camera, const InputEvent event) const;
	EditorSpatialGizmo *create_spatial_gizmo(const Spatial *for_spatial) const;
	String get_name();
	bool has_main_screen();
	void make_visible(const bool visible);
	void edit(const Object *object);
	bool handles(const Object *object);
	Dictionary get_state();
	void set_state(const Dictionary state);
	void clear();
	void save_external_data();
	void apply_changes();
	PoolStringArray get_breakpoints();
	void set_window_layout(const ConfigFile *layout);
	void get_window_layout(const ConfigFile *layout);
	void add_control_to_container(const int container, const Control *control);
	ToolButton *add_control_to_bottom_panel(const Control *control, const String title);
	void add_control_to_dock(const int slot, const Control *control);
	void remove_control_from_docks(const Control *control);
	void remove_control_from_bottom_panel(const Control *control);
	void add_tool_submenu_item(const String name, const PopupMenu *submenu);
	void add_custom_type(const String type, const String base, const Script *script, const Texture *icon);
	void remove_custom_type(const String type);
	Control *get_editor_viewport();
	EditorResourcePreview *get_resource_previewer();
	EditorFileSystem *get_resource_filesystem();
	void inspect_object(const Object *object, const String for_property);
	void update_canvas();
	void make_bottom_panel_item_visible(const Control *item);
	void hide_bottom_panel();
	Control *get_base_control();
	UndoRedo *get_undo_redo();
	EditorSelection *get_selection();
	EditorSettings *get_editor_settings();
	void queue_save_layout() const;
	void edit_resource(const Object *arg0);
};

}
#endif
