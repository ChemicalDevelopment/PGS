/* Generated code for Python source for module 'numpy.lib.arraysetops'
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

/* The _module_numpy$lib$arraysetops is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$arraysetops;
PyDictObject *moduledict_numpy$lib$arraysetops;

/* The module constants used, if any. */
extern PyObject *const_str_plain_to_end;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_e1494659f29ce7321bc3c3a08ad40994;
extern PyObject *const_str_plain_union1d;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain_argsort;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_mergesort;
extern PyObject *const_str_plain_in1d;
extern PyObject *const_str_plain_assume_unique;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_to_begin;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_return_inverse;
static PyObject *const_str_digest_971ee6d7315ee3191336b47954b0fe4f;
extern PyObject *const_str_plain_unique;
static PyObject *const_str_digest_ac8aafed4c61086b66f2980e25276f40;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_optional_returns;
extern PyObject *const_list_true_list;
static PyObject *const_str_digest_32aa26906bd2e01c6275c3d10157994e;
extern PyObject *const_tuple_d925a47f30f937817baf05065529e771_tuple;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_plain_inv_idx;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_arraysetops;
extern PyObject *const_str_plain_flatten;
extern PyObject *const_str_plain_ar1;
extern PyObject *const_str_plain_ar2;
extern PyObject *const_str_plain_ed;
static PyObject *const_str_digest_9b37a215ac4f33e8478875c7ba0e947c;
static PyObject *const_float_0_145;
extern PyObject *const_str_plain_rev_idx;
static PyObject *const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e8a7043d822853f224a7724b5dc72c3c;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_ediff1d;
extern PyObject *const_dict_983b85267f0872f55cb0f16db8944e2c;
extern PyObject *const_str_plain_flag2;
static PyObject *const_str_plain_optional_indices;
extern PyObject *const_str_plain_ary;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_quicksort;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_ar;
static PyObject *const_str_digest_986f9ed8358514487e380df62a7fd441;
extern PyObject *const_str_plain_return_index;
static PyObject *const_tuple_883b0be2398e894be37b83df2a977c6d_tuple;
extern PyObject *const_str_plain_aux;
extern PyObject *const_str_plain_empty;
extern PyObject *const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_flat;
static PyObject *const_str_digest_62156c12e7abcccfe16193f86a5b8eca;
static PyObject *const_str_plain_iflag;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain_flag;
extern PyObject *const_str_plain_intersect1d;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_a;
extern PyObject *const_tuple_str_plain_ar1_str_plain_ar2_tuple;
static PyObject *const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple;
extern PyObject *const_dict_87c1abaa6fcb4c6f72874144a9717b89;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_perm;
static PyObject *const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple;
extern PyObject *const_tuple_false_false_tuple;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_setdiff1d;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_sar;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_size;
static PyObject *const_str_digest_2af7d8a5ea31650072a35951536f1ce1;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_dict_a631262f796736f0defb811197d235ff;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain_idx;
static PyObject *const_str_plain_return_counts;
static PyObject *const_list_30b0594cc41f5ef25c24562b3bed3b88_list;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_bool_ar;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_invert;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_83c69dcf94b1896762df384a0ade208c;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_false_false_false_tuple;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_setxor1d;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e1494659f29ce7321bc3c3a08ad40994 = UNSTREAM_STRING( &constant_bin[ 915326 ], 63, 0 );
    const_str_digest_971ee6d7315ee3191336b47954b0fe4f = UNSTREAM_STRING( &constant_bin[ 915389 ], 21, 0 );
    const_str_digest_ac8aafed4c61086b66f2980e25276f40 = UNSTREAM_STRING( &constant_bin[ 915410 ], 2029, 0 );
    const_str_plain_optional_returns = UNSTREAM_STRING( &constant_bin[ 917439 ], 16, 1 );
    const_str_digest_32aa26906bd2e01c6275c3d10157994e = UNSTREAM_STRING( &constant_bin[ 917455 ], 829, 0 );
    const_str_plain_inv_idx = UNSTREAM_STRING( &constant_bin[ 918284 ], 7, 1 );
    const_str_digest_9b37a215ac4f33e8478875c7ba0e947c = UNSTREAM_STRING( &constant_bin[ 918291 ], 825, 0 );
    const_float_0_145 = UNSTREAM_FLOAT( &constant_bin[ 919116 ] );
    const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 0, const_str_plain_ar1 ); Py_INCREF( const_str_plain_ar1 );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 1, const_str_plain_ar2 ); Py_INCREF( const_str_plain_ar2 );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 2, const_str_plain_assume_unique ); Py_INCREF( const_str_plain_assume_unique );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 3, const_str_plain_invert ); Py_INCREF( const_str_plain_invert );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 4, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 5, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 6, const_str_plain_rev_idx ); Py_INCREF( const_str_plain_rev_idx );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 7, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 8, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 9, const_str_plain_sar ); Py_INCREF( const_str_plain_sar );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 10, const_str_plain_bool_ar ); Py_INCREF( const_str_plain_bool_ar );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 11, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 12, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_digest_e8a7043d822853f224a7724b5dc72c3c = UNSTREAM_STRING( &constant_bin[ 919124 ], 669, 0 );
    const_str_plain_optional_indices = UNSTREAM_STRING( &constant_bin[ 919793 ], 16, 1 );
    const_str_digest_986f9ed8358514487e380df62a7fd441 = UNSTREAM_STRING( &constant_bin[ 919809 ], 1087, 0 );
    const_tuple_883b0be2398e894be37b83df2a977c6d_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 1, const_str_plain_return_index ); Py_INCREF( const_str_plain_return_index );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 2, const_str_plain_return_inverse ); Py_INCREF( const_str_plain_return_inverse );
    const_str_plain_return_counts = UNSTREAM_STRING( &constant_bin[ 920896 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 3, const_str_plain_return_counts ); Py_INCREF( const_str_plain_return_counts );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 4, const_str_plain_optional_indices ); Py_INCREF( const_str_plain_optional_indices );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 5, const_str_plain_optional_returns ); Py_INCREF( const_str_plain_optional_returns );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 6, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 7, const_str_plain_perm ); Py_INCREF( const_str_plain_perm );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 8, const_str_plain_aux ); Py_INCREF( const_str_plain_aux );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 9, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    const_str_plain_iflag = UNSTREAM_STRING( &constant_bin[ 920909 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 10, const_str_plain_iflag ); Py_INCREF( const_str_plain_iflag );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 11, const_str_plain_inv_idx ); Py_INCREF( const_str_plain_inv_idx );
    PyTuple_SET_ITEM( const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 12, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_str_digest_62156c12e7abcccfe16193f86a5b8eca = UNSTREAM_STRING( &constant_bin[ 920914 ], 910, 0 );
    const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple, 0, const_str_plain_ar1 ); Py_INCREF( const_str_plain_ar1 );
    PyTuple_SET_ITEM( const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple, 1, const_str_plain_ar2 ); Py_INCREF( const_str_plain_ar2 );
    PyTuple_SET_ITEM( const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple, 2, const_str_plain_assume_unique ); Py_INCREF( const_str_plain_assume_unique );
    PyTuple_SET_ITEM( const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple, 3, const_str_plain_aux ); Py_INCREF( const_str_plain_aux );
    PyTuple_SET_ITEM( const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple, 4, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple, 5, const_str_plain_flag2 ); Py_INCREF( const_str_plain_flag2 );
    const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple, 0, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    PyTuple_SET_ITEM( const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple, 1, const_str_plain_to_end ); Py_INCREF( const_str_plain_to_end );
    PyTuple_SET_ITEM( const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple, 2, const_str_plain_to_begin ); Py_INCREF( const_str_plain_to_begin );
    PyTuple_SET_ITEM( const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple, 3, const_str_plain_ed ); Py_INCREF( const_str_plain_ed );
    PyTuple_SET_ITEM( const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple, 4, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    const_str_digest_2af7d8a5ea31650072a35951536f1ce1 = UNSTREAM_STRING( &constant_bin[ 921824 ], 535, 0 );
    const_list_30b0594cc41f5ef25c24562b3bed3b88_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_30b0594cc41f5ef25c24562b3bed3b88_list, 0, const_str_plain_ediff1d ); Py_INCREF( const_str_plain_ediff1d );
    PyList_SET_ITEM( const_list_30b0594cc41f5ef25c24562b3bed3b88_list, 1, const_str_plain_intersect1d ); Py_INCREF( const_str_plain_intersect1d );
    PyList_SET_ITEM( const_list_30b0594cc41f5ef25c24562b3bed3b88_list, 2, const_str_plain_setxor1d ); Py_INCREF( const_str_plain_setxor1d );
    PyList_SET_ITEM( const_list_30b0594cc41f5ef25c24562b3bed3b88_list, 3, const_str_plain_union1d ); Py_INCREF( const_str_plain_union1d );
    PyList_SET_ITEM( const_list_30b0594cc41f5ef25c24562b3bed3b88_list, 4, const_str_plain_setdiff1d ); Py_INCREF( const_str_plain_setdiff1d );
    PyList_SET_ITEM( const_list_30b0594cc41f5ef25c24562b3bed3b88_list, 5, const_str_plain_unique ); Py_INCREF( const_str_plain_unique );
    PyList_SET_ITEM( const_list_30b0594cc41f5ef25c24562b3bed3b88_list, 6, const_str_plain_in1d ); Py_INCREF( const_str_plain_in1d );
    const_str_digest_83c69dcf94b1896762df384a0ade208c = UNSTREAM_STRING( &constant_bin[ 922359 ], 2558, 0 );
    const_tuple_false_false_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_false_false_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_tuple, 2, Py_False ); Py_INCREF( Py_False );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$arraysetops( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b764174007b0316f9d2f06ad7722be9f;
static PyCodeObject *codeobj_03b42176ad00881d40efb1791654ee7c;
static PyCodeObject *codeobj_b0399a2a0c3c2f91352683ff654c87fc;
static PyCodeObject *codeobj_bdf91b7ee11fb4c4e3252be21b0e24ad;
static PyCodeObject *codeobj_11a8f3a45e3bdf05877a98cad6fbac30;
static PyCodeObject *codeobj_48997bd575f2e7e652d471ca40f67bd4;
static PyCodeObject *codeobj_03f882f13046dd168eb772767d9ee581;
static PyCodeObject *codeobj_2b845e0e2833242b686a5446446dc1eb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e1494659f29ce7321bc3c3a08ad40994;
    codeobj_b764174007b0316f9d2f06ad7722be9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_arraysetops, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_03b42176ad00881d40efb1791654ee7c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ediff1d, 38, const_tuple_948bd012ef7cd4ec3dc9d6624f6bff7a_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b0399a2a0c3c2f91352683ff654c87fc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_in1d, 305, const_tuple_ddec32754176ab266691d6ec50ce0b0d_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bdf91b7ee11fb4c4e3252be21b0e24ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intersect1d, 218, const_tuple_d925a47f30f937817baf05065529e771_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_11a8f3a45e3bdf05877a98cad6fbac30 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setdiff1d, 441, const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_48997bd575f2e7e652d471ca40f67bd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setxor1d, 261, const_tuple_867f86d570008b4d111d73d8a8cc40b8_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_03f882f13046dd168eb772767d9ee581 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_union1d, 406, const_tuple_str_plain_ar1_str_plain_ar2_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2b845e0e2833242b686a5446446dc1eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unique, 96, const_tuple_883b0be2398e894be37b83df2a977c6d_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_1_ediff1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_2_unique( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_3_intersect1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_4_setxor1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_in1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_6_union1d(  );


static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_7_setdiff1d( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$lib$arraysetops$$$function_1_ediff1d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_to_end = python_pars[ 1 ];
    PyObject *par_to_begin = python_pars[ 2 ];
    PyObject *var_ed = NULL;
    PyObject *var_arrays = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_03b42176ad00881d40efb1791654ee7c, module_numpy$lib$arraysetops );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asanyarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ary;

    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ary;
        assert( old != NULL );
        par_ary = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_ary;

    tmp_left_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = -1;
    tmp_slice_source_2 = par_ary;

    tmp_right_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    assert( var_ed == NULL );
    var_ed = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 1 );
    tmp_list_element_1 = var_ed;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    assert( var_arrays == NULL );
    var_arrays = tmp_assign_source_3;

    tmp_compare_left_1 = par_to_begin;

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
    tmp_source_name_3 = var_arrays;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_insert );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_0;
    tmp_args_element_name_3 = par_to_begin;

    frame_function->f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_compare_left_2 = par_to_end;

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
    tmp_source_name_4 = var_arrays;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_to_end;

    frame_function->f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_len_arg_1 = var_arrays;

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_hstack );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_arrays;

    frame_function->f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ed;
        assert( old != NULL );
        var_ed = tmp_assign_source_4;
        Py_DECREF( old );
    }

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
            if ( par_ary )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ary,
                    par_ary
                );

                assert( res == 0 );
            }

            if ( par_to_end )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_to_end,
                    par_to_end
                );

                assert( res == 0 );
            }

            if ( par_to_begin )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_to_begin,
                    par_to_begin
                );

                assert( res == 0 );
            }

            if ( var_ed )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ed,
                    var_ed
                );

                assert( res == 0 );
            }

            if ( var_arrays )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arrays,
                    var_arrays
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

    tmp_return_value = var_ed;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_1_ediff1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_to_end );
    Py_DECREF( par_to_end );
    par_to_end = NULL;

    CHECK_OBJECT( (PyObject *)par_to_begin );
    Py_DECREF( par_to_begin );
    par_to_begin = NULL;

    CHECK_OBJECT( (PyObject *)var_ed );
    Py_DECREF( var_ed );
    var_ed = NULL;

    CHECK_OBJECT( (PyObject *)var_arrays );
    Py_DECREF( var_arrays );
    var_arrays = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_to_end );
    Py_DECREF( par_to_end );
    par_to_end = NULL;

    CHECK_OBJECT( (PyObject *)par_to_begin );
    Py_DECREF( par_to_begin );
    par_to_begin = NULL;

    Py_XDECREF( var_ed );
    var_ed = NULL;

    Py_XDECREF( var_arrays );
    var_arrays = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_1_ediff1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_2_unique( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar = python_pars[ 0 ];
    PyObject *par_return_index = python_pars[ 1 ];
    PyObject *par_return_inverse = python_pars[ 2 ];
    PyObject *par_return_counts = python_pars[ 3 ];
    PyObject *var_optional_indices = NULL;
    PyObject *var_optional_returns = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_perm = NULL;
    PyObject *var_aux = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_iflag = NULL;
    PyObject *var_inv_idx = NULL;
    PyObject *var_idx = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_list_element_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2b845e0e2833242b686a5446446dc1eb, module_numpy$lib$arraysetops );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asanyarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ar;

    frame_function->f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flatten );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 176;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar;
        assert( old != NULL );
        par_ar = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_or_left_value_1 = par_return_index;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = par_return_inverse;

    tmp_assign_source_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_2 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_optional_indices == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_optional_indices = tmp_assign_source_2;

    tmp_or_left_value_2 = var_optional_indices;

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_or_right_value_2 = par_return_counts;

    tmp_assign_source_3 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_3 = tmp_or_left_value_2;
    or_end_2:;
    assert( var_optional_returns == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_optional_returns = tmp_assign_source_3;

    tmp_source_name_3 = par_ar;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_cond_value_1 = var_optional_returns;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = par_ar;

    assert( var_ret == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_ret = tmp_assign_source_4;

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_5 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_ar;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_5;

    tmp_cond_value_2 = par_return_index;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_1 = var_ret;

    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_0;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bool );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_6 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    var_ret = tmp_assign_source_6;

    branch_no_3:;
    tmp_cond_value_3 = par_return_inverse;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_2 = var_ret;

    tmp_right_name_2 = PyTuple_New( 1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_empty );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_0;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_bool );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_7 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    var_ret = tmp_assign_source_7;

    branch_no_4:;
    tmp_cond_value_4 = par_return_counts;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_3 = var_ret;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = PyTuple_New( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_empty );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_int_0;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_intp );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_4 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_8 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    var_ret = tmp_assign_source_8;

    branch_no_5:;
    branch_end_2:;
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_cond_value_5 = var_optional_indices;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_10 = par_ar;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_argsort );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_cond_value_6 = par_return_index;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_value_1 = const_str_plain_mergesort;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_dict_value_1 = const_str_plain_quicksort;
    condexpr_end_1:;
    tmp_dict_key_1 = const_str_plain_kind;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 195;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    assert( var_perm == NULL );
    var_perm = tmp_assign_source_9;

    tmp_subscribed_name_1 = par_ar;

    tmp_subscript_name_1 = var_perm;

    tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( var_aux == NULL );
    var_aux = tmp_assign_source_10;

    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_11 = par_ar;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_sort );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 198;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_11 = par_ar;

    assert( var_aux == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_aux = tmp_assign_source_11;

    branch_end_6:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_concatenate );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_5 = LIST_COPY( const_list_true_list );
    PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_5 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_aux;

    tmp_compexpr_left_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = -1;
    tmp_slice_source_2 = var_aux;

    tmp_compexpr_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_5 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_5 );
    frame_function->f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    assert( var_flag == NULL );
    var_flag = tmp_assign_source_12;

    tmp_cond_value_7 = var_optional_returns;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_subscribed_name_2 = var_aux;

    tmp_subscript_name_2 = var_flag;

    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_13;

    goto branch_end_7;
    branch_no_7:;
    tmp_assign_source_14 = PyTuple_New( 1 );
    tmp_subscribed_name_3 = var_aux;

    tmp_subscript_name_3 = var_flag;

    tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_6 );
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_14;

    tmp_cond_value_8 = par_return_index;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_left_name_4 = var_ret;

    tmp_right_name_4 = PyTuple_New( 1 );
    tmp_subscribed_name_4 = var_perm;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_right_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "perm" );
        exception_tb = NULL;

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = var_flag;

    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_4 );

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_7 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_15 = tmp_left_name_4;
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    var_ret = tmp_assign_source_15;

    branch_no_8:;
    tmp_cond_value_9 = par_return_inverse;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_cumsum );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_flag;

    frame_function->f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_assign_source_16 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    assert( var_iflag == NULL );
    var_iflag = tmp_assign_source_16;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_empty );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_15 = par_ar;

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_8 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_intp );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 210;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    assert( var_inv_idx == NULL );
    var_inv_idx = tmp_assign_source_17;

    tmp_ass_subvalue_1 = var_iflag;

    tmp_ass_subscribed_1 = var_inv_idx;

    tmp_ass_subscript_1 = var_perm;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "perm" );
        exception_tb = NULL;

        exception_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = var_ret;

    tmp_right_name_6 = PyTuple_New( 1 );
    tmp_tuple_element_9 = var_inv_idx;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_9 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_18 = tmp_left_name_6;
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    var_ret = tmp_assign_source_18;

    branch_no_9:;
    tmp_cond_value_10 = par_return_counts;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_concatenate );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_nonzero );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = var_flag;

    frame_function->f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = PyTuple_New( 1 );
    tmp_tuple_element_10 = PyList_New( 1 );
    tmp_source_name_19 = par_ar;

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_size );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        Py_DECREF( tmp_tuple_element_10 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_tuple_element_10, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_10 );
    tmp_args_element_name_10 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    assert( var_idx == NULL );
    var_idx = tmp_assign_source_19;

    tmp_left_name_8 = var_ret;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = PyTuple_New( 1 );
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_diff );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_8 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_idx;

    frame_function->f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_tuple_element_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_8 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_11 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_20 = tmp_left_name_8;
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    var_ret = tmp_assign_source_20;

    branch_no_10:;
    branch_end_7:;
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
            if ( par_ar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar,
                    par_ar
                );

                assert( res == 0 );
            }

            if ( par_return_index )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_return_index,
                    par_return_index
                );

                assert( res == 0 );
            }

            if ( par_return_inverse )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_return_inverse,
                    par_return_inverse
                );

                assert( res == 0 );
            }

            if ( par_return_counts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_return_counts,
                    par_return_counts
                );

                assert( res == 0 );
            }

            if ( var_optional_indices )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_optional_indices,
                    var_optional_indices
                );

                assert( res == 0 );
            }

            if ( var_optional_returns )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_optional_returns,
                    var_optional_returns
                );

                assert( res == 0 );
            }

            if ( var_ret )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ret,
                    var_ret
                );

                assert( res == 0 );
            }

            if ( var_perm )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_perm,
                    var_perm
                );

                assert( res == 0 );
            }

            if ( var_aux )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_aux,
                    var_aux
                );

                assert( res == 0 );
            }

            if ( var_flag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flag,
                    var_flag
                );

                assert( res == 0 );
            }

            if ( var_iflag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iflag,
                    var_iflag
                );

                assert( res == 0 );
            }

            if ( var_inv_idx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_inv_idx,
                    var_inv_idx
                );

                assert( res == 0 );
            }

            if ( var_idx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_idx,
                    var_idx
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_2_unique );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar );
    Py_DECREF( par_ar );
    par_ar = NULL;

    CHECK_OBJECT( (PyObject *)par_return_index );
    Py_DECREF( par_return_index );
    par_return_index = NULL;

    CHECK_OBJECT( (PyObject *)par_return_inverse );
    Py_DECREF( par_return_inverse );
    par_return_inverse = NULL;

    CHECK_OBJECT( (PyObject *)par_return_counts );
    Py_DECREF( par_return_counts );
    par_return_counts = NULL;

    CHECK_OBJECT( (PyObject *)var_optional_indices );
    Py_DECREF( var_optional_indices );
    var_optional_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_optional_returns );
    Py_DECREF( var_optional_returns );
    var_optional_returns = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_iflag );
    var_iflag = NULL;

    Py_XDECREF( var_inv_idx );
    var_inv_idx = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ar );
    Py_DECREF( par_ar );
    par_ar = NULL;

    CHECK_OBJECT( (PyObject *)par_return_index );
    Py_DECREF( par_return_index );
    par_return_index = NULL;

    CHECK_OBJECT( (PyObject *)par_return_inverse );
    Py_DECREF( par_return_inverse );
    par_return_inverse = NULL;

    CHECK_OBJECT( (PyObject *)par_return_counts );
    Py_DECREF( par_return_counts );
    par_return_counts = NULL;

    Py_XDECREF( var_optional_indices );
    var_optional_indices = NULL;

    Py_XDECREF( var_optional_returns );
    var_optional_returns = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_iflag );
    var_iflag = NULL;

    Py_XDECREF( var_inv_idx );
    var_inv_idx = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_2_unique );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_3_intersect1d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *var_aux = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bdf91b7ee11fb4c4e3252be21b0e24ad, module_numpy$lib$arraysetops );
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
    tmp_cond_value_1 = par_assume_unique;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique" );
        exception_tb = NULL;

        exception_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_ar1;

    frame_function->f_lineno = 255;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar1;
        assert( old != NULL );
        par_ar1 = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique" );
        exception_tb = NULL;

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_ar2;

    frame_function->f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar2;
        assert( old != NULL );
        par_ar2 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ar1;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_ar2;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    assert( var_aux == NULL );
    var_aux = tmp_assign_source_3;

    tmp_source_name_2 = var_aux;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sort );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 258;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_aux;

    tmp_subscribed_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_2 = 1;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = var_aux;

    tmp_compexpr_left_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = -1;
    tmp_slice_source_3 = var_aux;

    tmp_compexpr_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
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
            if ( par_ar1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar1,
                    par_ar1
                );

                assert( res == 0 );
            }

            if ( par_ar2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar2,
                    par_ar2
                );

                assert( res == 0 );
            }

            if ( par_assume_unique )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_assume_unique,
                    par_assume_unique
                );

                assert( res == 0 );
            }

            if ( var_aux )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_aux,
                    var_aux
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_3_intersect1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)var_aux );
    Py_DECREF( var_aux );
    var_aux = NULL;

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

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_3_intersect1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_4_setxor1d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *var_aux = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_flag2 = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_48997bd575f2e7e652d471ca40f67bd4, module_numpy$lib$arraysetops );
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
    tmp_cond_value_1 = par_assume_unique;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique" );
        exception_tb = NULL;

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_ar1;

    frame_function->f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar1;
        assert( old != NULL );
        par_ar1 = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique" );
        exception_tb = NULL;

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_ar2;

    frame_function->f_lineno = 292;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar2;
        assert( old != NULL );
        par_ar2 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ar1;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_ar2;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 294;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    assert( var_aux == NULL );
    var_aux = tmp_assign_source_3;

    tmp_source_name_2 = var_aux;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 295;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = var_aux;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = var_aux;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sort );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 298;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 300;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_concatenate );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_2 = LIST_COPY( const_list_true_list );
    PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_2 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_aux;

    tmp_compexpr_left_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = -1;
    tmp_slice_source_2 = var_aux;

    tmp_compexpr_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LIST_COPY( const_list_true_list );
    PyTuple_SET_ITEM( tmp_args_element_name_4, 2, tmp_tuple_element_2 );
    frame_function->f_lineno = 300;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    assert( var_flag == NULL );
    var_flag = tmp_assign_source_4;

    tmp_sliceslicedel_index_lower_3 = 1;
    tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
    tmp_slice_source_3 = var_flag;

    tmp_compexpr_left_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_4 = 0;
    tmp_slice_index_upper_4 = -1;
    tmp_slice_source_4 = var_flag;

    tmp_compexpr_right_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 302;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        goto frame_exception_exit_1;
    }
    assert( var_flag2 == NULL );
    var_flag2 = tmp_assign_source_5;

    tmp_subscribed_name_1 = var_aux;

    tmp_subscript_name_1 = var_flag2;

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
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
            if ( par_ar1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar1,
                    par_ar1
                );

                assert( res == 0 );
            }

            if ( par_ar2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar2,
                    par_ar2
                );

                assert( res == 0 );
            }

            if ( par_assume_unique )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_assume_unique,
                    par_assume_unique
                );

                assert( res == 0 );
            }

            if ( var_aux )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_aux,
                    var_aux
                );

                assert( res == 0 );
            }

            if ( var_flag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flag,
                    var_flag
                );

                assert( res == 0 );
            }

            if ( var_flag2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flag2,
                    var_flag2
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_4_setxor1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)var_aux );
    Py_DECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_flag2 );
    var_flag2 = NULL;

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

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    Py_XDECREF( var_aux );
    var_aux = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_flag2 );
    var_flag2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_4_setxor1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_5_in1d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
    PyObject *par_invert = python_pars[ 3 ];
    PyObject *var_mask = NULL;
    PyObject *var_a = NULL;
    PyObject *var_rev_idx = NULL;
    PyObject *var_ar = NULL;
    PyObject *var_order = NULL;
    PyObject *var_sar = NULL;
    PyObject *var_bool_ar = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_ret = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    PyObject *tmp_slice_upper_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b0399a2a0c3c2f91352683ff654c87fc, module_numpy$lib$arraysetops );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 367;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ar1;

    frame_function->f_lineno = 367;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ravel );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 367;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar1;
        assert( old != NULL );
        par_ar1 = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asarray );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_ar2;

    frame_function->f_lineno = 368;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ravel );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 368;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar2;
        assert( old != NULL );
        par_ar2 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_ar2;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_int_pos_10;
    tmp_len_arg_2 = par_ar1;

    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_float_0_145;
    tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_cond_value_1 = par_invert;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ones );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_len_arg_3 = par_ar1;

    tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bool );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 373;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    assert( var_mask == NULL );
    var_mask = tmp_assign_source_3;

    tmp_iter_arg_1 = par_ar2;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            frame_function->f_lineno = 374;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_6;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_mask;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mask" );
        exception_tb = NULL;

        exception_lineno = 375;
        goto try_except_handler_2;
    }

    tmp_compexpr_left_1 = par_ar1;

    tmp_compexpr_right_1 = var_a;

    tmp_right_name_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceAnd, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_7 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto try_except_handler_2;
    }
    var_mask = tmp_assign_source_7;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
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

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_zeros );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_len_arg_4 = par_ar1;

    tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_bool );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 377;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    assert( var_mask == NULL );
    var_mask = tmp_assign_source_8;

    tmp_iter_arg_2 = par_ar2;

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

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
            frame_function->f_lineno = 378;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_11;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_left_name_4 = var_mask;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mask" );
        exception_tb = NULL;

        exception_lineno = 379;
        goto try_except_handler_3;
    }

    tmp_compexpr_left_2 = par_ar1;

    tmp_compexpr_right_2 = var_a;

    tmp_right_name_4 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto try_except_handler_3;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_12 = tmp_left_name_4;
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto try_except_handler_3;
    }
    var_mask = tmp_assign_source_12;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_end_2:;
    tmp_return_value = var_mask;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mask" );
        exception_tb = NULL;

        exception_lineno = 380;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_assume_unique;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    // Tried code:
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 384;
        goto try_except_handler_4;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_unique );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        goto try_except_handler_4;
    }
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_ar1;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_a631262f796736f0defb811197d235ff );
    frame_function->f_lineno = 384;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        goto try_except_handler_4;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 384;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 384;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_4;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_ar1;
        assert( old != NULL );
        par_ar1 = tmp_assign_source_16;
        Py_INCREF( par_ar1 );
        Py_DECREF( old );
    }

    tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;

    assert( var_rev_idx == NULL );
    Py_INCREF( tmp_assign_source_17 );
    var_rev_idx = tmp_assign_source_17;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_unique );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_ar2;

    frame_function->f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar2;
        assert( old != NULL );
        par_ar2 = tmp_assign_source_18;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 387;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_concatenate );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_ar1;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_ar2;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_4 );
    frame_function->f_lineno = 387;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        goto frame_exception_exit_1;
    }
    assert( var_ar == NULL );
    var_ar = tmp_assign_source_19;

    tmp_source_name_12 = var_ar;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_argsort );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_4 = PyDict_Copy( const_dict_87c1abaa6fcb4c6f72874144a9717b89 );
    frame_function->f_lineno = 391;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_10, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_20;

    tmp_subscribed_name_1 = var_ar;

    tmp_subscript_name_1 = var_order;

    tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        goto frame_exception_exit_1;
    }
    assert( var_sar == NULL );
    var_sar = tmp_assign_source_21;

    tmp_cond_value_3 = par_invert;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_sar;

    tmp_compexpr_left_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = -1;
    tmp_slice_source_2 = var_sar;

    tmp_compexpr_right_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    assert( var_bool_ar == NULL );
    var_bool_ar = tmp_assign_source_22;

    goto branch_end_4;
    branch_no_4:;
    tmp_sliceslicedel_index_lower_3 = 1;
    tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
    tmp_slice_source_3 = var_sar;

    tmp_compexpr_left_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_4 = 0;
    tmp_slice_index_upper_4 = -1;
    tmp_slice_source_4 = var_sar;

    tmp_compexpr_right_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 396;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto frame_exception_exit_1;
    }
    assert( var_bool_ar == NULL );
    var_bool_ar = tmp_assign_source_23;

    branch_end_4:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_concatenate );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_bool_ar;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = PyList_New( 1 );
    tmp_list_element_1 = par_invert;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_5, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_5 );
    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    assert( var_flag == NULL );
    var_flag = tmp_assign_source_24;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_empty );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_args_name_4 = PyTuple_New( 1 );
    tmp_source_name_15 = var_ar;

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_name_4 );

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_kw_name_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = LOOKUP_BUILTIN( const_str_plain_bool );
    assert( tmp_dict_value_3 != NULL );
    tmp_dict_key_3 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 398;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_4, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_25;

    tmp_ass_subvalue_1 = var_flag;

    tmp_ass_subscribed_1 = var_ret;

    tmp_ass_subscript_1 = var_order;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = par_assume_unique;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_slice_source_5 = var_ret;

    tmp_len_arg_5 = par_ar1;

    tmp_slice_upper_1 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_SLICE( tmp_slice_source_5, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_subscribed_name_2 = var_ret;

    tmp_subscript_name_2 = var_rev_idx;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rev_idx" );
        exception_tb = NULL;

        exception_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_5:;

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
            if ( par_ar1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar1,
                    par_ar1
                );

                assert( res == 0 );
            }

            if ( par_ar2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar2,
                    par_ar2
                );

                assert( res == 0 );
            }

            if ( par_assume_unique )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_assume_unique,
                    par_assume_unique
                );

                assert( res == 0 );
            }

            if ( par_invert )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_invert,
                    par_invert
                );

                assert( res == 0 );
            }

            if ( var_mask )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mask,
                    var_mask
                );

                assert( res == 0 );
            }

            if ( var_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    var_a
                );

                assert( res == 0 );
            }

            if ( var_rev_idx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rev_idx,
                    var_rev_idx
                );

                assert( res == 0 );
            }

            if ( var_ar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar,
                    var_ar
                );

                assert( res == 0 );
            }

            if ( var_order )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_order,
                    var_order
                );

                assert( res == 0 );
            }

            if ( var_sar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sar,
                    var_sar
                );

                assert( res == 0 );
            }

            if ( var_bool_ar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bool_ar,
                    var_bool_ar
                );

                assert( res == 0 );
            }

            if ( var_flag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flag,
                    var_flag
                );

                assert( res == 0 );
            }

            if ( var_ret )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ret,
                    var_ret
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_in1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_rev_idx );
    var_rev_idx = NULL;

    Py_XDECREF( var_ar );
    var_ar = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_sar );
    var_sar = NULL;

    Py_XDECREF( var_bool_ar );
    var_bool_ar = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    CHECK_OBJECT( (PyObject *)par_invert );
    Py_DECREF( par_invert );
    par_invert = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_rev_idx );
    var_rev_idx = NULL;

    Py_XDECREF( var_ar );
    var_ar = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_sar );
    var_sar = NULL;

    Py_XDECREF( var_bool_ar );
    var_bool_ar = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_5_in1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_6_union1d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_03f882f13046dd168eb772767d9ee581, module_numpy$lib$arraysetops );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique" );
        exception_tb = NULL;

        exception_lineno = 439;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 439;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ar1;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_ar2;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 439;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 439;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
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
            if ( par_ar1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar1,
                    par_ar1
                );

                assert( res == 0 );
            }

            if ( par_ar2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar2,
                    par_ar2
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_6_union1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_6_union1d );
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


