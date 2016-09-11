/* Generated code for Python source for module 'numpy.lib._iotools'
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

/* The _module_numpy$lib$_iotools is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_iotools;
PyDictObject *moduledict_numpy$lib$_iotools;

/* The module constants used, if any. */
static PyObject *const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple;
extern PyObject *const_complex_0_0__0_0;
static PyObject *const_tuple_str_plain_cls_str_plain_dtype_tuple;
extern PyObject *const_str_plain_builtins;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_BZ2File;
static PyObject *const_str_digest_45ab0a13f92b8e2ba7f8aa28a3c2eb22;
static PyObject *const_str_digest_5f30d285db5eebe6122c852827cf44f2;
static PyObject *const_str_digest_2191426ff172ce7de4270594fd1c982a;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_comments;
static PyObject *const_tuple_str_digest_bb919c0463cb60f3ffe946281f06bc83_tuple;
static PyObject *const_tuple_a599b8666e5806821a864c520cfd8b51_tuple;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_digest_ed3780532e9bfe5e4f377fba9d889690;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_fixed;
extern PyObject *const_str_plain_defaultfmt;
static PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
extern PyObject *const_tuple_none_none_none_false_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_self_str_plain_method_tuple;
extern PyObject *const_str_plain_prod;
extern PyObject *const_str_plain_nbfields;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463;
static PyObject *const_str_plain_upgrade_mapper;
extern PyObject *const_str_plain_upgrade;
static PyObject *const_str_digest_bb919c0463cb60f3ffe946281f06bc83;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_chr_44;
static PyObject *const_str_plain_deftype;
static PyObject *const_str_plain_default_def;
static PyObject *const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple;
static PyObject *const_str_plain__callingfunction;
extern PyObject *const_str_plain__m;
static PyObject *const_str_digest_f918dbd039de3c68689c95c59635a203;
static PyObject *const_tuple_str_digest_7b76ea7842696d183ec69816b9d65900_tuple;
extern PyObject *const_str_plain_fhd;
static PyObject *const_str_digest_d9474e3d6f621b3c9e63fd3f5b6673ca;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_NameValidator;
extern PyObject *const_str_plain_encode;
extern PyObject *const_list_str_empty_list;
static PyObject *const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_delete;
static PyObject *const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple;
static PyObject *const_str_plain__mapper;
static PyObject *const_str_digest_0bee88bea05a6d16838bce17fe2050b5;
static PyObject *const_str_plain__dtypeortype;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_plain__getsubdtype;
extern PyObject *const_str_plain_autostrip;
extern PyObject *const_tuple_str_plain_value_tuple;
static PyObject *const_str_digest_96a397480a2f8157c3a9a7280777c9e3;
extern PyObject *const_str_plain_print;
extern PyObject *const_tuple_str_digest_662720bcb38208f53dc17ad51de4c080_tuple;
extern PyObject *const_str_plain_validate;
static PyObject *const_str_digest_84a57cd428878352a4dfe7c4f24bf88b;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___builtin__;
static PyObject *const_str_plain__status;
extern PyObject *const_str_plain__checked;
static PyObject *const_str_plain_fct;
static PyObject *const_tuple_str_plain_self_str_plain_value_str_plain_new_value_tuple;
extern PyObject *const_str_plain_floating;
extern PyObject *const_str_plain_0;
extern PyObject *const_str_plain__iotools;
extern PyObject *const_str_plain_case_sensitive;
extern PyObject *const_str_digest_7b76ea7842696d183ec69816b9d65900;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_FALSE;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_asbytes_nested;
static PyObject *const_str_digest_1ceaed16413642005c79ccbef0e8b8a1;
extern PyObject *const_str_plain__strict_call;
extern PyObject *const_str_plain_ConversionWarning;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_digest_ccf0221c8be3a0a2962b3303a0c24e97;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_base;
static PyObject *const_str_digest_9f47eb23d13e634dd0b4653444d8d578;
extern PyObject *const_str_plain_fields;
static PyObject *const_str_digest_375b24211ce6266ed1dd73c7f1938c73;
static PyObject *const_str_digest_487fca120d7ae45afdaeb868b8180118;
static PyObject *const_str_plain_new_value;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
static PyObject *const_str_plain__defaultfill;
extern PyObject *const_str_plain_StringConverter;
static PyObject *const_str_plain_nbnames;
static PyObject *const_str_plain_nbempty;
static PyObject *const_str_plain__fixedwidth_splitter;
static PyObject *const_str_plain__locked;
static PyObject *const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_tuple_str_plain_obj_tuple;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_str_plain_asbytes;
extern PyObject *const_str_plain_split;
extern PyObject *const_tuple_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463_tuple;
static PyObject *const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_bz2;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain_flat_dt;
static PyObject *const_str_plain_return;
static PyObject *const_str_plain_slices;
static PyObject *const_tuple_none_none_none_str_plain___tuple;
static PyObject *const_str_digest_45be19c65531da0efd245acfac4dd402;
static PyObject *const_str_digest_5f84c323029444654ae455c7b367565e;
static PyObject *const_str_digest_f70edea93b9eb9648bdde20a3ae5a776;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_chr_35;
extern PyObject *const_str_chr_34;
static PyObject *const_str_digest_d1219f0f42e1b2d55a90f4d04411b23e;
static PyObject *const_str_digest_6d612d65e8df16260709631a45f3630c;
static PyObject *const_str_plain__statusmax;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_errmsg;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_c703c2ba9d1acfcef2750ff2158bacb1;
extern PyObject *const_str_plain_add;
extern PyObject *const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple;
static PyObject *const_tuple_str_plain_r_false_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_last_func;
extern PyObject *const_tuple_str_chr_35_tuple;
extern PyObject *const_str_plain_itemsize;
extern PyObject *const_str_plain__loose_call;
static PyObject *const_tuple_str_plain_cls_str_plain_val_tuple;
static PyObject *const_str_plain__delimited_splitter;
static PyObject *const_str_plain__defaultfunc;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_none_str_digest_ed3780532e9bfe5e4f377fba9d889690_tuple;
static PyObject *const_str_plain__defaulttype;
static PyObject *const_tuple_str_plain_TRUE_tuple;
extern PyObject *const_str_plain__bytes_to_name;
static PyObject *const_tuple_69d9db731ffcb07c98b1fd8ec3fd3b57_tuple;
static PyObject *const_str_plain_return_opened;
extern PyObject *const_str_space;
static PyObject *const_str_digest_b764e59b6da7e6e5cc8938f8920eaa6c;
static PyObject *const_tuple_str_plain_FALSE_tuple;
static PyObject *const_tuple_str_plain_1_tuple;
extern PyObject *const_str_plain_replace;
static PyObject *const_tuple_str_plain_ndtype_str_plain_name_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_nbtypes;
extern PyObject *const_str_plain_ndtype;
extern PyObject *const_str_plain_cnt;
extern PyObject *const_str_plain_1;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_02119e277799712faadeb5f223f07616;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_plain__is_string_like;
static PyObject *const_str_digest_71e3138c1031f2e7aca04c50ed88f99f;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_ConverterLockError;
static PyObject *const_str_plain_dtype_or_func;
static PyObject *const_str_plain_validatednames;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_tuple_str_plain_u_tuple;
extern PyObject *const_str_plain_info;
static PyObject *const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple;
extern PyObject *const_str_plain_delimiter;
extern PyObject *const_tuple_str_plain_0_tuple;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_digest_f9278e47b55d89253ff145e0cfd9d58d;
extern PyObject *const_str_plain_formats;
extern PyObject *const_str_plain_fname;
static PyObject *const_str_plain_tester;
static PyObject *const_str_plain_defaultexcludelist;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_ConverterError;
static PyObject *const_str_digest_477438bd1f26a0ef260f4cfe920b32ff;
static PyObject *const_str_digest_77b2dfb22dbdfb504172e7ce2777e20b;
static PyObject *const_str_digest_0624f01227ae394c498d6c157cc60583;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_flag;
extern PyObject *const_str_plain_easy_dtype;
extern PyObject *const_str_plain_flatten_dtype;
extern PyObject *const_str_plain_method;
static PyObject *const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple;
static PyObject *const_str_plain_opened;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_digest_662720bcb38208f53dc17ad51de4c080;
extern PyObject *const_str_plain_endswith;
static PyObject *const_str_plain__to_filehandle;
static PyObject *const_str_plain_TRUE;
extern PyObject *const_str_plain_LineSplitter;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_int64;
static PyObject *const_str_digest_11f5144915b6dbdbc1ce811ac2250be1;
extern PyObject *const_str_plain_basestring;
static PyObject *const_str_plain_str2bool;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_nx;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_str_plain_bool_tuple;
extern PyObject *const_str_plain_longdouble;
extern PyObject *const_str_plain_string_;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_np;
static PyObject *const_str_digest_90c3eda6a2da1dd3a3c76021929e15e0;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_open;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_seen;
static PyObject *const_tuple_47e8b861e3a75313fcd86295368423d6_tuple;
static PyObject *const_tuple_str_digest_1ceaed16413642005c79ccbef0e8b8a1_tuple;
extern PyObject *const_str_digest_7ca129d2d421fe965ad48cbb290b579b;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_missing_values;
static PyObject *const_set_44dd2bf6204ba7cf4eaf44b9f83d8e19;
extern PyObject *const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple;
static PyObject *const_str_digest_7c55a3ca224d2bfec60cb7335b2ceca3;
extern PyObject *const_str_plain_datetime64;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_names;
static PyObject *const_tuple_str_plain_self_str_plain_line_str_plain_slices_str_plain_s_tuple;
extern PyObject *const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple;
static PyObject *const_str_plain__initial_default;
static PyObject *const_str_plain__bytes_to_complex;
extern PyObject *const_str_plain_testing_value;
static PyObject *const_tuple_str_chr_34_tuple;
extern PyObject *const_str_plain_uint64;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_plain_case_converter;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_types;
static PyObject *const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple;
static PyObject *const_str_digest_329b44ce5aeaaddc3ee22d66f7b6e098;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple;
extern PyObject *const_str_plain_replace_space;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_deletechars;
static PyObject *const_list_str_plain_return_str_plain_file_str_plain_print_list;
static PyObject *const_str_plain_dft;
static PyObject *const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple;
extern PyObject *const_str_plain_idx;
static PyObject *const_tuple_str_plain_l_tuple;
static PyObject *const_str_digest_43424d7675a57861a767771ecc8cf149;
static PyObject *const_str_plain_validationargs;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_list;
static PyObject *const_tuple_str_digest_f918dbd039de3c68689c95c59635a203_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain__handyman;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain_locked;
static PyObject *const_str_plain__is_bytes_like;
extern PyObject *const_str_plain_gzip;
extern PyObject *const_list_none_list;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_has_nested_fields;
static PyObject *const_str_plain__getdtype;
static PyObject *const_str_digest_1188cc152b78514124e628515507806f;
extern PyObject *const_tuple_str_plain_self_str_plain_line_tuple;
static PyObject *const_str_plain__variablewidth_splitter;
extern PyObject *const_str_plain_excludelist;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_flatten_base;
static PyObject *const_str_plain_defaultdeletechars;
static PyObject *const_tuple_str_plain_input_str_plain___str_plain_method_tuple;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_97b821684ca3da93a2395c4da81625bb_tuple;
extern PyObject *const_str_plain_field;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_str_digest_ed3780532e9bfe5e4f377fba9d889690_none_tuple;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_iterupgrade;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_nan;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_dtype_or_func = UNSTREAM_STRING( &constant_bin[ 877687 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 1, const_str_plain_dtype_or_func ); Py_INCREF( const_str_plain_dtype_or_func );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 3, const_str_plain_missing_values ); Py_INCREF( const_str_plain_missing_values );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 4, const_str_plain_locked ); Py_INCREF( const_str_plain_locked );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 5, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 6, const_str_plain_errmsg ); Py_INCREF( const_str_plain_errmsg );
    const_str_plain__status = UNSTREAM_STRING( &constant_bin[ 121379 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 7, const_str_plain__status ); Py_INCREF( const_str_plain__status );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 8, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_deftype = UNSTREAM_STRING( &constant_bin[ 877700 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 9, const_str_plain_deftype ); Py_INCREF( const_str_plain_deftype );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 10, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_str_plain_default_def = UNSTREAM_STRING( &constant_bin[ 877707 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 11, const_str_plain_default_def ); Py_INCREF( const_str_plain_default_def );
    const_str_plain_last_func = UNSTREAM_STRING( &constant_bin[ 877718 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 12, const_str_plain_last_func ); Py_INCREF( const_str_plain_last_func );
    const_tuple_str_plain_cls_str_plain_dtype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dtype_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dtype_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_digest_45ab0a13f92b8e2ba7f8aa28a3c2eb22 = UNSTREAM_STRING( &constant_bin[ 877727 ], 52, 0 );
    const_str_digest_5f30d285db5eebe6122c852827cf44f2 = UNSTREAM_STRING( &constant_bin[ 877779 ], 56, 0 );
    const_str_digest_2191426ff172ce7de4270594fd1c982a = UNSTREAM_STRING( &constant_bin[ 877835 ], 15, 0 );
    const_tuple_str_digest_bb919c0463cb60f3ffe946281f06bc83_tuple = PyTuple_New( 1 );
    const_str_digest_bb919c0463cb60f3ffe946281f06bc83 = UNSTREAM_STRING( &constant_bin[ 877850 ], 42, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_bb919c0463cb60f3ffe946281f06bc83_tuple, 0, const_str_digest_bb919c0463cb60f3ffe946281f06bc83 ); Py_INCREF( const_str_digest_bb919c0463cb60f3ffe946281f06bc83 );
    const_tuple_a599b8666e5806821a864c520cfd8b51_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a599b8666e5806821a864c520cfd8b51_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_a599b8666e5806821a864c520cfd8b51_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_a599b8666e5806821a864c520cfd8b51_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_a599b8666e5806821a864c520cfd8b51_tuple, 3, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_plain_fct = UNSTREAM_STRING( &constant_bin[ 877892 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_a599b8666e5806821a864c520cfd8b51_tuple, 4, const_str_plain_fct ); Py_INCREF( const_str_plain_fct );
    const_str_plain_dft = UNSTREAM_STRING( &constant_bin[ 214169 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_a599b8666e5806821a864c520cfd8b51_tuple, 5, const_str_plain_dft ); Py_INCREF( const_str_plain_dft );
    const_str_digest_e58b8e238daae7f316f45d0978267798 = UNSTREAM_STRING( &constant_bin[ 877895 ], 19, 0 );
    const_tuple_str_plain_self_str_plain_method_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_method_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_method_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_str_plain_upgrade_mapper = UNSTREAM_STRING( &constant_bin[ 877914 ], 14, 1 );
    const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 1, const_str_plain_delimiter ); Py_INCREF( const_str_plain_delimiter );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 2, const_str_plain_comments ); Py_INCREF( const_str_plain_comments );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 3, const_str_plain_autostrip ); Py_INCREF( const_str_plain_autostrip );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 4, const_str_plain__handyman ); Py_INCREF( const_str_plain__handyman );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 5, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 7, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_str_plain__callingfunction = UNSTREAM_STRING( &constant_bin[ 877928 ], 16, 1 );
    const_str_digest_f918dbd039de3c68689c95c59635a203 = UNSTREAM_STRING( &constant_bin[ 877944 ], 3, 0 );
    const_tuple_str_digest_7b76ea7842696d183ec69816b9d65900_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7b76ea7842696d183ec69816b9d65900_tuple, 0, const_str_digest_7b76ea7842696d183ec69816b9d65900 ); Py_INCREF( const_str_digest_7b76ea7842696d183ec69816b9d65900 );
    const_str_digest_d9474e3d6f621b3c9e63fd3f5b6673ca = UNSTREAM_STRING( &constant_bin[ 877947 ], 2084, 0 );
    const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 3, const_str_plain_testing_value ); Py_INCREF( const_str_plain_testing_value );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 4, const_str_plain_missing_values ); Py_INCREF( const_str_plain_missing_values );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 5, const_str_plain_locked ); Py_INCREF( const_str_plain_locked );
    const_str_plain_tester = UNSTREAM_STRING( &constant_bin[ 347343 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 6, const_str_plain_tester ); Py_INCREF( const_str_plain_tester );
    PyTuple_SET_ITEM( const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 7, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 0, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 1, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    const_str_plain_return_opened = UNSTREAM_STRING( &constant_bin[ 880031 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 2, const_str_plain_return_opened ); Py_INCREF( const_str_plain_return_opened );
    PyTuple_SET_ITEM( const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 3, const_str_plain_gzip ); Py_INCREF( const_str_plain_gzip );
    PyTuple_SET_ITEM( const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 4, const_str_plain_fhd ); Py_INCREF( const_str_plain_fhd );
    PyTuple_SET_ITEM( const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 5, const_str_plain_bz2 ); Py_INCREF( const_str_plain_bz2 );
    const_str_plain_opened = UNSTREAM_STRING( &constant_bin[ 704398 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 6, const_str_plain_opened ); Py_INCREF( const_str_plain_opened );
    const_str_plain__mapper = UNSTREAM_STRING( &constant_bin[ 877921 ], 7, 1 );
    const_str_digest_0bee88bea05a6d16838bce17fe2050b5 = UNSTREAM_STRING( &constant_bin[ 78741 ], 3, 0 );
    const_str_plain__dtypeortype = UNSTREAM_STRING( &constant_bin[ 880044 ], 12, 1 );
    const_str_plain__getsubdtype = UNSTREAM_STRING( &constant_bin[ 880056 ], 12, 1 );
    const_str_digest_96a397480a2f8157c3a9a7280777c9e3 = UNSTREAM_STRING( &constant_bin[ 880068 ], 410, 0 );
    const_str_digest_84a57cd428878352a4dfe7c4f24bf88b = UNSTREAM_STRING( &constant_bin[ 880478 ], 18, 0 );
    const_tuple_str_plain_self_str_plain_value_str_plain_new_value_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_new_value_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_new_value_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_new_value = UNSTREAM_STRING( &constant_bin[ 281437 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_new_value_tuple, 2, const_str_plain_new_value ); Py_INCREF( const_str_plain_new_value );
    const_str_plain_FALSE = UNSTREAM_STRING( &constant_bin[ 184570 ], 5, 1 );
    const_str_digest_1ceaed16413642005c79ccbef0e8b8a1 = UNSTREAM_STRING( &constant_bin[ 880496 ], 42, 0 );
    const_str_digest_ccf0221c8be3a0a2962b3303a0c24e97 = UNSTREAM_STRING( &constant_bin[ 880538 ], 1765, 0 );
    const_str_digest_9f47eb23d13e634dd0b4653444d8d578 = UNSTREAM_STRING( &constant_bin[ 882303 ], 679, 0 );
    const_str_digest_375b24211ce6266ed1dd73c7f1938c73 = UNSTREAM_STRING( &constant_bin[ 882982 ], 26, 0 );
    const_str_digest_487fca120d7ae45afdaeb868b8180118 = UNSTREAM_STRING( &constant_bin[ 883008 ], 50, 0 );
    const_str_plain__defaultfill = UNSTREAM_STRING( &constant_bin[ 883058 ], 12, 1 );
    const_str_plain_nbnames = UNSTREAM_STRING( &constant_bin[ 883070 ], 7, 1 );
    const_str_plain_nbempty = UNSTREAM_STRING( &constant_bin[ 883077 ], 7, 1 );
    const_str_plain__fixedwidth_splitter = UNSTREAM_STRING( &constant_bin[ 883084 ], 20, 1 );
    const_str_plain__locked = UNSTREAM_STRING( &constant_bin[ 881269 ], 7, 1 );
    const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 0, const_str_plain_ndtype ); Py_INCREF( const_str_plain_ndtype );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 1, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 2, const_str_plain_defaultfmt ); Py_INCREF( const_str_plain_defaultfmt );
    const_str_plain_validationargs = UNSTREAM_STRING( &constant_bin[ 883104 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 3, const_str_plain_validationargs ); Py_INCREF( const_str_plain_validationargs );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 4, const_str_plain_validate ); Py_INCREF( const_str_plain_validate );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 5, const_str_plain_nbfields ); Py_INCREF( const_str_plain_nbfields );
    const_str_plain_nbtypes = UNSTREAM_STRING( &constant_bin[ 883118 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 6, const_str_plain_nbtypes ); Py_INCREF( const_str_plain_nbtypes );
    PyTuple_SET_ITEM( const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 7, const_str_plain_formats ); Py_INCREF( const_str_plain_formats );
    const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, 0, const_str_plain_asbytes ); Py_INCREF( const_str_plain_asbytes );
    PyTuple_SET_ITEM( const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, 1, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    PyTuple_SET_ITEM( const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, 2, const_str_plain_asbytes_nested ); Py_INCREF( const_str_plain_asbytes_nested );
    PyTuple_SET_ITEM( const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, 3, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    const_str_plain_return = UNSTREAM_STRING( &constant_bin[ 8611 ], 6, 1 );
    const_str_plain_slices = UNSTREAM_STRING( &constant_bin[ 374178 ], 6, 1 );
    const_tuple_none_none_none_str_plain___tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_str_plain___tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_str_plain___tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_str_plain___tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_str_plain___tuple, 3, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_digest_45be19c65531da0efd245acfac4dd402 = UNSTREAM_STRING( &constant_bin[ 883125 ], 37, 0 );
    const_str_digest_5f84c323029444654ae455c7b367565e = UNSTREAM_STRING( &constant_bin[ 883162 ], 822, 0 );
    const_str_digest_f70edea93b9eb9648bdde20a3ae5a776 = UNSTREAM_STRING( &constant_bin[ 883984 ], 462, 0 );
    const_str_digest_d1219f0f42e1b2d55a90f4d04411b23e = UNSTREAM_STRING( &constant_bin[ 884446 ], 82, 0 );
    const_str_digest_6d612d65e8df16260709631a45f3630c = UNSTREAM_STRING( &constant_bin[ 884528 ], 82, 0 );
    const_str_plain__statusmax = UNSTREAM_STRING( &constant_bin[ 884610 ], 10, 1 );
    const_str_digest_c703c2ba9d1acfcef2750ff2158bacb1 = UNSTREAM_STRING( &constant_bin[ 884620 ], 771, 0 );
    const_tuple_str_plain_r_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_false_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_cls_str_plain_val_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_val_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_val_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_plain__delimited_splitter = UNSTREAM_STRING( &constant_bin[ 885391 ], 19, 1 );
    const_str_plain__defaultfunc = UNSTREAM_STRING( &constant_bin[ 885410 ], 12, 1 );
    const_tuple_none_str_digest_ed3780532e9bfe5e4f377fba9d889690_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_digest_ed3780532e9bfe5e4f377fba9d889690_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_digest_ed3780532e9bfe5e4f377fba9d889690_tuple, 1, const_str_digest_ed3780532e9bfe5e4f377fba9d889690 ); Py_INCREF( const_str_digest_ed3780532e9bfe5e4f377fba9d889690 );
    const_str_plain__defaulttype = UNSTREAM_STRING( &constant_bin[ 885422 ], 12, 1 );
    const_tuple_str_plain_TRUE_tuple = PyTuple_New( 1 );
    const_str_plain_TRUE = UNSTREAM_STRING( &constant_bin[ 14378 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TRUE_tuple, 0, const_str_plain_TRUE ); Py_INCREF( const_str_plain_TRUE );
    const_tuple_69d9db731ffcb07c98b1fd8ec3fd3b57_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_69d9db731ffcb07c98b1fd8ec3fd3b57_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_69d9db731ffcb07c98b1fd8ec3fd3b57_tuple, 1, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_69d9db731ffcb07c98b1fd8ec3fd3b57_tuple, 2, const_str_plain_defaultfmt ); Py_INCREF( const_str_plain_defaultfmt );
    PyTuple_SET_ITEM( const_tuple_69d9db731ffcb07c98b1fd8ec3fd3b57_tuple, 3, const_str_plain_nbfields ); Py_INCREF( const_str_plain_nbfields );
    const_str_digest_b764e59b6da7e6e5cc8938f8920eaa6c = UNSTREAM_STRING( &constant_bin[ 885434 ], 1083, 0 );
    const_tuple_str_plain_FALSE_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FALSE_tuple, 0, const_str_plain_FALSE ); Py_INCREF( const_str_plain_FALSE );
    const_tuple_str_plain_1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_1_tuple, 0, const_str_plain_1 ); Py_INCREF( const_str_plain_1 );
    const_tuple_str_plain_ndtype_str_plain_name_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ndtype_str_plain_name_tuple, 0, const_str_plain_ndtype ); Py_INCREF( const_str_plain_ndtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_ndtype_str_plain_name_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_digest_02119e277799712faadeb5f223f07616 = UNSTREAM_STRING( &constant_bin[ 886517 ], 66, 0 );
    const_str_digest_71e3138c1031f2e7aca04c50ed88f99f = UNSTREAM_STRING( &constant_bin[ 886583 ], 40, 0 );
    const_str_plain_validatednames = UNSTREAM_STRING( &constant_bin[ 885134 ], 14, 1 );
    const_tuple_str_plain_u_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_u_tuple, 0, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 1, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 2, const_str_plain_defaultfmt ); Py_INCREF( const_str_plain_defaultfmt );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 3, const_str_plain_nbfields ); Py_INCREF( const_str_plain_nbfields );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 4, const_str_plain_nbnames ); Py_INCREF( const_str_plain_nbnames );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 5, const_str_plain_deletechars ); Py_INCREF( const_str_plain_deletechars );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 6, const_str_plain_excludelist ); Py_INCREF( const_str_plain_excludelist );
    const_str_plain_case_converter = UNSTREAM_STRING( &constant_bin[ 886623 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 7, const_str_plain_case_converter ); Py_INCREF( const_str_plain_case_converter );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 8, const_str_plain_replace_space ); Py_INCREF( const_str_plain_replace_space );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 9, const_str_plain_validatednames ); Py_INCREF( const_str_plain_validatednames );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 10, const_str_plain_seen ); Py_INCREF( const_str_plain_seen );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 11, const_str_plain_nbempty ); Py_INCREF( const_str_plain_nbempty );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 12, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 13, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 14, const_str_plain_cnt ); Py_INCREF( const_str_plain_cnt );
    const_str_plain_defaultexcludelist = UNSTREAM_STRING( &constant_bin[ 886637 ], 18, 1 );
    const_str_digest_477438bd1f26a0ef260f4cfe920b32ff = UNSTREAM_STRING( &constant_bin[ 886655 ], 57, 0 );
    const_str_digest_77b2dfb22dbdfb504172e7ce2777e20b = UNSTREAM_STRING( &constant_bin[ 886712 ], 1334, 0 );
    const_str_digest_0624f01227ae394c498d6c157cc60583 = UNSTREAM_STRING( &constant_bin[ 888046 ], 503, 0 );
    const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple, 1, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple, 2, const_str_plain_fixed ); Py_INCREF( const_str_plain_fixed );
    PyTuple_SET_ITEM( const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple, 4, const_str_plain_slices ); Py_INCREF( const_str_plain_slices );
    PyTuple_SET_ITEM( const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain__to_filehandle = UNSTREAM_STRING( &constant_bin[ 888549 ], 14, 1 );
    const_str_digest_11f5144915b6dbdbc1ce811ac2250be1 = UNSTREAM_STRING( &constant_bin[ 888563 ], 508, 0 );
    const_str_plain_str2bool = UNSTREAM_STRING( &constant_bin[ 888988 ], 8, 1 );
    const_tuple_str_plain_bool_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bool_tuple, 0, const_str_plain_bool ); Py_INCREF( const_str_plain_bool );
    const_str_digest_90c3eda6a2da1dd3a3c76021929e15e0 = UNSTREAM_STRING( &constant_bin[ 889071 ], 469, 0 );
    const_tuple_47e8b861e3a75313fcd86295368423d6_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 2, const_str_plain__strict_call ); Py_INCREF( const_str_plain__strict_call );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 3, const_str_plain__m ); Py_INCREF( const_str_plain__m );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 4, const_str_plain_errmsg ); Py_INCREF( const_str_plain_errmsg );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 5, const_str_plain__statusmax ); Py_INCREF( const_str_plain__statusmax );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 6, const_str_plain__status ); Py_INCREF( const_str_plain__status );
    PyTuple_SET_ITEM( const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 7, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_tuple_str_digest_1ceaed16413642005c79ccbef0e8b8a1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1ceaed16413642005c79ccbef0e8b8a1_tuple, 0, const_str_digest_1ceaed16413642005c79ccbef0e8b8a1 ); Py_INCREF( const_str_digest_1ceaed16413642005c79ccbef0e8b8a1 );
    const_set_44dd2bf6204ba7cf4eaf44b9f83d8e19 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 889540 ], 185 );
    const_str_digest_7c55a3ca224d2bfec60cb7335b2ceca3 = UNSTREAM_STRING( &constant_bin[ 889725 ], 222, 0 );
    const_tuple_str_plain_self_str_plain_line_str_plain_slices_str_plain_s_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_line_str_plain_slices_str_plain_s_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_line_str_plain_slices_str_plain_s_tuple, 1, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_line_str_plain_slices_str_plain_s_tuple, 2, const_str_plain_slices ); Py_INCREF( const_str_plain_slices );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_line_str_plain_slices_str_plain_s_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain__initial_default = UNSTREAM_STRING( &constant_bin[ 889947 ], 16, 1 );
    const_str_plain__bytes_to_complex = UNSTREAM_STRING( &constant_bin[ 889963 ], 17, 1 );
    const_tuple_str_chr_34_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_34_tuple, 0, const_str_chr_34 ); Py_INCREF( const_str_chr_34 );
    const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 0, const_str_plain_ndtype ); Py_INCREF( const_str_plain_ndtype );
    PyTuple_SET_ITEM( const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 1, const_str_plain_flatten_base ); Py_INCREF( const_str_plain_flatten_base );
    PyTuple_SET_ITEM( const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 2, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 3, const_str_plain_types ); Py_INCREF( const_str_plain_types );
    PyTuple_SET_ITEM( const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 4, const_str_plain_field ); Py_INCREF( const_str_plain_field );
    PyTuple_SET_ITEM( const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 5, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 6, const_str_plain_flat_dt ); Py_INCREF( const_str_plain_flat_dt );
    const_str_digest_329b44ce5aeaaddc3ee22d66f7b6e098 = UNSTREAM_STRING( &constant_bin[ 889980 ], 60, 0 );
    const_list_str_plain_return_str_plain_file_str_plain_print_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_return_str_plain_file_str_plain_print_list, 0, const_str_plain_return ); Py_INCREF( const_str_plain_return );
    PyList_SET_ITEM( const_list_str_plain_return_str_plain_file_str_plain_print_list, 1, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    PyList_SET_ITEM( const_list_str_plain_return_str_plain_file_str_plain_print_list, 2, const_str_plain_print ); Py_INCREF( const_str_plain_print );
    const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple, 2, const_str_plain_errmsg ); Py_INCREF( const_str_plain_errmsg );
    PyTuple_SET_ITEM( const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple, 3, const_str_plain__statusmax ); Py_INCREF( const_str_plain__statusmax );
    PyTuple_SET_ITEM( const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple, 4, const_str_plain__status ); Py_INCREF( const_str_plain__status );
    PyTuple_SET_ITEM( const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple, 5, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_tuple_str_plain_l_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_l_tuple, 0, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_str_digest_43424d7675a57861a767771ecc8cf149 = UNSTREAM_STRING( &constant_bin[ 890040 ], 662, 0 );
    const_tuple_str_digest_f918dbd039de3c68689c95c59635a203_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f918dbd039de3c68689c95c59635a203_tuple, 0, const_str_digest_f918dbd039de3c68689c95c59635a203 ); Py_INCREF( const_str_digest_f918dbd039de3c68689c95c59635a203 );
    const_str_plain__is_bytes_like = UNSTREAM_STRING( &constant_bin[ 890702 ], 14, 1 );
    const_str_plain__getdtype = UNSTREAM_STRING( &constant_bin[ 890716 ], 9, 1 );
    const_str_digest_1188cc152b78514124e628515507806f = UNSTREAM_STRING( &constant_bin[ 890725 ], 79, 0 );
    const_str_plain__variablewidth_splitter = UNSTREAM_STRING( &constant_bin[ 890804 ], 23, 1 );
    const_str_plain_defaultdeletechars = UNSTREAM_STRING( &constant_bin[ 890827 ], 18, 1 );
    const_tuple_str_plain_input_str_plain___str_plain_method_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_input_str_plain___str_plain_method_tuple, 0, const_str_plain_input ); Py_INCREF( const_str_plain_input );
    PyTuple_SET_ITEM( const_tuple_str_plain_input_str_plain___str_plain_method_tuple, 1, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_str_plain_input_str_plain___str_plain_method_tuple, 2, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_tuple_97b821684ca3da93a2395c4da81625bb_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 1, const_str_plain_excludelist ); Py_INCREF( const_str_plain_excludelist );
    PyTuple_SET_ITEM( const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 2, const_str_plain_deletechars ); Py_INCREF( const_str_plain_deletechars );
    PyTuple_SET_ITEM( const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 3, const_str_plain_case_sensitive ); Py_INCREF( const_str_plain_case_sensitive );
    PyTuple_SET_ITEM( const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 4, const_str_plain_replace_space ); Py_INCREF( const_str_plain_replace_space );
    PyTuple_SET_ITEM( const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 5, const_str_plain_delete ); Py_INCREF( const_str_plain_delete );
    PyTuple_SET_ITEM( const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 6, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_str_digest_ed3780532e9bfe5e4f377fba9d889690_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ed3780532e9bfe5e4f377fba9d889690_none_tuple, 0, const_str_digest_ed3780532e9bfe5e4f377fba9d889690 ); Py_INCREF( const_str_digest_ed3780532e9bfe5e4f377fba9d889690 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ed3780532e9bfe5e4f377fba9d889690_none_tuple, 1, Py_None ); Py_INCREF( Py_None );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$_iotools( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9f69ec9ec40aff154a4dcf52f08bc153;
static PyCodeObject *codeobj_fcbac7232b9d9ab07f7a227a7dcd7c06;
static PyCodeObject *codeobj_1f0bee72e5f12a0c389be49ccc54b8f6;
static PyCodeObject *codeobj_eae65b289225fa0009146722aacbe0d9;
static PyCodeObject *codeobj_4723b9628a7b11dc0a61501981cd6df4;
static PyCodeObject *codeobj_9105c4cff23a3ad5918f2a7ac7e74505;
static PyCodeObject *codeobj_b9aa09a8265d57fb01beba1539e2c441;
static PyCodeObject *codeobj_a52fb3ea55c5b5b61c8657e638c5fa9b;
static PyCodeObject *codeobj_7a7653fe1f63f8b97ceb1f04562c8416;
static PyCodeObject *codeobj_95f1d60071b2214efbd92568b81f86d3;
static PyCodeObject *codeobj_0a79bf394260f4943874aa7696155cd3;
static PyCodeObject *codeobj_1343839da7602bde8323b1e3ca6a0624;
static PyCodeObject *codeobj_bca6886a82ac065797e68e6f29e4f2c8;
static PyCodeObject *codeobj_040c4253f07d8832ac19a98a1dbe21e9;
static PyCodeObject *codeobj_c1ef863909e5b84216a24b3d64cb1f1a;
static PyCodeObject *codeobj_765d3e58152ad988ac9705ed57234105;
static PyCodeObject *codeobj_19c93f600dfe5c15be2414fe97d05501;
static PyCodeObject *codeobj_705a4b550f1f47e1332aa6b71403ff19;
static PyCodeObject *codeobj_e3762a174379ebde786a30db2114f38f;
static PyCodeObject *codeobj_411bf435ee0418ead831698c9bf088ae;
static PyCodeObject *codeobj_d5f3b669229c06c70deab95381bbeeed;
static PyCodeObject *codeobj_47fdbd423e730b54a4e27adebb95373a;
static PyCodeObject *codeobj_5349ed9f967cf75e32b99b6ba81c2876;
static PyCodeObject *codeobj_f34107853634694bd1268e743013d220;
static PyCodeObject *codeobj_4529c62bfc667963806fd0f596fc036f;
static PyCodeObject *codeobj_bbccd77a212b54598b89d1d26e9bdf03;
static PyCodeObject *codeobj_10f635c6e01776e7207759c55c99f85c;
static PyCodeObject *codeobj_4ae99a55d0f14d89c27f23f249de46a8;
static PyCodeObject *codeobj_ba4f56f59927268034f5e5f429a648dc;
static PyCodeObject *codeobj_6627e4bb89137e98147c962015668095;
static PyCodeObject *codeobj_0c8bfe11b0b2b1bb84abb58297c2158f;
static PyCodeObject *codeobj_4a7783d43ca256a9399e9733deae0f0f;
static PyCodeObject *codeobj_b1b7eeca444019b699e84bce865201b4;
static PyCodeObject *codeobj_991015fd1674efea64f709ccf6b1e91f;
static PyCodeObject *codeobj_447f885a6336b6f414ca1d1f9b48dea7;
static PyCodeObject *codeobj_114b38fb2241e48e781598f71a177a02;
static PyCodeObject *codeobj_0e834b65262984c7f3b281286dde1669;
static PyCodeObject *codeobj_1c0e7720072eef2404228f0a502df50d;
static PyCodeObject *codeobj_8eaed66b842e01518372a181bab0297a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_329b44ce5aeaaddc3ee22d66f7b6e098;
    codeobj_9f69ec9ec40aff154a4dcf52f08bc153 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 924, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fcbac7232b9d9ab07f7a227a7dcd7c06 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 924, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f0bee72e5f12a0c389be49ccc54b8f6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 188, const_tuple_str_plain_input_str_plain___str_plain_method_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eae65b289225fa0009146722aacbe0d9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 322, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4723b9628a7b11dc0a61501981cd6df4 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 324, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9105c4cff23a3ad5918f2a7ac7e74505 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 326, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b9aa09a8265d57fb01beba1539e2c441 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 675, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a52fb3ea55c5b5b61c8657e638c5fa9b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LineSplitter, 154, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7a7653fe1f63f8b97ceb1f04562c8416 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_StringConverter, 473, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_95f1d60071b2214efbd92568b81f86d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 246, const_tuple_str_plain_self_str_plain_line_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0a79bf394260f4943874aa7696155cd3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 404, const_tuple_69d9db731ffcb07c98b1fd8ec3fd3b57_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1343839da7602bde8323b1e3ca6a0624 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 723, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bca6886a82ac065797e68e6f29e4f2c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 191, const_tuple_2a009b8b959b8f59e070335da9f8c572_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_040c4253f07d8832ac19a98a1dbe21e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 306, const_tuple_97b821684ca3da93a2395c4da81625bb_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1ef863909e5b84216a24b3d64cb1f1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 601, const_tuple_1814bd3a0bf22510d848279ce2fe1826_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_765d3e58152ad988ac9705ed57234105 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bytes_to_complex, 21, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_19c93f600dfe5c15be2414fe97d05501 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bytes_to_name, 24, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_705a4b550f1f47e1332aa6b71403ff19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__delimited_splitter, 217, const_tuple_str_plain_self_str_plain_line_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e3762a174379ebde786a30db2114f38f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dtypeortype, 551, const_tuple_str_plain_cls_str_plain_dtype_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_411bf435ee0418ead831698c9bf088ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fixedwidth_splitter, 226, const_tuple_d2827fbc94c4f992e2032984ec291fcb_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d5f3b669229c06c70deab95381bbeeed = MAKE_CODEOBJ( module_filename_obj, const_str_plain__getdtype, 535, const_tuple_str_plain_cls_str_plain_val_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_47fdbd423e730b54a4e27adebb95373a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__getsubdtype, 541, const_tuple_str_plain_cls_str_plain_val_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5349ed9f967cf75e32b99b6ba81c2876 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__iotools, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f34107853634694bd1268e743013d220 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_bytes_like, 42, const_tuple_str_plain_obj_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4529c62bfc667963806fd0f596fc036f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_string_like, 31, const_tuple_str_plain_obj_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bbccd77a212b54598b89d1d26e9bdf03 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__loose_call, 690, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_10f635c6e01776e7207759c55c99f85c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__strict_call, 697, const_tuple_str_plain_self_str_plain_value_str_plain_new_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4ae99a55d0f14d89c27f23f249de46a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__to_filehandle, 53, const_tuple_fff5d9e08225eb78f0298b22ed0cffcf_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ba4f56f59927268034f5e5f429a648dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__variablewidth_splitter, 237, const_tuple_str_plain_self_str_plain_line_str_plain_slices_str_plain_s_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6627e4bb89137e98147c962015668095 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_autostrip, 170, const_tuple_str_plain_self_str_plain_method_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0c8bfe11b0b2b1bb84abb58297c2158f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_easy_dtype, 855, const_tuple_b044af5f155ec23c94632f7fcf223fa2_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4a7783d43ca256a9399e9733deae0f0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flatten_dtype, 114, const_tuple_857f6eb5612edff9b2b7ae0d5f4a0bbd_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b1b7eeca444019b699e84bce865201b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_nested_fields, 87, const_tuple_str_plain_ndtype_str_plain_name_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_991015fd1674efea64f709ccf6b1e91f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iterupgrade, 772, const_tuple_47e8b861e3a75313fcd86295368423d6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_447f885a6336b6f414ca1d1f9b48dea7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_str2bool, 408, const_tuple_str_plain_value_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_114b38fb2241e48e781598f71a177a02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 802, const_tuple_350c7a9dec72937cdae4d4072cb8edb4_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0e834b65262984c7f3b281286dde1669 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_upgrade, 727, const_tuple_26bc54dfdf0da23b5e92f0222f6ea3a4_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1c0e7720072eef2404228f0a502df50d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_upgrade_mapper, 559, const_tuple_a599b8666e5806821a864c520cfd8b51_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8eaed66b842e01518372a181bab0297a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate, 333, const_tuple_b0ffc63a6f26c348ad0a17120cddb4d8_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_3_ConverterError( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_4_ConverterLockError( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_5_ConversionWarning( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr( PyObject **python_pars );


static void numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda( PyCellObject *closure_method );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_3__delimited_splitter(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_6___call__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_3___call__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_1__getdtype(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_2__getsubdtype(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_3__dtypeortype(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_4_upgrade_mapper( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_7__strict_call(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_8___call__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_1__bytes_to_complex(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_2__bytes_to_name(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_3__is_string_like(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_4__is_bytes_like(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_5__to_filehandle( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_6_has_nested_fields(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_7_flatten_dtype( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_8_str2bool(  );


static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_9_easy_dtype( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$lib$_iotools$$$function_1__bytes_to_complex( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_765d3e58152ad988ac9705ed57234105, module_numpy$lib$_iotools );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_complex );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_complex );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "complex" );
        exception_tb = NULL;

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_s;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 22;
    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
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
            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_1__bytes_to_complex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_1__bytes_to_complex );
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


static PyObject *impl_numpy$lib$_iotools$$$function_2__bytes_to_name( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_19c93f600dfe5c15be2414fe97d05501, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_s;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 25;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
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
            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_2__bytes_to_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_2__bytes_to_name );
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


static PyObject *impl_numpy$lib$_iotools$$$function_3__is_string_like( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4529c62bfc667963806fd0f596fc036f, module_numpy$lib$_iotools );
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
    tmp_left_name_1 = par_obj;

    tmp_right_name_1 = const_str_empty;
    tmp_unused = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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
            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
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

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_3__is_string_like );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_3__is_string_like );
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


static PyObject *impl_numpy$lib$_iotools$$$function_4__is_bytes_like( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f34107853634694bd1268e743013d220, module_numpy$lib$_iotools );
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
    tmp_left_name_1 = par_obj;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 47;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 47;
    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_2;
    }
    tmp_unused = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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
            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
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

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_4__is_bytes_like );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_4__is_bytes_like );
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


static PyObject *impl_numpy$lib$_iotools$$$function_5__to_filehandle( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fname = python_pars[ 0 ];
    PyObject *par_flag = python_pars[ 1 ];
    PyObject *par_return_opened = python_pars[ 2 ];
    PyObject *var_gzip = NULL;
    PyObject *var_fhd = NULL;
    PyObject *var_bz2 = NULL;
    PyObject *var_opened = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4ae99a55d0f14d89c27f23f249de46a8, module_numpy$lib$_iotools );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__is_string_like );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_string_like );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_is_string_like" );
        exception_tb = NULL;

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_fname;

    frame_function->f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 67;
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
    tmp_source_name_1 = par_fname;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_endswith );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 68;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_662720bcb38208f53dc17ad51de4c080_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 68;
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_fname )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fname,
            par_fname
        );

        assert( res == 0 );
    }

    if ( par_flag )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_flag,
            par_flag
        );

        assert( res == 0 );
    }

    if ( par_return_opened )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_return_opened,
            par_return_opened
        );

        assert( res == 0 );
    }

    if ( var_gzip )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gzip,
            var_gzip
        );

        assert( res == 0 );
    }

    if ( var_fhd )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fhd,
            var_fhd
        );

        assert( res == 0 );
    }

    if ( var_bz2 )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_bz2,
            var_bz2
        );

        assert( res == 0 );
    }

    if ( var_opened )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_opened,
            var_opened
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 69;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_gzip, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( var_gzip == NULL );
    var_gzip = tmp_assign_source_1;

    tmp_source_name_2 = var_gzip;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_open );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_fname;

    tmp_args_element_name_3 = par_flag;

    frame_function->f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    assert( var_fhd == NULL );
    var_fhd = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = par_fname;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_endswith );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 71;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( par_fname )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_fname,
            par_fname
        );

        assert( res == 0 );
    }

    if ( par_flag )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_flag,
            par_flag
        );

        assert( res == 0 );
    }

    if ( par_return_opened )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_return_opened,
            par_return_opened
        );

        assert( res == 0 );
    }

    if ( var_gzip )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_gzip,
            var_gzip
        );

        assert( res == 0 );
    }

    if ( var_fhd )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_fhd,
            var_fhd
        );

        assert( res == 0 );
    }

    if ( var_bz2 )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_bz2,
            var_bz2
        );

        assert( res == 0 );
    }

    if ( var_opened )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_opened,
            var_opened
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 72;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_bz2, tmp_import_globals_2, tmp_import_locals_2, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    assert( var_bz2 == NULL );
    var_bz2 = tmp_assign_source_3;

    tmp_source_name_4 = var_bz2;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BZ2File );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_fname;

    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    assert( var_fhd == NULL );
    var_fhd = tmp_assign_source_4;

    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_file );
    assert( tmp_called_name_6 != NULL );
    tmp_args_element_name_5 = par_fname;

    tmp_args_element_name_6 = par_flag;

    frame_function->f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    assert( var_fhd == NULL );
    var_fhd = tmp_assign_source_5;

    branch_end_3:;
    branch_end_2:;
    tmp_assign_source_6 = Py_True;
    assert( var_opened == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_opened = tmp_assign_source_6;

    goto branch_end_1;
    branch_no_1:;
    tmp_hasattr_source_1 = par_fname;

    tmp_hasattr_attr_1 = const_str_plain_seek;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_7 = par_fname;

    assert( var_fhd == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_fhd = tmp_assign_source_7;

    tmp_assign_source_8 = Py_False;
    assert( var_opened == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_opened = tmp_assign_source_8;

    goto branch_end_4;
    branch_no_4:;
    tmp_make_exception_arg_1 = const_str_digest_f9278e47b55d89253ff145e0cfd9d58d;
    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 81;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_1:;
    tmp_cond_value_4 = par_return_opened;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_fhd;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fhd" );
        exception_tb = NULL;

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_opened;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "opened" );
        exception_tb = NULL;

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_return_value = var_fhd;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fhd" );
        exception_tb = NULL;

        exception_lineno = 84;
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
            if ( par_fname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fname,
                    par_fname
                );

                assert( res == 0 );
            }

            if ( par_flag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flag,
                    par_flag
                );

                assert( res == 0 );
            }

            if ( par_return_opened )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_return_opened,
                    par_return_opened
                );

                assert( res == 0 );
            }

            if ( var_gzip )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_gzip,
                    var_gzip
                );

                assert( res == 0 );
            }

            if ( var_fhd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fhd,
                    var_fhd
                );

                assert( res == 0 );
            }

            if ( var_bz2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bz2,
                    var_bz2
                );

                assert( res == 0 );
            }

            if ( var_opened )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_opened,
                    var_opened
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_5__to_filehandle );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fname );
    Py_DECREF( par_fname );
    par_fname = NULL;

    CHECK_OBJECT( (PyObject *)par_flag );
    Py_DECREF( par_flag );
    par_flag = NULL;

    CHECK_OBJECT( (PyObject *)par_return_opened );
    Py_DECREF( par_return_opened );
    par_return_opened = NULL;

    Py_XDECREF( var_gzip );
    var_gzip = NULL;

    Py_XDECREF( var_fhd );
    var_fhd = NULL;

    Py_XDECREF( var_bz2 );
    var_bz2 = NULL;

    Py_XDECREF( var_opened );
    var_opened = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fname );
    Py_DECREF( par_fname );
    par_fname = NULL;

    CHECK_OBJECT( (PyObject *)par_flag );
    Py_DECREF( par_flag );
    par_flag = NULL;

    CHECK_OBJECT( (PyObject *)par_return_opened );
    Py_DECREF( par_return_opened );
    par_return_opened = NULL;

    Py_XDECREF( var_gzip );
    var_gzip = NULL;

    Py_XDECREF( var_fhd );
    var_fhd = NULL;

    Py_XDECREF( var_bz2 );
    var_bz2 = NULL;

    Py_XDECREF( var_opened );
    var_opened = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_5__to_filehandle );
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


