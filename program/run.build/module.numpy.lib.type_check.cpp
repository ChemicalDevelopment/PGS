/* Generated code for Python source for module 'numpy.lib.type_check'
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

/* The _module_numpy$lib$type_check is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$type_check;
PyDictObject *moduledict_numpy$lib$type_check;

/* The module constants used, if any. */
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_typechars;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain__nx;
static PyObject *const_tuple_str_plain_GDFgdf_str_plain_d_tuple;
static PyObject *const_str_digest_3b4c0c12f6833fe1bbb4274681095c66;
static PyObject *const_str_plain_array_precision;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_38e665b4d356a613351958197621fbab;
extern PyObject *const_str_plain_eps;
static PyObject *const_str_plain_real_if_close;
static PyObject *const_tuple_str_plain_isneginf_str_plain_isposinf_tuple;
extern PyObject *const_str_plain_typecodes;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_obj2sctype;
static PyObject *const_str_digest_7ba543784f99e89f93fecfed2aa5dab4;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_sort;
static PyObject *const_tuple_int_pos_100_tuple;
extern PyObject *const_str_plain_shape;
static PyObject *const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple;
extern PyObject *const_str_plain_iscomplexobj;
static PyObject *const_str_digest_319fcf66f386c3009026359f595c3662;
extern PyObject *const_str_plain_array_type;
static PyObject *const_tuple_str_plain_char_tuple;
extern PyObject *const_dict_bf4a7dba08b1d91ea9c3102595d17b89;
static PyObject *const_str_plain_GDFgdf;
extern PyObject *const_str_plain_iscomplex;
extern PyObject *const_str_plain_type_check;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_plain__namefromtype;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_allclose;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_val;
static PyObject *const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple;
static PyObject *const_str_plain_typeset;
static PyObject *const_str_plain__typecodes_by_elsize;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_asarray;
static PyObject *const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain_common_type;
extern PyObject *const_str_plain_longdouble;
extern PyObject *const_str_plain_min;
extern PyObject *const_tuple_str_plain_a_tuple;
extern PyObject *const_str_plain_asfarray;
extern PyObject *const_str_plain_isnan;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_str_plain_half;
static PyObject *const_str_plain_maxf;
static PyObject *const_str_digest_7d06b9dfb28c50150a23aaf7e4464a27;
static PyObject *const_str_digest_793dd2dc20fd2ea802f720223d7272d8;
extern PyObject *const_str_plain_max;
extern PyObject *const_tuple_str_plain_getlimits_tuple;
static PyObject *const_str_plain_minf;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_51a3cb1ba454cef2e73df7601b5443c6;
extern PyObject *const_str_plain_clongdouble;
extern PyObject *const_str_plain_isneginf;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_cdouble;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_single;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_subok;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_finfo;
static PyObject *const_str_digest_ec4d4c426c3014b1bef4c67234b09210;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_isposinf;
extern PyObject *const_str_plain_complexfloating;
extern PyObject *const_tuple_str_plain_val_tuple;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
extern PyObject *const_str_plain_ax;
extern PyObject *const_tuple_str_plain_a_str_plain_dtype_tuple;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_is_complex;
extern PyObject *const_str_plain_csingle;
static PyObject *const_str_digest_eac0cb7090e335bbb2e16d4595fd4268;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_D;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_intersection;
static PyObject *const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple;
static PyObject *const_str_digest_6a797a370830505dc73095dcc7cdf3f1;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_asscalar;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_dest;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183;
extern PyObject *const_str_plain_t;
static PyObject *const_str_digest_117ecc4f8301b6291a450d74525a7908;
static PyObject *const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple;
extern PyObject *const_str_plain_getlimits;
static PyObject *const_list_7408997311a16cd973ccb73960eae3bc_list;
extern PyObject *const_str_plain_core;
static PyObject *const_str_digest_d222958b180ec6664eb4b921e35d8304;
extern PyObject *const_str_plain_double;
extern PyObject *const_str_plain_copyto;
static PyObject *const_str_plain__getmaxmin;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_xtype;
extern PyObject *const_str_plain_typename;
extern PyObject *const_str_plain_precision;
static PyObject *const_str_plain_nan_to_num;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ufunclike;
static PyObject *const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple;
extern PyObject *const_str_plain_isreal;
extern PyObject *const_str_plain_float_;
extern PyObject *const_str_plain_mintypecode;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
static PyObject *const_dict_7384768b1fbfa6afb1845cb6656346a8;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_59f0a4a7166fde20d15b9c978d112d4e;
static PyObject *const_str_plain_isrealobj;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_1e27710593c2824ace25472480ca8477_tuple;
static PyObject *const_str_digest_ffcbf0f731c5e0d961091e8808954636;
static PyObject *const_str_digest_3cd8fcb3f612e03a2ad29e26d7f53783;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_typechars = UNSTREAM_STRING( &constant_bin[ 542739 ], 9, 1 );
    const_tuple_str_plain_GDFgdf_str_plain_d_tuple = PyTuple_New( 2 );
    const_str_plain_GDFgdf = UNSTREAM_STRING( &constant_bin[ 1221501 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GDFgdf_str_plain_d_tuple, 0, const_str_plain_GDFgdf ); Py_INCREF( const_str_plain_GDFgdf );
    PyTuple_SET_ITEM( const_tuple_str_plain_GDFgdf_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_3b4c0c12f6833fe1bbb4274681095c66 = UNSTREAM_STRING( &constant_bin[ 1221507 ], 1092, 0 );
    const_str_plain_array_precision = UNSTREAM_STRING( &constant_bin[ 1222599 ], 15, 1 );
    const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f = UNSTREAM_STRING( &constant_bin[ 1222614 ], 1257, 0 );
    const_str_digest_38e665b4d356a613351958197621fbab = UNSTREAM_STRING( &constant_bin[ 1223871 ], 376, 0 );
    const_str_plain_real_if_close = UNSTREAM_STRING( &constant_bin[ 1072061 ], 13, 1 );
    const_tuple_str_plain_isneginf_str_plain_isposinf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, 0, const_str_plain_isneginf ); Py_INCREF( const_str_plain_isneginf );
    PyTuple_SET_ITEM( const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, 1, const_str_plain_isposinf ); Py_INCREF( const_str_plain_isposinf );
    const_str_digest_7ba543784f99e89f93fecfed2aa5dab4 = UNSTREAM_STRING( &constant_bin[ 1224247 ], 43, 0 );
    const_tuple_int_pos_100_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100_tuple, 0, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 0, const_str_plain_typechars ); Py_INCREF( const_str_plain_typechars );
    const_str_plain_typeset = UNSTREAM_STRING( &constant_bin[ 1223176 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 1, const_str_plain_typeset ); Py_INCREF( const_str_plain_typeset );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 3, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 4, const_str_plain_typecodes ); Py_INCREF( const_str_plain_typecodes );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 5, const_str_plain_intersection ); Py_INCREF( const_str_plain_intersection );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 6, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_319fcf66f386c3009026359f595c3662 = UNSTREAM_STRING( &constant_bin[ 1224290 ], 64, 0 );
    const_tuple_str_plain_char_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_char_tuple, 0, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    const_str_plain__namefromtype = UNSTREAM_STRING( &constant_bin[ 1224354 ], 13, 1 );
    const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, 1, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyTuple_SET_ITEM( const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, 2, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, 3, const_str_plain_isnan ); Py_INCREF( const_str_plain_isnan );
    PyTuple_SET_ITEM( const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, 4, const_str_plain_obj2sctype ); Py_INCREF( const_str_plain_obj2sctype );
    PyTuple_SET_ITEM( const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, 5, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    const_str_plain__typecodes_by_elsize = UNSTREAM_STRING( &constant_bin[ 1224367 ], 20, 1 );
    const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 2, const_str_plain_getlimits ); Py_INCREF( const_str_plain_getlimits );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_plain_maxf = UNSTREAM_STRING( &constant_bin[ 1224387 ], 4, 1 );
    const_str_digest_7d06b9dfb28c50150a23aaf7e4464a27 = UNSTREAM_STRING( &constant_bin[ 1224391 ], 613, 0 );
    const_str_digest_793dd2dc20fd2ea802f720223d7272d8 = UNSTREAM_STRING( &constant_bin[ 1225004 ], 663, 0 );
    const_str_plain_minf = UNSTREAM_STRING( &constant_bin[ 1225667 ], 4, 1 );
    const_str_digest_51a3cb1ba454cef2e73df7601b5443c6 = UNSTREAM_STRING( &constant_bin[ 1225671 ], 591, 0 );
    const_str_digest_ec4d4c426c3014b1bef4c67234b09210 = UNSTREAM_STRING( &constant_bin[ 1226262 ], 574, 0 );
    const_str_digest_eac0cb7090e335bbb2e16d4595fd4268 = UNSTREAM_STRING( &constant_bin[ 1226836 ], 1099, 0 );
    const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 1, const_str_plain_getlimits ); Py_INCREF( const_str_plain_getlimits );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_6a797a370830505dc73095dcc7cdf3f1 = UNSTREAM_STRING( &constant_bin[ 1227935 ], 17, 0 );
    const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183 = UNSTREAM_STRING( &constant_bin[ 1227952 ], 648, 0 );
    const_str_digest_117ecc4f8301b6291a450d74525a7908 = UNSTREAM_STRING( &constant_bin[ 1228600 ], 1527, 0 );
    const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_xtype = UNSTREAM_STRING( &constant_bin[ 1230127 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 1, const_str_plain_xtype ); Py_INCREF( const_str_plain_xtype );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 2, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 3, const_str_plain_isscalar ); Py_INCREF( const_str_plain_isscalar );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 4, const_str_plain_dest ); Py_INCREF( const_str_plain_dest );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 5, const_str_plain_maxf ); Py_INCREF( const_str_plain_maxf );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 6, const_str_plain_minf ); Py_INCREF( const_str_plain_minf );
    PyTuple_SET_ITEM( const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 7, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_list_7408997311a16cd973ccb73960eae3bc_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 0, const_str_plain_iscomplexobj ); Py_INCREF( const_str_plain_iscomplexobj );
    const_str_plain_isrealobj = UNSTREAM_STRING( &constant_bin[ 1071838 ], 9, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 1, const_str_plain_isrealobj ); Py_INCREF( const_str_plain_isrealobj );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 2, const_str_plain_imag ); Py_INCREF( const_str_plain_imag );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 3, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 4, const_str_plain_isreal ); Py_INCREF( const_str_plain_isreal );
    const_str_plain_nan_to_num = UNSTREAM_STRING( &constant_bin[ 1072448 ], 10, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 5, const_str_plain_nan_to_num ); Py_INCREF( const_str_plain_nan_to_num );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 6, const_str_plain_real ); Py_INCREF( const_str_plain_real );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 7, const_str_plain_real_if_close ); Py_INCREF( const_str_plain_real_if_close );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 8, const_str_plain_typename ); Py_INCREF( const_str_plain_typename );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 9, const_str_plain_asfarray ); Py_INCREF( const_str_plain_asfarray );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 10, const_str_plain_mintypecode ); Py_INCREF( const_str_plain_mintypecode );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 11, const_str_plain_asscalar ); Py_INCREF( const_str_plain_asscalar );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 12, const_str_plain_common_type ); Py_INCREF( const_str_plain_common_type );
    const_str_digest_d222958b180ec6664eb4b921e35d8304 = UNSTREAM_STRING( &constant_bin[ 1230132 ], 589, 0 );
    const_str_plain__getmaxmin = UNSTREAM_STRING( &constant_bin[ 1230721 ], 10, 1 );
    const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 1, const_str_plain_ax ); Py_INCREF( const_str_plain_ax );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_dict_7384768b1fbfa6afb1845cb6656346a8 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1230731 ], 546 );
    const_str_digest_59f0a4a7166fde20d15b9c978d112d4e = UNSTREAM_STRING( &constant_bin[ 1231277 ], 944, 0 );
    const_tuple_1e27710593c2824ace25472480ca8477_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 1, const_str_plain_is_complex ); Py_INCREF( const_str_plain_is_complex );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 2, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 4, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_ffcbf0f731c5e0d961091e8808954636 = UNSTREAM_STRING( &constant_bin[ 1232221 ], 62, 0 );
    const_str_digest_3cd8fcb3f612e03a2ad29e26d7f53783 = UNSTREAM_STRING( &constant_bin[ 1232283 ], 649, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$type_check( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ed221f0e6a8f96ee47190bc0cc852431;
static PyCodeObject *codeobj_660ce90eb3ed49e1af46841f27ac607d;
static PyCodeObject *codeobj_d25ad341ee30b7767eb120f02c2d10f3;
static PyCodeObject *codeobj_87d704f9f7fba36501deb70b549edbc7;
static PyCodeObject *codeobj_e39b7a53c1fa7b02d4b2f663755feae8;
static PyCodeObject *codeobj_e0f53bd6b54c03832b095bc3c8c57af7;
static PyCodeObject *codeobj_900d76247b4585fe4b86368c775b8689;
static PyCodeObject *codeobj_5aa54df0a22a082209c132ee4a918b45;
static PyCodeObject *codeobj_62bcf18192cf781e989fe477b43f2658;
static PyCodeObject *codeobj_a50b7fdf217a71e058b9775e7728a089;
static PyCodeObject *codeobj_99ecd977c4bec1d9f27c5440b8c98705;
static PyCodeObject *codeobj_cedc55ac062427c603c197e1824337d3;
static PyCodeObject *codeobj_b93240ec8fb3995e0db145a470a68778;
static PyCodeObject *codeobj_9724ec78c9d294823e8d079ee1a6eb84;
static PyCodeObject *codeobj_b3cdbe04f72d48ab10f5f76b2f5e6022;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ffcbf0f731c5e0d961091e8808954636;
    codeobj_ed221f0e6a8f96ee47190bc0cc852431 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__getmaxmin, 307, const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_660ce90eb3ed49e1af46841f27ac607d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asfarray, 75, const_tuple_str_plain_a_str_plain_dtype_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d25ad341ee30b7767eb120f02c2d10f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asscalar, 432, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_87d704f9f7fba36501deb70b549edbc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_common_type, 544, const_tuple_1e27710593c2824ace25472480ca8477_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e39b7a53c1fa7b02d4b2f663755feae8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_imag, 141, const_tuple_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e0f53bd6b54c03832b095bc3c8c57af7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iscomplex, 172, const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_900d76247b4585fe4b86368c775b8689 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iscomplexobj, 237, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5aa54df0a22a082209c132ee4a918b45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isreal, 207, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_62bcf18192cf781e989fe477b43f2658 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isrealobj, 271, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a50b7fdf217a71e058b9775e7728a089 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mintypecode, 18, const_tuple_9d01c0ef54f63eb4b557335d4eb186b6_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_99ecd977c4bec1d9f27c5440b8c98705 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nan_to_num, 312, const_tuple_2b1ab0ef547112841b046ba70ed7a584_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cedc55ac062427c603c197e1824337d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_real, 107, const_tuple_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b93240ec8fb3995e0db145a470a68778 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_real_if_close, 377, const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9724ec78c9d294823e8d079ee1a6eb84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_type_check, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3cdbe04f72d48ab10f5f76b2f5e6022 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_typename, 481, const_tuple_str_plain_char_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_10_nan_to_num(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_11_real_if_close( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_12_asscalar(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_13_typename(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_14_common_type(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_2_asfarray( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_3_real(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_4_imag(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_5_iscomplex(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_6_isreal(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_7_iscomplexobj(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_8_isrealobj(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_9__getmaxmin(  );


// The module function definitions.
static PyObject *impl_numpy$lib$type_check$$$function_1_mintypecode( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_typechars = python_pars[ 0 ];
    PyObject *par_typeset = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *var_t = NULL;
    PyObject *var_typecodes = NULL;
    PyObject *var_intersection = NULL;
    PyObject *var_l = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a50b7fdf217a71e058b9775e7728a089, module_numpy$lib$type_check );
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
    // Tried code:
    tmp_iter_arg_1 = par_typechars;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 61;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_5;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_isinstance_inst_1 = var_t;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
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
    tmp_and_right_value_1 = var_t;

    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
        exception_tb = NULL;

        exception_lineno = 61;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_t;

    PyThreadState_GET()->frame->f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    tmp_append_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_append_value_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_typecodes == NULL );
    var_typecodes = tmp_assign_source_1;

    // Tried code:
    tmp_iter_arg_2 = var_typecodes;

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_8;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 63;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_10;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_t;

    tmp_compare_right_1 = par_typeset;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_append_value_2 = var_t;

    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_3;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
    return NULL;
    outline_result_2:;
    tmp_assign_source_6 = tmp_outline_return_value_2;
    assert( var_intersection == NULL );
    var_intersection = tmp_assign_source_6;

    tmp_cond_value_1 = var_intersection;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
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
    tmp_return_value = par_default;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compexpr_left_1 = const_str_plain_F;
    tmp_compexpr_right_1 = var_intersection;

    tmp_and_left_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_compexpr_left_2 = const_str_plain_d;
    tmp_compexpr_right_2 = var_intersection;

    tmp_and_right_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    assert( !(tmp_cond_truth_2 == -1) );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = const_str_plain_D;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_assign_source_11 = PyList_New( 0 );
    assert( var_l == NULL );
    var_l = tmp_assign_source_11;

    tmp_iter_arg_3 = var_intersection;

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_12;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 69;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_14;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_typecodes_by_elsize" );
        exception_tb = NULL;

        exception_lineno = 70;
        goto try_except_handler_4;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_index );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_4;
    }
    tmp_args_element_name_2 = var_t;

    frame_function->f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_l;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_4;
    }
    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_i;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_t;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_5 = var_l;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sort );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 72;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_2 = var_l;

    tmp_subscript_name_1 = const_int_0;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
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
            if ( par_typechars )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typechars,
                    par_typechars
                );

                assert( res == 0 );
            }

            if ( par_typeset )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typeset,
                    par_typeset
                );

                assert( res == 0 );
            }

            if ( par_default )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    par_default
                );

                assert( res == 0 );
            }

            if ( var_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    var_t
                );

                assert( res == 0 );
            }

            if ( var_typecodes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typecodes,
                    var_typecodes
                );

                assert( res == 0 );
            }

            if ( var_intersection )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intersection,
                    var_intersection
                );

                assert( res == 0 );
            }

            if ( var_l )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_l,
                    var_l
                );

                assert( res == 0 );
            }

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_typechars );
    Py_DECREF( par_typechars );
    par_typechars = NULL;

    CHECK_OBJECT( (PyObject *)par_typeset );
    Py_DECREF( par_typeset );
    par_typeset = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_typecodes );
    Py_DECREF( var_typecodes );
    var_typecodes = NULL;

    CHECK_OBJECT( (PyObject *)var_intersection );
    Py_DECREF( var_intersection );
    var_intersection = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_typechars );
    Py_DECREF( par_typechars );
    par_typechars = NULL;

    CHECK_OBJECT( (PyObject *)par_typeset );
    Py_DECREF( par_typeset );
    par_typeset = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_typecodes );
    var_typecodes = NULL;

    Py_XDECREF( var_intersection );
    var_intersection = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
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


