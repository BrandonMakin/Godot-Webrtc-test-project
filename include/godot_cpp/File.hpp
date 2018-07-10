#ifndef FILE_H
#define FILE_H

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



class GD_CPP_BINDING_API File : public Reference {
public:

	void _init();

	const static int READ = 1;
	const static int READ_WRITE = 3;
	const static int WRITE = 2;
	const static int WRITE_READ = 7;


	int open_encrypted(const String path, const int mode_flags, const PoolByteArray key);
	int open_encrypted_with_pass(const String path, const int mode_flags, const String pass);
	int open(const String path, const int flags);
	void close();
	bool is_open() const;
	void seek(const int pos);
	void seek_end(const int pos = 0);
	int get_pos() const;
	int get_len() const;
	bool eof_reached() const;
	int get_8() const;
	int get_16() const;
	int get_32() const;
	int get_64() const;
	float get_float() const;
	float get_double() const;
	float get_real() const;
	PoolByteArray get_buffer(const int len) const;
	String get_line() const;
	String get_as_text() const;
	String get_md5(const String path) const;
	String get_sha256(const String path) const;
	bool get_endian_swap();
	void set_endian_swap(const bool enable);
	Error get_error() const;
	void get_var() const;
	PoolStringArray get_csv_line(const String delim = ",") const;
	void store_8(const int value);
	void store_16(const int value);
	void store_32(const int value);
	void store_64(const int value);
	void store_float(const float value);
	void store_double(const float value);
	void store_real(const float value);
	void store_buffer(const PoolByteArray buffer);
	void store_line(const String line);
	void store_string(const String string);
	void store_var(const Variant value);
	void store_pascal_string(const String string);
	String get_pascal_string();
	bool file_exists(const String path) const;
	int get_modified_time(const String file) const;
};

}
#endif