static PyObject *impl_numpy$lib$_iotools$$$function_6_has_nested_fields( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ndtype = python_pars[ 0 ];
    PyObject *var_name = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b1b7eeca444019b699e84bce865201b4, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_ndtype;

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_names );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 108;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_or_right_value_1 = const_tuple_empty;
    Py_INCREF( tmp_or_right_value_1 );
    tmp_iter_arg_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_iter_arg_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 108;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_3;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = par_ndtype;

    tmp_subscript_name_1 = var_name;

    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto try_except_handler_2;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_names );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 109;
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
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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
            if ( par_ndtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndtype,
                    par_ndtype
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_6_has_nested_fields );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ndtype );
    Py_DECREF( par_ndtype );
    par_ndtype = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ndtype );
    Py_DECREF( par_ndtype );
    par_ndtype = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_6_has_nested_fields );
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


static PyObject *impl_numpy$lib$_iotools$$$function_7_flatten_dtype( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ndtype = python_pars[ 0 ];
    PyObject *par_flatten_base = python_pars[ 1 ];
    PyObject *var_names = NULL;
    PyObject *var_types = NULL;
    PyObject *var_field = NULL;
    PyObject *var_info = NULL;
    PyObject *var_flat_dt = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4a7783d43ca256a9399e9733deae0f0f, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_ndtype;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_names );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    assert( var_names == NULL );
    var_names = tmp_assign_source_1;

    tmp_compare_left_1 = var_names;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_cond_value_1 = par_flatten_base;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
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
    tmp_left_name_1 = PyList_New( 1 );
    tmp_source_name_2 = par_ndtype;

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_base );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_left_name_1, 0, tmp_list_element_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int" );
        exception_tb = NULL;

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prod );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_ndtype;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 143;
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
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = PyList_New( 1 );
    tmp_source_name_5 = par_ndtype;

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_base );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_2 );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_types == NULL );
    var_types = tmp_assign_source_2;

    tmp_iter_arg_1 = var_names;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
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
            frame_function->f_lineno = 147;
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
        PyObject *old = var_field;
        var_field = tmp_assign_source_5;
        Py_INCREF( var_field );
        Py_XDECREF( old );
    }

    tmp_source_name_6 = par_ndtype;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fields );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_field;

    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_info;
        var_info = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_flatten_dtype );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_flatten_dtype );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "flatten_dtype" );
        exception_tb = NULL;

        exception_lineno = 149;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_2 = var_info;

    tmp_subscript_name_2 = const_int_0;
    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = par_flatten_base;

    frame_function->f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_flat_dt;
        var_flat_dt = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_7 = var_types;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_extend );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = var_flat_dt;

    frame_function->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
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

    tmp_return_value = var_types;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

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
            if ( par_ndtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndtype,
                    par_ndtype
                );

                assert( res == 0 );
            }

            if ( par_flatten_base )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flatten_base,
                    par_flatten_base
                );

                assert( res == 0 );
            }

            if ( var_names )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_names,
                    var_names
                );

                assert( res == 0 );
            }

            if ( var_types )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types,
                    var_types
                );

                assert( res == 0 );
            }

            if ( var_field )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_field,
                    var_field
                );

                assert( res == 0 );
            }

            if ( var_info )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_info,
                    var_info
                );

                assert( res == 0 );
            }

            if ( var_flat_dt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flat_dt,
                    var_flat_dt
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_7_flatten_dtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ndtype );
    Py_DECREF( par_ndtype );
    par_ndtype = NULL;

    CHECK_OBJECT( (PyObject *)par_flatten_base );
    Py_DECREF( par_flatten_base );
    par_flatten_base = NULL;

    CHECK_OBJECT( (PyObject *)var_names );
    Py_DECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_types );
    var_types = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_flat_dt );
    var_flat_dt = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ndtype );
    Py_DECREF( par_ndtype );
    par_ndtype = NULL;

    CHECK_OBJECT( (PyObject *)par_flatten_base );
    Py_DECREF( par_flatten_base );
    par_flatten_base = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_types );
    var_types = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_flat_dt );
    var_flat_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_7_flatten_dtype );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_autostrip = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var__delimited_splitter = NULL;
    PyObject *var__fixedwidth_splitter = NULL;
    PyObject *var__variablewidth_splitter = NULL;
    PyObject *var___call__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_84a57cd428878352a4dfe7c4f24bf88b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_0624f01227ae394c498d6c157cc60583;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip(  );
    assert( var_autostrip == NULL );
    var_autostrip = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a52fb3ea55c5b5b61c8657e638c5fa9b, module_numpy$lib$_iotools );
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
    tmp_defaults_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 191;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_chr_35_tuple, 0 ) );

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_True;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_assign_source_4 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__( tmp_defaults_1 );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;


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
            if ( var___module__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

                assert( res == 0 );
            }

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var_autostrip )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_autostrip,
                    var_autostrip
                );

                assert( res == 0 );
            }

            if ( var___init__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___init__,
                    var___init__
                );

                assert( res == 0 );
            }

            if ( var__delimited_splitter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__delimited_splitter,
                    var__delimited_splitter
                );

                assert( res == 0 );
            }

            if ( var__fixedwidth_splitter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__fixedwidth_splitter,
                    var__fixedwidth_splitter
                );

                assert( res == 0 );
            }

            if ( var__variablewidth_splitter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__variablewidth_splitter,
                    var__variablewidth_splitter
                );

                assert( res == 0 );
            }

            if ( var___call__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___call__,
                    var___call__
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

    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_3__delimited_splitter(  );
    assert( var__delimited_splitter == NULL );
    var__delimited_splitter = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter(  );
    assert( var__fixedwidth_splitter == NULL );
    var__fixedwidth_splitter = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter(  );
    assert( var__variablewidth_splitter == NULL );
    var__variablewidth_splitter = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_6___call__(  );
    assert( var___call__ == NULL );
    var___call__ = tmp_assign_source_8;

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

    if ( var_autostrip )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_autostrip,
            var_autostrip
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

    if ( var__delimited_splitter )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__delimited_splitter,
            var__delimited_splitter
        );

        assert( res == 0 );
    }

    if ( var__fixedwidth_splitter )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fixedwidth_splitter,
            var__fixedwidth_splitter
        );

        assert( res == 0 );
    }

    if ( var__variablewidth_splitter )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__variablewidth_splitter,
            var__variablewidth_splitter
        );

        assert( res == 0 );
    }

    if ( var___call__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___call__,
            var___call__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_autostrip );
    Py_DECREF( var_autostrip );
    var_autostrip = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var__delimited_splitter );
    Py_DECREF( var__delimited_splitter );
    var__delimited_splitter = NULL;

    CHECK_OBJECT( (PyObject *)var__fixedwidth_splitter );
    Py_DECREF( var__fixedwidth_splitter );
    var__fixedwidth_splitter = NULL;

    CHECK_OBJECT( (PyObject *)var__variablewidth_splitter );
    Py_DECREF( var__variablewidth_splitter );
    var__variablewidth_splitter = NULL;

    CHECK_OBJECT( (PyObject *)var___call__ );
    Py_DECREF( var___call__ );
    var___call__ = NULL;

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

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_autostrip );
    Py_DECREF( var_autostrip );
    var_autostrip = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter );
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


static PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyCellObject *par_method = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda( par_method );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[ 0 ];
    PyObject *var__ = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f0bee72e5f12a0c389be49ccc54b8f6, module_numpy$lib$_iotools );
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
    tmp_called_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "method" );
        exception_tb = NULL;

        exception_lineno = 188;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_input;

    PyThreadState_GET()->frame->f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_2;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

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
            PyThreadState_GET()->frame->f_lineno = 188;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var__;
        var__ = tmp_assign_source_4;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_1 = var__;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_strip );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 188;
    tmp_append_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda );
    return NULL;
    outline_result_1:;
    tmp_return_value = tmp_outline_return_value_1;
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
            if ( par_input )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_input,
                    par_input
                );

                assert( res == 0 );
            }

            if ( var__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__,
                    var__
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    self->m_closure[0]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_input );
    Py_DECREF( par_input );
    par_input = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_input );
    Py_DECREF( par_input );
    par_input = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda );
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


static PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_delimiter = python_pars[ 1 ];
    PyObject *par_comments = python_pars[ 2 ];
    PyObject *par_autostrip = python_pars[ 3 ];
    PyObject *var__handyman = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bca6886a82ac065797e68e6f29e4f2c8, module_numpy$lib$_iotools );
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
    tmp_assattr_name_1 = par_comments;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_comments, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_inst_1 = par_delimiter;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
        exception_tb = NULL;

        exception_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = par_delimiter;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 195;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_delimiter;
        assert( old != NULL );
        par_delimiter = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compexpr_left_1 = par_delimiter;

    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__is_bytes_like );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_bytes_like );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_is_bytes_like" );
        exception_tb = NULL;

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_delimiter;

    frame_function->f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 196;
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
    tmp_or_left_value_2 = par_delimiter;

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
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
    tmp_or_right_value_2 = Py_None;
    tmp_assign_source_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_2 = tmp_or_left_value_2;
    or_end_2:;
    {
        PyObject *old = par_delimiter;
        assert( old != NULL );
        par_delimiter = tmp_assign_source_2;
        Py_INCREF( par_delimiter );
        Py_DECREF( old );
    }

    tmp_source_name_2 = par_self;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__delimited_splitter );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    assert( var__handyman == NULL );
    var__handyman = tmp_assign_source_3;

    goto branch_end_2;
    branch_no_2:;
    tmp_hasattr_source_1 = par_delimiter;

    tmp_hasattr_attr_1 = const_str_plain___iter__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_self;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__variablewidth_splitter );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    assert( var__handyman == NULL );
    var__handyman = tmp_assign_source_4;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cumsum );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = LIST_COPY( const_list_int_0_list );
    tmp_list_arg_1 = par_delimiter;

    tmp_right_name_1 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    assert( var_idx == NULL );
    var_idx = tmp_assign_source_5;

    // Tried code:
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_4 != NULL );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_idx;

    tmp_args_element_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto try_except_handler_2;
    }
    tmp_sliceslicedel_index_lower_2 = 1;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = var_idx;

    tmp_args_element_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 203;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_8;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 203;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_list_contraction_1__iter_value_0;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__source_iter;
        tmp_list_contraction$tuple_unpack_1__source_iter = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_list_contraction$tuple_unpack_1__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_11 == NULL )
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


        exception_lineno = 203;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_1;
        tmp_list_contraction$tuple_unpack_1__element_1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_list_contraction$tuple_unpack_1__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_12 == NULL )
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


        exception_lineno = 203;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_2;
        tmp_list_contraction$tuple_unpack_1__element_2 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_list_contraction$tuple_unpack_1__source_iter;

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

                goto try_except_handler_3;
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

        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_13 = tmp_list_contraction$tuple_unpack_1__element_1;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_13;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_list_contraction$tuple_unpack_1__element_2;

    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_14;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__element_1 );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__element_2 );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_start_name_1 = var_i;

    tmp_stop_name_1 = var_j;

    tmp_step_name_1 = Py_None;
    tmp_append_value_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_append_value_1 != NULL );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__ );
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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__ );
    return NULL;
    outline_result_1:;
    tmp_assign_source_6 = tmp_outline_return_value_1;
    {
        PyObject *old = par_delimiter;
        assert( old != NULL );
        par_delimiter = tmp_assign_source_6;
        Py_DECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int" );
        exception_tb = NULL;

        exception_lineno = 205;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_delimiter;

    frame_function->f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried code:
    tmp_iter_arg_3 = PyTuple_New( 2 );
    tmp_source_name_5 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__fixedwidth_splitter );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 207;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_1 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_iter_arg_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int" );
        exception_tb = NULL;

        exception_lineno = 207;
        goto try_except_handler_4;
    }

    tmp_args_element_name_6 = par_delimiter;

    frame_function->f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 207;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_1 );
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_15;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_16 == NULL )
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


        exception_lineno = 206;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_16;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_17 == NULL )
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


        exception_lineno = 206;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;

    tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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
    goto try_end_2;
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
    try_end_2:;
    tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;

    assert( var__handyman == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var__handyman = tmp_assign_source_18;

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_delimiter;
        assert( old != NULL );
        par_delimiter = tmp_assign_source_19;
        Py_INCREF( par_delimiter );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_4;
    branch_no_4:;
    // Tried code:
    tmp_iter_arg_4 = PyTuple_New( 2 );
    tmp_source_name_6 = par_self;

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__delimited_splitter );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_4 );

        exception_lineno = 209;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 1, tmp_tuple_element_2 );
    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_20;

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_5, 0 );
    if ( tmp_assign_source_21 == NULL )
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


        exception_lineno = 209;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_21;

    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_6, 1 );
    if ( tmp_assign_source_22 == NULL )
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


        exception_lineno = 209;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_22;

    tmp_iterator_name_3 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                goto try_except_handler_5;
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

        goto try_except_handler_5;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;

    assert( var__handyman == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var__handyman = tmp_assign_source_23;

    tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = par_delimiter;
        assert( old != NULL );
        par_delimiter = tmp_assign_source_24;
        Py_INCREF( par_delimiter );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_2 );
    Py_DECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    tmp_assattr_name_2 = par_delimiter;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "delimiter" );
        exception_tb = NULL;

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_delimiter, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = par_autostrip;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_7 = par_self;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_autostrip );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var__handyman;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_handyman" );
        exception_tb = NULL;

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__handyman, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    goto branch_end_5;
    branch_no_5:;
    tmp_assattr_name_4 = var__handyman;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_handyman" );
        exception_tb = NULL;

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__handyman, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
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

            if ( par_delimiter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_delimiter,
                    par_delimiter
                );

                assert( res == 0 );
            }

            if ( par_comments )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_comments,
                    par_comments
                );

                assert( res == 0 );
            }

            if ( par_autostrip )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_autostrip,
                    par_autostrip
                );

                assert( res == 0 );
            }

            if ( var__handyman )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__handyman,
                    var__handyman
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

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
                );

                assert( res == 0 );
            }

            if ( var_j )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_j,
                    var_j
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_delimiter );
    par_delimiter = NULL;

    CHECK_OBJECT( (PyObject *)par_comments );
    Py_DECREF( par_comments );
    par_comments = NULL;

    CHECK_OBJECT( (PyObject *)par_autostrip );
    Py_DECREF( par_autostrip );
    par_autostrip = NULL;

    Py_XDECREF( var__handyman );
    var__handyman = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_delimiter );
    par_delimiter = NULL;

    CHECK_OBJECT( (PyObject *)par_comments );
    Py_DECREF( par_comments );
    par_comments = NULL;

    CHECK_OBJECT( (PyObject *)par_autostrip );
    Py_DECREF( par_autostrip );
    par_autostrip = NULL;

    Py_XDECREF( var__handyman );
    var__handyman = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__ );
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


static PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_3__delimited_splitter( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_line = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_705a4b550f1f47e1332aa6b71403ff19, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_comments );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_line;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_comments );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_line;
        assert( old != NULL );
        par_line = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_4 = par_line;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_strip );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 220;
    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_f918dbd039de3c68689c95c59635a203_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_line;
        assert( old != NULL );
        par_line = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_cond_value_1 = par_line;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
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
    tmp_return_value = PyList_New( 0 );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_5 = par_line;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_split );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_delimiter );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    par_line
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_3__delimited_splitter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

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

    Py_XDECREF( par_line );
    par_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_3__delimited_splitter );
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


static PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_line = python_pars[ 1 ];
    PyObject *var_fixed = NULL;
    PyObject *var_i = NULL;
    PyObject *var_slices = NULL;
    PyObject *var_s = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_range3_high_1;
    PyObject *tmp_range3_low_1;
    PyObject *tmp_range3_step_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_411bf435ee0418ead831698c9bf088ae, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_comments );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_line;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_comments );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_line;
        assert( old != NULL );
        par_line = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_4 = par_line;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_strip );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 229;
    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_line;
        assert( old != NULL );
        par_line = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_cond_value_1 = par_line;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
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
    tmp_return_value = PyList_New( 0 );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_5 = par_self;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_delimiter );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    assert( var_fixed == NULL );
    var_fixed = tmp_assign_source_3;

    // Tried code:
    tmp_range3_low_1 = const_int_0;
    tmp_len_arg_1 = par_line;

    tmp_range3_high_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range3_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_2;
    }
    tmp_range3_step_1 = var_fixed;

    tmp_iter_arg_1 = BUILTIN_RANGE3( tmp_range3_low_1, tmp_range3_high_1, tmp_range3_step_1 );
    Py_DECREF( tmp_range3_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_2;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_5;

    tmp_assign_source_6 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_6;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 233;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_8;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_start_name_1 = var_i;

    tmp_left_name_1 = var_i;

    tmp_right_name_1 = var_fixed;

    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_2;
    }
    tmp_step_name_1 = Py_None;
    tmp_append_value_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_append_value_1 != NULL );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter );
    return NULL;
    outline_result_1:;
    tmp_assign_source_4 = tmp_outline_return_value_1;
    assert( var_slices == NULL );
    var_slices = tmp_assign_source_4;

    // Tried code:
    tmp_iter_arg_2 = var_slices;

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_9;

    tmp_assign_source_10 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_10;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 234;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_12;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_subscribed_name_2 = par_line;

    tmp_subscript_name_2 = var_s;

    tmp_append_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter );
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    par_line
                );

                assert( res == 0 );
            }

            if ( var_fixed )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fixed,
                    var_fixed
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

            if ( var_slices )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_slices,
                    var_slices
                );

                assert( res == 0 );
            }

            if ( var_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    var_s
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    Py_XDECREF( var_fixed );
    var_fixed = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_slices );
    var_slices = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_line );
    par_line = NULL;

    Py_XDECREF( var_fixed );
    var_fixed = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_slices );
    var_slices = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter );
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


static PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_line = python_pars[ 1 ];
    PyObject *var_slices = NULL;
    PyObject *var_s = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ba4f56f59927268034f5e5f429a648dc, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_comments );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_line;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_comments );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_line;
        assert( old != NULL );
        par_line = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_cond_value_1 = par_line;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
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
    tmp_return_value = PyList_New( 0 );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_4 = par_self;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_delimiter );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    assert( var_slices == NULL );
    var_slices = tmp_assign_source_2;

    // Tried code:
    tmp_iter_arg_1 = var_slices;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
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
            PyThreadState_GET()->frame->f_lineno = 243;
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
        PyObject *old = var_s;
        var_s = tmp_assign_source_6;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_subscribed_name_2 = par_line;

    tmp_subscript_name_2 = var_s;

    tmp_append_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter );
    return NULL;
    outline_result_1:;
    tmp_return_value = tmp_outline_return_value_1;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    par_line
                );

                assert( res == 0 );
            }

            if ( var_slices )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_slices,
                    var_slices
                );

                assert( res == 0 );
            }

            if ( var_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    var_s
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    Py_XDECREF( var_slices );
    var_slices = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_line );
    par_line = NULL;

    Py_XDECREF( var_slices );
    var_slices = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter );
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


static PyObject *impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_6___call__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_line = python_pars[ 1 ];
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_95f1d60071b2214efbd92568b81f86d3, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__handyman );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_line;

    frame_function->f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    par_line
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_6___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

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

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_1_LineSplitter$$$function_6___call__ );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_defaultexcludelist = NULL;
    PyObject *var_defaultdeletechars = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_validate = NULL;
    PyObject *var___call__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_84a57cd428878352a4dfe7c4f24bf88b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d9474e3d6f621b3c9e63fd3f5b6673ca;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_return_str_plain_file_str_plain_print_list );
    assert( var_defaultexcludelist == NULL );
    var_defaultexcludelist = tmp_assign_source_3;

    tmp_assign_source_4 = PySet_New( const_set_44dd2bf6204ba7cf4eaf44b9f83d8e19 );
    assert( var_defaultdeletechars == NULL );
    var_defaultdeletechars = tmp_assign_source_4;

    tmp_defaults_1 = const_tuple_none_none_none_str_plain___tuple;
    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_5;

    tmp_defaults_2 = const_tuple_str_digest_ed3780532e9bfe5e4f377fba9d889690_none_tuple;
    tmp_assign_source_6 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_validate == NULL );
    var_validate = tmp_assign_source_6;

    tmp_defaults_3 = const_tuple_str_digest_ed3780532e9bfe5e4f377fba9d889690_none_tuple;
    tmp_assign_source_7 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_3___call__( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var___call__ == NULL );
    var___call__ = tmp_assign_source_7;

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

    if ( var_defaultexcludelist )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_defaultexcludelist,
            var_defaultexcludelist
        );

        assert( res == 0 );
    }

    if ( var_defaultdeletechars )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_defaultdeletechars,
            var_defaultdeletechars
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

    if ( var_validate )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_validate,
            var_validate
        );

        assert( res == 0 );
    }

    if ( var___call__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___call__,
            var___call__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_defaultexcludelist );
    Py_DECREF( var_defaultexcludelist );
    var_defaultexcludelist = NULL;

    CHECK_OBJECT( (PyObject *)var_defaultdeletechars );
    Py_DECREF( var_defaultdeletechars );
    var_defaultdeletechars = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_validate );
    Py_DECREF( var_validate );
    var_validate = NULL;

    CHECK_OBJECT( (PyObject *)var___call__ );
    Py_DECREF( var___call__ );
    var___call__ = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_excludelist = python_pars[ 1 ];
    PyObject *par_deletechars = python_pars[ 2 ];
    PyObject *par_case_sensitive = python_pars[ 3 ];
    PyObject *par_replace_space = python_pars[ 4 ];
    PyObject *var_delete = NULL;
    PyObject *var_msg = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
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
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_compare_left_1 = par_excludelist;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    {
        PyObject *old = par_excludelist;
        assert( old != NULL );
        par_excludelist = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_040c4253f07d8832ac19a98a1dbe21e9, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_excludelist;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_defaultexcludelist );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 311;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_excludelist;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_excludelist, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = par_deletechars;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_defaultdeletechars );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    assert( var_delete == NULL );
    var_delete = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_set_arg_1 = par_deletechars;

    tmp_assign_source_3 = PySet_New( tmp_set_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    assert( var_delete == NULL );
    var_delete = tmp_assign_source_3;

    branch_end_2:;
    tmp_source_name_4 = var_delete;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_add );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 318;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_chr_34_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = var_delete;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_deletechars, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_case_sensitive;

    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_2 = par_case_sensitive;

    tmp_compexpr_right_2 = Py_True;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
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
    tmp_assattr_name_3 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_1_lambda(  );
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_case_converter, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    goto branch_end_3;
    branch_no_3:;
    tmp_compexpr_left_3 = par_case_sensitive;

    tmp_compexpr_right_3 = Py_False;
    tmp_or_left_value_2 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    assert( !(tmp_or_left_truth_2 == -1) );
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_source_name_5 = par_case_sensitive;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_startswith );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 323;
    tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain_u_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_cond_value_2 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_4 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_2_lambda(  );
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_case_converter, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_6 = par_case_sensitive;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_startswith );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 325;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_l_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_5 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_3_lambda(  );
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_case_converter, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 326;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    goto branch_end_5;
    branch_no_5:;
    tmp_left_name_1 = const_str_digest_45be19c65531da0efd245acfac4dd402;
    tmp_right_name_1 = par_case_sensitive;

    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    assert( var_msg == NULL );
    var_msg = tmp_assign_source_4;

    tmp_make_exception_arg_1 = var_msg;

    frame_function->f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 329;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    tmp_assattr_name_6 = par_replace_space;

    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_replace_space, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
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

            if ( par_excludelist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_excludelist,
                    par_excludelist
                );

                assert( res == 0 );
            }

            if ( par_deletechars )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deletechars,
                    par_deletechars
                );

                assert( res == 0 );
            }

            if ( par_case_sensitive )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_case_sensitive,
                    par_case_sensitive
                );

                assert( res == 0 );
            }

            if ( par_replace_space )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_replace_space,
                    par_replace_space
                );

                assert( res == 0 );
            }

            if ( var_delete )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_delete,
                    var_delete
                );

                assert( res == 0 );
            }

            if ( var_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    var_msg
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_excludelist );
    Py_DECREF( par_excludelist );
    par_excludelist = NULL;

    CHECK_OBJECT( (PyObject *)par_deletechars );
    Py_DECREF( par_deletechars );
    par_deletechars = NULL;

    CHECK_OBJECT( (PyObject *)par_case_sensitive );
    Py_DECREF( par_case_sensitive );
    par_case_sensitive = NULL;

    CHECK_OBJECT( (PyObject *)par_replace_space );
    Py_DECREF( par_replace_space );
    par_replace_space = NULL;

    CHECK_OBJECT( (PyObject *)var_delete );
    Py_DECREF( var_delete );
    var_delete = NULL;

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

    CHECK_OBJECT( (PyObject *)par_excludelist );
    Py_DECREF( par_excludelist );
    par_excludelist = NULL;

    CHECK_OBJECT( (PyObject *)par_deletechars );
    Py_DECREF( par_deletechars );
    par_deletechars = NULL;

    CHECK_OBJECT( (PyObject *)par_case_sensitive );
    Py_DECREF( par_case_sensitive );
    par_case_sensitive = NULL;

    CHECK_OBJECT( (PyObject *)par_replace_space );
    Py_DECREF( par_replace_space );
    par_replace_space = NULL;

    Py_XDECREF( var_delete );
    var_delete = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__ );
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


static PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_1_lambda( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_x;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_1_lambda );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_2_lambda( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4723b9628a7b11dc0a61501981cd6df4, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_x;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_upper );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 324;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_2_lambda );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_2_lambda );
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


static PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_3_lambda( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9105c4cff23a3ad5918f2a7ac7e74505, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_x;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 326;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_3_lambda );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_3_lambda );
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


static PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_names = python_pars[ 1 ];
    PyObject *par_defaultfmt = python_pars[ 2 ];
    PyObject *par_nbfields = python_pars[ 3 ];
    PyObject *var_nbnames = NULL;
    PyObject *var_deletechars = NULL;
    PyObject *var_excludelist = NULL;
    PyObject *var_case_converter = NULL;
    PyObject *var_replace_space = NULL;
    PyObject *var_validatednames = NULL;
    PyObject *var_seen = NULL;
    PyObject *var_nbempty = NULL;
    PyObject *var_item = NULL;
    PyObject *var_c = NULL;
    PyObject *var_cnt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
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
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
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
    PyObject *tmp_tuple_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    tmp_compare_left_1 = par_names;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_compare_left_2 = par_nbfields;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    branch_no_2:;
    tmp_assign_source_1 = PyList_New( 0 );
    {
        PyObject *old = par_names;
        assert( old != NULL );
        par_names = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8eaed66b842e01518372a181bab0297a, module_numpy$lib$_iotools );
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
    tmp_isinstance_inst_1 = par_names;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
        exception_tb = NULL;

        exception_lineno = 364;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_2 = PyList_New( 1 );
    tmp_list_element_1 = par_names;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
    {
        PyObject *old = par_names;
        assert( old != NULL );
        par_names = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_3 = par_nbfields;

    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_len_arg_1 = par_names;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 367;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    assert( var_nbnames == NULL );
    var_nbnames = tmp_assign_source_3;

    tmp_compare_left_4 = var_nbnames;

    tmp_compare_right_4 = par_nbfields;

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_list_arg_1 = par_names;

    if ( tmp_list_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = LIST_COPY( const_list_str_empty_list );
    tmp_left_name_3 = par_nbfields;

    tmp_right_name_3 = var_nbnames;

    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_names;
        par_names = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_5 = var_nbnames;

    tmp_compare_right_5 = par_nbfields;

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_slice_source_1 = par_names;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = par_nbfields;

    tmp_assign_source_5 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_names;
        par_names = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    branch_no_6:;
    branch_end_5:;
    branch_no_4:;
    tmp_source_name_1 = par_self;

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_deletechars );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    assert( var_deletechars == NULL );
    var_deletechars = tmp_assign_source_6;

    tmp_source_name_2 = par_self;

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_excludelist );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    assert( var_excludelist == NULL );
    var_excludelist = tmp_assign_source_7;

    tmp_source_name_3 = par_self;

    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_case_converter );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto frame_exception_exit_1;
    }
    assert( var_case_converter == NULL );
    var_case_converter = tmp_assign_source_8;

    tmp_source_name_4 = par_self;

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_replace_space );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    assert( var_replace_space == NULL );
    var_replace_space = tmp_assign_source_9;

    tmp_assign_source_10 = PyList_New( 0 );
    assert( var_validatednames == NULL );
    var_validatednames = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( var_seen == NULL );
    var_seen = tmp_assign_source_11;

    tmp_assign_source_12 = const_int_0;
    assert( var_nbempty == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_nbempty = tmp_assign_source_12;

    tmp_iter_arg_1 = par_names;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 382;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_13;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 382;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_item;
        var_item = tmp_assign_source_15;
        Py_INCREF( var_item );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = var_case_converter;

    tmp_args_element_name_1 = var_item;

    frame_function->f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_strip );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 383;
    tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_item;
        assert( old != NULL );
        var_item = tmp_assign_source_16;
        Py_DECREF( old );
    }

    tmp_cond_value_1 = var_replace_space;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_6 = var_item;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_replace );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = const_str_space;
    tmp_args_element_name_3 = var_replace_space;

    frame_function->f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_item;
        assert( old != NULL );
        var_item = tmp_assign_source_17;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_source_name_7 = const_str_empty;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    assert( tmp_called_name_4 != NULL );
    // Tried code:
    tmp_iter_arg_2 = var_item;

    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction_1__$0;
        tmp_list_contraction_1__$0 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_assign_source_20 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_1__contraction_result;
        tmp_list_contraction_1__contraction_result = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 386;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_assign_source_22 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_c;
        var_c = tmp_assign_source_22;
        Py_INCREF( var_c );
        Py_XDECREF( old );
    }

    tmp_compare_left_6 = var_c;

    tmp_compare_right_6 = var_deletechars;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = var_c;

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        goto try_except_handler_3;
    }
    branch_no_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
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
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_4 = tmp_outline_return_value_1;
    frame_function->f_lineno = 386;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_item;
        assert( old != NULL );
        var_item = tmp_assign_source_18;
        Py_DECREF( old );
    }

    tmp_compare_left_7 = var_item;

    tmp_compare_right_7 = const_str_empty;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_left_name_4 = par_defaultfmt;

    tmp_right_name_4 = var_nbempty;

    if ( tmp_right_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "nbempty" );
        exception_tb = NULL;

        exception_lineno = 388;
        goto try_except_handler_2;
    }

    tmp_assign_source_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_item;
        assert( old != NULL );
        var_item = tmp_assign_source_23;
        Py_DECREF( old );
    }

    loop_start_3:;
    tmp_compare_left_8 = var_item;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;

        exception_lineno = 389;
        goto try_except_handler_2;
    }

    tmp_compare_right_8 = par_names;

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 389;
        goto try_except_handler_2;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    goto loop_end_3;
    branch_no_10:;
    tmp_left_name_5 = var_nbempty;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "nbempty" );
        exception_tb = NULL;

        exception_lineno = 390;
        goto try_except_handler_2;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_24 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto try_except_handler_2;
    }
    var_nbempty = tmp_assign_source_24;

    tmp_left_name_6 = par_defaultfmt;

    tmp_right_name_6 = var_nbempty;

    tmp_assign_source_25 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_item;
        var_item = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto try_except_handler_2;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_left_name_7 = var_nbempty;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "nbempty" );
        exception_tb = NULL;

        exception_lineno = 392;
        goto try_except_handler_2;
    }

    tmp_right_name_7 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_26 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        goto try_except_handler_2;
    }
    var_nbempty = tmp_assign_source_26;

    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_9 = var_item;

    tmp_compare_right_9 = var_excludelist;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_left_name_8 = var_item;

    tmp_right_name_8 = const_str_plain__;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_27 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto try_except_handler_2;
    }
    var_item = tmp_assign_source_27;

    branch_no_11:;
    branch_end_9:;
    tmp_source_name_8 = var_seen;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = var_item;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;

        exception_lineno = 395;
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = const_int_0;
    frame_function->f_lineno = 395;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_cnt;
        var_cnt = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_compare_left_10 = var_cnt;

    tmp_compare_right_10 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_9 = var_validatednames;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto try_except_handler_2;
    }
    tmp_left_name_9 = var_item;

    if ( tmp_left_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;

        exception_lineno = 397;
        goto try_except_handler_2;
    }

    tmp_left_name_10 = const_str_digest_0bee88bea05a6d16838bce17fe2050b5;
    tmp_right_name_10 = var_cnt;

    tmp_right_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 397;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 397;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_10 = var_validatednames;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto try_except_handler_2;
    }
    tmp_args_element_name_8 = var_item;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;

        exception_lineno = 399;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_12:;
    tmp_left_name_11 = var_cnt;

    tmp_right_name_11 = const_int_pos_1;
    tmp_dictset_value = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_2;
    }
    tmp_dictset_dict = var_seen;

    tmp_dictset_key = var_item;

    if ( tmp_dictset_key == NULL )
    {
        Py_DECREF( tmp_dictset_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;

        exception_lineno = 400;
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_tuple_arg_1 = var_validatednames;

    tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_names )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_names,
                    par_names
                );

                assert( res == 0 );
            }

            if ( par_defaultfmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaultfmt,
                    par_defaultfmt
                );

                assert( res == 0 );
            }

            if ( par_nbfields )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nbfields,
                    par_nbfields
                );

                assert( res == 0 );
            }

            if ( var_nbnames )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nbnames,
                    var_nbnames
                );

                assert( res == 0 );
            }

            if ( var_deletechars )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deletechars,
                    var_deletechars
                );

                assert( res == 0 );
            }

            if ( var_excludelist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_excludelist,
                    var_excludelist
                );

                assert( res == 0 );
            }

            if ( var_case_converter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_case_converter,
                    var_case_converter
                );

                assert( res == 0 );
            }

            if ( var_replace_space )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_replace_space,
                    var_replace_space
                );

                assert( res == 0 );
            }

            if ( var_validatednames )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_validatednames,
                    var_validatednames
                );

                assert( res == 0 );
            }

            if ( var_seen )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_seen,
                    var_seen
                );

                assert( res == 0 );
            }

            if ( var_nbempty )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nbempty,
                    var_nbempty
                );

                assert( res == 0 );
            }

            if ( var_item )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item,
                    var_item
                );

                assert( res == 0 );
            }

            if ( var_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    var_c
                );

                assert( res == 0 );
            }

            if ( var_cnt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cnt,
                    var_cnt
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultfmt );
    Py_DECREF( par_defaultfmt );
    par_defaultfmt = NULL;

    CHECK_OBJECT( (PyObject *)par_nbfields );
    Py_DECREF( par_nbfields );
    par_nbfields = NULL;

    Py_XDECREF( var_nbnames );
    var_nbnames = NULL;

    Py_XDECREF( var_deletechars );
    var_deletechars = NULL;

    Py_XDECREF( var_excludelist );
    var_excludelist = NULL;

    Py_XDECREF( var_case_converter );
    var_case_converter = NULL;

    Py_XDECREF( var_replace_space );
    var_replace_space = NULL;

    Py_XDECREF( var_validatednames );
    var_validatednames = NULL;

    Py_XDECREF( var_seen );
    var_seen = NULL;

    Py_XDECREF( var_nbempty );
    var_nbempty = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultfmt );
    Py_DECREF( par_defaultfmt );
    par_defaultfmt = NULL;

    CHECK_OBJECT( (PyObject *)par_nbfields );
    Py_DECREF( par_nbfields );
    par_nbfields = NULL;

    Py_XDECREF( var_nbnames );
    var_nbnames = NULL;

    Py_XDECREF( var_deletechars );
    var_deletechars = NULL;

    Py_XDECREF( var_excludelist );
    var_excludelist = NULL;

    Py_XDECREF( var_case_converter );
    var_case_converter = NULL;

    Py_XDECREF( var_replace_space );
    var_replace_space = NULL;

    Py_XDECREF( var_validatednames );
    var_validatednames = NULL;

    Py_XDECREF( var_seen );
    var_seen = NULL;

    Py_XDECREF( var_nbempty );
    var_nbempty = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate );
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


static PyObject *impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_3___call__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_names = python_pars[ 1 ];
    PyObject *par_defaultfmt = python_pars[ 2 ];
    PyObject *par_nbfields = python_pars[ 3 ];
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0a79bf394260f4943874aa7696155cd3, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_validate );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_names;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_defaultfmt;

    tmp_dict_key_1 = const_str_plain_defaultfmt;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_nbfields;

    tmp_dict_key_2 = const_str_plain_nbfields;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 405;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_names )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_names,
                    par_names
                );

                assert( res == 0 );
            }

            if ( par_defaultfmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaultfmt,
                    par_defaultfmt
                );

                assert( res == 0 );
            }

            if ( par_nbfields )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nbfields,
                    par_nbfields
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_3___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultfmt );
    Py_DECREF( par_defaultfmt );
    par_defaultfmt = NULL;

    CHECK_OBJECT( (PyObject *)par_nbfields );
    Py_DECREF( par_nbfields );
    par_nbfields = NULL;

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

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultfmt );
    Py_DECREF( par_defaultfmt );
    par_defaultfmt = NULL;

    CHECK_OBJECT( (PyObject *)par_nbfields );
    Py_DECREF( par_nbfields );
    par_nbfields = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_2_NameValidator$$$function_3___call__ );
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