static PyObject *impl_numpy$lib$type_check$$$function_2_asfarray( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_660ce90eb3ed49e1af46841f27ac607d, module_numpy$lib$type_check );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_obj2sctype );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_dtype;

    frame_function->f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = par_dtype;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inexact );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float_ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
        exception_tb = NULL;

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_dtype;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 105;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_dtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtype,
                    par_dtype
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_2_asfarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_2_asfarray );
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


static PyObject *impl_numpy$lib$type_check$$$function_3_real( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cedc55ac062427c603c197e1824337d3, module_numpy$lib$type_check );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_val;

    frame_function->f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_real );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
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
            if ( par_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_val,
                    par_val
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_real );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_real );
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


static PyObject *impl_numpy$lib$type_check$$$function_4_imag( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e39b7a53c1fa7b02d4b2f663755feae8, module_numpy$lib$type_check );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_val;

    frame_function->f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_imag );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
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
            if ( par_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_val,
                    par_val
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4_imag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4_imag );
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


static PyObject *impl_numpy$lib$type_check$$$function_5_iscomplex( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_ax = NULL;
    PyObject *var_res = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e0f53bd6b54c03832b095bc3c8c57af7, module_numpy$lib$type_check );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    assert( var_ax == NULL );
    var_ax = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_2 = var_ax;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_4 = var_ax;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_imag );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "zeros" );
        exception_tb = NULL;

        exception_lineno = 204;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = var_ax;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = LOOKUP_BUILTIN( const_str_plain_bool );
    assert( tmp_args_element_name_5 != NULL );
    frame_function->f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_2;

    tmp_operand_name_1 = var_res;

    tmp_return_value = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
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

            if ( var_ax )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ax,
                    var_ax
                );

                assert( res == 0 );
            }

            if ( var_res )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_res,
                    var_res
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_iscomplex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_ax );
    Py_DECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_iscomplex );
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


