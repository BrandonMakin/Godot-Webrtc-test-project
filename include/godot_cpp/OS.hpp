#ifndef OS_H
#define OS_H

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



class GD_CPP_BINDING_API OS : public Object {
private:
	static void ___singleton_init();
public:

	void _init();

	const static int DAY_FRIDAY = 5;
	const static int DAY_MONDAY = 1;
	const static int DAY_SATURDAY = 6;
	const static int DAY_SUNDAY = 0;
	const static int DAY_THURSDAY = 4;
	const static int DAY_TUESDAY = 2;
	const static int DAY_WEDNESDAY = 3;
	const static int MONTH_APRIL = 4;
	const static int MONTH_AUGUST = 8;
	const static int MONTH_DECEMBER = 12;
	const static int MONTH_FEBRUARY = 2;
	const static int MONTH_JANUARY = 1;
	const static int MONTH_JULY = 7;
	const static int MONTH_JUNE = 6;
	const static int MONTH_MARCH = 3;
	const static int MONTH_MAY = 5;
	const static int MONTH_NOVEMBER = 11;
	const static int MONTH_OCTOBER = 10;
	const static int MONTH_SEPTEMBER = 9;
	const static int POWERSTATE_CHARGED = 4;
	const static int POWERSTATE_CHARGING = 3;
	const static int POWERSTATE_NO_BATTERY = 2;
	const static int POWERSTATE_ON_BATTERY = 1;
	const static int POWERSTATE_UNKNOWN = 0;
	const static int SCREEN_ORIENTATION_LANDSCAPE = 0;
	const static int SCREEN_ORIENTATION_PORTRAIT = 1;
	const static int SCREEN_ORIENTATION_REVERSE_LANDSCAPE = 2;
	const static int SCREEN_ORIENTATION_REVERSE_PORTRAIT = 3;
	const static int SCREEN_ORIENTATION_SENSOR = 6;
	const static int SCREEN_ORIENTATION_SENSOR_LANDSCAPE = 4;
	const static int SCREEN_ORIENTATION_SENSOR_PORTRAIT = 5;
	const static int SYSTEM_DIR_DCIM = 1;
	const static int SYSTEM_DIR_DESKTOP = 0;
	const static int SYSTEM_DIR_DOCUMENTS = 2;
	const static int SYSTEM_DIR_DOWNLOADS = 3;
	const static int SYSTEM_DIR_MOVIES = 4;
	const static int SYSTEM_DIR_MUSIC = 5;
	const static int SYSTEM_DIR_PICTURES = 6;
	const static int SYSTEM_DIR_RINGTONES = 7;


	static void set_clipboard(const String clipboard);
	static String get_clipboard();
	static int get_screen_count();
	static int get_current_screen();
	static void set_current_screen(const int screen);
	static Vector2 get_screen_position(const int screen = 0);
	static Vector2 get_screen_size(const int screen = 0);
	static int get_screen_dpi(const int screen = 0);
	static Vector2 get_window_position();
	static void set_window_position(const Vector2 position);
	static Vector2 get_window_size();
	static void set_window_size(const Vector2 size);
	static void set_window_fullscreen(const bool enabled);
	static bool is_window_fullscreen();
	static void set_window_resizable(const bool enabled);
	static bool is_window_resizable();
	static void set_window_minimized(const bool enabled);
	static bool is_window_minimized();
	static void set_window_maximized(const bool enabled);
	static bool is_window_maximized();
	static void request_attention();
	static void set_borderless_window(const bool borderless);
	static bool get_borderless_window();
	static void set_screen_orientation(const int orientation);
	static int get_screen_orientation();
	static void set_keep_screen_on(const bool enabled);
	static bool is_keep_screen_on();
	static bool has_touchscreen_ui_hint();
	static void set_window_title(const String title);
	static void set_low_processor_usage_mode(const bool enable);
	static bool is_in_low_processor_usage_mode();
	static int get_processor_count();
	static String get_executable_path();
	static int execute(const String path, const PoolStringArray arguments, const bool blocking, const Array output = Array());
	static int kill(const int pid);
	static int shell_open(const String uri);
	static int get_process_ID();
	static String get_environment(const String environment);
	static bool has_environment(const String environment);
	static String get_name();
	static PoolStringArray get_cmdline_args();
	static Dictionary get_datetime(const bool utc = false);
	static Dictionary get_date(const bool utc = false);
	static Dictionary get_time(const bool utc = false);
	static Dictionary get_time_zone_info();
	static int get_unix_time();
	static Dictionary get_datetime_from_unix_time(const int unix_time_val);
	static int get_unix_time_from_datetime(const Dictionary datetime);
	static int get_system_time_secs();
	static void set_icon(const Image icon);
	static int get_exit_code();
	static void set_exit_code(const int code);
	static void delay_usec(const int usec);
	static void delay_msec(const int msec);
	static int get_ticks_msec();
	static int get_splash_tick_msec();
	static String get_locale();
	static String get_latin_keyboard_variant();
	static String get_model_name();
	static bool can_draw();
	static bool is_stdout_verbose();
	static bool can_use_threads();
	static bool is_debug_build();
	static void dump_memory_to_file(const String file);
	static void dump_resources_to_file(const String file);
	static bool has_virtual_keyboard();
	static void show_virtual_keyboard(const String existing_text);
	static void hide_virtual_keyboard();
	static void print_resources_in_use(const bool _short = false);
	static void print_all_resources(const String tofile);
	static int get_static_memory_usage();
	static int get_static_memory_peak_usage();
	static int get_dynamic_memory_usage();
	static String get_data_dir();
	static String get_system_dir(const int dir);
	static String get_unique_ID();
	static bool is_ok_left_and_cancel_right();
	static void print_all_textures_by_size();
	static void print_resources_by_type(const PoolStringArray types);
	static int native_video_play(const String path, const float volume, const String audio_track, const String subtitle_track);
	static bool native_video_is_playing();
	static void native_video_stop();
	static void native_video_pause();
	static void native_video_unpause();
	static String get_scancode_string(const int code);
	static bool is_scancode_unicode(const int code);
	static int find_scancode_from_string(const String string);
	static void set_use_file_access_save_and_swap(const bool enabled);
	static void alert(const String text, const String title = "Alert!");
	static int set_thread_name(const String name);
	static void set_use_vsync(const bool enable);
	static bool is_vsync_enabled();
	static int get_power_state();
	static int get_power_seconds_left();
	static int get_power_percent_left();
};

}
#endif