static PyObject *impl_numpy$lib$_iotools$$$function_8_str2bool( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_447f885a6336b6f414ca1d1f9b48dea7, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_value;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_upper );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 435;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        assert( old != NULL );
        par_value = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_value;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 436;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 436;
    tmp_compare_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_TRUE_tuple, 0 ) );

    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 436;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_value;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 438;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 438;
    tmp_compare_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain_FALSE_tuple, 0 ) );

    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 438;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_make_exception_arg_1 = const_str_digest_2191426ff172ce7de4270594fd1c982a;
    frame_function->f_lineno = 441;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 441;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;

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
            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_8_str2bool );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_8_str2bool );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_3_ConverterError( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_84a57cd428878352a4dfe7c4f24bf88b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_6d612d65e8df16260709631a45f3630c;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

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

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_3_ConverterError );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_3_ConverterError );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_4_ConverterLockError( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_84a57cd428878352a4dfe7c4f24bf88b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d1219f0f42e1b2d55a90f4d04411b23e;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

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

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_4_ConverterLockError );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_4_ConverterLockError );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_5_ConversionWarning( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_84a57cd428878352a4dfe7c4f24bf88b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_7c55a3ca224d2bfec60cb7335b2ceca3;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

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

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_5_ConversionWarning );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_5_ConversionWarning );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var__mapper = NULL;
    PyObject *var__defaulttype = NULL;
    PyObject *var__defaultfunc = NULL;
    PyObject *var__defaultfill = NULL;
    PyObject *var__getdtype = NULL;
    PyObject *var__getsubdtype = NULL;
    PyObject *var__dtypeortype = NULL;
    PyObject *var_upgrade_mapper = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var__loose_call = NULL;
    PyObject *var__strict_call = NULL;
    PyObject *var___call__ = NULL;
    PyObject *var_upgrade = NULL;
    PyObject *var_iterupgrade = NULL;
    PyObject *var_update = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *tmp_args_element_name_8;
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
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_84a57cd428878352a4dfe7c4f24bf88b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_ccf0221c8be3a0a2962b3303a0c24e97;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7a7653fe1f63f8b97ceb1f04562c8416, module_numpy$lib$_iotools );
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
    tmp_assign_source_3 = PyList_New( 2 );
    tmp_list_element_1 = PyTuple_New( 3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bool_ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_str2bool );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2bool );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "str2bool" );
        exception_tb = NULL;

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 3 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_integer );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "int" );
        exception_tb = NULL;

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_neg_1;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    assert( var__mapper == NULL );
    var__mapper = tmp_assign_source_3;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_integer );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 525;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_itemsize );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_int64 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 525;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_itemsize );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 525;
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
    tmp_source_name_9 = var__mapper;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 3 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_int64 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 526;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "int" );
        exception_tb = NULL;

        exception_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_int_neg_1;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 2, tmp_tuple_element_3 );
    frame_function->f_lineno = 526;
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


        exception_lineno = 526;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_11 = var__mapper;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_extend );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 528;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = PyList_New( 4 );
    tmp_list_element_2 = PyTuple_New( 3 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_floating );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_float );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_float );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "float" );
        exception_tb = NULL;

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_4 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_nan );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 2, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_args_element_name_4, 0, tmp_list_element_2 );
    tmp_list_element_2 = PyTuple_New( 3 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_complex );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_complex );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "complex" );
        exception_tb = NULL;

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__bytes_to_complex );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bytes_to_complex );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_bytes_to_complex" );
        exception_tb = NULL;

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_5 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_nan );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_complex_0_0__0_0;
    tmp_tuple_element_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 2, tmp_tuple_element_5 );
    PyList_SET_ITEM( tmp_args_element_name_4, 1, tmp_list_element_2 );
    tmp_list_element_2 = PyTuple_New( 3 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_longdouble );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_6 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_longdouble );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_6 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_nan );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 2, tmp_tuple_element_6 );
    PyList_SET_ITEM( tmp_args_element_name_4, 2, tmp_list_element_2 );
    tmp_list_element_2 = PyTuple_New( 3 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nx );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nx" );
        exception_tb = NULL;

        exception_lineno = 531;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_string_ );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 531;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 531;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_7 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 531;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 531;
    tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_digest_7b76ea7842696d183ec69816b9d65900_tuple, 0 ) );

    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 531;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_2, 2, tmp_tuple_element_7 );
    PyList_SET_ITEM( tmp_args_element_name_4, 3, tmp_list_element_2 );
    frame_function->f_lineno = 531;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 531;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_dircall_arg1_1 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_dircall_arg1_1 != NULL );
    tmp_dircall_arg2_1 = var__mapper;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_iter_arg_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto try_except_handler_2;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 533;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 533;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_7 == NULL )
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


        exception_lineno = 533;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    assert( var__defaulttype == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var__defaulttype = tmp_assign_source_8;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    assert( var__defaultfunc == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var__defaultfunc = tmp_assign_source_9;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    assert( var__defaultfill == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var__defaultfill = tmp_assign_source_10;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_6 != NULL );
    tmp_args_element_name_5 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_1__getdtype(  );
    frame_function->f_lineno = 535;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 535;
        goto frame_exception_exit_1;
    }
    assert( var__getdtype == NULL );
    var__getdtype = tmp_assign_source_11;

    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_2__getsubdtype(  );
    frame_function->f_lineno = 541;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
        goto frame_exception_exit_1;
    }
    assert( var__getsubdtype == NULL );
    var__getsubdtype = tmp_assign_source_12;

    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_7 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_3__dtypeortype(  );
    frame_function->f_lineno = 551;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    assert( var__dtypeortype == NULL );
    var__dtypeortype = tmp_assign_source_13;

    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_9 != NULL );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_args_element_name_8 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_4_upgrade_mapper( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    frame_function->f_lineno = 559;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    assert( var_upgrade_mapper == NULL );
    var_upgrade_mapper = tmp_assign_source_14;

    tmp_defaults_2 = const_tuple_none_none_none_false_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call(  );
    assert( var__loose_call == NULL );
    var__loose_call = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_7__strict_call(  );
    assert( var__strict_call == NULL );
    var__strict_call = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_8___call__(  );
    assert( var___call__ == NULL );
    var___call__ = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade(  );
    assert( var_upgrade == NULL );
    var_upgrade = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade(  );
    assert( var_iterupgrade == NULL );
    var_iterupgrade = tmp_assign_source_20;

    tmp_defaults_3 = PyTuple_New( 4 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_8 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_defaults_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 803;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 803;
    tmp_tuple_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_3 );

        exception_lineno = 803;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_False;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_3, 3, tmp_tuple_element_8 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update( tmp_defaults_3 );
    assert( var_update == NULL );
    var_update = tmp_assign_source_21;


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
            if ( var___module__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

                assert( res == 0 );
            }

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var__mapper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__mapper,
                    var__mapper
                );

                assert( res == 0 );
            }

            if ( var__defaulttype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__defaulttype,
                    var__defaulttype
                );

                assert( res == 0 );
            }

            if ( var__defaultfunc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__defaultfunc,
                    var__defaultfunc
                );

                assert( res == 0 );
            }

            if ( var__defaultfill )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__defaultfill,
                    var__defaultfill
                );

                assert( res == 0 );
            }

            if ( var__getdtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__getdtype,
                    var__getdtype
                );

                assert( res == 0 );
            }

            if ( var__getsubdtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__getsubdtype,
                    var__getsubdtype
                );

                assert( res == 0 );
            }

            if ( var__dtypeortype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__dtypeortype,
                    var__dtypeortype
                );

                assert( res == 0 );
            }

            if ( var_upgrade_mapper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_upgrade_mapper,
                    var_upgrade_mapper
                );

                assert( res == 0 );
            }

            if ( var___init__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___init__,
                    var___init__
                );

                assert( res == 0 );
            }

            if ( var__loose_call )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__loose_call,
                    var__loose_call
                );

                assert( res == 0 );
            }

            if ( var__strict_call )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__strict_call,
                    var__strict_call
                );

                assert( res == 0 );
            }

            if ( var___call__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___call__,
                    var___call__
                );

                assert( res == 0 );
            }

            if ( var_upgrade )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_upgrade,
                    var_upgrade
                );

                assert( res == 0 );
            }

            if ( var_iterupgrade )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iterupgrade,
                    var_iterupgrade
                );

                assert( res == 0 );
            }

            if ( var_update )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_update,
                    var_update
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

    if ( var__mapper )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__mapper,
            var__mapper
        );

        assert( res == 0 );
    }

    if ( var__defaulttype )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__defaulttype,
            var__defaulttype
        );

        assert( res == 0 );
    }

    if ( var__defaultfunc )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__defaultfunc,
            var__defaultfunc
        );

        assert( res == 0 );
    }

    if ( var__defaultfill )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__defaultfill,
            var__defaultfill
        );

        assert( res == 0 );
    }

    if ( var__getdtype )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__getdtype,
            var__getdtype
        );

        assert( res == 0 );
    }

    if ( var__getsubdtype )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__getsubdtype,
            var__getsubdtype
        );

        assert( res == 0 );
    }

    if ( var__dtypeortype )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__dtypeortype,
            var__dtypeortype
        );

        assert( res == 0 );
    }

    if ( var_upgrade_mapper )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_upgrade_mapper,
            var_upgrade_mapper
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

    if ( var__loose_call )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__loose_call,
            var__loose_call
        );

        assert( res == 0 );
    }

    if ( var__strict_call )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__strict_call,
            var__strict_call
        );

        assert( res == 0 );
    }

    if ( var___call__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___call__,
            var___call__
        );

        assert( res == 0 );
    }

    if ( var_upgrade )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_upgrade,
            var_upgrade
        );

        assert( res == 0 );
    }

    if ( var_iterupgrade )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_iterupgrade,
            var_iterupgrade
        );

        assert( res == 0 );
    }

    if ( var_update )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_update,
            var_update
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var__mapper );
    Py_DECREF( var__mapper );
    var__mapper = NULL;

    CHECK_OBJECT( (PyObject *)var__defaulttype );
    Py_DECREF( var__defaulttype );
    var__defaulttype = NULL;

    CHECK_OBJECT( (PyObject *)var__defaultfunc );
    Py_DECREF( var__defaultfunc );
    var__defaultfunc = NULL;

    CHECK_OBJECT( (PyObject *)var__defaultfill );
    Py_DECREF( var__defaultfill );
    var__defaultfill = NULL;

    CHECK_OBJECT( (PyObject *)var__getdtype );
    Py_DECREF( var__getdtype );
    var__getdtype = NULL;

    CHECK_OBJECT( (PyObject *)var__getsubdtype );
    Py_DECREF( var__getsubdtype );
    var__getsubdtype = NULL;

    CHECK_OBJECT( (PyObject *)var__dtypeortype );
    Py_DECREF( var__dtypeortype );
    var__dtypeortype = NULL;

    CHECK_OBJECT( (PyObject *)var_upgrade_mapper );
    Py_DECREF( var_upgrade_mapper );
    var_upgrade_mapper = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var__loose_call );
    Py_DECREF( var__loose_call );
    var__loose_call = NULL;

    CHECK_OBJECT( (PyObject *)var__strict_call );
    Py_DECREF( var__strict_call );
    var__strict_call = NULL;

    CHECK_OBJECT( (PyObject *)var___call__ );
    Py_DECREF( var___call__ );
    var___call__ = NULL;

    CHECK_OBJECT( (PyObject *)var_upgrade );
    Py_DECREF( var_upgrade );
    var_upgrade = NULL;

    CHECK_OBJECT( (PyObject *)var_iterupgrade );
    Py_DECREF( var_iterupgrade );
    var_iterupgrade = NULL;

    CHECK_OBJECT( (PyObject *)var_update );
    Py_DECREF( var_update );
    var_update = NULL;

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

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var__mapper );
    var__mapper = NULL;

    Py_XDECREF( var__defaulttype );
    var__defaulttype = NULL;

    Py_XDECREF( var__defaultfunc );
    var__defaultfunc = NULL;

    Py_XDECREF( var__defaultfill );
    var__defaultfill = NULL;

    Py_XDECREF( var__getdtype );
    var__getdtype = NULL;

    Py_XDECREF( var__getsubdtype );
    var__getsubdtype = NULL;

    Py_XDECREF( var__dtypeortype );
    var__dtypeortype = NULL;

    Py_XDECREF( var_upgrade_mapper );
    var_upgrade_mapper = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var__loose_call );
    var__loose_call = NULL;

    Py_XDECREF( var__strict_call );
    var__strict_call = NULL;

    Py_XDECREF( var___call__ );
    var___call__ = NULL;

    Py_XDECREF( var_upgrade );
    var_upgrade = NULL;

    Py_XDECREF( var_iterupgrade );
    var_iterupgrade = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_1__getdtype( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
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
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d5f3b669229c06c70deab95381bbeeed, module_numpy$lib$_iotools );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 538;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_val;

    frame_function->f_lineno = 538;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_1__getdtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_1__getdtype );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_2__getsubdtype( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
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
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_47fdbd423e730b54a4e27adebb95373a, module_numpy$lib$_iotools );
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 544;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_val;

    frame_function->f_lineno = 544;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_2__getsubdtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_2__getsubdtype );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_3__dtypeortype( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e3762a174379ebde786a30db2114f38f, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_dtype;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 554;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 554;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_datetime64 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 554;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 554;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_dtype;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_dtype;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_3__dtypeortype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_3__dtypeortype );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_4_upgrade_mapper( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *var__ = NULL;
    PyObject *var_fct = NULL;
    PyObject *var_dft = NULL;
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
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1c0e7720072eef2404228f0a502df50d, module_numpy$lib$_iotools );
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
    tmp_hasattr_source_1 = par_func;

    tmp_hasattr_attr_1 = const_str_plain___call__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_cls;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__mapper );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_insert );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_int_neg_1;
    tmp_args_element_name_2 = PyTuple_New( 3 );
    tmp_source_name_3 = par_cls;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__getsubdtype );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_default;

    frame_function->f_lineno = 585;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_func;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_default;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 2, tmp_tuple_element_1 );
    frame_function->f_lineno = 585;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_hasattr_source_2 = par_func;

    tmp_hasattr_attr_2 = const_str_plain___iter__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscribed_name_1 = par_func;

    tmp_subscript_name_1 = const_int_0;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 588;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_list );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_2 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 588;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_iter_arg_1 = par_func;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 589;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var__;
        var__ = tmp_assign_source_3;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    tmp_source_name_5 = par_cls;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__mapper );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_insert );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = const_int_neg_1;
    tmp_args_element_name_5 = var__;

    frame_function->f_lineno = 590;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_compare_left_1 = par_default;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_1 = LIST_COPY( const_list_none_list );
    tmp_len_arg_1 = par_func;

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 593;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 593;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_default;
        assert( old != NULL );
        par_default = tmp_assign_source_4;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_list_arg_1 = par_default;

    tmp_assign_source_5 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 595;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_default;
        assert( old != NULL );
        par_default = tmp_assign_source_5;
        Py_DECREF( old );
    }

    tmp_source_name_6 = par_default;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = LIST_COPY( const_list_none_list );
    tmp_len_arg_2 = par_func;

    tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_3 = par_default;

    tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 596;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_4:;
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_7 = par_func;

    tmp_args_element_name_8 = par_default;

    frame_function->f_lineno = 597;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 597;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value;

    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 597;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_10 == NULL )
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


        exception_lineno = 597;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_fct;
        var_fct = tmp_assign_source_11;
        Py_INCREF( var_fct );
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_dft;
        var_dft = tmp_assign_source_12;
        Py_INCREF( var_dft );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_8 = par_cls;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__mapper );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 598;
        goto try_except_handler_3;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_insert );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 598;
        goto try_except_handler_3;
    }
    tmp_args_element_name_9 = const_int_neg_1;
    tmp_args_element_name_10 = PyTuple_New( 3 );
    tmp_source_name_9 = par_cls;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__getsubdtype );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 598;
        goto try_except_handler_3;
    }
    tmp_args_element_name_11 = var_dft;

    frame_function->f_lineno = 598;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 598;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_fct;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_dft;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_10, 2, tmp_tuple_element_3 );
    frame_function->f_lineno = 598;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 598;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_2:;
    branch_end_1:;

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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
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

            if ( var__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__,
                    var__
                );

                assert( res == 0 );
            }

            if ( var_fct )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fct,
                    var_fct
                );

                assert( res == 0 );
            }

            if ( var_dft )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dft,
                    var_dft
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_4_upgrade_mapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_fct );
    var_fct = NULL;

    Py_XDECREF( var_dft );
    var_dft = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_fct );
    var_fct = NULL;

    Py_XDECREF( var_dft );
    var_dft = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_4_upgrade_mapper );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dtype_or_func = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *par_missing_values = python_pars[ 3 ];
    PyObject *par_locked = python_pars[ 4 ];
    PyObject *var_dtype = NULL;
    PyObject *var__status = NULL;
    PyObject *var_i = NULL;
    PyObject *var_deftype = NULL;
    PyObject *var_func = NULL;
    PyObject *var_default_def = NULL;
    PyObject *var_last_func = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
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
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_name_18;
    PyObject *tmp_assattr_name_19;
    PyObject *tmp_assattr_name_20;
    PyObject *tmp_assattr_name_21;
    PyObject *tmp_assattr_name_22;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
    PyObject *tmp_assattr_target_18;
    PyObject *tmp_assattr_target_19;
    PyObject *tmp_assattr_target_20;
    PyObject *tmp_assattr_target_21;
    PyObject *tmp_assattr_target_22;
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
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
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
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    bool tmp_is_6;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_set_arg_2;
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
    PyObject *tmp_source_name_21;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c1ef863909e5b84216a24b3d64cb1f1a, module_numpy$lib$_iotools );
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
    tmp_isinstance_inst_1 = par_missing_values;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
        exception_tb = NULL;

        exception_lineno = 604;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 604;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 605;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_missing_values;

    frame_function->f_lineno = 605;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_missing_values;
        assert( old != NULL );
        par_missing_values = tmp_assign_source_1;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_missing_values;

    tmp_isinstance_cls_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_list );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 606;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes_nested );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes_nested );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes_nested" );
        exception_tb = NULL;

        exception_lineno = 607;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_missing_values;

    frame_function->f_lineno = 607;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 607;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_missing_values;
        assert( old != NULL );
        par_missing_values = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_bool );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bool );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bool" );
        exception_tb = NULL;

        exception_lineno = 609;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_locked;

    frame_function->f_lineno = 609;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__locked, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 609;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_compare_left_1 = par_dtype_or_func;

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
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_str2bool );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2bool );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "str2bool" );
        exception_tb = NULL;

        exception_lineno = 612;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_func, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 612;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__status, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = par_default;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
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
    tmp_or_right_value_1 = Py_False;
    tmp_assattr_name_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assattr_name_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_default, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 615;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 615;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_bool_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        goto frame_exception_exit_1;
    }
    assert( var_dtype == NULL );
    var_dtype = tmp_assign_source_3;

    goto branch_end_3;
    branch_no_3:;
    // Tried code:
    tmp_assattr_name_5 = Py_None;
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_func, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 619;
        goto try_except_handler_2;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 620;
        goto try_except_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = par_dtype_or_func;

    frame_function->f_lineno = 620;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        goto try_except_handler_2;
    }
    assert( var_dtype == NULL );
    var_dtype = tmp_assign_source_4;

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_TypeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_hasattr_source_1 = par_dtype_or_func;

    tmp_hasattr_attr_1 = const_str_plain___call__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 623;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_left_name_1 = const_str_digest_1188cc152b78514124e628515507806f;
    tmp_type_arg_1 = par_dtype_or_func;

    tmp_right_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_right_name_1 != NULL );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 626;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 626;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_assattr_name_6 = par_dtype_or_func;

    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_func, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = par_default;

    tmp_compare_right_3 = Py_None;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    // Tried code:
    tmp_source_name_3 = par_self;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_func );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        goto try_except_handler_3;
    }
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 633;
        goto try_except_handler_3;
    }

    frame_function->f_lineno = 633;
    tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_plain_0_tuple, 0 ) );

    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 633;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 633;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        goto try_except_handler_3;
    }
    {
        PyObject *old = par_default;
        assert( old != NULL );
        par_default = tmp_assign_source_5;
        Py_DECREF( old );
    }

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_ValueError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_6 = Py_None;
    {
        PyObject *old = par_default;
        assert( old != NULL );
        par_default = tmp_assign_source_6;
        Py_INCREF( par_default );
        Py_DECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_7:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__ );
    return NULL;
    // End of try:
    try_end_2:;
    branch_no_6:;
    tmp_source_name_4 = par_self;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__getdtype );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 636;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_default;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;

        exception_lineno = 636;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 636;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 636;
        goto frame_exception_exit_1;
    }
    assert( var_dtype == NULL );
    var_dtype = tmp_assign_source_7;

    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__ );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = const_int_neg_1;
    assert( var__status == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var__status = tmp_assign_source_8;

    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    assert( tmp_called_name_9 != NULL );
    tmp_source_name_5 = par_self;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__mapper );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 639;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 639;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_12 == NULL )
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


        exception_lineno = 639;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_13 == NULL )
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


        exception_lineno = 639;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

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

                goto try_except_handler_5;
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

        goto try_except_handler_5;
    }
    tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_14;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_tuple_unpack_1__element_2;

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_16 == NULL )
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


        exception_lineno = 639;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_17 == NULL )
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


        exception_lineno = 639;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_5, 2 );
    if ( tmp_assign_source_18 == NULL )
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


        exception_lineno = 639;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_3;
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                goto try_except_handler_6;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_6;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_deftype;
        var_deftype = tmp_assign_source_19;
        Py_INCREF( var_deftype );
        Py_XDECREF( old );
    }

    tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_func;
        var_func = tmp_assign_source_20;
        Py_INCREF( var_func );
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_tuple_unpack_2__element_3;

    {
        PyObject *old = var_default_def;
        var_default_def = tmp_assign_source_21;
        Py_INCREF( var_default_def );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_2 );
    Py_DECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_3 );
    Py_DECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 640;
        goto try_except_handler_4;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_issubdtype );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        goto try_except_handler_4;
    }
    tmp_source_name_7 = var_dtype;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 640;
        goto try_except_handler_4;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_type );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 640;
        goto try_except_handler_4;
    }
    tmp_args_element_name_9 = var_deftype;

    frame_function->f_lineno = 640;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        goto try_except_handler_4;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 640;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_22 = var_i;

    {
        PyObject *old = var__status;
        assert( old != NULL );
        var__status = tmp_assign_source_22;
        Py_INCREF( var__status );
        Py_DECREF( old );
    }

    tmp_compare_left_5 = par_default;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;

        exception_lineno = 642;
        goto try_except_handler_4;
    }

    tmp_compare_right_5 = Py_None;
    tmp_is_3 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_3 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assattr_name_7 = var_default_def;

    tmp_assattr_target_7 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_default, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        goto try_except_handler_4;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_assattr_name_8 = par_default;

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;

        exception_lineno = 645;
        goto try_except_handler_4;
    }

    tmp_assattr_target_8 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_default, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        goto try_except_handler_4;
    }
    branch_end_9:;
    goto loop_end_1;
    branch_no_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assign_source_23 = var_func;

    if ( tmp_assign_source_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "func" );
        exception_tb = NULL;

        exception_lineno = 648;
        goto frame_exception_exit_1;
    }

    assert( var_last_func == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var_last_func = tmp_assign_source_23;

    tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    assert( tmp_called_name_11 != NULL );
    tmp_source_name_8 = par_self;

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__mapper );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 649;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_24;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_25 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 649;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_5 = tmp_for_loop_2__iter_value;

    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter;
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;

    tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_6, 0 );
    if ( tmp_assign_source_27 == NULL )
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


        exception_lineno = 649;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_1;
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;

    tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_7, 1 );
    if ( tmp_assign_source_28 == NULL )
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


        exception_lineno = 649;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_2;
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                goto try_except_handler_8;
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

        goto try_except_handler_8;
    }
    tmp_assign_source_29 = tmp_tuple_unpack_3__element_1;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_29;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_6 = tmp_tuple_unpack_3__element_2;

    tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__source_iter;
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;

    tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_8, 0 );
    if ( tmp_assign_source_31 == NULL )
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


        exception_lineno = 649;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_1;
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;

    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_9, 1 );
    if ( tmp_assign_source_32 == NULL )
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


        exception_lineno = 649;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_2;
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;

    tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_10, 2 );
    if ( tmp_assign_source_33 == NULL )
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


        exception_lineno = 649;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_3;
        tmp_tuple_unpack_4__element_3 = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                goto try_except_handler_9;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_9;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    tmp_assign_source_34 = tmp_tuple_unpack_4__element_1;

    {
        PyObject *old = var_deftype;
        var_deftype = tmp_assign_source_34;
        Py_INCREF( var_deftype );
        Py_XDECREF( old );
    }

    tmp_assign_source_35 = tmp_tuple_unpack_4__element_2;

    {
        PyObject *old = var_func;
        var_func = tmp_assign_source_35;
        Py_INCREF( var_func );
        Py_XDECREF( old );
    }

    tmp_assign_source_36 = tmp_tuple_unpack_4__element_3;

    {
        PyObject *old = var_default_def;
        var_default_def = tmp_assign_source_36;
        Py_INCREF( var_default_def );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__element_1 );
    Py_DECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__element_2 );
    Py_DECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__element_3 );
    Py_DECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__element_1 );
    Py_DECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__element_2 );
    Py_DECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_source_name_9 = var_dtype;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 650;
        goto try_except_handler_7;
    }

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_type );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        goto try_except_handler_7;
    }
    tmp_compare_right_6 = var_deftype;

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 650;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_37 = var_i;

    {
        PyObject *old = var__status;
        assert( old != NULL );
        var__status = tmp_assign_source_37;
        Py_INCREF( var__status );
        Py_DECREF( old );
    }

    tmp_assign_source_38 = var_func;

    {
        PyObject *old = var_last_func;
        assert( old != NULL );
        var_last_func = tmp_assign_source_38;
        Py_INCREF( var_last_func );
        Py_DECREF( old );
    }

    tmp_compare_left_7 = par_default;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;

        exception_lineno = 653;
        goto try_except_handler_7;
    }

    tmp_compare_right_7 = Py_None;
    tmp_is_4 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_4 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assattr_name_9 = var_default_def;

    tmp_assattr_target_9 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_default, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        goto try_except_handler_7;
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_assattr_name_10 = par_default;

    if ( tmp_assattr_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;

        exception_lineno = 656;
        goto try_except_handler_7;
    }

    tmp_assattr_target_10 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_default, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        goto try_except_handler_7;
    }
    branch_end_11:;
    goto loop_end_2;
    branch_no_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_assign_source_39 = var_last_func;

    {
        PyObject *old = var_func;
        var_func = tmp_assign_source_39;
        Py_INCREF( var_func );
        Py_XDECREF( old );
    }

    tmp_compare_left_8 = var__status;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_status" );
        exception_tb = NULL;

        exception_lineno = 659;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = const_int_neg_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 659;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_40 = const_int_0;
    {
        PyObject *old = var__status;
        var__status = tmp_assign_source_40;
        Py_INCREF( var__status );
        Py_XDECREF( old );
    }

    tmp_assattr_name_11 = par_default;

    if ( tmp_assattr_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;

        exception_lineno = 662;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_default, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 662;
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    tmp_assattr_name_12 = var__status;

    if ( tmp_assattr_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_status" );
        exception_tb = NULL;

        exception_lineno = 663;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_12 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__status, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 663;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_func );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 665;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = Py_None;
    tmp_is_5 = ( tmp_compare_left_9 == tmp_compare_right_9 );
    Py_DECREF( tmp_compare_left_9 );
    if ( tmp_is_5 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assattr_name_13 = var_func;

    tmp_assattr_target_13 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_func, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 666;
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    tmp_source_name_11 = par_self;

    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_func );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_self;

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__mapper );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 669;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 669;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compare_right_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_right_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 669;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );
        Py_DECREF( tmp_compare_right_10 );

        exception_lineno = 669;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    Py_DECREF( tmp_compare_right_10 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_12 != NULL );
    tmp_source_name_13 = var_dtype;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 670;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_type );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 670;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_args_element_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 670;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_uint64 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 670;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 670;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 670;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 670;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 671;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_uint64 );
    if ( tmp_assattr_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_14 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_func, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 671;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    goto branch_end_15;
    branch_no_15:;
    tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_13 != NULL );
    tmp_source_name_16 = var_dtype;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 672;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_type );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_args_element_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 672;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_int64 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_13 );

        exception_lineno = 672;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 672;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 672;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 673;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_int64 );
    if ( tmp_assattr_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_15 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_func, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 673;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_15 );
    goto branch_end_16;
    branch_no_16:;
    tmp_assattr_name_16 = MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__$$$function_1_lambda(  );
    tmp_assattr_target_16 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_func, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        exception_lineno = 675;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    branch_end_16:;
    branch_end_15:;
    branch_no_14:;
    branch_end_3:;
    tmp_compare_left_11 = par_missing_values;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "missing_values" );
        exception_tb = NULL;

        exception_lineno = 677;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = Py_None;
    tmp_is_6 = ( tmp_compare_left_11 == tmp_compare_right_11 );
    if ( tmp_is_6 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_set_arg_1 = PyList_New( 1 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_14 == NULL )
    {
        Py_DECREF( tmp_set_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 678;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 678;
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_set_arg_1 );

        exception_lineno = 678;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_set_arg_1, 0, tmp_list_element_1 );
    tmp_assattr_name_17 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_assattr_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_17 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_missing_values, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_17 );

        exception_lineno = 678;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_17 );
    goto branch_end_17;
    branch_no_17:;
    tmp_isinstance_inst_3 = par_missing_values;

    if ( tmp_isinstance_inst_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "missing_values" );
        exception_tb = NULL;

        exception_lineno = 680;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 680;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_19 = par_missing_values;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "missing_values" );
        exception_tb = NULL;

        exception_lineno = 681;
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_split );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        goto frame_exception_exit_1;
    }
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 681;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 681;
    tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 681;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 681;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_missing_values;
        par_missing_values = tmp_assign_source_41;
        Py_XDECREF( old );
    }

    branch_no_18:;
    tmp_list_arg_1 = par_missing_values;

    if ( tmp_list_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "missing_values" );
        exception_tb = NULL;

        exception_lineno = 682;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = PyList_New( 1 );
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_17 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 682;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 682;
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 682;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_right_name_2, 0, tmp_list_element_2 );
    tmp_set_arg_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_set_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_18 = PySet_New( tmp_set_arg_2 );
    Py_DECREF( tmp_set_arg_2 );
    if ( tmp_assattr_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_18 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_missing_values, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        exception_lineno = 682;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    branch_end_17:;
    tmp_source_name_20 = par_self;

    tmp_assattr_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__strict_call );
    if ( tmp_assattr_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 684;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_19 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain__callingfunction, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_19 );

        exception_lineno = 684;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_19 );
    tmp_source_name_21 = par_self;

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__dtypeortype );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = var_dtype;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 685;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 685;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assattr_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_assattr_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_20 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_type, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_20 );

        exception_lineno = 685;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_20 );
    tmp_assattr_name_21 = Py_False;
    tmp_assattr_target_21 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain__checked, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 686;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_22 = par_default;

    if ( tmp_assattr_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;

        exception_lineno = 687;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_22 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain__initial_default, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 687;
        goto frame_exception_exit_1;
    }