static PyObject *impl_numpy$lib$type_check$$$function_6_isreal( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5aa54df0a22a082209c132ee4a918b45, module_numpy$lib$type_check );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_imag );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "imag" );
        exception_tb = NULL;

        exception_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 235;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_6_isreal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_6_isreal );
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


static PyObject *impl_numpy$lib$type_check$$$function_7_iscomplexobj( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_900d76247b4585fe4b86368c775b8689, module_numpy$lib$type_check );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_1 != NULL );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
        exception_tb = NULL;

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_x;

    frame_function->f_lineno = 269;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 269;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_iscomplexobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_iscomplexobj );
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


static PyObject *impl_numpy$lib$type_check$$$function_8_isrealobj( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_62bcf18192cf781e989fe477b43f2658, module_numpy$lib$type_check );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_1 != NULL );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
        exception_tb = NULL;

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_x;

    frame_function->f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
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
            if ( par_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_8_isrealobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_8_isrealobj );
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


static PyObject *impl_numpy$lib$type_check$$$function_9__getmaxmin( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *var_getlimits = NULL;
    PyObject *var_f = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ed221f0e6a8f96ee47190bc0cc852431, module_numpy$lib$type_check );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_t )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_t,
            par_t
        );

        assert( res == 0 );
    }

    if ( var_getlimits )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_getlimits,
            var_getlimits
        );

        assert( res == 0 );
    }

    if ( var_f )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_f,
            var_f
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 308;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_getlimits_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getlimits );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    assert( var_getlimits == NULL );
    var_getlimits = tmp_assign_source_1;

    tmp_source_name_1 = var_getlimits;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_finfo );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_t;

    frame_function->f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_2;

    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_2 = var_f;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_max );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = var_f;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_min );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
            if ( par_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    par_t
                );

                assert( res == 0 );
            }

            if ( var_getlimits )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_getlimits,
                    var_getlimits
                );

                assert( res == 0 );
            }

            if ( var_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    var_f
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_9__getmaxmin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    CHECK_OBJECT( (PyObject *)var_getlimits );
    Py_DECREF( var_getlimits );
    var_getlimits = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_9__getmaxmin );
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


