/* Generated code for Python source for module 'numpy.lib.stride_tricks'
 * created by Nuitka version 0.5.22
 *
 * This code is in part copyright 2016 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

/* The _module_numpy$lib$stride_tricks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$stride_tricks;
PyDictObject *moduledict_numpy$lib$stride_tricks;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain_broadcast_to;
static PyObject *const_str_digest_8e0d2891ca9f81841a9db0038b461fd3;
static PyObject *const_list_str_plain_reduce_ok_list;
extern PyObject *const_str_plain_type;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_subok;
extern PyObject *const_str_plain_view;
static PyObject *const_str_plain_new_array;
extern PyObject *const_str_plain__m;
extern PyObject *const_str_plain_multi_index;
static PyObject *const_str_plain_itviews;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_DummyArray;
extern PyObject *const_str_plain_as_strided;
extern PyObject *const_str_plain_readwrite;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain___array_finalize__;
extern PyObject *const_str_plain_fields;
static PyObject *const_list_str_plain_broadcast_to_str_plain_broadcast_arrays_list;
extern PyObject *const_str_plain_nditer;
extern PyObject *const_str_plain_stride_tricks;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_readonly;
extern PyObject *const_str_plain_asarray;
static PyObject *const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_subok_false_tuple;
static PyObject *const_str_digest_7d976bcd32a87597aa7a95fc351729f7;
static PyObject *const_str_plain_reduce_ok;
static PyObject *const_str_plain_itershape;
static PyObject *const_tuple_str_plain_original_array_str_plain_new_array_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_strides;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_writeable;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_digest_371818db87e00fe54108704034bbe955;
extern PyObject *const_str_plain___init__;
static PyObject *const_list_61bf13e60a4f1f0bf3a88fd48386157a_list;
extern PyObject *const_str_plain_interface;
extern PyObject *const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510;
static PyObject *const_str_plain_op_flag;
extern PyObject *const_str_plain___array_interface__;
static PyObject *const_tuple_194023a5b0252cfee6e6850e9546d848_tuple;
static PyObject *const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple;
static PyObject *const_str_digest_6a37bf9f7c65d5d742b61ca78d2aff6f;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_31;
extern PyObject *const_str_plain_extras;
static PyObject *const_str_plain_refs_ok;
extern PyObject *const_str_plain_all;
static PyObject *const_str_plain_original_array;
static PyObject *const_str_digest_a85b4d9d2b24f0fc5548189550c9d35f;
extern PyObject *const_tuple_str_plain_self_str_plain_interface_str_plain_base_tuple;
static PyObject *const_str_digest_30034babf03ee761f24fc62b8ce9686d;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain_broadcast_arrays;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_iterable;
static PyObject *const_str_digest_121f95687315cf5abe650b7ae41826a7;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_broadcast;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_6611c0481a0af4e0330fa8e68492033d;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_np;
static PyObject *const_str_digest_b1fe361b008e177d333837474aea7d24;
static PyObject *const_str_plain__broadcast_shape;
static PyObject *const_str_plain_op_flags;
static PyObject *const_str_digest_dca5f83d14798979213ab0b9313d0c92;
extern PyObject *const_str_plain_any;
static PyObject *const_str_plain_needs_writeable;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_b6621bfab566cc7398439391f2f8d5a7;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_str_plain__broadcast_to;
extern PyObject *const_tuple_none_none_false_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_pop;
static PyObject *const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple;
extern PyObject *const_str_plain_zerosize_ok;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__maybe_view_as_subclass;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_broadcast_to = UNSTREAM_STRING( &constant_bin[ 1195256 ], 12, 1 );
    const_str_digest_8e0d2891ca9f81841a9db0038b461fd3 = UNSTREAM_STRING( &constant_bin[ 1195983 ], 56, 0 );
    const_list_str_plain_reduce_ok_list = PyList_New( 1 );
    const_str_plain_reduce_ok = UNSTREAM_STRING( &constant_bin[ 495488 ], 9, 1 );
    PyList_SET_ITEM( const_list_str_plain_reduce_ok_list, 0, const_str_plain_reduce_ok ); Py_INCREF( const_str_plain_reduce_ok );
    const_str_plain_new_array = UNSTREAM_STRING( &constant_bin[ 1196039 ], 9, 1 );
    const_str_plain_itviews = UNSTREAM_STRING( &constant_bin[ 500509 ], 7, 1 );
    const_str_plain_DummyArray = UNSTREAM_STRING( &constant_bin[ 1196048 ], 10, 1 );
    const_list_str_plain_broadcast_to_str_plain_broadcast_arrays_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_broadcast_to_str_plain_broadcast_arrays_list, 0, const_str_plain_broadcast_to ); Py_INCREF( const_str_plain_broadcast_to );
    PyList_SET_ITEM( const_list_str_plain_broadcast_to_str_plain_broadcast_arrays_list, 1, const_str_plain_broadcast_arrays ); Py_INCREF( const_str_plain_broadcast_arrays );
    const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 2, const_str_plain_subok ); Py_INCREF( const_str_plain_subok );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 3, const_str_plain_readonly ); Py_INCREF( const_str_plain_readonly );
    const_str_plain_needs_writeable = UNSTREAM_STRING( &constant_bin[ 1196058 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 4, const_str_plain_needs_writeable ); Py_INCREF( const_str_plain_needs_writeable );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 5, const_str_plain_extras ); Py_INCREF( const_str_plain_extras );
    const_str_plain_op_flag = UNSTREAM_STRING( &constant_bin[ 495670 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 6, const_str_plain_op_flag ); Py_INCREF( const_str_plain_op_flag );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 7, const_str_plain_broadcast ); Py_INCREF( const_str_plain_broadcast );
    PyTuple_SET_ITEM( const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 8, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_tuple_str_plain_subok_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_subok_false_tuple, 0, const_str_plain_subok ); Py_INCREF( const_str_plain_subok );
    PyTuple_SET_ITEM( const_tuple_str_plain_subok_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_7d976bcd32a87597aa7a95fc351729f7 = UNSTREAM_STRING( &constant_bin[ 1196073 ], 34, 0 );
    const_str_plain_itershape = UNSTREAM_STRING( &constant_bin[ 498820 ], 9, 1 );
    const_tuple_str_plain_original_array_str_plain_new_array_tuple = PyTuple_New( 2 );
    const_str_plain_original_array = UNSTREAM_STRING( &constant_bin[ 1196107 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_original_array_str_plain_new_array_tuple, 0, const_str_plain_original_array ); Py_INCREF( const_str_plain_original_array );
    PyTuple_SET_ITEM( const_tuple_str_plain_original_array_str_plain_new_array_tuple, 1, const_str_plain_new_array ); Py_INCREF( const_str_plain_new_array );
    const_str_plain_writeable = UNSTREAM_STRING( &constant_bin[ 68658 ], 9, 1 );
    const_str_digest_371818db87e00fe54108704034bbe955 = UNSTREAM_STRING( &constant_bin[ 1196121 ], 972, 0 );
    const_list_61bf13e60a4f1f0bf3a88fd48386157a_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_61bf13e60a4f1f0bf3a88fd48386157a_list, 0, const_str_plain_multi_index ); Py_INCREF( const_str_plain_multi_index );
    const_str_plain_refs_ok = UNSTREAM_STRING( &constant_bin[ 495393 ], 7, 1 );
    PyList_SET_ITEM( const_list_61bf13e60a4f1f0bf3a88fd48386157a_list, 1, const_str_plain_refs_ok ); Py_INCREF( const_str_plain_refs_ok );
    PyList_SET_ITEM( const_list_61bf13e60a4f1f0bf3a88fd48386157a_list, 2, const_str_plain_zerosize_ok ); Py_INCREF( const_str_plain_zerosize_ok );
    const_tuple_194023a5b0252cfee6e6850e9546d848_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_194023a5b0252cfee6e6850e9546d848_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_194023a5b0252cfee6e6850e9546d848_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_194023a5b0252cfee6e6850e9546d848_tuple, 2, const_str_plain_strides ); Py_INCREF( const_str_plain_strides );
    PyTuple_SET_ITEM( const_tuple_194023a5b0252cfee6e6850e9546d848_tuple, 3, const_str_plain_subok ); Py_INCREF( const_str_plain_subok );
    PyTuple_SET_ITEM( const_tuple_194023a5b0252cfee6e6850e9546d848_tuple, 4, const_str_plain_interface ); Py_INCREF( const_str_plain_interface );
    PyTuple_SET_ITEM( const_tuple_194023a5b0252cfee6e6850e9546d848_tuple, 5, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple, 2, const_str_plain_subok ); Py_INCREF( const_str_plain_subok );
    const_str_digest_6a37bf9f7c65d5d742b61ca78d2aff6f = UNSTREAM_STRING( &constant_bin[ 1197093 ], 65, 0 );
    const_str_digest_a85b4d9d2b24f0fc5548189550c9d35f = UNSTREAM_STRING( &constant_bin[ 1197158 ], 116, 0 );
    const_str_digest_30034babf03ee761f24fc62b8ce9686d = UNSTREAM_STRING( &constant_bin[ 1197274 ], 76, 0 );
    const_str_digest_121f95687315cf5abe650b7ae41826a7 = UNSTREAM_STRING( &constant_bin[ 1197350 ], 52, 0 );
    const_str_digest_6611c0481a0af4e0330fa8e68492033d = UNSTREAM_STRING( &constant_bin[ 1197402 ], 47, 0 );
    const_str_digest_b1fe361b008e177d333837474aea7d24 = UNSTREAM_STRING( &constant_bin[ 1197449 ], 1201, 0 );
    const_str_plain__broadcast_shape = UNSTREAM_STRING( &constant_bin[ 1198650 ], 16, 1 );
    const_str_plain_op_flags = UNSTREAM_STRING( &constant_bin[ 495670 ], 8, 1 );
    const_str_digest_dca5f83d14798979213ab0b9313d0c92 = UNSTREAM_STRING( &constant_bin[ 1198666 ], 132, 0 );
    const_str_digest_b6621bfab566cc7398439391f2f8d5a7 = UNSTREAM_STRING( &constant_bin[ 1198798 ], 162, 0 );
    const_str_plain__broadcast_to = UNSTREAM_STRING( &constant_bin[ 1198960 ], 13, 1 );
    const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple, 2, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple, 2, const_str_plain_subok ); Py_INCREF( const_str_plain_subok );
    PyTuple_SET_ITEM( const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple, 3, const_str_plain__m ); Py_INCREF( const_str_plain__m );
    PyTuple_SET_ITEM( const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple, 4, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple, 5, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    const_str_plain__maybe_view_as_subclass = UNSTREAM_STRING( &constant_bin[ 1198973 ], 23, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$stride_tricks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_80266c8ec230a9456d5710131866e800;
static PyCodeObject *codeobj_edb394a9db0e6b5fa20a669a19019d9b;
static PyCodeObject *codeobj_a6c7b4d93fffa87620d31f553729d8fc;
static PyCodeObject *codeobj_437859f2b94c4fc206af6fb9ad29438d;
static PyCodeObject *codeobj_84a12f9f37adf58bf1eb1a4b1526a974;
static PyCodeObject *codeobj_8e4db47cfe525be1f3fed3f4abcb6c60;
static PyCodeObject *codeobj_46f71b2047bf077e8b513490eb865651;
static PyCodeObject *codeobj_9e5dbdfa51089dad3878f08f00a75205;
static PyCodeObject *codeobj_d451d2119c59cb6a72bdcca87dd9737f;
static PyCodeObject *codeobj_9bdebd7beea5320f5d73cdfa83715319;
static PyCodeObject *codeobj_e8db5a48461ce4d685e9e863a75aab0f;
static PyCodeObject *codeobj_ad36951e2a50db8b2a00780ec429e5f1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6a37bf9f7c65d5d742b61ca78d2aff6f;
    codeobj_80266c8ec230a9456d5710131866e800 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 62, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_edb394a9db0e6b5fa20a669a19019d9b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 62, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a6c7b4d93fffa87620d31f553729d8fc = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 193, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_437859f2b94c4fc206af6fb9ad29438d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 193, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_84a12f9f37adf58bf1eb1a4b1526a974 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 20, const_tuple_str_plain_self_str_plain_interface_str_plain_base_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8e4db47cfe525be1f3fed3f4abcb6c60 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__broadcast_shape, 118, const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_46f71b2047bf077e8b513490eb865651 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__broadcast_to, 57, const_tuple_63ee1f3703cbaa71ff2ca45d7edc8683_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9e5dbdfa51089dad3878f08f00a75205 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__maybe_view_as_subclass, 25, const_tuple_str_plain_original_array_str_plain_new_array_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d451d2119c59cb6a72bdcca87dd9737f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_strided, 38, const_tuple_194023a5b0252cfee6e6850e9546d848_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9bdebd7beea5320f5d73cdfa83715319 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_broadcast_arrays, 137, const_tuple_9242bebfc39e7b96625423bdaafbee9e_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e8db5a48461ce4d685e9e863a75aab0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_broadcast_to, 77, const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad36951e2a50db8b2a00780ec429e5f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_stride_tricks, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$stride_tricks$$$class_1_DummyArray( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr( PyObject **python_pars );


static void numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr( PyObject **python_pars, PyCellObject *closure_shape );


static void numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$class_1_DummyArray$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_1__maybe_view_as_subclass(  );


static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_2_as_strided( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_3__broadcast_to(  );


static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_4_broadcast_to( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_5__broadcast_shape(  );


static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_6_broadcast_arrays(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$stride_tricks$$$class_1_DummyArray( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_dca5f83d14798979213ab0b9313d0c92;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$stride_tricks$$$class_1_DummyArray$$$function_1___init__( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    // Tried code:
    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$class_1_DummyArray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$class_1_DummyArray );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$stride_tricks$$$class_1_DummyArray$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_interface = python_pars[ 1 ];
    PyObject *par_base = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_84a12f9f37adf58bf1eb1a4b1526a974, module_numpy$lib$stride_tricks );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_assattr_name_1 = par_interface;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___array_interface__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_base;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_base, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_interface )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_interface,
                    par_interface
                );

                assert( res == 0 );
            }

            if ( par_base )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_base,
                    par_base
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$class_1_DummyArray$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_interface );
    Py_DECREF( par_interface );
    par_interface = NULL;

    CHECK_OBJECT( (PyObject *)par_base );
    Py_DECREF( par_base );
    par_base = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_interface );
    Py_DECREF( par_interface );
    par_interface = NULL;

    CHECK_OBJECT( (PyObject *)par_base );
    Py_DECREF( par_base );
    par_base = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$class_1_DummyArray$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$stride_tricks$$$function_1__maybe_view_as_subclass( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_original_array = python_pars[ 0 ];
    PyObject *par_new_array = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9e5dbdfa51089dad3878f08f00a75205, module_numpy$lib$stride_tricks );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_type_arg_1 = par_original_array;

    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_1 != NULL );
    tmp_type_arg_2 = par_new_array;

    tmp_compare_right_1 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_compare_right_1 != NULL );
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = par_new_array;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_view );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_type_arg_3 = par_original_array;

    tmp_dict_value_1 = BUILTIN_TYPE1( tmp_type_arg_3 );
    assert( tmp_dict_value_1 != NULL );
    tmp_dict_key_1 = const_str_plain_type;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 29;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_new_array;
        assert( old != NULL );
        par_new_array = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_2 = par_new_array;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___array_finalize__ );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_new_array;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___array_finalize__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_original_array;

    frame_function->f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_original_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_original_array,
                    par_original_array
                );

                assert( res == 0 );
            }

            if ( par_new_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_array,
                    par_new_array
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_new_array;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_1__maybe_view_as_subclass );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_original_array );
    Py_DECREF( par_original_array );
    par_original_array = NULL;

    CHECK_OBJECT( (PyObject *)par_new_array );
    Py_DECREF( par_new_array );
    par_new_array = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_original_array );
    Py_DECREF( par_original_array );
    par_original_array = NULL;

    CHECK_OBJECT( (PyObject *)par_new_array );
    Py_DECREF( par_new_array );
    par_new_array = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_1__maybe_view_as_subclass );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$stride_tricks$$$function_2_as_strided( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *par_strides = python_pars[ 2 ];
    PyObject *par_subok = python_pars[ 3 ];
    PyObject *var_interface = NULL;
    PyObject *var_array = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_seq_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_arg_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d451d2119c59cb6a72bdcca87dd9737f, module_numpy$lib$stride_tricks );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = Py_False;
    tmp_dict_key_1 = const_str_plain_copy;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_subok;

    tmp_dict_key_2 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 42;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_2 = par_x;

    tmp_dict_seq_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___array_interface__ );
    if ( tmp_dict_seq_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = TO_DICT( tmp_dict_seq_1, NULL );
    Py_DECREF( tmp_dict_seq_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_interface == NULL );
    var_interface = tmp_assign_source_2;

    tmp_compare_left_1 = par_shape;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_tuple_arg_1 = par_shape;

    tmp_dictset_value = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_dictset_dict = var_interface;

    tmp_dictset_key = const_str_plain_shape;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_compare_left_2 = par_strides;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_tuple_arg_2 = par_strides;

    tmp_dictset_value = PySequence_Tuple( tmp_tuple_arg_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_dictset_dict = var_interface;

    tmp_dictset_key = const_str_plain_strides;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_DummyArray );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DummyArray );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DummyArray" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_interface;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = par_x;

    tmp_dict_key_3 = const_str_plain_base;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 48;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    assert( var_array == NULL );
    var_array = tmp_assign_source_3;

    tmp_source_name_5 = var_array;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_fields );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_7 = par_x;

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fields );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_8 = par_x;

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_array;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_dtype, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__maybe_view_as_subclass );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__maybe_view_as_subclass );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_maybe_view_as_subclass" );
        exception_tb = NULL;

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_x;

    tmp_args_element_name_3 = var_array;

    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
                );

                assert( res == 0 );
            }

            if ( par_shape )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_shape,
                    par_shape
                );

                assert( res == 0 );
            }

            if ( par_strides )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_strides,
                    par_strides
                );

                assert( res == 0 );
            }

            if ( par_subok )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subok,
                    par_subok
                );

                assert( res == 0 );
            }

            if ( var_interface )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_interface,
                    var_interface
                );

                assert( res == 0 );
            }

            if ( var_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_array,
                    var_array
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_2_as_strided );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_strides );
    Py_DECREF( par_strides );
    par_strides = NULL;

    CHECK_OBJECT( (PyObject *)par_subok );
    Py_DECREF( par_subok );
    par_subok = NULL;

    CHECK_OBJECT( (PyObject *)var_interface );
    Py_DECREF( var_interface );
    var_interface = NULL;

    CHECK_OBJECT( (PyObject *)var_array );
    Py_DECREF( var_array );
    var_array = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_strides );
    Py_DECREF( par_strides );
    par_strides = NULL;

    CHECK_OBJECT( (PyObject *)par_subok );
    Py_DECREF( par_subok );
    par_subok = NULL;

    Py_XDECREF( var_interface );
    var_interface = NULL;

    Py_XDECREF( var_array );
    var_array = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_2_as_strided );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$stride_tricks$$$function_3__broadcast_to( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *par_subok = python_pars[ 2 ];
    PyObject *par_readonly = python_pars[ 3 ];
    PyObject *var_needs_writeable = NULL;
    PyObject *var_extras = NULL;
    PyObject *var_op_flag = NULL;
    PyObject *var_broadcast = NULL;
    PyObject *var_result = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_46f71b2047bf077e8b513490eb865651, module_numpy$lib$stride_tricks );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_iterable );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_shape;

    frame_function->f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_tuple_arg_1 = par_shape;

    tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_shape;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    condexpr_end_1:;
    {
        PyObject *old = par_shape;
        assert( old != NULL );
        par_shape = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_array;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = Py_False;
    tmp_dict_key_1 = const_str_plain_copy;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_subok;

    tmp_dict_key_2 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 59;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_array;
        assert( old != NULL );
        par_array = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_operand_name_1 = par_shape;

    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_3 = par_array;

    tmp_and_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_6611c0481a0af4e0330fa8e68492033d;
    frame_function->f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 61;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_any );
    assert( tmp_called_name_3 != NULL );
    tmp_iter_arg_1 = par_shape;

    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_args_element_name_2 = impl_numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr( dir_call_args );
    }
    assert( tmp_args_element_name_2 != NULL );
    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_121f95687315cf5abe650b7ae41826a7;
    frame_function->f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 63;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_operand_name_2 = par_readonly;

    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_source_name_5 = par_array;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_flags );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_writeable );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_assign_source_3 = tmp_and_left_value_2;
    and_end_2:;
    assert( var_needs_writeable == NULL );
    var_needs_writeable = tmp_assign_source_3;

    tmp_cond_value_4 = var_needs_writeable;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_assign_source_4 = LIST_COPY( const_list_str_plain_reduce_ok_list );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_4 = PyList_New( 0 );
    condexpr_end_2:;
    assert( var_extras == NULL );
    var_extras = tmp_assign_source_4;

    tmp_cond_value_5 = var_needs_writeable;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_assign_source_5 = const_str_plain_readwrite;
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_5 = const_str_plain_readonly;
    condexpr_end_3:;
    assert( var_op_flag == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_op_flag = tmp_assign_source_5;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_nditer );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyTuple_New( 1 );
    tmp_tuple_element_4 = par_array;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 4 );
    tmp_left_name_1 = LIST_COPY( const_list_61bf13e60a4f1f0bf3a88fd48386157a_list );
    tmp_right_name_1 = var_extras;

    tmp_dict_value_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_flags;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = PyList_New( 1 );
    tmp_list_element_1 = var_op_flag;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_4, 0, tmp_list_element_1 );
    tmp_dict_key_4 = const_str_plain_op_flags;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_value_5 = par_shape;

    tmp_dict_key_5 = const_str_plain_itershape;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = const_str_plain_C;
    tmp_dict_key_6 = const_str_plain_order;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 70;
    tmp_source_name_6 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_itviews );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    assert( var_broadcast == NULL );
    var_broadcast = tmp_assign_source_6;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__maybe_view_as_subclass );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__maybe_view_as_subclass );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_maybe_view_as_subclass" );
        exception_tb = NULL;

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_array;

    tmp_args_element_name_4 = var_broadcast;

    frame_function->f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_7;

    tmp_and_left_value_3 = var_needs_writeable;

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_source_name_9 = var_result;

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_flags );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_writeable );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_6 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_1 = Py_True;
    tmp_source_name_10 = var_result;

    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_flags );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_writeable, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_1 );
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_array,
                    par_array
                );

                assert( res == 0 );
            }

            if ( par_shape )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_shape,
                    par_shape
                );

                assert( res == 0 );
            }

            if ( par_subok )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subok,
                    par_subok
                );

                assert( res == 0 );
            }

            if ( par_readonly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_readonly,
                    par_readonly
                );

                assert( res == 0 );
            }

            if ( var_needs_writeable )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_needs_writeable,
                    var_needs_writeable
                );

                assert( res == 0 );
            }

            if ( var_extras )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_extras,
                    var_extras
                );

                assert( res == 0 );
            }

            if ( var_op_flag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_op_flag,
                    var_op_flag
                );

                assert( res == 0 );
            }

            if ( var_broadcast )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_broadcast,
                    var_broadcast
                );

                assert( res == 0 );
            }

            if ( var_result )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_result,
                    var_result
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_result;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_3__broadcast_to );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_subok );
    Py_DECREF( par_subok );
    par_subok = NULL;

    CHECK_OBJECT( (PyObject *)par_readonly );
    Py_DECREF( par_readonly );
    par_readonly = NULL;

    CHECK_OBJECT( (PyObject *)var_needs_writeable );
    Py_DECREF( var_needs_writeable );
    var_needs_writeable = NULL;

    CHECK_OBJECT( (PyObject *)var_extras );
    Py_DECREF( var_extras );
    var_extras = NULL;

    CHECK_OBJECT( (PyObject *)var_op_flag );
    Py_DECREF( var_op_flag );
    var_op_flag = NULL;

    CHECK_OBJECT( (PyObject *)var_broadcast );
    Py_DECREF( var_broadcast );
    var_broadcast = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_subok );
    Py_DECREF( par_subok );
    par_subok = NULL;

    CHECK_OBJECT( (PyObject *)par_readonly );
    Py_DECREF( par_readonly );
    par_readonly = NULL;

    Py_XDECREF( var_needs_writeable );
    var_needs_writeable = NULL;

    Py_XDECREF( var_extras );
    var_extras = NULL;

    Py_XDECREF( var_op_flag );
    var_op_flag = NULL;

    Py_XDECREF( var_broadcast );
    var_broadcast = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_3__broadcast_to );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyCellObject *par_$0 = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
        closure[0] = par_$0;
        Py_INCREF( closure[0] );

        tmp_return_value = Nuitka_Generator_New(
            numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr$$$genexpr_1_genexpr_context,
            const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_edb394a9db0e6b5fa20a669a19019d9b,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void numpy$lib$stride_tricks$$$function_3__broadcast_to$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_size = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next_source_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_80266c8ec230a9456d5710131866e800, module_numpy$lib$stride_tricks );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 62;
            goto try_except_handler_2;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", ".0" );
        exception_tb = NULL;

        exception_lineno = 62;
        goto try_except_handler_2;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 62;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    {
        PyObject *old = var_size;
        var_size = tmp_assign_source_2;
        Py_INCREF( var_size );
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = var_size;

    tmp_compexpr_right_1 = const_int_0;
    tmp_expression_name_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_digest_b9c4baf879ebd882d40843df3a4dead7,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_size )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_size,
                    var_size
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_size );
    var_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}


static PyObject *impl_numpy$lib$stride_tricks$$$function_4_broadcast_to( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *par_subok = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e8db5a48461ce4d685e9e863a75aab0f, module_numpy$lib$stride_tricks );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__broadcast_to );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__broadcast_to );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_broadcast_to" );
        exception_tb = NULL;

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_array;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_shape;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_subok;

    tmp_dict_key_1 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = Py_True;
    tmp_dict_key_2 = const_str_plain_readonly;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 115;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_array,
                    par_array
                );

                assert( res == 0 );
            }

            if ( par_shape )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_shape,
                    par_shape
                );

                assert( res == 0 );
            }

            if ( par_subok )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subok,
                    par_subok
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_4_broadcast_to );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_subok );
    Py_DECREF( par_subok );
    par_subok = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_array );
    Py_DECREF( par_array );
    par_array = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_subok );
    Py_DECREF( par_subok );
    par_subok = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_4_broadcast_to );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$stride_tricks$$$function_5__broadcast_shape( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_b = NULL;
    PyObject *var_pos = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range3_high_1;
    PyObject *tmp_range3_low_1;
    PyObject *tmp_range3_step_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8e4db47cfe525be1f3fed3f4abcb6c60, module_numpy$lib$stride_tricks );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_cond_value_1 = par_args;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_7d976bcd32a87597aa7a95fc351729f7;
    frame_function->f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 123;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_broadcast );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 32;
    tmp_slice_source_1 = par_args;

    tmp_dircall_arg2_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_assign_source_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    assert( var_b == NULL );
    var_b = tmp_assign_source_1;

    tmp_range3_low_1 = const_int_pos_32;
    tmp_len_arg_1 = par_args;

    tmp_range3_high_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range3_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_range3_step_1 = const_int_pos_31;
    tmp_iter_arg_1 = BUILTIN_RANGE3( tmp_range3_low_1, tmp_range3_high_1, tmp_range3_step_1 );
    Py_DECREF( tmp_range3_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 128;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_pos;
        var_pos = tmp_assign_source_4;
        Py_INCREF( var_pos );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_broadcast_to );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_broadcast_to );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "broadcast_to" );
        exception_tb = NULL;

        exception_lineno = 132;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = const_int_0;
    tmp_source_name_2 = var_b;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "b" );
        exception_tb = NULL;

        exception_lineno = 132;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_b;
        var_b = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 133;
        goto try_except_handler_2;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_broadcast );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto try_except_handler_2;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_b;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_slice_source_2 = par_args;

    tmp_slice_lower_1 = var_pos;

    tmp_left_name_1 = var_pos;

    tmp_right_name_1 = const_int_pos_31;
    tmp_slice_upper_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );

        exception_lineno = 133;
        goto try_except_handler_2;
    }
    tmp_dircall_arg3_1 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_dircall_arg3_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );

        exception_lineno = 133;
        goto try_except_handler_2;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
        tmp_assign_source_6 = impl___internal__$$$function_3_complex_call_helper_pos_star_list( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_b;
        assert( old != NULL );
        var_b = tmp_assign_source_6;
        Py_DECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_4 = var_b;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "b" );
        exception_tb = NULL;

        exception_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( var_b )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_b,
                    var_b
                );

                assert( res == 0 );
            }

            if ( var_pos )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pos,
                    var_pos
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_5__broadcast_shape );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_5__broadcast_shape );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$stride_tricks$$$function_6_broadcast_arrays( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_subok = NULL;
    PyObject *var__m = NULL;
    PyCellObject *var_shape = PyCell_EMPTY();
    PyObject *var_array = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9bdebd7beea5320f5d73cdfa83715319, module_numpy$lib$stride_tricks );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_kwargs;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 185;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_subok_false_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    assert( var_subok == NULL );
    var_subok = tmp_assign_source_1;

    tmp_cond_value_1 = par_kwargs;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = const_str_digest_8e0d2891ca9f81841a9db0038b461fd3;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_3 = par_kwargs;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pop );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 188;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 188;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_iter_arg_1 = par_args;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_4;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 189;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var__m;
        var__m = tmp_assign_source_6;
        Py_INCREF( var__m );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 189;
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_array );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var__m;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = Py_False;
    tmp_dict_key_1 = const_str_plain_copy;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = var_subok;

    tmp_dict_key_2 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    PyThreadState_GET()->frame->f_lineno = 189;
    tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    {
        PyObject *old = par_args;
        assert( old != NULL );
        par_args = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__broadcast_shape );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__broadcast_shape );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_broadcast_shape" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_assign_source_7 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_shape );
        PyCell_SET( var_shape, tmp_assign_source_7 );
        Py_XDECREF( old );
    }

    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_all );
    assert( tmp_called_name_5 != NULL );
    tmp_iter_arg_2 = par_args;

    tmp_dircall_arg1_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_args_element_name_2 = impl_numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr( dir_call_args, var_shape );
    }
    assert( tmp_args_element_name_2 != NULL );
    frame_function->f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_args;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    // Tried code:
    tmp_iter_arg_3 = par_args;

    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_8;

    tmp_assign_source_9 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_9;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 199;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_array;
        var_array = tmp_assign_source_11;
        Py_INCREF( var_array );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__broadcast_to );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__broadcast_to );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_broadcast_to" );
        exception_tb = NULL;

        exception_lineno = 199;
        goto try_except_handler_3;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_array;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyCell_GET( var_shape );

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 199;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = var_subok;

    tmp_dict_key_3 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = Py_False;
    tmp_dict_key_4 = const_str_plain_readonly;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    PyThreadState_GET()->frame->f_lineno = 199;
    tmp_append_value_2 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
    Py_DECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
    Py_DECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays );
    return NULL;
    outline_result_2:;
    tmp_return_value = tmp_outline_return_value_2;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_kwargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kwargs,
                    par_kwargs
                );

                assert( res == 0 );
            }

            if ( var_subok )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subok,
                    var_subok
                );

                assert( res == 0 );
            }

            if ( var__m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__m,
                    var__m
                );

                assert( res == 0 );
            }

            if ( var_shape->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_shape,
                    var_shape->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_array,
                    var_array
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_subok );
    Py_DECREF( var_subok );
    var_subok = NULL;

    Py_XDECREF( var__m );
    var__m = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_array );
    var_array = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_subok );
    var_subok = NULL;

    Py_XDECREF( var__m );
    var__m = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_array );
    var_array = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr( PyObject **python_pars, PyCellObject *closure_shape )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyCellObject *par_$0 = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
        closure[0] = par_$0;
        Py_INCREF( closure[0] );
        closure[1] = closure_shape;
        Py_INCREF( closure[1] );

        tmp_return_value = Nuitka_Generator_New(
            numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr$$$genexpr_1_genexpr_context,
            const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_437859f2b94c4fc206af6fb9ad29438d,
            closure,
            2
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void numpy$lib$stride_tricks$$$function_6_broadcast_arrays$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_array = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_a6c7b4d93fffa87620d31f553729d8fc, module_numpy$lib$stride_tricks );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 193;
            goto try_except_handler_2;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", ".0" );
        exception_tb = NULL;

        exception_lineno = 193;
        goto try_except_handler_2;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 193;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    {
        PyObject *old = var_array;
        var_array = tmp_assign_source_2;
        Py_INCREF( var_array );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_array;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "shape" );
        exception_tb = NULL;

        exception_lineno = 193;
        goto try_except_handler_2;
    }

    tmp_expression_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_digest_b9c4baf879ebd882d40843df3a4dead7,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_array,
                    var_array
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_shape,
                    generator->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_array );
    var_array = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_array );
    var_array = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}



static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$class_1_DummyArray$$$function_1___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$stride_tricks$$$class_1_DummyArray$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_84a12f9f37adf58bf1eb1a4b1526a974,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$stride_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_1__maybe_view_as_subclass(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$stride_tricks$$$function_1__maybe_view_as_subclass,
        const_str_plain__maybe_view_as_subclass,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9e5dbdfa51089dad3878f08f00a75205,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$stride_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_2_as_strided( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$stride_tricks$$$function_2_as_strided,
        const_str_plain_as_strided,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d451d2119c59cb6a72bdcca87dd9737f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$stride_tricks,
        const_str_digest_30034babf03ee761f24fc62b8ce9686d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_3__broadcast_to(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$stride_tricks$$$function_3__broadcast_to,
        const_str_plain__broadcast_to,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_46f71b2047bf077e8b513490eb865651,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$stride_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_4_broadcast_to( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$stride_tricks$$$function_4_broadcast_to,
        const_str_plain_broadcast_to,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e8db5a48461ce4d685e9e863a75aab0f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$stride_tricks,
        const_str_digest_371818db87e00fe54108704034bbe955
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_5__broadcast_shape(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$stride_tricks$$$function_5__broadcast_shape,
        const_str_plain__broadcast_shape,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8e4db47cfe525be1f3fed3f4abcb6c60,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$stride_tricks,
        const_str_digest_a85b4d9d2b24f0fc5548189550c9d35f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_6_broadcast_arrays(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$stride_tricks$$$function_6_broadcast_arrays,
        const_str_plain_broadcast_arrays,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9bdebd7beea5320f5d73cdfa83715319,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$stride_tricks,
        const_str_digest_b1fe361b008e177d333837474aea7d24
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$stride_tricks =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.stride_tricks",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( numpy$lib$stride_tricks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$stride_tricks );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION >= 350
    PyType_Ready( &Nuitka_Coroutine_Type );
    PyType_Ready( &Nuitka_CoroutineWrapper_Type );
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    createModuleConstants();
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$stride_tricks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$stride_tricks = Py_InitModule4(
        "numpy.lib.stride_tricks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$stride_tricks = PyModule_Create( &mdef_numpy$lib$stride_tricks );
#endif

    moduledict_numpy$lib$stride_tricks = (PyDictObject *)((PyModuleObject *)module_numpy$lib$stride_tricks)->md_dict;

    CHECK_OBJECT( module_numpy$lib$stride_tricks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510, module_numpy$lib$stride_tricks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$stride_tricks );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_b6621bfab566cc7398439391f2f8d5a7;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6a37bf9f7c65d5d742b61ca78d2aff6f;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_ad36951e2a50db8b2a00780ec429e5f1, module_numpy$lib$stride_tricks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$stride_tricks)->md_dict;
    frame_module->f_lineno = 10;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_str_plain_broadcast_to_str_plain_broadcast_arrays_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_assign_source_8 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_8;

    tmp_assign_source_9 = impl_numpy$lib$stride_tricks$$$class_1_DummyArray( NULL );
    assert( tmp_assign_source_9 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_9;

    // Tried code:
    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_10 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_10 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_10;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_DummyArray;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_11;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module, exception_lineno );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_12 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_DummyArray, tmp_assign_source_12 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_1__maybe_view_as_subclass(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__maybe_view_as_subclass, tmp_assign_source_13 );
    tmp_defaults_1 = const_tuple_none_none_false_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_2_as_strided( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_as_strided, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_3__broadcast_to(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__broadcast_to, tmp_assign_source_15 );
    tmp_defaults_2 = const_tuple_false_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_4_broadcast_to( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_broadcast_to, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_5__broadcast_shape(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain__broadcast_shape, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$stride_tricks$$$function_6_broadcast_arrays(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$stride_tricks, (Nuitka_StringObject *)const_str_plain_broadcast_arrays, tmp_assign_source_18 );

    return MOD_RETURN_VALUE( module_numpy$lib$stride_tricks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