#if 1
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
#if 1
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

            if ( par_dtype_or_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtype_or_func,
                    par_dtype_or_func
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

            if ( par_missing_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_missing_values,
                    par_missing_values
                );

                assert( res == 0 );
            }

            if ( par_locked )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_locked,
                    par_locked
                );

                assert( res == 0 );
            }

            if ( var_dtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtype,
                    var_dtype
                );

                assert( res == 0 );
            }

            if ( var__status )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__status,
                    var__status
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

            if ( var_deftype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deftype,
                    var_deftype
                );

                assert( res == 0 );
            }

            if ( var_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    var_func
                );

                assert( res == 0 );
            }

            if ( var_default_def )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default_def,
                    var_default_def
                );

                assert( res == 0 );
            }

            if ( var_last_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_last_func,
                    var_last_func
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype_or_func );
    Py_DECREF( par_dtype_or_func );
    par_dtype_or_func = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_missing_values );
    par_missing_values = NULL;

    CHECK_OBJECT( (PyObject *)par_locked );
    Py_DECREF( par_locked );
    par_locked = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var__status );
    var__status = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_deftype );
    var_deftype = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_default_def );
    var_default_def = NULL;

    Py_XDECREF( var_last_func );
    var_last_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype_or_func );
    Py_DECREF( par_dtype_or_func );
    par_dtype_or_func = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_missing_values );
    par_missing_values = NULL;

    CHECK_OBJECT( (PyObject *)par_locked );
    Py_DECREF( par_locked );
    par_locked = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var__status );
    var__status = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_deftype );
    var_deftype = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_default_def );
    var_default_def = NULL;

    Py_XDECREF( var_last_func );
    var_last_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__ );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__$$$function_1_lambda( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b9aa09a8265d57fb01beba1539e2c441, module_numpy$lib$_iotools );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int" );
        exception_tb = NULL;

        exception_lineno = 675;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_float );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_float );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "float" );
        exception_tb = NULL;

        exception_lineno = 675;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_x;

    frame_function->f_lineno = 675;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 675;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__$$$function_1_lambda );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__$$$function_1_lambda );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bbccd77a212b54598b89d1d26e9bdf03, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_func );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_value;

    frame_function->f_lineno = 692;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 693;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_default );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 694;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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

            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_7__strict_call( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *var_new_value = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_10f635c6e01776e7207759c55c99f85c, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_func );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 701;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_value;

    frame_function->f_lineno = 701;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 701;
        goto try_except_handler_2;
    }
    assert( var_new_value == NULL );
    var_new_value = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_func );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 706;
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int" );
        exception_tb = NULL;

        exception_lineno = 706;
        goto try_except_handler_2;
    }

    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 708;
        goto try_except_handler_3;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 708;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_value;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_4 = par_self;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_type );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 708;
        goto try_except_handler_3;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 708;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 708;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_OverflowError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 709;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_ValueError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 710;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_2:;
    // End of try:
    try_end_1:;
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_ValueError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 715;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = par_value;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_strip );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 716;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 716;
    tmp_compare_left_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 716;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_missing_values );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 716;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_7 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__status );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 717;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 717;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__checked, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_source_name_8 = par_self;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_default );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_left_name_1 = const_str_digest_375b24211ce6266ed1dd73c7f1938c73;
    tmp_right_name_1 = par_value;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 720;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 720;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 720;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    // End of try:
    try_end_2:;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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

            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
                );

                assert( res == 0 );
            }

            if ( var_new_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_value,
                    var_new_value
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

    tmp_return_value = var_new_value;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_7__strict_call );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_new_value );
    var_new_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_new_value );
    var_new_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_7__strict_call );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_8___call__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1343839da7602bde8323b1e3ca6a0624, module_numpy$lib$_iotools );
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
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__callingfunction );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 724;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_value;

    frame_function->f_lineno = 724;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 724;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_8___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_8___call__ );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *var__statusmax = NULL;
    PyObject *var__status = NULL;
    PyObject *var_default = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0e834b65262984c7f3b281286dde1669, module_numpy$lib$_iotools );
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
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__checked, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 748;
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__strict_call );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 750;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_value;

    frame_function->f_lineno = 750;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 750;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 751;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__locked );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 753;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 753;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConverterLockError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConverterLockError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConverterLockError" );
        exception_tb = NULL;

        exception_lineno = 755;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 755;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_bb919c0463cb60f3ffe946281f06bc83_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 755;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 755;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__mapper );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 756;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 756;
        goto frame_exception_exit_1;
    }
    assert( var__statusmax == NULL );
    var__statusmax = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__status );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 758;
        goto frame_exception_exit_1;
    }
    assert( var__status == NULL );
    var__status = tmp_assign_source_2;

    tmp_compare_left_2 = var__status;

    tmp_compare_right_2 = var__statusmax;

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 759;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConverterError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConverterError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConverterError" );
        exception_tb = NULL;

        exception_lineno = 761;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 761;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_1ceaed16413642005c79ccbef0e8b8a1_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 761;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 761;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_3 = var__status;

    tmp_left_name_1 = var__statusmax;

    tmp_right_name_1 = const_int_pos_1;
    tmp_compare_right_3 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 762;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 762;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_2 = var__status;

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_3 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 763;
        goto frame_exception_exit_1;
    }
    var__status = tmp_assign_source_3;

    branch_no_4:;
    branch_end_3:;
    // Tried code:
    tmp_source_name_5 = par_self;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__mapper );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    tmp_subscript_name_1 = var__status;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_status" );
        exception_tb = NULL;

        exception_lineno = 764;
        goto try_except_handler_3;
    }

    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_7 == NULL )
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


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;

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

                goto try_except_handler_3;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_3;
    }
    tmp_assattr_name_2 = tmp_tuple_unpack_1__element_1;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_type, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    tmp_assattr_name_3 = tmp_tuple_unpack_1__element_2;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_func, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto try_except_handler_3;
    }
    goto try_end_1;
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;

    assert( var_default == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_default = tmp_assign_source_8;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assattr_name_4 = var__status;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_status" );
        exception_tb = NULL;

        exception_lineno = 765;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__status, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 765;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__initial_default );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 766;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_7 = par_self;

    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__initial_default );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 767;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_default, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 767;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    goto branch_end_5;
    branch_no_5:;
    tmp_assattr_name_6 = var_default;

    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_default, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 769;
        goto frame_exception_exit_1;
    }
    branch_end_5:;
    tmp_source_name_8 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_upgrade );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 770;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_value;

    frame_function->f_lineno = 770;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 770;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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

            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
                );

                assert( res == 0 );
            }

            if ( var__statusmax )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__statusmax,
                    var__statusmax
                );

                assert( res == 0 );
            }

            if ( var__status )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__status,
                    var__status
                );

                assert( res == 0 );
            }

            if ( var_default )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    var_default
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var__statusmax );
    var__statusmax = NULL;

    Py_XDECREF( var__status );
    var__status = NULL;

    Py_XDECREF( var_default );
    var_default = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var__statusmax );
    var__statusmax = NULL;

    Py_XDECREF( var__status );
    var__status = NULL;

    Py_XDECREF( var_default );
    var_default = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *var__strict_call = NULL;
    PyObject *var__m = NULL;
    PyObject *var__statusmax = NULL;
    PyObject *var__status = NULL;
    PyObject *var_default = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_991015fd1674efea64f709ccf6b1e91f, module_numpy$lib$_iotools );
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
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__checked, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    tmp_hasattr_source_1 = par_value;

    tmp_hasattr_attr_1 = const_str_plain___iter__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_value;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_value;
        assert( old != NULL );
        par_value = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_1 = par_self;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__strict_call );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 776;
        goto frame_exception_exit_1;
    }
    assert( var__strict_call == NULL );
    var__strict_call = tmp_assign_source_2;

    // Tried code:
    tmp_iter_arg_1 = par_value;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        goto try_except_handler_2;
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
            frame_function->f_lineno = 778;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var__m;
        var__m = tmp_assign_source_5;
        Py_INCREF( var__m );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = var__strict_call;

    tmp_args_element_name_1 = var__m;

    frame_function->f_lineno = 779;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 779;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 780;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__locked );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 782;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConverterLockError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConverterLockError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConverterLockError" );
        exception_tb = NULL;

        exception_lineno = 784;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 784;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_bb919c0463cb60f3ffe946281f06bc83_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 784;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_3 = par_self;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__mapper );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        goto frame_exception_exit_1;
    }
    assert( var__statusmax == NULL );
    var__statusmax = tmp_assign_source_6;

    tmp_source_name_4 = par_self;

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__status );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 787;
        goto frame_exception_exit_1;
    }
    assert( var__status == NULL );
    var__status = tmp_assign_source_7;

    tmp_compare_left_2 = var__status;

    tmp_compare_right_2 = var__statusmax;

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 788;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConverterError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConverterError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConverterError" );
        exception_tb = NULL;

        exception_lineno = 789;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 790;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_1ceaed16413642005c79ccbef0e8b8a1_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 790;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 790;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_3 = var__status;

    tmp_left_name_1 = var__statusmax;

    tmp_right_name_1 = const_int_pos_1;
    tmp_compare_right_3 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 792;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 792;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_2 = var__status;

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_8 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 793;
        goto frame_exception_exit_1;
    }
    var__status = tmp_assign_source_8;

    branch_no_5:;
    branch_end_4:;
    // Tried code:
    tmp_source_name_5 = par_self;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__mapper );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 794;
        goto try_except_handler_4;
    }
    tmp_subscript_name_1 = var__status;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_status" );
        exception_tb = NULL;

        exception_lineno = 794;
        goto try_except_handler_4;
    }

    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 794;
        goto try_except_handler_4;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 794;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_10 == NULL )
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


        exception_lineno = 794;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_11 == NULL )
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


        exception_lineno = 794;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_12 == NULL )
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


        exception_lineno = 794;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_4;
    }
    tmp_assattr_name_2 = tmp_tuple_unpack_1__element_1;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_type, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 794;
        goto try_except_handler_4;
    }
    tmp_assattr_name_3 = tmp_tuple_unpack_1__element_2;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_func, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 794;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;

    assert( var_default == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_default = tmp_assign_source_13;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_source_name_6 = par_self;

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__initial_default );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 795;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_7 = par_self;

    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__initial_default );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 796;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_default, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 796;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_6;
    branch_no_6:;
    tmp_assattr_name_5 = var_default;

    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_default, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 798;
        goto frame_exception_exit_1;
    }
    branch_end_6:;
    tmp_assattr_name_6 = var__status;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "_status" );
        exception_tb = NULL;

        exception_lineno = 799;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__status, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 799;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_iterupgrade );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 800;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_value;

    frame_function->f_lineno = 800;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 800;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade );
    return NULL;
    // End of try:
    try_end_2:;

#if 1
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
#if 1
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

            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
                );

                assert( res == 0 );
            }

            if ( var__strict_call )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__strict_call,
                    var__strict_call
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

            if ( var__statusmax )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__statusmax,
                    var__statusmax
                );

                assert( res == 0 );
            }

            if ( var__status )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__status,
                    var__status
                );

                assert( res == 0 );
            }

            if ( var_default )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    var_default
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var__strict_call );
    Py_DECREF( var__strict_call );
    var__strict_call = NULL;

    Py_XDECREF( var__m );
    var__m = NULL;

    Py_XDECREF( var__statusmax );
    var__statusmax = NULL;

    Py_XDECREF( var__status );
    var__status = NULL;

    Py_XDECREF( var_default );
    var_default = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var__strict_call );
    var__strict_call = NULL;

    Py_XDECREF( var__m );
    var__m = NULL;

    Py_XDECREF( var__statusmax );
    var__statusmax = NULL;

    Py_XDECREF( var__status );
    var__status = NULL;

    Py_XDECREF( var_default );
    var_default = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade );
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


static PyObject *impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *par_testing_value = python_pars[ 3 ];
    PyObject *par_missing_values = python_pars[ 4 ];
    PyObject *par_locked = python_pars[ 5 ];
    PyObject *var_tester = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
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
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_114b38fb2241e48e781598f71a177a02, module_numpy$lib$_iotools );
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
    tmp_assattr_name_1 = par_func;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_func, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 832;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_locked;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__locked, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 833;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_default;

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
    tmp_assattr_name_3 = par_default;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_default, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 836;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dtypeortype );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 837;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__getdtype );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 837;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_default;

    frame_function->f_lineno = 837;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 837;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 837;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 837;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_type, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 837;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    tmp_called_name_3 = par_func;

    tmp_or_left_value_1 = par_testing_value;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 840;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 840;
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_1_tuple, 0 ) );

    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_args_element_name_3 = tmp_or_left_value_1;
    or_end_1:;
    frame_function->f_lineno = 840;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        goto try_except_handler_2;
    }
    assert( var_tester == NULL );
    var_tester = tmp_assign_source_1;

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 841;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_None;
    assert( var_tester == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_tester = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__dtypeortype );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 843;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__getdtype );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 843;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_tester;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tester" );
        exception_tb = NULL;

        exception_lineno = 843;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 843;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 843;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 843;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 843;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_type, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 843;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    branch_end_1:;
    tmp_compare_left_3 = par_missing_values;

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__is_bytes_like );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_bytes_like );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_is_bytes_like" );
        exception_tb = NULL;

        exception_lineno = 846;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_missing_values;

    frame_function->f_lineno = 846;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 846;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 846;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_6 = par_self;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_missing_values );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 847;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 847;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_missing_values;

    frame_function->f_lineno = 847;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 847;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_hasattr_source_1 = par_missing_values;

    tmp_hasattr_attr_1 = const_str_plain___iter__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 848;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_iter_arg_1 = par_missing_values;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 849;
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
            frame_function->f_lineno = 849;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_val;
        var_val = tmp_assign_source_5;
        Py_INCREF( var_val );
        Py_XDECREF( old );
    }

    tmp_source_name_8 = par_self;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_missing_values );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        goto try_except_handler_3;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_add );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        goto try_except_handler_3;
    }
    tmp_args_element_name_8 = var_val;

    frame_function->f_lineno = 850;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 849;
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

    branch_no_5:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_assattr_name_6 = PyList_New( 0 );
    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_missing_values, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 852;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    branch_end_3:;

#if 1
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
#if 1
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

            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
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

            if ( par_testing_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_testing_value,
                    par_testing_value
                );

                assert( res == 0 );
            }

            if ( par_missing_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_missing_values,
                    par_missing_values
                );

                assert( res == 0 );
            }

            if ( par_locked )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_locked,
                    par_locked
                );

                assert( res == 0 );
            }

            if ( var_tester )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tester,
                    var_tester
                );

                assert( res == 0 );
            }

            if ( var_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_val,
                    var_val
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_testing_value );
    Py_DECREF( par_testing_value );
    par_testing_value = NULL;

    CHECK_OBJECT( (PyObject *)par_missing_values );
    Py_DECREF( par_missing_values );
    par_missing_values = NULL;

    CHECK_OBJECT( (PyObject *)par_locked );
    Py_DECREF( par_locked );
    par_locked = NULL;

    Py_XDECREF( var_tester );
    var_tester = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_testing_value );
    Py_DECREF( par_testing_value );
    par_testing_value = NULL;

    CHECK_OBJECT( (PyObject *)par_missing_values );
    Py_DECREF( par_missing_values );
    par_missing_values = NULL;

    CHECK_OBJECT( (PyObject *)par_locked );
    Py_DECREF( par_locked );
    par_locked = NULL;

    Py_XDECREF( var_tester );
    var_tester = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update );
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