static PyObject *impl_numpy$lib$type_check$$$function_10_nan_to_num( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_xtype = NULL;
    PyObject *var_iscomplex = NULL;
    PyObject *var_isscalar = NULL;
    PyObject *var_dest = NULL;
    PyObject *var_maxf = NULL;
    PyObject *var_minf = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
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
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_99ecd977c4bec1d9f27c5440b8c98705, module_numpy$lib$type_check );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 358;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_bf4a7dba08b1d91ea9c3102595d17b89 );
    frame_function->f_lineno = 358;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_3 = par_x;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    assert( var_xtype == NULL );
    var_xtype = tmp_assign_source_2;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_1 = var_xtype;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inexact );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 360;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_x;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = var_xtype;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 363;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_complexfloating );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 363;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        goto frame_exception_exit_1;
    }
    assert( var_iscomplex == NULL );
    var_iscomplex = tmp_assign_source_3;

    tmp_source_name_6 = par_x;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_assign_source_4 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    assert( var_isscalar == NULL );
    var_isscalar = tmp_assign_source_4;

    tmp_cond_value_2 = var_isscalar;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_subscribed_name_1 = par_x;

    tmp_subscript_name_1 = Py_None;
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_5 = par_x;

    Py_INCREF( tmp_assign_source_5 );
    condexpr_end_1:;
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_5;
        Py_DECREF( old );
    }

    tmp_cond_value_3 = var_iscomplex;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_assign_source_6 = PyTuple_New( 2 );
    tmp_source_name_7 = par_x;

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_real );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_2 );
    tmp_source_name_8 = par_x;

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_imag );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_6, 1, tmp_tuple_element_2 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_6 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_x;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_3 );
    condexpr_end_2:;
    assert( var_dest == NULL );
    var_dest = tmp_assign_source_6;

    // Tried code:
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__getmaxmin );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__getmaxmin );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_getmaxmin" );
        exception_tb = NULL;

        exception_lineno = 368;
        goto try_except_handler_2;
    }

    tmp_source_name_10 = par_x;

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_real );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 368;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_8 == NULL )
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


        exception_lineno = 368;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_9 == NULL )
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


        exception_lineno = 368;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;

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

                goto try_except_handler_2;
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

        goto try_except_handler_2;
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    assert( var_maxf == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_maxf = tmp_assign_source_10;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    assert( var_minf == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_minf = tmp_assign_source_11;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_2 = var_dest;

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_12;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 369;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_14;
        Py_INCREF( var_d );
        Py_XDECREF( old );
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 370;
        goto try_except_handler_3;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_copyto );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto try_except_handler_3;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_d;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_float_0_0;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isnan );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isnan );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isnan" );
        exception_tb = NULL;

        exception_lineno = 370;
        goto try_except_handler_3;
    }

    tmp_args_element_name_6 = var_d;

    frame_function->f_lineno = 370;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 370;
        goto try_except_handler_3;
    }
    tmp_dict_key_1 = const_str_plain_where;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 370;
    tmp_unused = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 371;
        goto try_except_handler_3;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_copyto );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_d;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_maxf;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isposinf );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isposinf );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isposinf" );
        exception_tb = NULL;

        exception_lineno = 371;
        goto try_except_handler_3;
    }

    tmp_args_element_name_7 = var_d;

    frame_function->f_lineno = 371;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 371;
        goto try_except_handler_3;
    }
    tmp_dict_key_2 = const_str_plain_where;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 371;
    tmp_unused = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 372;
        goto try_except_handler_3;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_copyto );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto try_except_handler_3;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_d;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_minf;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isneginf );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isneginf );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isneginf" );
        exception_tb = NULL;

        exception_lineno = 372;
        goto try_except_handler_3;
    }

    tmp_args_element_name_8 = var_d;

    frame_function->f_lineno = 372;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 372;
        goto try_except_handler_3;
    }
    tmp_dict_key_3 = const_str_plain_where;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 372;
    tmp_unused = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_4 = var_isscalar;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_subscribed_name_2 = par_x;

    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_return_value = par_x;

    Py_INCREF( tmp_return_value );
    condexpr_end_3:;
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

            if ( var_xtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_xtype,
                    var_xtype
                );

                assert( res == 0 );
            }

            if ( var_iscomplex )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iscomplex,
                    var_iscomplex
                );

                assert( res == 0 );
            }

            if ( var_isscalar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_isscalar,
                    var_isscalar
                );

                assert( res == 0 );
            }

            if ( var_dest )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dest,
                    var_dest
                );

                assert( res == 0 );
            }

            if ( var_maxf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxf,
                    var_maxf
                );

                assert( res == 0 );
            }

            if ( var_minf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_minf,
                    var_minf
                );

                assert( res == 0 );
            }

            if ( var_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    var_d
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_10_nan_to_num );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_xtype );
    Py_DECREF( var_xtype );
    var_xtype = NULL;

    Py_XDECREF( var_iscomplex );
    var_iscomplex = NULL;

    Py_XDECREF( var_isscalar );
    var_isscalar = NULL;

    Py_XDECREF( var_dest );
    var_dest = NULL;

    Py_XDECREF( var_maxf );
    var_maxf = NULL;

    Py_XDECREF( var_minf );
    var_minf = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_xtype );
    var_xtype = NULL;

    Py_XDECREF( var_iscomplex );
    var_iscomplex = NULL;

    Py_XDECREF( var_isscalar );
    var_isscalar = NULL;

    Py_XDECREF( var_dest );
    var_dest = NULL;

    Py_XDECREF( var_maxf );
    var_maxf = NULL;

    Py_XDECREF( var_minf );
    var_minf = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_10_nan_to_num );
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


