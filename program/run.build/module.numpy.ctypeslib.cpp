/* Generated code for Python source for module 'numpy.ctypeslib'
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

/* The _module_numpy$ctypeslib is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$ctypeslib;
PyDictObject *moduledict_numpy$ctypeslib;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain__ndim_;
static PyObject *const_str_plain_prep_pointer;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_d9a6c45fcf44af5918c67465b2eae108;
static PyObject *const_tuple_str_plain_intp_tuple;
static PyObject *const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple;
static PyObject *const_str_digest_b63e97201afff05bc02e60c6633f99a8;
extern PyObject *const_str_plain_ctypeslib;
static PyObject *const_str_digest_d9e2e8232b677ebaff782fb5a24aaa12;
static PyObject *const_tuple_str_plain_args_str_plain_kwds_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_nic;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain__shape_;
static PyObject *const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain__dummy;
static PyObject *const_str_plain__ndptr;
static PyObject *const_str_digest_182d9645776caa3f6fe486255d2b9844;
static PyObject *const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_c_byte;
static PyObject *const_str_digest_36261d5cd3967381a30efca3c9d08368;
static PyObject *const_str_plain_libdir;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_sizeof;
extern PyObject *const_str_plain_array_type;
static PyObject *const_list_a3141bdf77735564bbf18197c00a6f94_list;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_simple_types;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_ext;
static PyObject *const_str_plain___keep;
static PyObject *const_str_digest_6d315605648e433b0f5827b4d0f11ccf;
static PyObject *const_str_plain_cdll;
static PyObject *const_str_digest_1da87a8dd68efa7aad16166393ba2ffe;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c_long;
extern PyObject *const_str_plain_c_ubyte;
static PyObject *const_str_plain_flagsobj;
static PyObject *const_str_plain__flags_fromnum;
static PyObject *const_str_plain_inter;
static PyObject *const_str_plain_pointer_obj;
static PyObject *const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_OWNDATA;
extern PyObject *const_str_plain_c_uint;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_descr;
extern PyObject *const_str_plain_abspath;
static PyObject *const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple;
static PyObject *const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_73590e51d1e1c9cc5fecc41c3633ed39;
static PyObject *const_list_54194ab635e74563c5cfcba2eda8536d_list;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_c_short;
static PyObject *const_str_plain__num_fromflags;
static PyObject *const_str_plain__ARRAY_TYPE;
static PyObject *const_str_digest_0f914585e1e3f1788d6585cad69f94bd;
extern PyObject *const_str_plain_tp;
extern PyObject *const_str_plain_addr;
static PyObject *const_str_plain_prep_simple;
extern PyObject *const_str_plain_upper;
static PyObject *const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple;
extern PyObject *const_str_plain_obj;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_prep_array;
extern PyObject *const_str_plain__getintp_ctype;
static PyObject *const_str_digest_5cf4127836c26da1953714e7d0bbc0bd;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_dim;
static PyObject *const_str_digest_f5e907abd3e6b65a3054d68a931223cf;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_readonly;
static PyObject *const_str_plain__type_;
extern PyObject *const_str_plain_c_ushort;
extern PyObject *const_str_plain_contents;
static PyObject *const_str_plain_loader_path;
static PyObject *const_str_digest_462731c6abdb66ce201ddc39b13bc596;
extern PyObject *const_str_plain_c_longlong;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_5c326258629e22294a67a54ecf742b9b;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_plain_as_array;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_42b99953faf416ce9a2ec59abf13efa0;
static PyObject *const_str_digest_b3e01b7f6fe965902fb0f2c5fe538d06;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_e2804ac65c6fbdd5accf55e43cffbd99;
static PyObject *const_str_plain_get_shared_lib_extension;
static PyObject *const_str_plain__typecodes;
extern PyObject *const_str_plain_strides;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain_F_CONTIGUOUS;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_exists;
static PyObject *const_str_plain_flaglist;
static PyObject *const_str_digest_d3a31592cd8c822f5811917362887051;
static PyObject *const_str_plain_C_CONTIGUOUS;
static PyObject *const_str_digest_e37af17a5b24336f26d24dc610638b8f;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_chr_44;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70;
extern PyObject *const_str_plain_ai;
static PyObject *const_str_plain__flagdict;
static PyObject *const_str_plain__flagnames;
extern PyObject *const_str_plain___array_interface__;
static PyObject *const_str_digest_3fda54a2a4a66d402bf3d39862ea704c;
static PyObject *const_str_plain___ref;
extern PyObject *const_str_plain_c_float;
extern PyObject *const_str_plain_ctypes;
static PyObject *const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_as_ctypes;
static PyObject *const_str_plain_c_intp;
static PyObject *const_str_plain_strshape;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_str_plain_from_address;
static PyObject *const_str_plain__check_retval_;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_digest_770dfc7c45a247e1a34a824431aca553;
static PyObject *const_str_digest_736f1bf9d66cc81139d4e3af71316535;
static PyObject *const_str_plain_UPDATEIFCOPY;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_ob;
extern PyObject *const_str_plain__internal;
static PyObject *const_str_plain_libname;
static PyObject *const_str_plain_addressof;
static PyObject *const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple;
static PyObject *const_str_plain_from_param;
static PyObject *const_str_digest_a2941e7fbded98383d41b07f0ec64d12;
static PyObject *const_str_plain_is_python_ext;
static PyObject *const_str_plain_libname_ext;
static PyObject *const_dict_28a8d78f880d037d2aa990c97d5eaf57;
static PyObject *const_str_plain__ndptr_base;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain__;
static PyObject *const_str_digest_b71718e9ee231439014d32459ca5aebb;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_test;
static PyObject *const_str_digest_6e67341cb4da9db91dba5c39139bf34f;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple;
extern PyObject *const_str_plain_u;
static PyObject *const_str_plain_simple_type;
static PyObject *const_str_digest_a1c179c92fdc674608c39fa15e8cce51;
static PyObject *const_str_digest_5b09d61a27343621d029a01f97434bb3;
static PyObject *const_str_plain_libpath;
static PyObject *const_str_plain_ctypes_load_library;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
static PyObject *const_str_plain_WRITEABLE;
extern PyObject *const_str_plain_klass;
extern PyObject *const_str_plain_isdir;
static PyObject *const_str_plain_ndpointer;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_names;
extern PyObject *const_str_plain_splitext;
static PyObject *const_str_plain_ln;
static PyObject *const_str_plain_ct;
extern PyObject *const_str_plain__dtype;
static PyObject *const_tuple_7012641a4a60334c6f085068be27397e_tuple;
static PyObject *const_str_plain_so_ext2;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_deprecate;
static PyObject *const_str_digest_a5fd5fde618a1101906733f10cb3f59d;
static PyObject *const_str_digest_8ad18dc7e52200f94f56a47ed39b3f14;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_types;
static PyObject *const_str_plain__pointer_type_cache;
static PyObject *const_tuple_str_plain_get_shared_lib_extension_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_typestr;
extern PyObject *const_str_plain_c_double;
static PyObject *const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_c_int;
static PyObject *const_str_plain_so_ext;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_any;
static PyObject *const_str_plain_ALIGNED;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain__dtype_;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_insert;
static PyObject *const_tuple_str_plain_cls_str_plain_obj_tuple;
static PyObject *const_str_plain__flags_;
extern PyObject *const_str_plain_c_ulong;
static PyObject *const_str_digest_a9e44db0a1490ce98218807379f1405e;
static PyObject *const_str_plain_load_library;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_kwds;
extern PyObject *const_str_plain_c_ulonglong;
static PyObject *const_tuple_str_plain_self_str_plain_typestr_tuple;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_str_chr_44_tuple;
static PyObject *const_str_plain__length_;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__ndim_ = UNSTREAM_STRING( &constant_bin[ 807165 ], 6, 1 );
    const_str_plain_prep_pointer = UNSTREAM_STRING( &constant_bin[ 807171 ], 12, 1 );
    const_str_digest_d9a6c45fcf44af5918c67465b2eae108 = UNSTREAM_STRING( &constant_bin[ 807183 ], 27, 0 );
    const_tuple_str_plain_intp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_intp_tuple, 0, const_str_plain_intp ); Py_INCREF( const_str_plain_intp );
    const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple = PyTuple_New( 5 );
    const_str_plain_pointer_obj = UNSTREAM_STRING( &constant_bin[ 807210 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 0, const_str_plain_pointer_obj ); Py_INCREF( const_str_plain_pointer_obj );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 2, const_str_plain_contents ); Py_INCREF( const_str_plain_contents );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain_inter = UNSTREAM_STRING( &constant_bin[ 2128 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 4, const_str_plain_inter ); Py_INCREF( const_str_plain_inter );
    const_str_digest_b63e97201afff05bc02e60c6633f99a8 = UNSTREAM_STRING( &constant_bin[ 807221 ], 143, 0 );
    const_str_digest_d9e2e8232b677ebaff782fb5a24aaa12 = UNSTREAM_STRING( &constant_bin[ 807364 ], 5, 0 );
    const_tuple_str_plain_args_str_plain_kwds_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_tuple, 1, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_str_plain_nic = UNSTREAM_STRING( &constant_bin[ 1225 ], 3, 1 );
    const_str_plain__shape_ = UNSTREAM_STRING( &constant_bin[ 807369 ], 7, 1 );
    const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 1, const_str_plain_descr ); Py_INCREF( const_str_plain_descr );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_typestr = UNSTREAM_STRING( &constant_bin[ 361652 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 3, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    const_str_plain__dummy = UNSTREAM_STRING( &constant_bin[ 64315 ], 6, 1 );
    const_str_plain__ndptr = UNSTREAM_STRING( &constant_bin[ 807376 ], 6, 1 );
    const_str_digest_182d9645776caa3f6fe486255d2b9844 = UNSTREAM_STRING( &constant_bin[ 807382 ], 874, 0 );
    const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 0, const_str_plain_array_type ); Py_INCREF( const_str_plain_array_type );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_ob = UNSTREAM_STRING( &constant_bin[ 1262 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 2, const_str_plain_ob ); Py_INCREF( const_str_plain_ob );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 3, const_str_plain_ai ); Py_INCREF( const_str_plain_ai );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 4, const_str_plain_descr ); Py_INCREF( const_str_plain_descr );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 5, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 6, const_str_plain___array_interface__ ); Py_INCREF( const_str_plain___array_interface__ );
    const_str_plain_c_byte = UNSTREAM_STRING( &constant_bin[ 808256 ], 6, 1 );
    const_str_digest_36261d5cd3967381a30efca3c9d08368 = UNSTREAM_STRING( &constant_bin[ 808262 ], 57, 0 );
    const_str_plain_libdir = UNSTREAM_STRING( &constant_bin[ 808319 ], 6, 1 );
    const_list_a3141bdf77735564bbf18197c00a6f94_list = PyList_New( 6 );
    const_str_plain_C_CONTIGUOUS = UNSTREAM_STRING( &constant_bin[ 367738 ], 12, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 0, const_str_plain_C_CONTIGUOUS ); Py_INCREF( const_str_plain_C_CONTIGUOUS );
    const_str_plain_F_CONTIGUOUS = UNSTREAM_STRING( &constant_bin[ 367764 ], 12, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 1, const_str_plain_F_CONTIGUOUS ); Py_INCREF( const_str_plain_F_CONTIGUOUS );
    const_str_plain_ALIGNED = UNSTREAM_STRING( &constant_bin[ 366011 ], 7, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 2, const_str_plain_ALIGNED ); Py_INCREF( const_str_plain_ALIGNED );
    const_str_plain_WRITEABLE = UNSTREAM_STRING( &constant_bin[ 366000 ], 9, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 3, const_str_plain_WRITEABLE ); Py_INCREF( const_str_plain_WRITEABLE );
    const_str_plain_OWNDATA = UNSTREAM_STRING( &constant_bin[ 367791 ], 7, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 4, const_str_plain_OWNDATA ); Py_INCREF( const_str_plain_OWNDATA );
    const_str_plain_UPDATEIFCOPY = UNSTREAM_STRING( &constant_bin[ 366024 ], 12, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 5, const_str_plain_UPDATEIFCOPY ); Py_INCREF( const_str_plain_UPDATEIFCOPY );
    const_str_plain_simple_types = UNSTREAM_STRING( &constant_bin[ 808325 ], 12, 1 );
    const_str_plain___keep = UNSTREAM_STRING( &constant_bin[ 808337 ], 6, 1 );
    const_str_digest_6d315605648e433b0f5827b4d0f11ccf = UNSTREAM_STRING( &constant_bin[ 808343 ], 25, 0 );
    const_str_plain_cdll = UNSTREAM_STRING( &constant_bin[ 807456 ], 4, 1 );
    const_str_digest_1da87a8dd68efa7aad16166393ba2ffe = UNSTREAM_STRING( &constant_bin[ 808368 ], 1603, 0 );
    const_str_plain_flagsobj = UNSTREAM_STRING( &constant_bin[ 809971 ], 8, 1 );
    const_str_plain__flags_fromnum = UNSTREAM_STRING( &constant_bin[ 809979 ], 14, 1 );
    const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 0, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 1, const_str_plain_ndarray ); Py_INCREF( const_str_plain_ndarray );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 3, const_str_plain_deprecate ); Py_INCREF( const_str_plain_deprecate );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 4, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple = PyTuple_New( 1 );
    const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70 = UNSTREAM_STRING( &constant_bin[ 809993 ], 65, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple, 0, const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70 ); Py_INCREF( const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70 );
    const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 2, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    const_str_digest_73590e51d1e1c9cc5fecc41c3633ed39 = UNSTREAM_STRING( &constant_bin[ 810058 ], 131, 0 );
    const_list_54194ab635e74563c5cfcba2eda8536d_list = PyList_New( 7 );
    const_str_plain_load_library = UNSTREAM_STRING( &constant_bin[ 807683 ], 12, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 0, const_str_plain_load_library ); Py_INCREF( const_str_plain_load_library );
    const_str_plain_ndpointer = UNSTREAM_STRING( &constant_bin[ 808414 ], 9, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 1, const_str_plain_ndpointer ); Py_INCREF( const_str_plain_ndpointer );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 2, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    const_str_plain_ctypes_load_library = UNSTREAM_STRING( &constant_bin[ 810189 ], 19, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 3, const_str_plain_ctypes_load_library ); Py_INCREF( const_str_plain_ctypes_load_library );
    const_str_plain_c_intp = UNSTREAM_STRING( &constant_bin[ 447922 ], 6, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 4, const_str_plain_c_intp ); Py_INCREF( const_str_plain_c_intp );
    const_str_plain_as_ctypes = UNSTREAM_STRING( &constant_bin[ 810208 ], 9, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 5, const_str_plain_as_ctypes ); Py_INCREF( const_str_plain_as_ctypes );
    const_str_plain_as_array = UNSTREAM_STRING( &constant_bin[ 810217 ], 8, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 6, const_str_plain_as_array ); Py_INCREF( const_str_plain_as_array );
    const_str_plain__num_fromflags = UNSTREAM_STRING( &constant_bin[ 810225 ], 14, 1 );
    const_str_plain__ARRAY_TYPE = UNSTREAM_STRING( &constant_bin[ 810239 ], 11, 1 );
    const_str_digest_0f914585e1e3f1788d6585cad69f94bd = UNSTREAM_STRING( &constant_bin[ 810250 ], 170, 0 );
    const_str_plain_prep_simple = UNSTREAM_STRING( &constant_bin[ 810420 ], 11, 1 );
    const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple = PyTuple_New( 2 );
    const_str_plain__flagdict = UNSTREAM_STRING( &constant_bin[ 810431 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple, 0, const_str_plain__flagdict ); Py_INCREF( const_str_plain__flagdict );
    PyTuple_SET_ITEM( const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple, 1, const_str_plain_flagsobj ); Py_INCREF( const_str_plain_flagsobj );
    const_str_plain_prep_array = UNSTREAM_STRING( &constant_bin[ 810440 ], 10, 1 );
    const_str_digest_5cf4127836c26da1953714e7d0bbc0bd = UNSTREAM_STRING( &constant_bin[ 810450 ], 24, 0 );
    const_str_digest_f5e907abd3e6b65a3054d68a931223cf = UNSTREAM_STRING( &constant_bin[ 810474 ], 24, 0 );
    const_str_plain__type_ = UNSTREAM_STRING( &constant_bin[ 274685 ], 6, 1 );
    const_str_plain_loader_path = UNSTREAM_STRING( &constant_bin[ 807897 ], 11, 1 );
    const_str_digest_462731c6abdb66ce201ddc39b13bc596 = UNSTREAM_STRING( &constant_bin[ 810498 ], 31, 0 );
    const_str_digest_5c326258629e22294a67a54ecf742b9b = UNSTREAM_STRING( &constant_bin[ 447176 ], 15, 0 );
    const_str_digest_42b99953faf416ce9a2ec59abf13efa0 = UNSTREAM_STRING( &constant_bin[ 810529 ], 24, 0 );
    const_str_digest_b3e01b7f6fe965902fb0f2c5fe538d06 = UNSTREAM_STRING( &constant_bin[ 810553 ], 1317, 0 );
    const_str_digest_e2804ac65c6fbdd5accf55e43cffbd99 = UNSTREAM_STRING( &constant_bin[ 811870 ], 130, 0 );
    const_str_plain_get_shared_lib_extension = UNSTREAM_STRING( &constant_bin[ 812000 ], 24, 1 );
    const_str_plain__typecodes = UNSTREAM_STRING( &constant_bin[ 812024 ], 10, 1 );
    const_str_plain_flaglist = UNSTREAM_STRING( &constant_bin[ 812034 ], 8, 1 );
    const_str_digest_d3a31592cd8c822f5811917362887051 = UNSTREAM_STRING( &constant_bin[ 812042 ], 27, 0 );
    const_str_digest_e37af17a5b24336f26d24dc610638b8f = UNSTREAM_STRING( &constant_bin[ 812069 ], 4, 0 );
    const_str_plain__flagnames = UNSTREAM_STRING( &constant_bin[ 812073 ], 10, 1 );
    const_str_digest_3fda54a2a4a66d402bf3d39862ea704c = UNSTREAM_STRING( &constant_bin[ 812083 ], 31, 0 );
    const_str_plain___ref = UNSTREAM_STRING( &constant_bin[ 812114 ], 5, 1 );
    const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 0, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 3, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 4, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 6, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_strshape = UNSTREAM_STRING( &constant_bin[ 812119 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 7, const_str_plain_strshape ); Py_INCREF( const_str_plain_strshape );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 8, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    const_str_plain_from_address = UNSTREAM_STRING( &constant_bin[ 812127 ], 12, 1 );
    const_str_plain__check_retval_ = UNSTREAM_STRING( &constant_bin[ 812139 ], 14, 1 );
    const_str_digest_736f1bf9d66cc81139d4e3af71316535 = UNSTREAM_STRING( &constant_bin[ 812153 ], 12, 0 );
    const_str_plain_libname = UNSTREAM_STRING( &constant_bin[ 807770 ], 7, 1 );
    const_str_plain_addressof = UNSTREAM_STRING( &constant_bin[ 812165 ], 9, 1 );
    const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 0, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 2, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_from_param = UNSTREAM_STRING( &constant_bin[ 812174 ], 10, 1 );
    const_str_digest_a2941e7fbded98383d41b07f0ec64d12 = UNSTREAM_STRING( &constant_bin[ 812184 ], 287, 0 );
    const_str_plain_is_python_ext = UNSTREAM_STRING( &constant_bin[ 812471 ], 13, 1 );
    const_str_plain_libname_ext = UNSTREAM_STRING( &constant_bin[ 812484 ], 11, 1 );
    const_dict_28a8d78f880d037d2aa990c97d5eaf57 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_28a8d78f880d037d2aa990c97d5eaf57, const_str_plain_is_python_ext, Py_True );
    assert( PyDict_Size( const_dict_28a8d78f880d037d2aa990c97d5eaf57 ) == 1 );
    const_str_plain__ndptr_base = UNSTREAM_STRING( &constant_bin[ 812495 ], 11, 1 );
    const_str_digest_b71718e9ee231439014d32459ca5aebb = UNSTREAM_STRING( &constant_bin[ 812506 ], 177, 0 );
    const_str_digest_6e67341cb4da9db91dba5c39139bf34f = UNSTREAM_STRING( &constant_bin[ 812683 ], 4, 0 );
    const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 0, const_str_plain_flaglist ); Py_INCREF( const_str_plain_flaglist );
    PyTuple_SET_ITEM( const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 1, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 1, const_str_plain_ai ); Py_INCREF( const_str_plain_ai );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 2, const_str_plain_addr ); Py_INCREF( const_str_plain_addr );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 3, const_str_plain_readonly ); Py_INCREF( const_str_plain_readonly );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 4, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 5, const_str_plain_dim ); Py_INCREF( const_str_plain_dim );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_simple_type = UNSTREAM_STRING( &constant_bin[ 808325 ], 11, 1 );
    const_str_digest_a1c179c92fdc674608c39fa15e8cce51 = UNSTREAM_STRING( &constant_bin[ 812687 ], 44, 0 );
    const_str_digest_5b09d61a27343621d029a01f97434bb3 = UNSTREAM_STRING( &constant_bin[ 812731 ], 28, 0 );
    const_str_plain_libpath = UNSTREAM_STRING( &constant_bin[ 808012 ], 7, 1 );
    const_str_plain_ln = UNSTREAM_STRING( &constant_bin[ 76377 ], 2, 1 );
    const_str_plain_ct = UNSTREAM_STRING( &constant_bin[ 325 ], 2, 1 );
    const_tuple_7012641a4a60334c6f085068be27397e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 0, const_str_plain_simple_type ); Py_INCREF( const_str_plain_simple_type );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 2, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 3, const_str_plain___array_interface__ ); Py_INCREF( const_str_plain___array_interface__ );
    const_str_plain_so_ext2 = UNSTREAM_STRING( &constant_bin[ 812759 ], 7, 1 );
    const_str_digest_a5fd5fde618a1101906733f10cb3f59d = UNSTREAM_STRING( &constant_bin[ 812766 ], 28, 0 );
    const_str_digest_8ad18dc7e52200f94f56a47ed39b3f14 = UNSTREAM_STRING( &constant_bin[ 812794 ], 27, 0 );
    const_str_plain__pointer_type_cache = UNSTREAM_STRING( &constant_bin[ 812821 ], 19, 1 );
    const_tuple_str_plain_get_shared_lib_extension_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_shared_lib_extension_tuple, 0, const_str_plain_get_shared_lib_extension ); Py_INCREF( const_str_plain_get_shared_lib_extension );
    const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 0, const_str_plain_libname ); Py_INCREF( const_str_plain_libname );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 1, const_str_plain_loader_path ); Py_INCREF( const_str_plain_loader_path );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 2, const_str_plain_warnings ); Py_INCREF( const_str_plain_warnings );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 3, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 4, const_str_plain_get_shared_lib_extension ); Py_INCREF( const_str_plain_get_shared_lib_extension );
    const_str_plain_so_ext = UNSTREAM_STRING( &constant_bin[ 812759 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 5, const_str_plain_so_ext ); Py_INCREF( const_str_plain_so_ext );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 6, const_str_plain_libname_ext ); Py_INCREF( const_str_plain_libname_ext );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 7, const_str_plain_so_ext2 ); Py_INCREF( const_str_plain_so_ext2 );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 8, const_str_plain_libdir ); Py_INCREF( const_str_plain_libdir );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 9, const_str_plain_ln ); Py_INCREF( const_str_plain_ln );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 10, const_str_plain_libpath ); Py_INCREF( const_str_plain_libpath );
    const_str_plain__dtype_ = UNSTREAM_STRING( &constant_bin[ 542692 ], 7, 1 );
    const_tuple_str_plain_cls_str_plain_obj_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_obj_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_obj_tuple, 1, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    const_str_plain__flags_ = UNSTREAM_STRING( &constant_bin[ 809979 ], 7, 1 );
    const_str_digest_a9e44db0a1490ce98218807379f1405e = UNSTREAM_STRING( &constant_bin[ 812840 ], 132, 0 );
    const_tuple_str_plain_self_str_plain_typestr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_typestr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_typestr_tuple, 1, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    const_str_plain__length_ = UNSTREAM_STRING( &constant_bin[ 812972 ], 8, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$ctypeslib( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f26e0a1139cff1bcfa1a2453b641c8a9;
static PyCodeObject *codeobj_345acb5aba877ec30d46293a4df22dff;
static PyCodeObject *codeobj_f01cdc0d3e876d0a50481b279abf348c;
static PyCodeObject *codeobj_3af811d23232c37dd3405b47c254b394;
static PyCodeObject *codeobj_835bbe3aba777cd40ab20535368a43e8;
static PyCodeObject *codeobj_10af15d11223273bb5b221e8cc9cfd6a;
static PyCodeObject *codeobj_b475feda5e7e53c1b4cabaaf6035f88f;
static PyCodeObject *codeobj_b2a0925632306c05e493c00de5024c02;
static PyCodeObject *codeobj_1b6342214ceee66ab2d899deb7bd5455;
static PyCodeObject *codeobj_7c7342dbc694988edeb7799577b2a0b6;
static PyCodeObject *codeobj_1bc5b13f6016dc990eec58da0ae52004;
static PyCodeObject *codeobj_a122b943895dbcbb9922dd6f9eec9c62;
static PyCodeObject *codeobj_a10f085e529fa38f0727fe102a319dba;
static PyCodeObject *codeobj_4f86a36a5675636127baf3be1c11c484;
static PyCodeObject *codeobj_c1053178d727e1b38e5d84850bc5878a;
static PyCodeObject *codeobj_e07dc5adc6153621ad943d2952d755b3;
static PyCodeObject *codeobj_21381180084808fdc42e6001ba0ee389;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_36261d5cd3967381a30efca3c9d08368;
    codeobj_f26e0a1139cff1bcfa1a2453b641c8a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_interface__, 185, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_345acb5aba877ec30d46293a4df22dff = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_interface__, 341, const_tuple_str_plain_self_str_plain_typestr_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f01cdc0d3e876d0a50481b279abf348c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_interface__, 387, const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3af811d23232c37dd3405b47c254b394 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_retval_, 179, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_835bbe3aba777cd40ab20535368a43e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dummy, 67, const_tuple_str_plain_args_str_plain_kwds_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_10af15d11223273bb5b221e8cc9cfd6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__flags_fromnum, 168, const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b475feda5e7e53c1b4cabaaf6035f88f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ndptr, 177, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b2a0925632306c05e493c00de5024c02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__num_fromflags, 160, const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1b6342214ceee66ab2d899deb7bd5455 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_array, 421, const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7c7342dbc694988edeb7799577b2a0b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_ctypes, 437, const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1bc5b13f6016dc990eec58da0ae52004 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ctypeslib, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a122b943895dbcbb9922dd6f9eec9c62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_param, 196, const_tuple_str_plain_cls_str_plain_obj_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a10f085e529fa38f0727fe102a319dba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_library, 91, const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f86a36a5675636127baf3be1c11c484 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ndpointer, 219, const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1053178d727e1b38e5d84850bc5878a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prep_array, 369, const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e07dc5adc6153621ad943d2952d755b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prep_pointer, 399, const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_21381180084808fdc42e6001ba0ee389 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prep_simple, 330, const_tuple_7012641a4a60334c6f085068be27397e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$ctypeslib$$$class_1__ndptr( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_1__check_retval_(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_2___array_interface__(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_3_from_param(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_10_as_ctypes(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_1__dummy(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_2_load_library(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_3__num_fromflags(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_4__flags_fromnum(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_5_ndpointer( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_6_prep_simple(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_6_prep_simple$$$function_1___array_interface__( PyCellObject *closure_typestr );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_7_prep_array(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_7_prep_array$$$function_1___array_interface__( PyCellObject *closure_descr, PyCellObject *closure_shape, PyCellObject *closure_typestr );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_8_prep_pointer(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_9_as_array( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$ctypeslib$$$function_1__dummy( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_835bbe3aba777cd40ab20535368a43e8, module_numpy$ctypeslib );
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
    tmp_make_exception_arg_1 = const_str_digest_42b99953faf416ce9a2ec59abf13efa0;
    frame_function->f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 77;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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
            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_kwds )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kwds,
                    par_kwds
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_1__dummy );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_1__dummy );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_numpy$ctypeslib$$$function_2_load_library( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_libname = python_pars[ 0 ];
    PyObject *par_loader_path = python_pars[ 1 ];
    PyObject *var_warnings = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_get_shared_lib_extension = NULL;
    PyObject *var_so_ext = NULL;
    PyObject *var_libname_ext = NULL;
    PyObject *var_so_ext2 = NULL;
    PyObject *var_libdir = NULL;
    PyObject *var_ln = NULL;
    PyObject *var_libpath = NULL;
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
    PyObject *tmp_args_element_name_9;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a10f085e529fa38f0727fe102a319dba, module_numpy$ctypeslib );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___version__ );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_digest_d9e2e8232b677ebaff782fb5a24aaa12;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_libname )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_libname,
            par_libname
        );

        assert( res == 0 );
    }

    if ( par_loader_path )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_loader_path,
            par_loader_path
        );

        assert( res == 0 );
    }

    if ( var_warnings )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_warnings,
            var_warnings
        );

        assert( res == 0 );
    }

    if ( var_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ext,
            var_ext
        );

        assert( res == 0 );
    }

    if ( var_get_shared_lib_extension )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_get_shared_lib_extension,
            var_get_shared_lib_extension
        );

        assert( res == 0 );
    }

    if ( var_so_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_so_ext,
            var_so_ext
        );

        assert( res == 0 );
    }

    if ( var_libname_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_libname_ext,
            var_libname_ext
        );

        assert( res == 0 );
    }

    if ( var_so_ext2 )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_so_ext2,
            var_so_ext2
        );

        assert( res == 0 );
    }

    if ( var_libdir )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_libdir,
            var_libdir
        );

        assert( res == 0 );
    }

    if ( var_ln )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ln,
            var_ln
        );

        assert( res == 0 );
    }

    if ( var_libpath )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_libpath,
            var_libpath
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 120;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    assert( var_warnings == NULL );
    var_warnings = tmp_assign_source_1;

    tmp_source_name_2 = var_warnings;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_splitext );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_libname;

    frame_function->f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    assert( var_ext == NULL );
    var_ext = tmp_assign_source_2;

    tmp_cond_value_1 = var_ext;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
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
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( par_libname )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_libname,
            par_libname
        );

        assert( res == 0 );
    }

    if ( par_loader_path )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_loader_path,
            par_loader_path
        );

        assert( res == 0 );
    }

    if ( var_warnings )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_warnings,
            var_warnings
        );

        assert( res == 0 );
    }

    if ( var_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ext,
            var_ext
        );

        assert( res == 0 );
    }

    if ( var_get_shared_lib_extension )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_get_shared_lib_extension,
            var_get_shared_lib_extension
        );

        assert( res == 0 );
    }

    if ( var_so_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_so_ext,
            var_so_ext
        );

        assert( res == 0 );
    }

    if ( var_libname_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_libname_ext,
            var_libname_ext
        );

        assert( res == 0 );
    }

    if ( var_so_ext2 )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_so_ext2,
            var_so_ext2
        );

        assert( res == 0 );
    }

    if ( var_libdir )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_libdir,
            var_libdir
        );

        assert( res == 0 );
    }

    if ( var_ln )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ln,
            var_ln
        );

        assert( res == 0 );
    }

    if ( var_libpath )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_libpath,
            var_libpath
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 129;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_get_shared_lib_extension_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_get_shared_lib_extension );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    assert( var_get_shared_lib_extension == NULL );
    var_get_shared_lib_extension = tmp_assign_source_3;

    tmp_called_name_3 = var_get_shared_lib_extension;

    frame_function->f_lineno = 130;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    assert( var_so_ext == NULL );
    var_so_ext = tmp_assign_source_4;

    tmp_assign_source_5 = PyList_New( 1 );
    tmp_left_name_1 = par_libname;

    tmp_right_name_1 = var_so_ext;

    tmp_list_element_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
    assert( var_libname_ext == NULL );
    var_libname_ext = tmp_assign_source_5;

    tmp_called_name_4 = var_get_shared_lib_extension;

    tmp_kw_name_1 = PyDict_Copy( const_dict_28a8d78f880d037d2aa990c97d5eaf57 );
    frame_function->f_lineno = 134;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    assert( var_so_ext2 == NULL );
    var_so_ext2 = tmp_assign_source_6;

    tmp_compare_left_2 = var_so_ext2;

    tmp_compare_right_2 = var_so_ext;

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = var_libname_ext;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_insert );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_0;
    tmp_left_name_2 = par_libname;

    tmp_right_name_2 = var_so_ext2;

    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_7 = PyList_New( 1 );
    tmp_list_element_2 = par_libname;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assign_source_7, 0, tmp_list_element_2 );
    assert( var_libname_ext == NULL );
    var_libname_ext = tmp_assign_source_7;

    branch_end_2:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_loader_path;

    frame_function->f_lineno = 140;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_loader_path;
        assert( old != NULL );
        par_loader_path = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_isdir );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_loader_path;

    frame_function->f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_loader_path;

    frame_function->f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    assert( var_libdir == NULL );
    var_libdir = tmp_assign_source_9;

    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_10 = par_loader_path;

    assert( var_libdir == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_libdir = tmp_assign_source_10;

    branch_end_4:;
    tmp_iter_arg_1 = var_libname_ext;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 146;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_ln;
        var_ln = tmp_assign_source_13;
        Py_INCREF( var_ln );
        Py_XDECREF( old );
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 147;
        goto try_except_handler_2;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_2;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_join );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_libdir;

    tmp_args_element_name_8 = var_ln;

    frame_function->f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_libpath;
        var_libpath = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 148;
        goto try_except_handler_2;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_path );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_2;
    }
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_exists );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = var_libpath;

    frame_function->f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 148;
        goto try_except_handler_2;
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
    // Tried code:
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 150;
        goto try_except_handler_3;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_cdll );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_3;
    }
    tmp_subscript_name_2 = var_libpath;

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_3;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_2_load_library );
    return NULL;
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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_OSError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    goto branch_end_6;
    branch_no_6:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_6:;
    // End of try:
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
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

    tmp_make_exception_arg_1 = const_str_digest_3fda54a2a4a66d402bf3d39862ea704c;
    frame_function->f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 155;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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
            if ( par_libname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libname,
                    par_libname
                );

                assert( res == 0 );
            }

            if ( par_loader_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_loader_path,
                    par_loader_path
                );

                assert( res == 0 );
            }

            if ( var_warnings )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_warnings,
                    var_warnings
                );

                assert( res == 0 );
            }

            if ( var_ext )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext,
                    var_ext
                );

                assert( res == 0 );
            }

            if ( var_get_shared_lib_extension )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_get_shared_lib_extension,
                    var_get_shared_lib_extension
                );

                assert( res == 0 );
            }

            if ( var_so_ext )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_so_ext,
                    var_so_ext
                );

                assert( res == 0 );
            }

            if ( var_libname_ext )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libname_ext,
                    var_libname_ext
                );

                assert( res == 0 );
            }

            if ( var_so_ext2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_so_ext2,
                    var_so_ext2
                );

                assert( res == 0 );
            }

            if ( var_libdir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libdir,
                    var_libdir
                );

                assert( res == 0 );
            }

            if ( var_ln )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ln,
                    var_ln
                );

                assert( res == 0 );
            }

            if ( var_libpath )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libpath,
                    var_libpath
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_2_load_library );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_libname );
    Py_DECREF( par_libname );
    par_libname = NULL;

    CHECK_OBJECT( (PyObject *)par_loader_path );
    Py_DECREF( par_loader_path );
    par_loader_path = NULL;

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    CHECK_OBJECT( (PyObject *)var_ext );
    Py_DECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_get_shared_lib_extension );
    var_get_shared_lib_extension = NULL;

    Py_XDECREF( var_so_ext );
    var_so_ext = NULL;

    CHECK_OBJECT( (PyObject *)var_libname_ext );
    Py_DECREF( var_libname_ext );
    var_libname_ext = NULL;

    Py_XDECREF( var_so_ext2 );
    var_so_ext2 = NULL;

    CHECK_OBJECT( (PyObject *)var_libdir );
    Py_DECREF( var_libdir );
    var_libdir = NULL;

    CHECK_OBJECT( (PyObject *)var_ln );
    Py_DECREF( var_ln );
    var_ln = NULL;

    CHECK_OBJECT( (PyObject *)var_libpath );
    Py_DECREF( var_libpath );
    var_libpath = NULL;

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

    CHECK_OBJECT( (PyObject *)par_libname );
    Py_DECREF( par_libname );
    par_libname = NULL;

    CHECK_OBJECT( (PyObject *)par_loader_path );
    Py_DECREF( par_loader_path );
    par_loader_path = NULL;

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_get_shared_lib_extension );
    var_get_shared_lib_extension = NULL;

    Py_XDECREF( var_so_ext );
    var_so_ext = NULL;

    Py_XDECREF( var_libname_ext );
    var_libname_ext = NULL;

    Py_XDECREF( var_so_ext2 );
    var_so_ext2 = NULL;

    Py_XDECREF( var_libdir );
    var_libdir = NULL;

    Py_XDECREF( var_ln );
    var_ln = NULL;

    Py_XDECREF( var_libpath );
    var_libpath = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_2_load_library );
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


static PyObject *impl_numpy$ctypeslib$$$function_3__num_fromflags( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_flaglist = python_pars[ 0 ];
    PyObject *var_num = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( var_num == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_num = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b2a0925632306c05e493c00de5024c02, module_numpy$ctypeslib );
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
    tmp_iter_arg_1 = par_flaglist;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
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
            frame_function->f_lineno = 162;
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
        PyObject *old = var_val;
        var_val = tmp_assign_source_4;
        Py_INCREF( var_val );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_num;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 163;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagdict );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flagdict );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flagdict" );
        exception_tb = NULL;

        exception_lineno = 163;
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_val;

    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_5 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_2;
    }
    var_num = tmp_assign_source_5;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
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

    tmp_return_value = var_num;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 164;
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
            if ( par_flaglist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flaglist,
                    par_flaglist
                );

                assert( res == 0 );
            }

            if ( var_num )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_num,
                    var_num
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_3__num_fromflags );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_flaglist );
    Py_DECREF( par_flaglist );
    par_flaglist = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_flaglist );
    Py_DECREF( par_flaglist );
    par_flaglist = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_3__num_fromflags );
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


static PyObject *impl_numpy$ctypeslib$$$function_4__flags_fromnum( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_10af15d11223273bb5b221e8cc9cfd6a, module_numpy$ctypeslib );
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
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagnames );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flagnames );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flagnames" );
        exception_tb = NULL;

        exception_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
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
            frame_function->f_lineno = 170;
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
        PyObject *old = var_key;
        var_key = tmp_assign_source_4;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagdict );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flagdict );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flagdict" );
        exception_tb = NULL;

        exception_lineno = 171;
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_key;

    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = par_num;

    tmp_right_name_1 = var_value;

    tmp_cond_value_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 172;
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
    tmp_source_name_1 = var_res;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_key;

    frame_function->f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
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
            if ( par_num )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_num,
                    par_num
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

            if ( var_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    var_key
                );

                assert( res == 0 );
            }

            if ( var_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    var_value
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

    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_4__flags_fromnum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_4__flags_fromnum );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$ctypeslib$$$class_1__ndptr( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var__check_retval_ = NULL;
    PyObject *var___array_interface__ = NULL;
    PyObject *var_from_param = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_5c326258629e22294a67a54ecf742b9b;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_1__check_retval_(  );
    assert( var__check_retval_ == NULL );
    var__check_retval_ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b475feda5e7e53c1b4cabaaf6035f88f, module_numpy$ctypeslib );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_property );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_2___array_interface__(  );
    frame_function->f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    assert( var___array_interface__ == NULL );
    var___array_interface__ = tmp_assign_source_3;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_3_from_param(  );
    frame_function->f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( var_from_param == NULL );
    var_from_param = tmp_assign_source_4;


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

            if ( var__check_retval_ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__check_retval_,
                    var__check_retval_
                );

                assert( res == 0 );
            }

            if ( var___array_interface__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___array_interface__,
                    var___array_interface__
                );

                assert( res == 0 );
            }

            if ( var_from_param )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_from_param,
                    var_from_param
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

    if ( var__check_retval_ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__check_retval_,
            var__check_retval_
        );

        assert( res == 0 );
    }

    if ( var___array_interface__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___array_interface__,
            var___array_interface__
        );

        assert( res == 0 );
    }

    if ( var_from_param )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_from_param,
            var_from_param
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var__check_retval_ );
    Py_DECREF( var__check_retval_ );
    var__check_retval_ = NULL;

    CHECK_OBJECT( (PyObject *)var___array_interface__ );
    Py_DECREF( var___array_interface__ );
    var___array_interface__ = NULL;

    CHECK_OBJECT( (PyObject *)var_from_param );
    Py_DECREF( var_from_param );
    var_from_param = NULL;

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

    CHECK_OBJECT( (PyObject *)var__check_retval_ );
    Py_DECREF( var__check_retval_ );
    var__check_retval_ = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr );
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


static PyObject *impl_numpy$ctypeslib$$$class_1__ndptr$$$function_1__check_retval_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3af811d23232c37dd3405b47c254b394, module_numpy$ctypeslib );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr$$$function_1__check_retval_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr$$$function_1__check_retval_ );
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


static PyObject *impl_numpy$ctypeslib$$$class_1__ndptr$$$function_2___array_interface__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f26e0a1139cff1bcfa1a2453b641c8a9, module_numpy$ctypeslib );
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
    tmp_return_value = _PyDict_NewPresized( 7 );
    tmp_source_name_2 = par_self;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__dtype_ );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_descr );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_descr;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = par_self;

    tmp_dict_key_2 = const_str_plain___ref;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = Py_None;
    tmp_dict_key_3 = const_str_plain_strides;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_source_name_3 = par_self;

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__shape_ );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_shape;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_value_5 = const_int_pos_3;
    tmp_dict_key_5 = const_str_plain_version;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_source_name_5 = par_self;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__dtype_ );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_descr );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_dict_value_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_typestr;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_dict_value_7 = PyTuple_New( 2 );
    tmp_source_name_6 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_value );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_7, 1, tmp_tuple_element_1 );
    tmp_dict_key_7 = const_str_plain_data;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr$$$function_2___array_interface__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr$$$function_2___array_interface__ );
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


static PyObject *impl_numpy$ctypeslib$$$class_1__ndptr$$$function_3_from_param( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_obj = python_pars[ 1 ];
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
    int tmp_and_left_truth_4;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
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
    PyObject *tmp_str_arg_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a122b943895dbcbb9922dd6f9eec9c62, module_numpy$ctypeslib );
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
    tmp_isinstance_inst_1 = par_obj;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ndarray );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndarray" );
        exception_tb = NULL;

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
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
    tmp_make_exception_arg_1 = const_str_digest_d3a31592cd8c822f5811917362887051;
    frame_function->f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 199;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_cls;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dtype_ );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
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
    tmp_source_name_2 = par_obj;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_cls;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__dtype_ );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 201;
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
    tmp_left_name_1 = const_str_digest_a5fd5fde618a1101906733f10cb3f59d;
    tmp_source_name_4 = par_cls;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__dtype_ );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 202;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_5 = par_cls;

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ndim_ );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_2 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
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
    tmp_source_name_6 = par_obj;

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_cls;

    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__ndim_ );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 204;
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
    tmp_left_name_2 = const_str_digest_462731c6abdb66ce201ddc39b13bc596;
    tmp_source_name_8 = par_cls;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ndim_ );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 205;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_9 = par_cls;

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__shape_ );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_3 = BOOL_FROM( tmp_compexpr_left_5 != tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    assert( !(tmp_and_left_truth_3 == -1) );
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_source_name_10 = par_obj;

    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_cls;

    tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__shape_ );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_6 );

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_3 = const_str_digest_5cf4127836c26da1953714e7d0bbc0bd;
    tmp_source_name_12 = par_cls;

    tmp_str_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__shape_ );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 208;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_13 = par_cls;

    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__flags_ );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = Py_None;
    tmp_and_left_value_4 = BOOL_FROM( tmp_compexpr_left_7 != tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    assert( !(tmp_and_left_truth_4 == -1) );
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_source_name_15 = par_obj;

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_flags );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_num );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_cls;

    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__flags_ );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_8 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_cls;

    tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__flags_ );
    if ( tmp_compexpr_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_8 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_left_8 );
    Py_DECREF( tmp_compexpr_right_8 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_cond_value_4 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_5 = const_str_digest_f5e907abd3e6b65a3054d68a931223cf;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flags_fromnum );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flags_fromnum" );
        exception_tb = NULL;

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = par_cls;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__flags_ );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_make_exception_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_5 );
    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 212;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_source_name_19 = par_obj;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ctypes );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr$$$function_3_from_param );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$class_1__ndptr$$$function_3_from_param );
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


static PyObject *impl_numpy$ctypeslib$$$function_5_ndpointer( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[ 0 ];
    PyObject *par_ndim = python_pars[ 1 ];
    PyObject *par_shape = python_pars[ 2 ];
    PyObject *par_flags = python_pars[ 3 ];
    PyObject *var_num = NULL;
    PyObject *var_x = NULL;
    PyObject *var_name = NULL;
    PyObject *var_strshape = NULL;
    PyObject *var_klass = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_bases_name_1;
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
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_id_arg_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
    PyObject *tmp_str_arg_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_type_name_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4f86a36a5675636127baf3be1c11c484, module_numpy$ctypeslib );
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
    tmp_compare_left_1 = par_dtype;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dtype );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_dtype" );
        exception_tb = NULL;

        exception_lineno = 272;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_dtype;

    frame_function->f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = Py_None;
    assert( var_num == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_num = tmp_assign_source_2;

    tmp_compare_left_2 = par_flags;

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
    tmp_isinstance_inst_1 = par_flags;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
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
    tmp_source_name_1 = par_flags;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 276;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_flags;
        assert( old != NULL );
        par_flags = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_isinstance_inst_2 = par_flags;

    tmp_isinstance_cls_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_integer );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer" );
        exception_tb = NULL;

        exception_lineno = 277;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
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
    tmp_assign_source_4 = par_flags;

    {
        PyObject *old = var_num;
        assert( old != NULL );
        var_num = tmp_assign_source_4;
        Py_INCREF( var_num );
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flags_fromnum );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flags_fromnum" );
        exception_tb = NULL;

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_num;

    frame_function->f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_flags;
        assert( old != NULL );
        par_flags = tmp_assign_source_5;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_isinstance_inst_3 = par_flags;

    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_flagsobj );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_flagsobj );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "flagsobj" );
        exception_tb = NULL;

        exception_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
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
    tmp_source_name_2 = par_flags;

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_num );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_num;
        assert( old != NULL );
        var_num = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flags_fromnum );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flags_fromnum" );
        exception_tb = NULL;

        exception_lineno = 282;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_num;

    frame_function->f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_flags;
        assert( old != NULL );
        par_flags = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_5:;
    branch_end_4:;
    branch_end_3:;
    tmp_compare_left_3 = var_num;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    // Tried code:
    // Tried code:
    tmp_iter_arg_1 = par_flags;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;

        exception_lineno = 285;
        goto try_except_handler_3;
    }

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_9;

    tmp_assign_source_10 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_10;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 285;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_12;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_4 = var_x;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_strip );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    PyThreadState_GET()->frame->f_lineno = 285;
    tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_upper );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    PyThreadState_GET()->frame->f_lineno = 285;
    tmp_append_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
    return NULL;
    outline_result_1:;
    tmp_assign_source_8 = tmp_outline_return_value_1;
    {
        PyObject *old = par_flags;
        par_flags = tmp_assign_source_8;
        Py_XDECREF( old );
    }

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
    tmp_make_exception_arg_1 = const_str_digest_8ad18dc7e52200f94f56a47ed39b3f14;
    frame_function->f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 287;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__num_fromflags );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__num_fromflags );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_num_fromflags" );
        exception_tb = NULL;

        exception_lineno = 288;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_flags;

    frame_function->f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_num;
        var_num = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    branch_no_6:;
    branch_no_2:;
    // Tried code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_pointer_type_cache" );
        exception_tb = NULL;

        exception_lineno = 290;
        goto try_except_handler_4;
    }

    tmp_subscript_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_2 = par_dtype;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_ndim;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_shape;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_num;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_subscript_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 290;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 3, tmp_tuple_element_2 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto try_except_handler_4;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_function, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_7:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_compare_left_5 = par_dtype;

    tmp_compare_right_5 = Py_None;
    tmp_is_2 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_2 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_14 = const_str_plain_any;
    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_name = tmp_assign_source_14;

    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_5 = par_dtype;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_names );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 295;
        goto frame_exception_exit_1;
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
    tmp_id_arg_1 = par_dtype;

    tmp_str_arg_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_15;

    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_6 = par_dtype;

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_str );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_16;

    branch_end_9:;
    branch_end_8:;
    tmp_compare_left_6 = par_ndim;

    tmp_compare_right_6 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_1 = var_name;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 300;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_digest_e37af17a5b24336f26d24dc610638b8f;
    tmp_right_name_2 = par_ndim;

    tmp_right_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_17 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    var_name = tmp_assign_source_17;

    branch_no_10:;
    tmp_compare_left_7 = par_shape;

    tmp_compare_right_7 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    // Tried code:
    // Tried code:
    tmp_iter_arg_2 = par_shape;

    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto try_except_handler_6;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_19;

    tmp_assign_source_20 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_20;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

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
            PyThreadState_GET()->frame->f_lineno = 303;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_assign_source_22 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_22;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_str_arg_2 = var_x;

    tmp_append_value_2 = PyObject_Str( tmp_str_arg_2 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto try_except_handler_6;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
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
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
    return NULL;
    outline_result_2:;
    tmp_assign_source_18 = tmp_outline_return_value_2;
    assert( var_strshape == NULL );
    var_strshape = tmp_assign_source_18;

    goto try_end_3;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != -1 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_function, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    tmp_compare_left_8 = PyThreadState_GET()->exc_type;
    tmp_compare_right_8 = PyExc_TypeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_23 = PyList_New( 1 );
    tmp_str_arg_3 = par_shape;

    tmp_list_element_1 = PyObject_Str( tmp_str_arg_3 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_23, 0, tmp_list_element_1 );
    assert( var_strshape == NULL );
    var_strshape = tmp_assign_source_23;

    tmp_assign_source_24 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_shape;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_3 );
    {
        PyObject *old = par_shape;
        assert( old != NULL );
        par_shape = tmp_assign_source_24;
        Py_DECREF( old );
    }

    goto branch_end_12;
    branch_no_12:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_12:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
    return NULL;
    // End of try:
    try_end_3:;
    tmp_tuple_arg_1 = par_shape;

    if ( tmp_tuple_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_shape;
        par_shape = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_name;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = const_str_plain__;
    tmp_source_name_7 = const_str_plain_x;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_5 = var_strshape;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "strshape" );
        exception_tb = NULL;

        exception_lineno = 308;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_26 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    var_name = tmp_assign_source_26;

    branch_no_11:;
    tmp_compare_left_9 = par_flags;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;

        exception_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_9 != tmp_compare_right_9 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_left_name_5 = var_name;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = const_str_plain__;
    tmp_source_name_8 = const_str_plain__;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_6 = par_flags;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 310;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_27 = tmp_left_name_5;
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    var_name = tmp_assign_source_27;

    goto branch_end_13;
    branch_no_13:;
    tmp_assign_source_28 = PyList_New( 0 );
    {
        PyObject *old = par_flags;
        par_flags = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    branch_end_13:;
    tmp_left_name_7 = const_str_digest_736f1bf9d66cc81139d4e3af71316535;
    tmp_right_name_7 = var_name;

    if ( tmp_right_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_type_name_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_type_name_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        goto frame_exception_exit_1;
    }
    tmp_bases_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ndptr );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_type_name_name_1 );
        Py_DECREF( tmp_bases_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ndptr" );
        exception_tb = NULL;

        exception_lineno = 313;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_bases_name_1, 0, tmp_tuple_element_4 );
    tmp_dict_name_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_dtype;

    tmp_dict_key_1 = const_str_plain__dtype_;
    PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_shape;

    tmp_dict_key_2 = const_str_plain__shape_;
    PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_ndim;

    tmp_dict_key_3 = const_str_plain__ndim_;
    PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_num;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_type_name_name_1 );
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain__flags_;
    PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_assign_source_29 = BUILTIN_TYPE3( const_str_digest_5c326258629e22294a67a54ecf742b9b, tmp_type_name_name_1, tmp_bases_name_1, tmp_dict_name_1 );
    Py_DECREF( tmp_type_name_name_1 );
    Py_DECREF( tmp_bases_name_1 );
    Py_DECREF( tmp_dict_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        goto frame_exception_exit_1;
    }
    assert( var_klass == NULL );
    var_klass = tmp_assign_source_29;

    tmp_ass_subvalue_1 = var_klass;

    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_pointer_type_cache" );
        exception_tb = NULL;

        exception_lineno = 318;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = par_dtype;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
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
            if ( par_dtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtype,
                    par_dtype
                );

                assert( res == 0 );
            }

            if ( par_ndim )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndim,
                    par_ndim
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

            if ( par_flags )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flags,
                    par_flags
                );

                assert( res == 0 );
            }

            if ( var_num )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_num,
                    var_num
                );

                assert( res == 0 );
            }

            if ( var_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    var_x
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

            if ( var_strshape )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_strshape,
                    var_strshape
                );

                assert( res == 0 );
            }

            if ( var_klass )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_klass,
                    var_klass
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

    tmp_return_value = var_klass;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_strshape );
    var_strshape = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_strshape );
    var_strshape = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5_ndpointer );
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


static PyObject *impl_numpy$ctypeslib$$$function_6_prep_simple( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_simple_type = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyCellObject *var_typestr = PyCell_EMPTY();
    PyObject *var___array_interface__ = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_21381180084808fdc42e6001ba0ee389, module_numpy$ctypeslib );
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
    tmp_source_name_1 = par_simple_type;

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
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

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_6_prep_simple );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_2 = Py_True;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dtype );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_dtype" );
        exception_tb = NULL;

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_dtype;

    frame_function->f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_str );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_typestr );
        PyCell_SET( var_typestr, tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = par_simple_type;

    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__typecodes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typecodes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_typecodes" );
        exception_tb = NULL;

        exception_lineno = 339;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = PyCell_GET( var_typestr );

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typestr" );
        exception_tb = NULL;

        exception_lineno = 339;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_FUNCTION_numpy$ctypeslib$$$function_6_prep_simple$$$function_1___array_interface__( var_typestr );
    assert( var___array_interface__ == NULL );
    var___array_interface__ = tmp_assign_source_4;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_property );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = var___array_interface__;

    frame_function->f_lineno = 351;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_simple_type;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___array_interface__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 351;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
            if ( par_simple_type )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_simple_type,
                    par_simple_type
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

            if ( var_typestr->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typestr,
                    var_typestr->ob_ref
                );

                assert( res == 0 );
            }

            if ( var___array_interface__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___array_interface__,
                    var___array_interface__
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_6_prep_simple );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_simple_type );
    Py_DECREF( par_simple_type );
    par_simple_type = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_simple_type );
    Py_DECREF( par_simple_type );
    par_simple_type = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_6_prep_simple );
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


static PyObject *impl_numpy$ctypeslib$$$function_6_prep_simple$$$function_1___array_interface__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_345acb5aba877ec30d46293a4df22dff, module_numpy$ctypeslib );
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
    tmp_return_value = _PyDict_NewPresized( 7 );
    tmp_dict_value_1 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typestr" );
        exception_tb = NULL;

        exception_lineno = 342;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_dict_value_1, 0, tmp_list_element_1 );
    tmp_dict_key_1 = const_str_plain_descr;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = par_self;

    tmp_dict_key_2 = const_str_plain___ref;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = Py_None;
    tmp_dict_key_3 = const_str_plain_strides;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = const_tuple_empty;
    tmp_dict_key_4 = const_str_plain_shape;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = const_int_pos_3;
    tmp_dict_key_5 = const_str_plain_version;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = PyCell_GET( self->m_closure[0] );

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typestr" );
        exception_tb = NULL;

        exception_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_typestr;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = PyTuple_New( 2 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 348;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addressof );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 348;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 348;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 348;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_7, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_False;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dict_value_7, 1, tmp_tuple_element_2 );
    tmp_dict_key_7 = const_str_plain_data;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
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

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typestr,
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_6_prep_simple$$$function_1___array_interface__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_6_prep_simple$$$function_1___array_interface__ );
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


static PyObject *impl_numpy$ctypeslib$$$function_7_prep_array( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array_type = python_pars[ 0 ];
    PyCellObject *var_shape = PyCell_EMPTY();
    PyObject *var_ob = NULL;
    PyObject *var_ai = NULL;
    PyCellObject *var_descr = PyCell_EMPTY();
    PyCellObject *var_typestr = PyCell_EMPTY();
    PyObject *var___array_interface__ = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_result;
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
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c1053178d727e1b38e5d84850bc5878a, module_numpy$ctypeslib );
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
    tmp_source_name_1 = par_array_type;

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
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

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_7_prep_array );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_2 = Py_True;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    tmp_assign_source_3 = PyList_New( 0 );
    {
        PyObject *old = PyCell_GET( var_shape );
        PyCell_SET( var_shape, tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = par_array_type;

    assert( var_ob == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_ob = tmp_assign_source_4;

    loop_start_1:;
    tmp_type_arg_1 = var_ob;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 379;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ARRAY_TYPE );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ARRAY_TYPE );
    }

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ARRAY_TYPE" );
        exception_tb = NULL;

        exception_lineno = 379;
        goto frame_exception_exit_1;
    }

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    tmp_source_name_2 = PyCell_GET( var_shape );

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_ob;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__length_ );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 380;
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


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_ob;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__type_ );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ob;
        var_ob = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_tuple_arg_1 = PyCell_GET( var_shape );

    if ( tmp_tuple_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 382;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_shape );
        PyCell_SET( var_shape, tmp_assign_source_6 );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = var_ob;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 383;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 383;
    tmp_source_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___array_interface__ );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto frame_exception_exit_1;
    }
    assert( var_ai == NULL );
    var_ai = tmp_assign_source_7;

    tmp_subscribed_name_1 = var_ai;

    tmp_subscript_name_1 = const_str_plain_descr;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_descr );
        PyCell_SET( var_descr, tmp_assign_source_8 );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_ai;

    tmp_subscript_name_2 = const_str_plain_typestr;
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_typestr );
        PyCell_SET( var_typestr, tmp_assign_source_9 );
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = MAKE_FUNCTION_numpy$ctypeslib$$$function_7_prep_array$$$function_1___array_interface__( var_descr, var_shape, var_typestr );
    assert( var___array_interface__ == NULL );
    var___array_interface__ = tmp_assign_source_10;

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_property );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_2 = var___array_interface__;

    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_array_type;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___array_interface__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
            if ( par_array_type )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_array_type,
                    par_array_type
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

            if ( var_ob )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ob,
                    var_ob
                );

                assert( res == 0 );
            }

            if ( var_ai )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ai,
                    var_ai
                );

                assert( res == 0 );
            }

            if ( var_descr->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_descr,
                    var_descr->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_typestr->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typestr,
                    var_typestr->ob_ref
                );

                assert( res == 0 );
            }

            if ( var___array_interface__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___array_interface__,
                    var___array_interface__
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_7_prep_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array_type );
    Py_DECREF( par_array_type );
    par_array_type = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_ob );
    var_ob = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    CHECK_OBJECT( (PyObject *)var_descr );
    Py_DECREF( var_descr );
    var_descr = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_array_type );
    Py_DECREF( par_array_type );
    par_array_type = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_ob );
    var_ob = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    CHECK_OBJECT( (PyObject *)var_descr );
    Py_DECREF( var_descr );
    var_descr = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_7_prep_array );
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


static PyObject *impl_numpy$ctypeslib$$$function_7_prep_array$$$function_1___array_interface__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f01cdc0d3e876d0a50481b279abf348c, module_numpy$ctypeslib );
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
    tmp_return_value = _PyDict_NewPresized( 7 );
    tmp_dict_value_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "descr" );
        exception_tb = NULL;

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_descr;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_self;

    tmp_dict_key_2 = const_str_plain___ref;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = Py_None;
    tmp_dict_key_3 = const_str_plain_strides;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = PyCell_GET( self->m_closure[1] );

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "shape" );
        exception_tb = NULL;

        exception_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_shape;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = const_int_pos_3;
    tmp_dict_key_5 = const_str_plain_version;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = PyCell_GET( self->m_closure[2] );

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typestr" );
        exception_tb = NULL;

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_typestr;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = PyTuple_New( 2 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addressof );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_7, 1, tmp_tuple_element_1 );
    tmp_dict_key_7 = const_str_plain_data;
    PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
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

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_descr,
                    self->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_shape,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typestr,
                    self->m_closure[2]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_7_prep_array$$$function_1___array_interface__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_7_prep_array$$$function_1___array_interface__ );
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


static PyObject *impl_numpy$ctypeslib$$$function_8_prep_pointer( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pointer_obj = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *var_contents = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_inter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e07dc5adc6153621ad943d2952d755b3, module_numpy$ctypeslib );
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
    tmp_source_name_1 = par_pointer_obj;

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
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

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_prep_pointer );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_2 = Py_True;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    tmp_source_name_2 = par_pointer_obj;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_contents );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        goto frame_exception_exit_1;
    }
    assert( var_contents == NULL );
    var_contents = tmp_assign_source_3;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dtype );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_dtype" );
        exception_tb = NULL;

        exception_lineno = 409;
        goto frame_exception_exit_1;
    }

    tmp_type_arg_1 = var_contents;

    tmp_args_element_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_args_element_name_1 != NULL );
    frame_function->f_lineno = 409;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        goto frame_exception_exit_1;
    }
    assert( var_dtype == NULL );
    var_dtype = tmp_assign_source_4;

    tmp_assign_source_5 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = const_int_pos_3;
    tmp_dict_key_1 = const_str_plain_version;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_3 = var_dtype;

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_str );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 412;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_typestr;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = PyTuple_New( 2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_dict_value_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_addressof );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_contents;

    frame_function->f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_3, 1, tmp_tuple_element_1 );
    tmp_dict_key_3 = const_str_plain_data;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = par_shape;

    tmp_dict_key_4 = const_str_plain_shape;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_4, tmp_dict_value_4 );
    assert( var_inter == NULL );
    var_inter = tmp_assign_source_5;

    tmp_assattr_name_1 = var_inter;

    tmp_assattr_target_1 = par_pointer_obj;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___array_interface__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
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
            if ( par_pointer_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pointer_obj,
                    par_pointer_obj
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

            if ( var_contents )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_contents,
                    var_contents
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

            if ( var_inter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_inter,
                    var_inter
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_prep_pointer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pointer_obj );
    Py_DECREF( par_pointer_obj );
    par_pointer_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_contents );
    var_contents = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_inter );
    var_inter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pointer_obj );
    Py_DECREF( par_pointer_obj );
    par_pointer_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_contents );
    var_contents = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_inter );
    var_inter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_prep_pointer );
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


static PyObject *impl_numpy$ctypeslib$$$function_9_as_array( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *var_tp = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_type_arg_1 = par_obj;

    tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( var_tp == NULL );
    var_tp = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1b6342214ceee66ab2d899deb7bd5455, module_numpy$ctypeslib );
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
    tmp_source_name_1 = var_tp;

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
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
    tmp_hasattr_source_1 = par_obj;

    tmp_hasattr_attr_1 = const_str_plain_contents;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_pointer );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prep_pointer );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "prep_pointer" );
        exception_tb = NULL;

        exception_lineno = 432;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_obj;

    tmp_args_element_name_2 = par_shape;

    frame_function->f_lineno = 432;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_array );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prep_array );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "prep_array" );
        exception_tb = NULL;

        exception_lineno = 434;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_tp;

    frame_function->f_lineno = 434;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_as_array );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 435;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_obj;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 435;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        goto frame_exception_exit_1;
    }
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
            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
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

            if ( var_tp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tp,
                    var_tp
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_as_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_tp );
    Py_DECREF( var_tp );
    var_tp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_tp );
    Py_DECREF( var_tp );
    var_tp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_as_array );
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


static PyObject *impl_numpy$ctypeslib$$$function_10_as_ctypes( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *var_ai = NULL;
    PyObject *var_addr = NULL;
    PyObject *var_readonly = NULL;
    PyObject *var_tp = NULL;
    PyObject *var_dim = NULL;
    PyObject *var_result = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7c7342dbc694988edeb7799577b2a0b6, module_numpy$ctypeslib );
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
    tmp_source_name_1 = par_obj;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        goto frame_exception_exit_1;
    }
    assert( var_ai == NULL );
    var_ai = tmp_assign_source_1;

    tmp_subscribed_name_1 = var_ai;

    tmp_subscript_name_1 = const_str_plain_strides;
    tmp_cond_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 441;
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
    tmp_make_exception_arg_1 = const_str_digest_5b09d61a27343621d029a01f97434bb3;
    frame_function->f_lineno = 442;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 442;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_subscribed_name_2 = var_ai;

    tmp_subscript_name_2 = const_str_plain_version;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 443;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_a1c179c92fdc674608c39fa15e8cce51;
    frame_function->f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 444;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code:
    tmp_subscribed_name_3 = var_ai;

    tmp_subscript_name_3 = const_str_plain_data;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_3 == NULL )
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


        exception_lineno = 445;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_4 == NULL )
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


        exception_lineno = 445;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    assert( var_addr == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_addr = tmp_assign_source_5;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    assert( var_readonly == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_readonly = tmp_assign_source_6;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_cond_value_2 = var_readonly;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
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
    tmp_make_exception_arg_3 = const_str_digest_d9a6c45fcf44af5918c67465b2eae108;
    frame_function->f_lineno = 447;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 447;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__typecodes );

    if (unlikely( tmp_subscribed_name_4 == NULL ))
    {
        tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typecodes );
    }

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_typecodes" );
        exception_tb = NULL;

        exception_lineno = 448;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_5 = var_ai;

    tmp_subscript_name_5 = const_str_plain_typestr;
    tmp_subscript_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_subscript_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        goto frame_exception_exit_1;
    }
    assert( var_tp == NULL );
    var_tp = tmp_assign_source_7;

    tmp_subscribed_name_7 = var_ai;

    tmp_subscript_name_6 = const_str_plain_shape;
    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = const_slice_none_none_int_neg_1;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            frame_function->f_lineno = 449;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_dim;
        var_dim = tmp_assign_source_10;
        Py_INCREF( var_dim );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_tp;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tp" );
        exception_tb = NULL;

        exception_lineno = 450;
        goto try_except_handler_3;
    }

    tmp_right_name_1 = var_dim;

    tmp_assign_source_11 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_tp;
        var_tp = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
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

    tmp_source_name_2 = var_tp;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tp" );
        exception_tb = NULL;

        exception_lineno = 451;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_from_address );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_addr;

    frame_function->f_lineno = 451;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_12;

    tmp_assattr_name_1 = var_ai;

    tmp_assattr_target_1 = var_result;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___keep, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
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
            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );

                assert( res == 0 );
            }

            if ( var_ai )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ai,
                    var_ai
                );

                assert( res == 0 );
            }

            if ( var_addr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_addr,
                    var_addr
                );

                assert( res == 0 );
            }

            if ( var_readonly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_readonly,
                    var_readonly
                );

                assert( res == 0 );
            }

            if ( var_tp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tp,
                    var_tp
                );

                assert( res == 0 );
            }

            if ( var_dim )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dim,
                    var_dim
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_10_as_ctypes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)var_ai );
    Py_DECREF( var_ai );
    var_ai = NULL;

    CHECK_OBJECT( (PyObject *)var_addr );
    Py_DECREF( var_addr );
    var_addr = NULL;

    CHECK_OBJECT( (PyObject *)var_readonly );
    Py_DECREF( var_readonly );
    var_readonly = NULL;

    Py_XDECREF( var_tp );
    var_tp = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( var_readonly );
    var_readonly = NULL;

    Py_XDECREF( var_tp );
    var_tp = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_10_as_ctypes );
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



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_1__check_retval_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$class_1__ndptr$$$function_1__check_retval_,
        const_str_plain__check_retval_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3af811d23232c37dd3405b47c254b394,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_0f914585e1e3f1788d6585cad69f94bd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_2___array_interface__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$class_1__ndptr$$$function_2___array_interface__,
        const_str_plain___array_interface__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f26e0a1139cff1bcfa1a2453b641c8a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$class_1__ndptr$$$function_3_from_param(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$class_1__ndptr$$$function_3_from_param,
        const_str_plain_from_param,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a122b943895dbcbb9922dd6f9eec9c62,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_10_as_ctypes(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_10_as_ctypes,
        const_str_plain_as_ctypes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7c7342dbc694988edeb7799577b2a0b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_e2804ac65c6fbdd5accf55e43cffbd99
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_1__dummy(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_1__dummy,
        const_str_plain__dummy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_835bbe3aba777cd40ab20535368a43e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_b71718e9ee231439014d32459ca5aebb
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_2_load_library(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_2_load_library,
        const_str_plain_load_library,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a10f085e529fa38f0727fe102a319dba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_182d9645776caa3f6fe486255d2b9844
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_3__num_fromflags(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_3__num_fromflags,
        const_str_plain__num_fromflags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b2a0925632306c05e493c00de5024c02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_4__flags_fromnum(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_4__flags_fromnum,
        const_str_plain__flags_fromnum,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10af15d11223273bb5b221e8cc9cfd6a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_5_ndpointer( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_5_ndpointer,
        const_str_plain_ndpointer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f86a36a5675636127baf3be1c11c484,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_1da87a8dd68efa7aad16166393ba2ffe
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_6_prep_simple(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_6_prep_simple,
        const_str_plain_prep_simple,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_21381180084808fdc42e6001ba0ee389,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_a9e44db0a1490ce98218807379f1405e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_6_prep_simple$$$function_1___array_interface__( PyCellObject *closure_typestr )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
    closure[0] = closure_typestr;
    Py_INCREF( closure[0] );


    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_6_prep_simple$$$function_1___array_interface__,
        const_str_plain___array_interface__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_345acb5aba877ec30d46293a4df22dff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_7_prep_array(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_7_prep_array,
        const_str_plain_prep_array,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1053178d727e1b38e5d84850bc5878a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_73590e51d1e1c9cc5fecc41c3633ed39
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_7_prep_array$$$function_1___array_interface__( PyCellObject *closure_descr, PyCellObject *closure_shape, PyCellObject *closure_typestr )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(3 * sizeof(PyCellObject *));
    closure[0] = closure_descr;
    Py_INCREF( closure[0] );
    closure[1] = closure_shape;
    Py_INCREF( closure[1] );
    closure[2] = closure_typestr;
    Py_INCREF( closure[2] );


    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_7_prep_array$$$function_1___array_interface__,
        const_str_plain___array_interface__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f01cdc0d3e876d0a50481b279abf348c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        closure,
        3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_8_prep_pointer(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_8_prep_pointer,
        const_str_plain_prep_pointer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e07dc5adc6153621ad943d2952d755b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_b63e97201afff05bc02e60c6633f99a8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_9_as_array( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_9_as_array,
        const_str_plain_as_array,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1b6342214ceee66ab2d899deb7bd5455,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_a2941e7fbded98383d41b07f0ec64d12
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$ctypeslib =
{
    PyModuleDef_HEAD_INIT,
    "numpy.ctypeslib",   /* m_name */
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

