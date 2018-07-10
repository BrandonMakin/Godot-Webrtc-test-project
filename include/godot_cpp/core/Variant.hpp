#ifndef VARIANT_H
#define VARIANT_H

#if defined(_WIN32)
#  ifdef _GD_CPP_CORE_API_IMPL
#    define GD_CPP_CORE_API __declspec(dllexport)
#  else
#    define GD_CPP_CORE_API __declspec(dllimport)
#  endif
#else
#  define GD_CPP_CORE_API
#endif

#include <godot/godot_variant.h>

#include "Defs.hpp"

#include "Basis.hpp"
#include "Color.hpp"
#include "Image.hpp"
#include "InputEvent.hpp"
#include "NodePath.hpp"
#include "Plane.hpp"
#include "PoolArrays.hpp"
#include "Quat.hpp"
#include "Rect2.hpp"
#include "Rect3.hpp"
#include "RID.hpp"
#include "String.hpp"
#include "Transform.hpp"
#include "Transform2D.hpp"
#include "Vector2.hpp"
#include "Vector3.hpp"

#include <iostream>

namespace godot {

class Dictionary;

class Array;

class GD_CPP_CORE_API Variant {
	godot_variant _godot_variant;
public:
	enum Type {

		NIL,

		// atomic types
		BOOL,
		INT,
		REAL,
		STRING,

		// math types

		VECTOR2,		// 5
		RECT2,
		VECTOR3,
		TRANSFORM2D,
		PLANE,
		QUAT,			// 10
		RECT3, //sorry naming convention fail :( not like it's used often
		BASIS,
		TRANSFORM,

		// misc types
		COLOR,
		IMAGE,			// 15
		NODE_PATH,
		_RID,
		OBJECT,
		INPUT_EVENT,
		DICTIONARY,		// 20
		ARRAY,

		// arrays
		POOL_BYTE_ARRAY,
		POOL_INT_ARRAY,
		POOL_REAL_ARRAY,
		POOL_STRING_ARRAY,	// 25
		POOL_VECTOR2_ARRAY,
		POOL_VECTOR3_ARRAY,
		POOL_COLOR_ARRAY,

		VARIANT_MAX

	};

	Variant();

	Variant(const Variant& v);

	Variant(bool p_bool);

	Variant(signed int p_int);

	Variant(unsigned int p_int);

	Variant(signed short p_short);

	inline Variant(unsigned short p_short) : Variant((unsigned int) p_short) {}

	inline Variant(signed char p_char) : Variant((signed int) p_char) {}

	inline Variant(unsigned char p_char) : Variant((unsigned int) p_char) {}
	Variant(int64_t p_char);

	Variant(uint64_t p_char);

	Variant(float p_float);

	Variant(double p_double);

	Variant(const String& p_string);

	Variant(const char * const p_cstring);

	Variant(const wchar_t * p_wstring);

	Variant(const Vector2& p_vector2);

	Variant(const Rect2& p_rect2);

	Variant(const Vector3& p_vector3);

	Variant(const Plane& p_plane);


	Variant(const Rect3& p_aabb);

	Variant(const Quat& p_quat);

	Variant(const Basis& p_transform);

	Variant(const Transform2D& p_transform);

	Variant(const Transform& p_transform);

	Variant(const Color& p_color);

	Variant(const Image& p_image);

	Variant(const NodePath& p_path);

	Variant(const RID& p_rid);

	Variant(const Object* p_object);

	Variant(const InputEvent& p_input_event);

	Variant(const Dictionary& p_dictionary);

	Variant(const Array& p_array);

	Variant(const PoolByteArray& p_raw_array);

	Variant(const PoolIntArray& p_int_array);

	Variant(const PoolRealArray& p_real_array);

	Variant(const PoolStringArray& p_string_array);

	Variant(const PoolVector2Array& p_vector2_array);

	Variant(const PoolVector3Array& p_vector3_array);

	Variant(const PoolColorArray& p_color_array);


	Variant &operator =(const Variant& v);


	operator bool() const;
	operator signed int() const;
	operator unsigned int() const ;
	operator signed short() const;
	operator unsigned short() const;
	operator signed char() const;
	operator unsigned char() const;
	operator int64_t() const;
	operator uint64_t() const;


	operator wchar_t() const;

	operator float() const;

	operator double() const;
	operator String() const;
	operator Vector2() const;
	operator Rect2() const;
	operator Vector3() const;
	operator Plane() const;
	operator Rect3() const;
	operator Quat() const;
	operator Basis() const;
	operator Transform() const;
	operator Transform2D() const;

	operator Color() const;

	operator Image() const;
	operator NodePath() const;
	operator RID() const;
	operator InputEvent() const;
	operator Object() const;

	operator Dictionary() const;
	operator Array() const;

	operator PoolByteArray() const;
	operator PoolIntArray() const;
	operator PoolRealArray() const;
	operator PoolStringArray() const;
	operator PoolVector2Array() const;
	operator PoolVector3Array() const;
	operator PoolColorArray() const;

	Type get_type() const;


	Variant call(const String& method, const Variant **args, const int arg_count);

	bool has_method(const String& method);

	bool operator ==(const Variant& b) const;

	bool operator !=(const Variant& b) const;

	bool operator <(const Variant& b) const;

	bool operator <=(const Variant& b) const;

	bool operator >(const Variant& b) const;

	bool operator >=(const Variant& b) const;

	bool hash_compare(const Variant& b) const;

	bool booleanize(bool &valid) const;

	~Variant();


};

}

#endif // VARIANT_H