static PyObject *impl_numpy$lib$type_check$$$function_11_real_if_close( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *var_getlimits = NULL;
    PyObject *var_f = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
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
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b93240ec8fb3995e0db145a470a68778, module_numpy$lib$type_check );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 420;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    frame_function->f_lineno = 420;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_2 = par_a;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 421;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_a;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_tol;

    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_a )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_a,
            par_a
        );

        assert( res == 0 );
    }

    if ( par_tol )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_tol,
            par_tol
        );

        assert( res == 0 );
    }

    if ( var_getlimits )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_getlimits,
            var_getlimits
        );

        assert( res == 0 );
    }

    if ( var_f )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_f,
            var_f
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 424;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_getlimits_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getlimits );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        goto frame_exception_exit_1;
    }
    assert( var_getlimits == NULL );
    var_getlimits = tmp_assign_source_2;

    tmp_source_name_4 = var_getlimits;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_finfo );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_a;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 425;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_type );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 425;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 425;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_3;

    tmp_source_name_7 = var_f;

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eps );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_tol;

    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_tol;
        assert( old != NULL );
        par_tol = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 427;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_allclose );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_source_name_9 = par_a;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_imag );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_tol;

    tmp_dict_key_1 = const_str_plain_atol;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 427;
    tmp_cond_value_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_10 = par_a;

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_real );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_5;
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_tol )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tol,
                    par_tol
                );

                assert( res == 0 );
            }

            if ( var_getlimits )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_getlimits,
                    var_getlimits
                );

                assert( res == 0 );
            }

            if ( var_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    var_f
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

    tmp_return_value = par_a;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_11_real_if_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_11_real_if_close );
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