MOD_INIT_DECL( numpy$ctypeslib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$ctypeslib );
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

    // puts( "in initnumpy$ctypeslib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$ctypeslib = Py_InitModule4(
        "numpy.ctypeslib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$ctypeslib = PyModule_Create( &mdef_numpy$ctypeslib );
#endif

    moduledict_numpy$ctypeslib = (PyDictObject *)((PyModuleObject *)module_numpy$ctypeslib)->md_dict;

    CHECK_OBJECT( module_numpy$ctypeslib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5c326258629e22294a67a54ecf742b9b, module_numpy$ctypeslib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$ctypeslib );

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
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    int tmp_exc_match_exception_match_1;
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
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_b3e01b7f6fe965902fb0f2c5fe538d06;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_36261d5cd3967381a30efca3c9d08368;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_54194ab635e74563c5cfcba2eda8536d_list );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_1bc5b13f6016dc990eec58da0ae52004, module_numpy$ctypeslib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 57;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 57;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_3, tmp_import_globals_3, const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_integer );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_integer, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ndarray );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ndarray, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_dtype );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_deprecate );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_deprecate, tmp_assign_source_12 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_13 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 59;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain__flagdict );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagdict, tmp_assign_source_14 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 59;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_flagsobj );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_flagsobj, tmp_assign_source_15 );
    // Tried code:
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 62;
    tmp_assign_source_16 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_10, tmp_import_globals_10, Py_None, const_int_0 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_16 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
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
    tmp_assign_source_17 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_17 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_compare_left_2 == NULL ))
    {
        tmp_compare_left_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

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
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$ctypeslib$$$function_1__dummy(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy, tmp_assign_source_18 );
    tmp_assign_source_19 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_19 == NULL ))
    {
        tmp_assign_source_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes_load_library, tmp_assign_source_19 );
    tmp_assign_source_20 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_20 == NULL ))
    {
        tmp_assign_source_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_load_library, tmp_assign_source_20 );
    tmp_assign_source_21 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_21 == NULL ))
    {
        tmp_assign_source_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_ctypes, tmp_assign_source_21 );
    tmp_assign_source_22 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_22 == NULL ))
    {
        tmp_assign_source_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_array, tmp_assign_source_22 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 82;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_intp_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_intp );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_c_intp, tmp_assign_source_23 );
    tmp_assign_source_24 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_assign_source_24 != NULL );
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr_base, tmp_assign_source_24 );
    goto branch_end_2;
    branch_no_2:;
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$ctypeslib)->md_dict;
    frame_module->f_lineno = 85;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_770dfc7c45a247e1a34a824431aca553, tmp_import_globals_12, tmp_import_globals_12, Py_None, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_9 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__internal );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_nic, tmp_assign_source_25 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_nic );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nic );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nic" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__getintp_ctype );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 86;
    tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_c_intp, tmp_assign_source_26 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$ctypeslib, const_str_plain_nic );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1637 ], 25, 0 );
        exception_tb = NULL;

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_c_void_p );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr_base, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$ctypeslib$$$function_2_load_library(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_load_library, tmp_assign_source_28 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_deprecate );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deprecate );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "deprecate" );
        exception_tb = NULL;

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_load_library );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_load_library );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "load_library" );
        exception_tb = NULL;

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_str_plain_ctypes_load_library;
    tmp_args_element_name_3 = const_str_plain_load_library;
    frame_module->f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes_load_library, tmp_assign_source_29 );
    branch_end_2:;
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$ctypeslib$$$function_3__num_fromflags(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__num_fromflags, tmp_assign_source_30 );
    tmp_assign_source_31 = LIST_COPY( const_list_a3141bdf77735564bbf18197c00a6f94_list );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagnames, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$ctypeslib$$$function_4__flags_fromnum(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum, tmp_assign_source_32 );
    // Tried code:
    tmp_assign_source_33 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr_base );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ndptr_base );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ndptr_base" );
        exception_tb = NULL;

        exception_lineno = 177;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_33;

    tmp_assign_source_34 = impl_numpy$ctypeslib$$$class_1__ndptr( NULL );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_34;

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
    tmp_assign_source_35 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_35 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_35;

    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_4 = const_str_plain__ndptr;
    tmp_args_element_name_5 = tmp_class_creation_1__bases;

    tmp_args_element_name_6 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_36;

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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_37 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr, tmp_assign_source_37 );
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

    tmp_assign_source_38 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__pointer_type_cache, tmp_assign_source_38 );
    tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
    tmp_assign_source_39 = MAKE_FUNCTION_numpy$ctypeslib$$$function_5_ndpointer( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ndpointer, tmp_assign_source_39 );
    tmp_compare_left_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_compare_left_4 == NULL ))
    {
        tmp_compare_left_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_40 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_assign_source_40 == NULL ))
    {
        tmp_assign_source_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_assign_source_40 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 322;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct, tmp_assign_source_40 );
    tmp_assign_source_41 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__typecodes, tmp_assign_source_41 );
    tmp_assign_source_42 = MAKE_FUNCTION_numpy$ctypeslib$$$function_6_prep_simple(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_simple, tmp_assign_source_42 );
    tmp_assign_source_43 = PyList_New( 3 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = PyTuple_New( 5 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_byte );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_c_short );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_c_int );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 2, tmp_tuple_element_3 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_c_long );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 3, tmp_tuple_element_3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_c_longlong );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 4, tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain_i;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_43, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = PyTuple_New( 5 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_c_ubyte );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 0, tmp_tuple_element_5 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_c_ushort );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 1, tmp_tuple_element_5 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_c_uint );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 2, tmp_tuple_element_5 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_c_ulong );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 3, tmp_tuple_element_5 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_c_ulonglong );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 4, tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_str_plain_u;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_43, 1, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_6 = PyTuple_New( 2 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_c_float );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_6, 0, tmp_tuple_element_7 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_c_double );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_6, 1, tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_str_plain_f;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_6 );
    PyList_SET_ITEM( tmp_assign_source_43, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_simple_types, tmp_assign_source_43 );
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_simple_types );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_simple_types );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "simple_types" );
        exception_tb = NULL;

        exception_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_44;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_45 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_45 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_module->f_lineno = 360;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_45;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_46;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_47 == NULL )
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


        exception_lineno = 360;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_47;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_48 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_48 == NULL )
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


        exception_lineno = 360;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_48;
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

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    tmp_assign_source_49 = tmp_tuple_unpack_1__element_1;

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_49 );
    tmp_assign_source_50 = tmp_tuple_unpack_1__element_2;

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_code, tmp_assign_source_50 );
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_types );

    if (unlikely( tmp_iter_arg_3 == NULL ))
    {
        tmp_iter_arg_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
    }

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "types" );
        exception_tb = NULL;

        exception_lineno = 361;
        goto try_except_handler_3;
    }

    tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_51;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_52 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_52 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_module->f_lineno = 361;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_52;
        Py_XDECREF( old );
    }

    tmp_assign_source_53 = tmp_for_loop_2__iter_value;

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_tp, tmp_assign_source_53 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_simple );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prep_simple );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "prep_simple" );
        exception_tb = NULL;

        exception_lineno = 362;
        goto try_except_handler_5;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_tp );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tp );
    }

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "tp" );
        exception_tb = NULL;

        exception_lineno = 362;
        goto try_except_handler_5;
    }

    tmp_left_name_1 = const_str_digest_6e67341cb4da9db91dba5c39139bf34f;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_code );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_code );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "code" );
        exception_tb = NULL;

        exception_lineno = 362;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_8 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 362;
        goto try_except_handler_5;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_sizeof );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 362;
        goto try_except_handler_5;
    }
    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_tp );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tp );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "tp" );
        exception_tb = NULL;

        exception_lineno = 362;
        goto try_except_handler_5;
    }

    frame_module->f_lineno = 362;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_tuple_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 362;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_8 );
    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        goto try_except_handler_5;
    }
    frame_module->f_lineno = 362;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
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

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 367;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_c_int );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_type_arg_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_54 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ARRAY_TYPE, tmp_assign_source_54 );
    tmp_assign_source_55 = MAKE_FUNCTION_numpy$ctypeslib$$$function_7_prep_array(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_array, tmp_assign_source_55 );
    tmp_assign_source_56 = MAKE_FUNCTION_numpy$ctypeslib$$$function_8_prep_pointer(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_pointer, tmp_assign_source_56 );
    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_57 = MAKE_FUNCTION_numpy$ctypeslib$$$function_9_as_array( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_array, tmp_assign_source_57 );
    tmp_assign_source_58 = MAKE_FUNCTION_numpy$ctypeslib$$$function_10_as_ctypes(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_ctypes, tmp_assign_source_58 );
    branch_no_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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

    return MOD_RETURN_VALUE( module_numpy$ctypeslib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