static PyObject *impl_numpy$lib$arraysetops$$$function_7_setdiff1d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar1 = python_pars[ 0 ];
    PyObject *par_ar2 = python_pars[ 1 ];
    PyObject *par_assume_unique = python_pars[ 2 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_11a8f3a45e3bdf05877a98cad6fbac30, module_numpy$lib$arraysetops );
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
    tmp_cond_value_1 = par_assume_unique;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 475;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 476;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ar1;

    frame_function->f_lineno = 476;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ravel );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 476;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar1;
        assert( old != NULL );
        par_ar1 = tmp_assign_source_1;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique" );
        exception_tb = NULL;

        exception_lineno = 478;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_ar1;

    frame_function->f_lineno = 478;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 478;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar1;
        assert( old != NULL );
        par_ar1 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique" );
        exception_tb = NULL;

        exception_lineno = 479;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_ar2;

    frame_function->f_lineno = 479;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 479;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ar2;
        assert( old != NULL );
        par_ar2 = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_end_1:;
    tmp_subscribed_name_1 = par_ar1;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_in1d );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_in1d );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "in1d" );
        exception_tb = NULL;

        exception_lineno = 480;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ar1;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_ar2;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_983b85267f0872f55cb0f16db8944e2c );
    frame_function->f_lineno = 480;
    tmp_subscript_name_1 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
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
            if ( par_ar1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar1,
                    par_ar1
                );

                assert( res == 0 );
            }

            if ( par_ar2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ar2,
                    par_ar2
                );

                assert( res == 0 );
            }

            if ( par_assume_unique )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_assume_unique,
                    par_assume_unique
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_7_setdiff1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ar1 );
    Py_DECREF( par_ar1 );
    par_ar1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ar2 );
    Py_DECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

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

    Py_XDECREF( par_ar1 );
    par_ar1 = NULL;

    Py_XDECREF( par_ar2 );
    par_ar2 = NULL;

    CHECK_OBJECT( (PyObject *)par_assume_unique );
    Py_DECREF( par_assume_unique );
    par_assume_unique = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$arraysetops$$$function_7_setdiff1d );
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



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_1_ediff1d( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_1_ediff1d,
        const_str_plain_ediff1d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_03b42176ad00881d40efb1791654ee7c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_986f9ed8358514487e380df62a7fd441
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_2_unique( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_2_unique,
        const_str_plain_unique,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2b845e0e2833242b686a5446446dc1eb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_83c69dcf94b1896762df384a0ade208c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_3_intersect1d( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_3_intersect1d,
        const_str_plain_intersect1d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bdf91b7ee11fb4c4e3252be21b0e24ad,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_62156c12e7abcccfe16193f86a5b8eca
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_4_setxor1d( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_4_setxor1d,
        const_str_plain_setxor1d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_48997bd575f2e7e652d471ca40f67bd4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_e8a7043d822853f224a7724b5dc72c3c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_in1d( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_5_in1d,
        const_str_plain_in1d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b0399a2a0c3c2f91352683ff654c87fc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_ac8aafed4c61086b66f2980e25276f40
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_6_union1d(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_6_union1d,
        const_str_plain_union1d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_03f882f13046dd168eb772767d9ee581,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_32aa26906bd2e01c6275c3d10157994e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$arraysetops$$$function_7_setdiff1d( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$arraysetops$$$function_7_setdiff1d,
        const_str_plain_setdiff1d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_11a8f3a45e3bdf05877a98cad6fbac30,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$arraysetops,
        const_str_digest_9b37a215ac4f33e8478875c7ba0e947c
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$arraysetops =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.arraysetops",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$arraysetops )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$arraysetops );
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

    // puts( "in initnumpy$lib$arraysetops" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$arraysetops = Py_InitModule4(
        "numpy.lib.arraysetops",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$arraysetops = PyModule_Create( &mdef_numpy$lib$arraysetops );
#endif

    moduledict_numpy$lib$arraysetops = (PyDictObject *)((PyModuleObject *)module_numpy$lib$arraysetops)->md_dict;

    CHECK_OBJECT( module_numpy$lib$arraysetops );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_971ee6d7315ee3191336b47954b0fe4f, module_numpy$lib$arraysetops );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$arraysetops );

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
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_import_globals_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_2af7d8a5ea31650072a35951536f1ce1;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e1494659f29ce7321bc3c3a08ad40994;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_b764174007b0316f9d2f06ad7722be9f, module_numpy$lib$arraysetops );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$arraysetops)->md_dict;
    frame_module->f_lineno = 29;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_6 );

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
    tmp_assign_source_7 = LIST_COPY( const_list_30b0594cc41f5ef25c24562b3bed3b88_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_1_ediff1d( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_ediff1d, tmp_assign_source_8 );
    tmp_defaults_2 = const_tuple_false_false_false_tuple;
    tmp_assign_source_9 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_2_unique( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_unique, tmp_assign_source_9 );
    tmp_defaults_3 = const_tuple_false_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_3_intersect1d( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_intersect1d, tmp_assign_source_10 );
    tmp_defaults_4 = const_tuple_false_tuple;
    tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_4_setxor1d( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_setxor1d, tmp_assign_source_11 );
    tmp_defaults_5 = const_tuple_false_false_tuple;
    tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_5_in1d( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_in1d, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_6_union1d(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_union1d, tmp_assign_source_13 );
    tmp_defaults_6 = const_tuple_false_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$arraysetops$$$function_7_setdiff1d( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$arraysetops, (Nuitka_StringObject *)const_str_plain_setdiff1d, tmp_assign_source_14 );

    return MOD_RETURN_VALUE( module_numpy$lib$arraysetops );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