static PyObject *impl_numpy$lib$type_check$$$function_12_asscalar( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d25ad341ee30b7767eb120f02c2d10f3, module_numpy$lib$type_check );
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
    tmp_source_name_1 = par_a;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_item );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 453;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_12_asscalar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_12_asscalar );
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


static PyObject *impl_numpy$lib$type_check$$$function_13_typename( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_char = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b3cdbe04f72d48ab10f5f76b2f5e6022, module_numpy$lib$type_check );
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
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__namefromtype );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__namefromtype );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_namefromtype" );
        exception_tb = NULL;

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_char;

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
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
            if ( par_char )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_char,
                    par_char
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_13_typename );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_char );
    Py_DECREF( par_char );
    par_char = NULL;

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

    CHECK_OBJECT( (PyObject *)par_char );
    Py_DECREF( par_char );
    par_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_13_typename );
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


static PyObject *impl_numpy$lib$type_check$$$function_14_common_type( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *var_is_complex = NULL;
    PyObject *var_precision = NULL;
    PyObject *var_a = NULL;
    PyObject *var_t = NULL;
    PyObject *var_p = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_False;
    assert( var_is_complex == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_is_complex = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_precision == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_precision = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_87d704f9f7fba36501deb70b549edbc7, module_numpy$lib$type_check );
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
    tmp_iter_arg_1 = par_arrays;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 582;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_5;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_a;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexobj );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "iscomplexobj" );
        exception_tb = NULL;

        exception_lineno = 584;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_a;

    frame_function->f_lineno = 584;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 584;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_7 = Py_True;
    {
        PyObject *old = var_is_complex;
        var_is_complex = tmp_assign_source_7;
        Py_INCREF( var_is_complex );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = var_t;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 586;
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_integer );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 586;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 586;
        goto try_except_handler_2;
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
    tmp_assign_source_8 = const_int_pos_2;
    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_8;
        Py_INCREF( var_p );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_precision );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_precision );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array_precision" );
        exception_tb = NULL;

        exception_lineno = 589;
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_t;

    tmp_args_element_name_5 = Py_None;
    frame_function->f_lineno = 589;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_p;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_7ba543784f99e89f93fecfed2aa5dab4;
    frame_function->f_lineno = 591;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 591;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_no_3:;
    branch_end_2:;
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_4 != NULL );
    tmp_args_element_name_6 = var_precision;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;

        exception_lineno = 592;
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_p;

    frame_function->f_lineno = 592;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 592;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_precision;
        var_precision = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 582;
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

    tmp_cond_value_3 = var_is_complex;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "is_complex" );
        exception_tb = NULL;

        exception_lineno = 593;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 593;
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
    tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type );

    if (unlikely( tmp_subscribed_name_2 == NULL ))
    {
        tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_type );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array_type" );
        exception_tb = NULL;

        exception_lineno = 594;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 594;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = var_precision;

    if ( tmp_subscript_name_2 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;

        exception_lineno = 594;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 594;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type );

    if (unlikely( tmp_subscribed_name_4 == NULL ))
    {
        tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_type );
    }

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array_type" );
        exception_tb = NULL;

        exception_lineno = 596;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_int_0;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = var_precision;

    if ( tmp_subscript_name_4 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;

        exception_lineno = 596;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_4:;

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
            if ( par_arrays )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arrays,
                    par_arrays
                );

                assert( res == 0 );
            }

            if ( var_is_complex )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_is_complex,
                    var_is_complex
                );

                assert( res == 0 );
            }

            if ( var_precision )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_precision,
                    var_precision
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

            if ( var_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    var_t
                );

                assert( res == 0 );
            }

            if ( var_p )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p,
                    var_p
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_14_common_type );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_is_complex );
    var_is_complex = NULL;

    Py_XDECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arrays );
    Py_DECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_is_complex );
    var_is_complex = NULL;

    Py_XDECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_14_common_type );
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



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_10_nan_to_num(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_10_nan_to_num,
        const_str_plain_nan_to_num,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_99ecd977c4bec1d9f27c5440b8c98705,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_117ecc4f8301b6291a450d74525a7908
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_11_real_if_close( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_11_real_if_close,
        const_str_plain_real_if_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b93240ec8fb3995e0db145a470a68778,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_eac0cb7090e335bbb2e16d4595fd4268
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_12_asscalar(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_12_asscalar,
        const_str_plain_asscalar,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d25ad341ee30b7767eb120f02c2d10f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_38e665b4d356a613351958197621fbab
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_13_typename(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_13_typename,
        const_str_plain_typename,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3cdbe04f72d48ab10f5f76b2f5e6022,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_3b4c0c12f6833fe1bbb4274681095c66
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_14_common_type(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_14_common_type,
        const_str_plain_common_type,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_87d704f9f7fba36501deb70b549edbc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_59f0a4a7166fde20d15b9c978d112d4e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_1_mintypecode,
        const_str_plain_mintypecode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a50b7fdf217a71e058b9775e7728a089,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_2_asfarray( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_2_asfarray,
        const_str_plain_asfarray,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_660ce90eb3ed49e1af46841f27ac607d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_d222958b180ec6664eb4b921e35d8304
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_3_real(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_3_real,
        const_str_plain_real,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cedc55ac062427c603c197e1824337d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_3cd8fcb3f612e03a2ad29e26d7f53783
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_4_imag(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_4_imag,
        const_str_plain_imag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e39b7a53c1fa7b02d4b2f663755feae8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_51a3cb1ba454cef2e73df7601b5443c6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_5_iscomplex(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_5_iscomplex,
        const_str_plain_iscomplex,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e0f53bd6b54c03832b095bc3c8c57af7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_7d06b9dfb28c50150a23aaf7e4464a27
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_6_isreal(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_6_isreal,
        const_str_plain_isreal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5aa54df0a22a082209c132ee4a918b45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_ec4d4c426c3014b1bef4c67234b09210
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_7_iscomplexobj(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_7_iscomplexobj,
        const_str_plain_iscomplexobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_900d76247b4585fe4b86368c775b8689,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_793dd2dc20fd2ea802f720223d7272d8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_8_isrealobj(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_8_isrealobj,
        const_str_plain_isrealobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_62bcf18192cf781e989fe477b43f2658,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_9__getmaxmin(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_9__getmaxmin,
        const_str_plain__getmaxmin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed221f0e6a8f96ee47190bc0cc852431,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$type_check =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.type_check",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$type_check )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$type_check );
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

    // puts( "in initnumpy$lib$type_check" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$type_check = Py_InitModule4(
        "numpy.lib.type_check",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$type_check = PyModule_Create( &mdef_numpy$lib$type_check );
#endif

    moduledict_numpy$lib$type_check = (PyDictObject *)((PyModuleObject *)module_numpy$lib$type_check)->md_dict;

    CHECK_OBJECT( module_numpy$lib$type_check );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f06b0863ac057f993e0b6697d72eaf86, module_numpy$lib$type_check );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$type_check );

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
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_319fcf66f386c3009026359f595c3662;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ffcbf0f731c5e0d961091e8808954636;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_7408997311a16cd973ccb73960eae3bc_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_9724ec78c9d294823e8d079ee1a6eb84, module_numpy$lib$type_check );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_2, tmp_import_globals_2, const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_3, tmp_import_globals_3, const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_asanyarray );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_4, tmp_import_globals_4, const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_5, tmp_import_globals_5, const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_isnan );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isnan, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_6, tmp_import_globals_6, const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_obj2sctype );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_obj2sctype, tmp_assign_source_12 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_7, tmp_import_globals_7, const_tuple_7671afdc84efddce39679c20abb0ce6d_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_zeros );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_13 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_ufunclike, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_isneginf );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isneginf, tmp_assign_source_14 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_ufunclike, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_isposinf );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isposinf, tmp_assign_source_15 );
    tmp_assign_source_16 = const_str_digest_6a797a370830505dc73095dcc7cdf3f1;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize, tmp_assign_source_16 );
    tmp_defaults_1 = const_tuple_str_plain_GDFgdf_str_plain_d_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_mintypecode, tmp_assign_source_17 );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_float_ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_1 );
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$type_check$$$function_2_asfarray( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asfarray, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$type_check$$$function_3_real(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_real, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$type_check$$$function_4_imag(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_imag, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$type_check$$$function_5_iscomplex(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplex, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$type_check$$$function_6_isreal(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isreal, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$type_check$$$function_7_iscomplexobj(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$type_check$$$function_8_isrealobj(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isrealobj, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$type_check$$$function_9__getmaxmin(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__getmaxmin, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$type_check$$$function_10_nan_to_num(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_nan_to_num, tmp_assign_source_26 );
    tmp_defaults_3 = const_tuple_int_pos_100_tuple;
    tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$type_check$$$function_11_real_if_close( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_real_if_close, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$type_check$$$function_12_asscalar(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asscalar, tmp_assign_source_28 );
    tmp_assign_source_29 = PyDict_Copy( const_dict_7384768b1fbfa6afb1845cb6656346a8 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__namefromtype, tmp_assign_source_29 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$type_check$$$function_13_typename(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_typename, tmp_assign_source_30 );
    tmp_assign_source_31 = PyList_New( 2 );
    tmp_list_element_1 = PyList_New( 4 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_half );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_single );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_double );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 2, tmp_list_element_2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_longdouble );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 535;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 3, tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assign_source_31, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyList_New( 4 );
    tmp_list_element_3 = Py_None;
    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_3 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_csingle );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 536;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cdouble );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 536;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 2, tmp_list_element_3 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_clongdouble );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_31 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 536;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 3, tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_31, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type, tmp_assign_source_31 );
    tmp_assign_source_32 = _PyDict_NewPresized( 7 );
    tmp_dict_value_1 = const_int_0;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_half );
    if ( tmp_dict_key_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );
        Py_DECREF( tmp_dict_key_1 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_1 );
    tmp_dict_value_2 = const_int_pos_1;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 538;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_single );
    if ( tmp_dict_key_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_2, tmp_dict_value_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );
        Py_DECREF( tmp_dict_key_2 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_2 );
    tmp_dict_value_3 = const_int_pos_2;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 539;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_double );
    if ( tmp_dict_key_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 539;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_3, tmp_dict_value_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );
        Py_DECREF( tmp_dict_key_3 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_3 );
    tmp_dict_value_4 = const_int_pos_3;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 540;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_longdouble );
    if ( tmp_dict_key_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 540;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_4, tmp_dict_value_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );
        Py_DECREF( tmp_dict_key_4 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_4 );
    tmp_dict_value_5 = const_int_pos_1;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 541;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_csingle );
    if ( tmp_dict_key_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 541;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_5, tmp_dict_value_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );
        Py_DECREF( tmp_dict_key_5 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_5 );
    tmp_dict_value_6 = const_int_pos_2;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_cdouble );
    if ( tmp_dict_key_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_6, tmp_dict_value_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );
        Py_DECREF( tmp_dict_key_6 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_6 );
    tmp_dict_value_7 = const_int_pos_3;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_clongdouble );
    if ( tmp_dict_key_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 543;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_7, tmp_dict_value_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );
        Py_DECREF( tmp_dict_key_7 );

        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_7 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_precision, tmp_assign_source_32 );

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
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$type_check$$$function_14_common_type(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_common_type, tmp_assign_source_33 );

    return MOD_RETURN_VALUE( module_numpy$lib$type_check );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