static PyObject *impl_numpy$lib$_iotools$$$function_9_easy_dtype( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ndtype = python_pars[ 0 ];
    PyObject *par_names = python_pars[ 1 ];
    PyObject *par_defaultfmt = python_pars[ 2 ];
    PyObject *par_validationargs = python_pars[ 3 ];
    PyObject *var_validate = NULL;
    PyObject *var_nbfields = NULL;
    PyObject *var_nbtypes = NULL;
    PyObject *var_formats = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0c8bfe11b0b2b1bb84abb58297c2158f, module_numpy$lib$_iotools );
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
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 894;
        goto try_except_handler_3;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 894;
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = par_ndtype;

    frame_function->f_lineno = 894;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 894;
        goto try_except_handler_3;
    }
    {
        PyObject *old = par_ndtype;
        assert( old != NULL );
        par_ndtype = tmp_assign_source_2;
        Py_DECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    tmp_assign_source_3 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_TypeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 895;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_NameValidator );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameValidator );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NameValidator" );
        exception_tb = NULL;

        exception_lineno = 896;
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = par_validationargs;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_assign_source_4 = impl___internal__$$$function_10_complex_call_helper_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 896;
        goto try_except_handler_2;
    }
    assert( var_validate == NULL );
    var_validate = tmp_assign_source_4;

    tmp_len_arg_1 = par_ndtype;

    tmp_assign_source_5 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 897;
        goto try_except_handler_2;
    }
    assert( var_nbfields == NULL );
    var_nbfields = tmp_assign_source_5;

    tmp_compare_left_2 = par_names;

    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = LIST_COPY( const_list_str_empty_list );
    tmp_len_arg_2 = par_ndtype;

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 899;
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 899;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_names;
        assert( old != NULL );
        par_names = tmp_assign_source_6;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_isinstance_inst_1 = par_names;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
        exception_tb = NULL;

        exception_lineno = 900;
        goto try_except_handler_2;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 900;
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_2 = par_names;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 901;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_names;
        assert( old != NULL );
        par_names = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_3:;
    branch_end_2:;
    tmp_called_name_3 = var_validate;

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_names;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 902;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_nbfields;

    tmp_dict_key_1 = const_str_plain_nbfields;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_defaultfmt;

    tmp_dict_key_2 = const_str_plain_defaultfmt;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 902;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_names;
        par_names = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 903;
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 903;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = par_ndtype;

    tmp_dict_key_3 = const_str_plain_formats;
    PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_names;

    tmp_dict_key_4 = const_str_plain_names;
    PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 903;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 903;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_ndtype;
        assert( old != NULL );
        par_ndtype = tmp_assign_source_9;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_9_easy_dtype );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_3 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_3 = Py_True;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_len_arg_3 = par_ndtype;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 905;
        goto try_except_handler_2;
    }

    tmp_assign_source_10 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        goto try_except_handler_2;
    }
    assert( var_nbtypes == NULL );
    var_nbtypes = tmp_assign_source_10;

    tmp_compare_left_4 = par_names;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 907;
        goto try_except_handler_2;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_NameValidator );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameValidator );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NameValidator" );
        exception_tb = NULL;

        exception_lineno = 908;
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_2 = par_validationargs;

    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg2_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
        tmp_assign_source_11 = impl___internal__$$$function_10_complex_call_helper_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 908;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_validate;
        var_validate = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_2 = par_names;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 909;
        goto try_except_handler_2;
    }

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
        exception_tb = NULL;

        exception_lineno = 909;
        goto try_except_handler_2;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 909;
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_4 = par_names;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 910;
        goto try_except_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_split );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 910;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 910;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 910;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_names;
        par_names = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    branch_no_6:;
    tmp_compare_left_5 = var_nbtypes;

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 912;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_2 = PyList_New( 1 );
    tmp_source_name_5 = par_ndtype;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 913;
        goto try_except_handler_2;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_type );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 913;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_left_name_2, 0, tmp_list_element_1 );
    tmp_len_arg_4 = par_names;

    if ( tmp_len_arg_4 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 913;
        goto try_except_handler_2;
    }

    tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 913;
        goto try_except_handler_2;
    }
    tmp_tuple_arg_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 913;
        goto try_except_handler_2;
    }
    tmp_assign_source_13 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 913;
        goto try_except_handler_2;
    }
    assert( var_formats == NULL );
    var_formats = tmp_assign_source_13;

    tmp_called_name_6 = var_validate;

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_names;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 914;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_5 = par_defaultfmt;

    tmp_dict_key_5 = const_str_plain_defaultfmt;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 914;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 914;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_names;
        par_names = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 915;
        goto try_except_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 915;
        goto try_except_handler_2;
    }
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_4 = par_names;

    tmp_args_element_name_5 = var_formats;

    frame_function->f_lineno = 915;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 915;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 915;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 915;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 915;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_ndtype;
        par_ndtype = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_called_name_9 = var_validate;

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_names;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "names" );
        exception_tb = NULL;

        exception_lineno = 918;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_dict_value_6 = var_nbtypes;

    tmp_dict_key_6 = const_str_plain_nbfields;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_defaultfmt;

    tmp_dict_key_7 = const_str_plain_defaultfmt;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 919;
    tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 919;
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = par_ndtype;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 918;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_names, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 918;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_end_7:;
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_6 = var_nbtypes;

    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 921;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_NameValidator );

    if (unlikely( tmp_dircall_arg1_3 == NULL ))
    {
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameValidator );
    }

    if ( tmp_dircall_arg1_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NameValidator" );
        exception_tb = NULL;

        exception_lineno = 922;
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_3 = par_validationargs;

    Py_INCREF( tmp_dircall_arg1_3 );
    Py_INCREF( tmp_dircall_arg2_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
        tmp_assign_source_16 = impl___internal__$$$function_10_complex_call_helper_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 922;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_validate;
        var_validate = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_source_name_7 = par_ndtype;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 924;
        goto try_except_handler_2;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_names );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
        goto try_except_handler_2;
    }
    tmp_range_arg_1 = var_nbtypes;

    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 924;
        goto try_except_handler_2;
    }
    tmp_dircall_arg1_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_dircall_arg1_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 924;
        goto try_except_handler_2;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_tuple_arg_2 = impl_numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr( dir_call_args );
    }
    assert( tmp_tuple_arg_2 != NULL );
    tmp_compexpr_right_1 = PySequence_Tuple( tmp_tuple_arg_2 );
    Py_DECREF( tmp_tuple_arg_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 924;
        goto try_except_handler_2;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 925;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_2 = par_defaultfmt;

    tmp_compexpr_right_2 = const_str_digest_ed3780532e9bfe5e4f377fba9d889690;
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        goto try_except_handler_2;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 925;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_name_10 = var_validate;

    tmp_args_name_4 = PyTuple_New( 1 );
    tmp_left_name_3 = LIST_COPY( const_list_str_empty_list );
    tmp_right_name_3 = var_nbtypes;

    tmp_tuple_element_4 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );

        exception_lineno = 926;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_8 = par_defaultfmt;

    tmp_dict_key_8 = const_str_plain_defaultfmt;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_8, tmp_dict_value_8 );
    frame_function->f_lineno = 926;
    tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        goto try_except_handler_2;
    }
    tmp_assattr_target_2 = par_ndtype;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 926;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_names, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 926;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_9;
    branch_no_9:;
    tmp_called_name_11 = var_validate;

    tmp_args_name_5 = PyTuple_New( 1 );
    tmp_source_name_8 = par_ndtype;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 929;
        goto try_except_handler_2;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_names );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_5 );

        exception_lineno = 929;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_5 );
    tmp_kw_name_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_9 = par_defaultfmt;

    tmp_dict_key_9 = const_str_plain_defaultfmt;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_9, tmp_dict_value_9 );
    frame_function->f_lineno = 929;
    tmp_assattr_name_3 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
        goto try_except_handler_2;
    }
    tmp_assattr_target_3 = par_ndtype;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 929;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_names, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 929;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_end_9:;
    branch_no_8:;
    branch_end_5:;
    branch_no_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_return_value = par_ndtype;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndtype" );
        exception_tb = NULL;

        exception_lineno = 930;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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
            if ( par_ndtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndtype,
                    par_ndtype
                );

                assert( res == 0 );
            }

            if ( par_names )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_names,
                    par_names
                );

                assert( res == 0 );
            }

            if ( par_defaultfmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaultfmt,
                    par_defaultfmt
                );

                assert( res == 0 );
            }

            if ( par_validationargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_validationargs,
                    par_validationargs
                );

                assert( res == 0 );
            }

            if ( var_validate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_validate,
                    var_validate
                );

                assert( res == 0 );
            }

            if ( var_nbfields )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nbfields,
                    var_nbfields
                );

                assert( res == 0 );
            }

            if ( var_nbtypes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nbtypes,
                    var_nbtypes
                );

                assert( res == 0 );
            }

            if ( var_formats )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_formats,
                    var_formats
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_9_easy_dtype );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ndtype );
    par_ndtype = NULL;

    Py_XDECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultfmt );
    Py_DECREF( par_defaultfmt );
    par_defaultfmt = NULL;

    CHECK_OBJECT( (PyObject *)par_validationargs );
    Py_DECREF( par_validationargs );
    par_validationargs = NULL;

    Py_XDECREF( var_validate );
    var_validate = NULL;

    Py_XDECREF( var_nbfields );
    var_nbfields = NULL;

    Py_XDECREF( var_nbtypes );
    var_nbtypes = NULL;

    Py_XDECREF( var_formats );
    var_formats = NULL;

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

    Py_XDECREF( par_ndtype );
    par_ndtype = NULL;

    Py_XDECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultfmt );
    Py_DECREF( par_defaultfmt );
    par_defaultfmt = NULL;

    CHECK_OBJECT( (PyObject *)par_validationargs );
    Py_DECREF( par_validationargs );
    par_validationargs = NULL;

    Py_XDECREF( var_validate );
    var_validate = NULL;

    Py_XDECREF( var_nbfields );
    var_nbfields = NULL;

    Py_XDECREF( var_nbtypes );
    var_nbtypes = NULL;

    Py_XDECREF( var_formats );
    var_formats = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_9_easy_dtype );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr( PyObject **python_pars )
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
            numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr$$$genexpr_1_genexpr_context,
            const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_fcbac7232b9d9ab07f7a227a7dcd7c06,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void numpy$lib$_iotools$$$function_9_easy_dtype$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_i = NULL;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_9f69ec9ec40aff154a4dcf52f08bc153, module_numpy$lib$_iotools );
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
            exception_lineno = 924;
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

        exception_lineno = 924;
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
            generator->m_frame->f_lineno = 924;
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
        PyObject *old = var_i;
        var_i = tmp_assign_source_2;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = const_str_digest_ed3780532e9bfe5e4f377fba9d889690;
    tmp_right_name_1 = var_i;

    tmp_expression_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
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

    Py_XDECREF( var_i );
    var_i = NULL;

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

    Py_XDECREF( var_i );
    var_i = NULL;


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



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip,
        const_str_plain_autostrip,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6627e4bb89137e98147c962015668095,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_90c3eda6a2da1dd3a3c76021929e15e0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda( PyCellObject *closure_method )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
    closure[0] = closure_method;
    Py_INCREF( closure[0] );


    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_1_autostrip$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f0bee72e5f12a0c389be49ccc54b8f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bca6886a82ac065797e68e6f29e4f2c8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_3__delimited_splitter(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_3__delimited_splitter,
        const_str_plain__delimited_splitter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_705a4b550f1f47e1332aa6b71403ff19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_4__fixedwidth_splitter,
        const_str_plain__fixedwidth_splitter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_411bf435ee0418ead831698c9bf088ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_5__variablewidth_splitter,
        const_str_plain__variablewidth_splitter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ba4f56f59927268034f5e5f429a648dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_6___call__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_1_LineSplitter$$$function_6___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_95f1d60071b2214efbd92568b81f86d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_040c4253f07d8832ac19a98a1dbe21e9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_1_lambda(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eae65b289225fa0009146722aacbe0d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_2_lambda(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4723b9628a7b11dc0a61501981cd6df4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_3_lambda(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_1___init__$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9105c4cff23a3ad5918f2a7ac7e74505,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_2_validate,
        const_str_plain_validate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8eaed66b842e01518372a181bab0297a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_c703c2ba9d1acfcef2750ff2158bacb1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_2_NameValidator$$$function_3___call__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_2_NameValidator$$$function_3___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a79bf394260f4943874aa7696155cd3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_10_iterupgrade,
        const_str_plain_iterupgrade,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_991015fd1674efea64f709ccf6b1e91f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_11_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_114b38fb2241e48e781598f71a177a02,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_b764e59b6da7e6e5cc8938f8920eaa6c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_1__getdtype(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_1__getdtype,
        const_str_plain__getdtype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d5f3b669229c06c70deab95381bbeeed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_71e3138c1031f2e7aca04c50ed88f99f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_2__getsubdtype(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_2__getsubdtype,
        const_str_plain__getsubdtype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_47fdbd423e730b54a4e27adebb95373a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_45ab0a13f92b8e2ba7f8aa28a3c2eb22
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_3__dtypeortype(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_3__dtypeortype,
        const_str_plain__dtypeortype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e3762a174379ebde786a30db2114f38f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_477438bd1f26a0ef260f4cfe920b32ff
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_4_upgrade_mapper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_4_upgrade_mapper,
        const_str_plain_upgrade_mapper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1c0e7720072eef2404228f0a502df50d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_9f47eb23d13e634dd0b4653444d8d578
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1ef863909e5b84216a24b3d64cb1f1a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__$$$function_1_lambda(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_5___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b9aa09a8265d57fb01beba1539e2c441,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_6__loose_call,
        const_str_plain__loose_call,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bbccd77a212b54598b89d1d26e9bdf03,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_7__strict_call(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_7__strict_call,
        const_str_plain__strict_call,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10f635c6e01776e7207759c55c99f85c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_8___call__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_8___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1343839da7602bde8323b1e3ca6a0624,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$class_6_StringConverter$$$function_9_upgrade,
        const_str_plain_upgrade,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0e834b65262984c7f3b281286dde1669,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_43424d7675a57861a767771ecc8cf149
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_1__bytes_to_complex(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_1__bytes_to_complex,
        const_str_plain__bytes_to_complex,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_765d3e58152ad988ac9705ed57234105,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_2__bytes_to_name(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_2__bytes_to_name,
        const_str_plain__bytes_to_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_19c93f600dfe5c15be2414fe97d05501,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_3__is_string_like(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_3__is_string_like,
        const_str_plain__is_string_like,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4529c62bfc667963806fd0f596fc036f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_487fca120d7ae45afdaeb868b8180118
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_4__is_bytes_like(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_4__is_bytes_like,
        const_str_plain__is_bytes_like,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f34107853634694bd1268e743013d220,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_5f30d285db5eebe6122c852827cf44f2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_5__to_filehandle( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_5__to_filehandle,
        const_str_plain__to_filehandle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4ae99a55d0f14d89c27f23f249de46a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_f70edea93b9eb9648bdde20a3ae5a776
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_6_has_nested_fields(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_6_has_nested_fields,
        const_str_plain_has_nested_fields,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b1b7eeca444019b699e84bce865201b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_96a397480a2f8157c3a9a7280777c9e3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_7_flatten_dtype( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_7_flatten_dtype,
        const_str_plain_flatten_dtype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4a7783d43ca256a9399e9733deae0f0f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_5f84c323029444654ae455c7b367565e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_8_str2bool(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_8_str2bool,
        const_str_plain_str2bool,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_447f885a6336b6f414ca1d1f9b48dea7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_11f5144915b6dbdbc1ce811ac2250be1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_iotools$$$function_9_easy_dtype( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$_iotools$$$function_9_easy_dtype,
        const_str_plain_easy_dtype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0c8bfe11b0b2b1bb84abb58297c2158f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$_iotools,
        const_str_digest_77b2dfb22dbdfb504172e7ce2777e20b
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$_iotools =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib._iotools",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$_iotools )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$_iotools );
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

    // puts( "in initnumpy$lib$_iotools" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$_iotools = Py_InitModule4(
        "numpy.lib._iotools",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$_iotools = PyModule_Create( &mdef_numpy$lib$_iotools );
#endif

    moduledict_numpy$lib$_iotools = (PyDictObject *)((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;

    CHECK_OBJECT( module_numpy$lib$_iotools );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_84a57cd428878352a4dfe7c4f24bf88b, module_numpy$lib$_iotools );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$_iotools );

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
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
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
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
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
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
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
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_02119e277799712faadeb5f223f07616;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_329b44ce5aeaaddc3ee22d66f7b6e098;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_e58b8e238daae7f316f45d0978267798;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_5349ed9f967cf75e32b99b6ba81c2876, module_numpy$lib$_iotools );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_nx, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b, tmp_import_globals_4, tmp_import_globals_4, const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_asbytes );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b, tmp_import_globals_5, tmp_import_globals_5, const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_bytes );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b, tmp_import_globals_6, tmp_import_globals_6, const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asbytes_nested );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_asbytes_nested, tmp_assign_source_12 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b, tmp_import_globals_7, tmp_import_globals_7, const_tuple_a615132d76cb5bdaf4cdde422ad6c9e3_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_basestring );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_13 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_8, tmp_import_globals_8, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_bool );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_bool, tmp_assign_source_14 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_9, tmp_import_globals_9, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_int );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_15 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_10, tmp_import_globals_10, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_float );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_float, tmp_assign_source_16 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_11, tmp_import_globals_11, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_complex );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_complex, tmp_assign_source_17 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_12, tmp_import_globals_12, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_object );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_18 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_13, tmp_import_globals_13, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_str );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_19 );
    tmp_assign_source_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_assign_source_20 == NULL ))
    {
        tmp_assign_source_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_assign_source_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;

        exception_lineno = 15;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_20 );
    goto branch_end_1;
    branch_no_1:;
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_14, tmp_import_globals_14, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_bool );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_bool, tmp_assign_source_21 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_15, tmp_import_globals_15, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_int );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_22 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_16, tmp_import_globals_16, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_float );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_float, tmp_assign_source_23 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_17, tmp_import_globals_17, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_complex );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_complex, tmp_assign_source_24 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_18, tmp_import_globals_18, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_object );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_25 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_19, tmp_import_globals_19, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_unicode );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_26 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$lib$_iotools)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_20, tmp_import_globals_20, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_str );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_27 );
    branch_end_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_3;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_1__bytes_to_complex(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__bytes_to_complex, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_2__bytes_to_name(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__bytes_to_name, tmp_assign_source_29 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_30 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_complex );

    if (unlikely( tmp_assign_source_30 == NULL ))
    {
        tmp_assign_source_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_complex );
    }

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "complex" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__bytes_to_complex, tmp_assign_source_30 );
    tmp_assign_source_31 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_assign_source_31 == NULL ))
    {
        tmp_assign_source_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_assign_source_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__bytes_to_name, tmp_assign_source_31 );
    branch_end_2:;
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_3__is_string_like(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__is_string_like, tmp_assign_source_32 );
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_4__is_bytes_like(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__is_bytes_like, tmp_assign_source_33 );
    tmp_defaults_1 = const_tuple_str_plain_r_false_tuple;
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_5__to_filehandle( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain__to_filehandle, tmp_assign_source_34 );
    tmp_assign_source_35 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_6_has_nested_fields(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_has_nested_fields, tmp_assign_source_35 );
    tmp_defaults_2 = const_tuple_false_tuple;
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_7_flatten_dtype( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_flatten_dtype, tmp_assign_source_36 );
    // Tried code:
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_object );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_object );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "object" );
        exception_tb = NULL;

        exception_lineno = 154;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_37;

    tmp_assign_source_38 = impl_numpy$lib$_iotools$$$class_1_LineSplitter( NULL );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_38;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_assign_source_39 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_39 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_39;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_LineSplitter;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_40;

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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
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
    tmp_assign_source_41 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_LineSplitter, tmp_assign_source_41 );
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

    // Tried code:
    tmp_assign_source_42 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_object );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_object );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "object" );
        exception_tb = NULL;

        exception_lineno = 250;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_42, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_42;

    tmp_assign_source_43 = impl_numpy$lib$_iotools$$$class_2_NameValidator( NULL );
    assert( tmp_assign_source_43 != NULL );
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_43;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_2__class_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_44 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_44 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_44;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_NameValidator;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 250;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_45;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_46 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_NameValidator, tmp_assign_source_46 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    tmp_assign_source_47 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_8_str2bool(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_str2bool, tmp_assign_source_47 );
    tmp_assign_source_48 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_48, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_48;

    tmp_assign_source_49 = impl_numpy$lib$_iotools$$$class_3_ConverterError( NULL );
    assert( tmp_assign_source_49 != NULL );
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_49;

    // Tried code:
    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_3__class_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_50 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    tmp_assign_source_50 = SELECT_METACLASS( tmp_bases_name_3, GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_50;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    tmp_args_element_name_7 = const_str_plain_ConverterError;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    frame_module->f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        goto try_except_handler_3;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_51;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_52 = tmp_class_creation_3__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConverterError, tmp_assign_source_52 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    tmp_assign_source_53 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConverterError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConverterError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_53 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ConverterError" );
        exception_tb = NULL;

        exception_lineno = 452;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_53, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_53;

    tmp_assign_source_54 = impl_numpy$lib$_iotools$$$class_4_ConverterLockError( NULL );
    assert( tmp_assign_source_54 != NULL );
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_54;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_4__class_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_4 = tmp_class_creation_4__class_dict;

    tmp_key_name_4 = const_str_plain___metaclass__;
    tmp_assign_source_55 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    tmp_assign_source_55 = SELECT_METACLASS( tmp_bases_name_4, GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_55;

    tmp_called_name_4 = tmp_class_creation_4__metaclass;

    tmp_args_element_name_10 = const_str_plain_ConverterLockError;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    frame_module->f_lineno = 452;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        goto try_except_handler_4;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_56;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_57 = tmp_class_creation_4__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConverterLockError, tmp_assign_source_57 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Tried code:
    tmp_assign_source_58 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_58 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "UserWarning" );
        exception_tb = NULL;

        exception_lineno = 460;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_58, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_58;

    tmp_assign_source_59 = impl_numpy$lib$_iotools$$$class_5_ConversionWarning( NULL );
    assert( tmp_assign_source_59 != NULL );
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_59;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_5__class_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_5 = tmp_class_creation_5__class_dict;

    tmp_key_name_5 = const_str_plain___metaclass__;
    tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    tmp_assign_source_60 = SELECT_METACLASS( tmp_bases_name_5, GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_60;

    tmp_called_name_5 = tmp_class_creation_5__metaclass;

    tmp_args_element_name_13 = const_str_plain_ConversionWarning;
    tmp_args_element_name_14 = tmp_class_creation_5__bases;

    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    frame_module->f_lineno = 460;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto try_except_handler_5;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_61;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_62 = tmp_class_creation_5__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_ConversionWarning, tmp_assign_source_62 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    tmp_assign_source_63 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_object );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_object );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_63 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "object" );
        exception_tb = NULL;

        exception_lineno = 473;
        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_63, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_63;

    tmp_assign_source_64 = impl_numpy$lib$_iotools$$$class_6_StringConverter( NULL );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto try_except_handler_6;
    }
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_64;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_6__class_dict;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dict_name_6 = tmp_class_creation_6__class_dict;

    tmp_key_name_6 = const_str_plain___metaclass__;
    tmp_assign_source_65 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto try_except_handler_6;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    tmp_assign_source_65 = SELECT_METACLASS( tmp_bases_name_6, GET_STRING_DICT_VALUE( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_65;

    tmp_called_name_6 = tmp_class_creation_6__metaclass;

    tmp_args_element_name_16 = const_str_plain_StringConverter;
    tmp_args_element_name_17 = tmp_class_creation_6__bases;

    tmp_args_element_name_18 = tmp_class_creation_6__class_dict;

    frame_module->f_lineno = 473;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto try_except_handler_6;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_66;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

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
    tmp_assign_source_67 = tmp_class_creation_6__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_StringConverter, tmp_assign_source_67 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    tmp_defaults_3 = const_tuple_none_str_digest_ed3780532e9bfe5e4f377fba9d889690_tuple;
    tmp_assign_source_68 = MAKE_FUNCTION_numpy$lib$_iotools$$$function_9_easy_dtype( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$_iotools, (Nuitka_StringObject *)const_str_plain_easy_dtype, tmp_assign_source_68 );

    return MOD_RETURN_VALUE( module_numpy$lib$_iotools );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
