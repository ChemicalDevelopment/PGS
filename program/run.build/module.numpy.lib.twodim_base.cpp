/* Generated code for Python source for module 'numpy.lib.twodim_base'
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

/* The _module_numpy$lib$twodim_base is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$twodim_base;
PyDictObject *moduledict_numpy$lib$twodim_base;

/* The module constants used, if any. */
static PyObject *const_str_plain_increasing;
static PyObject *const_str_digest_b0b889e3bdec64e5d710c2982d3c9612;
static PyObject *const_tuple_1d52c955a5be8eef041323d06326c517_tuple;
static PyObject *const_str_digest_5bb997ec596102019e0cf142d2253c7f;
static PyObject *const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple;
extern PyObject *const_str_plain_histogramdd;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_eye;
static PyObject *const_str_plain_tri;
extern PyObject *const_str_plain_dtype;
static PyObject *const_tuple_str_plain_iinfo_tuple;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_high;
extern PyObject *const_str_plain___array_wrap__;
extern PyObject *const_str_plain_ones;
extern PyObject *const_tuple_int_0_none_tuple;
static PyObject *const_list_9682bd0fceceb984d4c7136d9fb7127b_list;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_845184a5e61ae26c577d35960fece434_tuple;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_xedges;
extern PyObject *const_str_plain_k;
static PyObject *const_str_plain_histogram2d;
static PyObject *const_tuple_str_plain_histogramdd_tuple;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_asarray;
static PyObject *const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple;
extern PyObject *const_str_plain_range;
static PyObject *const_tuple_a0df4c3141334dfec536d87a4c534040_tuple;
static PyObject *const_str_digest_e9231c485329377742d1fbf215226e45;
extern PyObject *const_tuple_slice_none_none_none_int_0_tuple;
static PyObject *const_tuple_slice_none_none_none_slice_none_none_int_neg_1_tuple;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_int64;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_a1c8000f54775f3dfad5ba086cefac0e;
extern PyObject *const_tuple_none_false_tuple;
extern PyObject *const_str_plain_abs;
static PyObject *const_tuple_slice_none_none_int_neg_1_ellipsis_tuple;
static PyObject *const_str_digest_eb4014155cbc2dd5702b264661c1d3cc;
extern PyObject *const_str_plain_int16;
static PyObject *const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_1ff58fa2c03e82b2c700a4f839185785;
static PyObject *const_str_plain_tril_indices_from;
extern PyObject *const_str_plain_accumulate;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_y;
static PyObject *const_str_plain_triu_indices;
static PyObject *const_str_digest_c8ba90c2fb39c2041d5dff4748e8e593;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_m_str_plain_k_str_plain_mask_tuple;
extern PyObject *const_str_plain_out;
extern PyObject *const_tuple_int_pos_10_none_false_none_tuple;
static PyObject *const_str_digest_b31c9a93a972930d3159d97af9da2764;
static PyObject *const_str_digest_92cf51be16d6040287733b53c7c5c077;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_diagonal;
static PyObject *const_str_plain__min_int;
extern PyObject *const_slice_none_none_int_neg_1;
static PyObject *const_str_plain_i2;
static PyObject *const_str_digest_f554be35602f73290d2e68f1670b1d90;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_190674ab1b0b99a621e1d58e97ef6a4b;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_cc6303726f55ab460dd88e247a539612;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_str_plain_rot90;
extern PyObject *const_str_plain_astype;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_str_plain_tril_indices;
extern PyObject *const_str_plain_twodim_base;
extern PyObject *const_str_plain_hist;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
static PyObject *const_str_plain_mask_func;
static PyObject *const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple;
extern PyObject *const_str_plain_where;
static PyObject *const_str_plain_flipud;
extern PyObject *const_str_plain_empty;
static PyObject *const_str_digest_c0f60b876c7992a38ad195b64138caa9;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_vander;
static PyObject *const_str_plain_fi;
extern PyObject *const_str_digest_4dee642e949d4b9ad453719dec9278da;
static PyObject *const_str_digest_7dd65e6a290c972121c6fc07e4d2cce6;
static PyObject *const_str_digest_885b311d1c2f49c5bf469abd4677324e;
extern PyObject *const_str_plain_weights;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_yedges;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_promote_types;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_i;
static PyObject *const_str_digest_8db7deb73518d5eb9428b5e789f98f81;
static PyObject *const_str_plain_triu_indices_from;
extern PyObject *const_str_plain_a;
static PyObject *const_str_plain_tril;
static PyObject *const_tuple_str_plain_low_str_plain_high_tuple;
static PyObject *const_str_plain_fliplr;
extern PyObject *const_str_plain_diagflat;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_0923f4cba46c5531a4a01423f4d1e8f2;
extern PyObject *const_str_plain_triu;
static PyObject *const_str_plain_i4;
static PyObject *const_str_digest_f5eca5122a41cbaf6abb2803de371c2e;
static PyObject *const_str_plain_i1;
extern PyObject *const_str_plain_axis;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
extern PyObject *const_str_plain_int8;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_low;
static PyObject *const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple;
static PyObject *const_tuple_str_plain_m_str_plain_k_tuple;
extern PyObject *const_str_plain_multiply;
static PyObject *const_str_digest_4f2f674019dc13ca45a44400ce8f4112;
static PyObject *const_str_digest_0211a23b139de09dee8b6a9b3989d52e;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_edges;
extern PyObject *const_str_plain_iinfo;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_arr_str_plain_k_tuple;
static PyObject *const_str_digest_6e306213669fa0ddc468fc2df65a334c;
extern PyObject *const_str_plain_arr;
static PyObject *const_str_digest_7db8ae6f206bed689d3ca7f4f98b34b5;
extern PyObject *const_str_plain_arange;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_n_str_plain_k_str_plain_m_tuple;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_greater_equal;
extern PyObject *const_str_plain_int32;
static PyObject *const_str_plain_mask_indices;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_tuple_str_plain_m_tuple;
extern PyObject *const_str_plain_normed;
extern PyObject *const_str_plain_bins;
static PyObject *const_str_digest_b1884aa3c33c7c5579d0253f1c770327;
static PyObject *const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_e522dd1f79eb6d4a886c917f60259711;
extern PyObject *const_str_plain_outer;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_b873592a5374a505cacad96d2e4d5e42;
extern PyObject *const_str_plain_float;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_increasing = UNSTREAM_STRING( &constant_bin[ 451571 ], 10, 1 );
    const_str_digest_b0b889e3bdec64e5d710c2982d3c9612 = UNSTREAM_STRING( &constant_bin[ 1198996 ], 914, 0 );
    const_tuple_1d52c955a5be8eef041323d06326c517_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 0, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 1, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 2, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 3, const_str_plain_greater_equal ); Py_INCREF( const_str_plain_greater_equal );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 4, const_str_plain_multiply ); Py_INCREF( const_str_plain_multiply );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 5, const_str_plain_ones ); Py_INCREF( const_str_plain_ones );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 6, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 7, const_str_plain_where ); Py_INCREF( const_str_plain_where );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 8, const_str_plain_int8 ); Py_INCREF( const_str_plain_int8 );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 9, const_str_plain_int16 ); Py_INCREF( const_str_plain_int16 );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 10, const_str_plain_int32 ); Py_INCREF( const_str_plain_int32 );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 11, const_str_plain_int64 ); Py_INCREF( const_str_plain_int64 );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 12, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 13, const_str_plain_promote_types ); Py_INCREF( const_str_plain_promote_types );
    PyTuple_SET_ITEM( const_tuple_1d52c955a5be8eef041323d06326c517_tuple, 14, const_str_plain_diagonal ); Py_INCREF( const_str_plain_diagonal );
    const_str_digest_5bb997ec596102019e0cf142d2253c7f = UNSTREAM_STRING( &constant_bin[ 1199910 ], 1002, 0 );
    const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 2, const_str_plain_bins ); Py_INCREF( const_str_plain_bins );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 3, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 4, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 5, const_str_plain_weights ); Py_INCREF( const_str_plain_weights );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 6, const_str_plain_histogramdd ); Py_INCREF( const_str_plain_histogramdd );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 7, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    const_str_plain_xedges = UNSTREAM_STRING( &constant_bin[ 1200912 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 8, const_str_plain_xedges ); Py_INCREF( const_str_plain_xedges );
    const_str_plain_yedges = UNSTREAM_STRING( &constant_bin[ 1200918 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 9, const_str_plain_yedges ); Py_INCREF( const_str_plain_yedges );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 10, const_str_plain_hist ); Py_INCREF( const_str_plain_hist );
    PyTuple_SET_ITEM( const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 11, const_str_plain_edges ); Py_INCREF( const_str_plain_edges );
    const_str_plain_tri = UNSTREAM_STRING( &constant_bin[ 1955 ], 3, 1 );
    const_tuple_str_plain_iinfo_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_iinfo_tuple, 0, const_str_plain_iinfo ); Py_INCREF( const_str_plain_iinfo );
    const_list_9682bd0fceceb984d4c7136d9fb7127b_list = PyList_New( 16 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 0, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 1, const_str_plain_diagflat ); Py_INCREF( const_str_plain_diagflat );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 2, const_str_plain_eye ); Py_INCREF( const_str_plain_eye );
    const_str_plain_fliplr = UNSTREAM_STRING( &constant_bin[ 1075483 ], 6, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 3, const_str_plain_fliplr ); Py_INCREF( const_str_plain_fliplr );
    const_str_plain_flipud = UNSTREAM_STRING( &constant_bin[ 1075530 ], 6, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 4, const_str_plain_flipud ); Py_INCREF( const_str_plain_flipud );
    const_str_plain_rot90 = UNSTREAM_STRING( &constant_bin[ 1075574 ], 5, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 5, const_str_plain_rot90 ); Py_INCREF( const_str_plain_rot90 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 6, const_str_plain_tri ); Py_INCREF( const_str_plain_tri );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 7, const_str_plain_triu ); Py_INCREF( const_str_plain_triu );
    const_str_plain_tril = UNSTREAM_STRING( &constant_bin[ 1200924 ], 4, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 8, const_str_plain_tril ); Py_INCREF( const_str_plain_tril );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 9, const_str_plain_vander ); Py_INCREF( const_str_plain_vander );
    const_str_plain_histogram2d = UNSTREAM_STRING( &constant_bin[ 996882 ], 11, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 10, const_str_plain_histogram2d ); Py_INCREF( const_str_plain_histogram2d );
    const_str_plain_mask_indices = UNSTREAM_STRING( &constant_bin[ 1200928 ], 12, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 11, const_str_plain_mask_indices ); Py_INCREF( const_str_plain_mask_indices );
    const_str_plain_tril_indices = UNSTREAM_STRING( &constant_bin[ 1200940 ], 12, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 12, const_str_plain_tril_indices ); Py_INCREF( const_str_plain_tril_indices );
    const_str_plain_tril_indices_from = UNSTREAM_STRING( &constant_bin[ 1200952 ], 17, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 13, const_str_plain_tril_indices_from ); Py_INCREF( const_str_plain_tril_indices_from );
    const_str_plain_triu_indices = UNSTREAM_STRING( &constant_bin[ 1200969 ], 12, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 14, const_str_plain_triu_indices ); Py_INCREF( const_str_plain_triu_indices );
    const_str_plain_triu_indices_from = UNSTREAM_STRING( &constant_bin[ 1200981 ], 17, 1 );
    PyList_SET_ITEM( const_list_9682bd0fceceb984d4c7136d9fb7127b_list, 15, const_str_plain_triu_indices_from ); Py_INCREF( const_str_plain_triu_indices_from );
    const_tuple_845184a5e61ae26c577d35960fece434_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 2, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 5, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_fi = UNSTREAM_STRING( &constant_bin[ 20 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_845184a5e61ae26c577d35960fece434_tuple, 7, const_str_plain_fi ); Py_INCREF( const_str_plain_fi );
    const_tuple_str_plain_histogramdd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_histogramdd_tuple, 0, const_str_plain_histogramdd ); Py_INCREF( const_str_plain_histogramdd );
    const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple, 0, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple, 1, const_slice_int_pos_1_none_none ); Py_INCREF( const_slice_int_pos_1_none_none );
    const_tuple_a0df4c3141334dfec536d87a4c534040_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a0df4c3141334dfec536d87a4c534040_tuple, 0, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_a0df4c3141334dfec536d87a4c534040_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_a0df4c3141334dfec536d87a4c534040_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_a0df4c3141334dfec536d87a4c534040_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_a0df4c3141334dfec536d87a4c534040_tuple, 4, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_digest_e9231c485329377742d1fbf215226e45 = UNSTREAM_STRING( &constant_bin[ 1200998 ], 63, 0 );
    const_tuple_slice_none_none_none_slice_none_none_int_neg_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_none_slice_none_none_int_neg_1_tuple, 0, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_none_slice_none_none_int_neg_1_tuple, 1, const_slice_none_none_int_neg_1 ); Py_INCREF( const_slice_none_none_int_neg_1 );
    const_str_digest_a1c8000f54775f3dfad5ba086cefac0e = UNSTREAM_STRING( &constant_bin[ 1201061 ], 21, 0 );
    const_tuple_slice_none_none_int_neg_1_ellipsis_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_int_neg_1_ellipsis_tuple, 0, const_slice_none_none_int_neg_1 ); Py_INCREF( const_slice_none_none_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_int_neg_1_ellipsis_tuple, 1, Py_Ellipsis ); Py_INCREF( Py_Ellipsis );
    const_str_digest_eb4014155cbc2dd5702b264661c1d3cc = UNSTREAM_STRING( &constant_bin[ 1201082 ], 23, 0 );
    const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_mask_func = UNSTREAM_STRING( &constant_bin[ 1201105 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple, 1, const_str_plain_mask_func ); Py_INCREF( const_str_plain_mask_func );
    PyTuple_SET_ITEM( const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple, 4, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    const_str_digest_1ff58fa2c03e82b2c700a4f839185785 = UNSTREAM_STRING( &constant_bin[ 1201114 ], 2151, 0 );
    const_str_digest_c8ba90c2fb39c2041d5dff4748e8e593 = UNSTREAM_STRING( &constant_bin[ 1203265 ], 24, 0 );
    const_tuple_str_plain_m_str_plain_k_str_plain_mask_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_k_str_plain_mask_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_k_str_plain_mask_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_k_str_plain_mask_tuple, 2, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_digest_b31c9a93a972930d3159d97af9da2764 = UNSTREAM_STRING( &constant_bin[ 1203289 ], 1933, 0 );
    const_str_digest_92cf51be16d6040287733b53c7c5c077 = UNSTREAM_STRING( &constant_bin[ 1205222 ], 35, 0 );
    const_str_plain__min_int = UNSTREAM_STRING( &constant_bin[ 1205257 ], 8, 1 );
    const_str_plain_i2 = UNSTREAM_STRING( &constant_bin[ 158935 ], 2, 1 );
    const_str_digest_f554be35602f73290d2e68f1670b1d90 = UNSTREAM_STRING( &constant_bin[ 1205265 ], 21, 0 );
    const_str_digest_190674ab1b0b99a621e1d58e97ef6a4b = UNSTREAM_STRING( &constant_bin[ 1205286 ], 1043, 0 );
    const_str_digest_cc6303726f55ab460dd88e247a539612 = UNSTREAM_STRING( &constant_bin[ 1206329 ], 447, 0 );
    const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple, 1, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple, 2, const_str_plain_increasing ); Py_INCREF( const_str_plain_increasing );
    PyTuple_SET_ITEM( const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple, 4, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    const_str_digest_c0f60b876c7992a38ad195b64138caa9 = UNSTREAM_STRING( &constant_bin[ 1206776 ], 755, 0 );
    const_str_digest_7dd65e6a290c972121c6fc07e4d2cce6 = UNSTREAM_STRING( &constant_bin[ 1207531 ], 523, 0 );
    const_str_digest_885b311d1c2f49c5bf469abd4677324e = UNSTREAM_STRING( &constant_bin[ 1208054 ], 46, 0 );
    const_str_digest_8db7deb73518d5eb9428b5e789f98f81 = UNSTREAM_STRING( &constant_bin[ 1208100 ], 1915, 0 );
    const_tuple_str_plain_low_str_plain_high_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_low_str_plain_high_tuple, 0, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    PyTuple_SET_ITEM( const_tuple_str_plain_low_str_plain_high_tuple, 1, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    const_str_digest_0923f4cba46c5531a4a01423f4d1e8f2 = UNSTREAM_STRING( &constant_bin[ 1210015 ], 18, 0 );
    const_str_plain_i4 = UNSTREAM_STRING( &constant_bin[ 341259 ], 2, 1 );
    const_str_digest_f5eca5122a41cbaf6abb2803de371c2e = UNSTREAM_STRING( &constant_bin[ 1210033 ], 742, 0 );
    const_str_plain_i1 = UNSTREAM_STRING( &constant_bin[ 158916 ], 2, 1 );
    const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_m_str_plain_k_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_k_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_k_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_digest_4f2f674019dc13ca45a44400ce8f4112 = UNSTREAM_STRING( &constant_bin[ 1210775 ], 1058, 0 );
    const_str_digest_0211a23b139de09dee8b6a9b3989d52e = UNSTREAM_STRING( &constant_bin[ 1211833 ], 2008, 0 );
    const_tuple_str_plain_arr_str_plain_k_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_k_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_k_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_digest_6e306213669fa0ddc468fc2df65a334c = UNSTREAM_STRING( &constant_bin[ 1213841 ], 4732, 0 );
    const_str_digest_7db8ae6f206bed689d3ca7f4f98b34b5 = UNSTREAM_STRING( &constant_bin[ 1218573 ], 1031, 0 );
    const_tuple_str_plain_n_str_plain_k_str_plain_m_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_k_str_plain_m_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_k_str_plain_m_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_k_str_plain_m_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_digest_b1884aa3c33c7c5579d0253f1c770327 = UNSTREAM_STRING( &constant_bin[ 1219604 ], 45, 0 );
    const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple, 0, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple, 4, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_e522dd1f79eb6d4a886c917f60259711 = UNSTREAM_STRING( &constant_bin[ 1219649 ], 1429, 0 );
    const_str_digest_b873592a5374a505cacad96d2e4d5e42 = UNSTREAM_STRING( &constant_bin[ 1221078 ], 423, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$twodim_base( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_71201ff26b46c286f7c4ee8298cd72d2;
static PyCodeObject *codeobj_a34e3113f4547a9025e0b6e3af872a49;
static PyCodeObject *codeobj_96ea0be6de47bfca2aea38b5ef135b68;
static PyCodeObject *codeobj_96a10eac246ab99316389084cb16ba12;
static PyCodeObject *codeobj_66223ac2d494d4189321d5075b79c3b2;
static PyCodeObject *codeobj_1f809bf034a8276716d253c01b480771;
static PyCodeObject *codeobj_9fae2987a293e1b4f5194b9d9a1fe615;
static PyCodeObject *codeobj_779a67812ff1b81eca6be99e71abbe47;
static PyCodeObject *codeobj_d373e5779f096ab7257a92aeac04713d;
static PyCodeObject *codeobj_705226759249d96855498284e9928f57;
static PyCodeObject *codeobj_d16bd578c459d4e3265fc06676fde283;
static PyCodeObject *codeobj_196d5ca18e1faa4bcbabc87b4c3e7efd;
static PyCodeObject *codeobj_33e83f91e422c141c1ecb48634687e29;
static PyCodeObject *codeobj_247962001ef14f2e4f0b19c6fd181cbb;
static PyCodeObject *codeobj_1f3acb6cbe4bda7587a4b3adb6edc5a5;
static PyCodeObject *codeobj_3ae744f97c2fe7bcc2aa5cd40409a979;
static PyCodeObject *codeobj_afe7e4878d88f80d42c599774e17ec2e;
static PyCodeObject *codeobj_700ab8f97ec3f8dc210090b8f33c201a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e9231c485329377742d1fbf215226e45;
    codeobj_71201ff26b46c286f7c4ee8298cd72d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__min_int, 24, const_tuple_str_plain_low_str_plain_high_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a34e3113f4547a9025e0b6e3af872a49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diag, 244, const_tuple_31df8f4024ed2d69c403eaf42b300893_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_96ea0be6de47bfca2aea38b5ef135b68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diagflat, 315, const_tuple_845184a5e61ae26c577d35960fece434_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_96a10eac246ab99316389084cb16ba12 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eye, 192, const_tuple_5189ae8a0cb1b223328a703f19c1ecd1_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_66223ac2d494d4189321d5075b79c3b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fliplr, 35, const_tuple_str_plain_m_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f809bf034a8276716d253c01b480771 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flipud, 85, const_tuple_str_plain_m_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9fae2987a293e1b4f5194b9d9a1fe615 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_histogram2d, 580, const_tuple_d0847edcd1c5265f6997be8e5603766e_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_779a67812ff1b81eca6be99e71abbe47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mask_indices, 718, const_tuple_6b47d68fcd59a58734cc38836ada9eb7_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d373e5779f096ab7257a92aeac04713d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rot90, 139, const_tuple_str_plain_m_str_plain_k_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_705226759249d96855498284e9928f57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tri, 374, const_tuple_a0df4c3141334dfec536d87a4c534040_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d16bd578c459d4e3265fc06676fde283 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tril, 423, const_tuple_str_plain_m_str_plain_k_str_plain_mask_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_196d5ca18e1faa4bcbabc87b4c3e7efd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tril_indices, 788, const_tuple_str_plain_n_str_plain_k_str_plain_m_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_33e83f91e422c141c1ecb48634687e29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tril_indices_from, 868, const_tuple_str_plain_arr_str_plain_k_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_247962001ef14f2e4f0b19c6fd181cbb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_triu, 461, const_tuple_str_plain_m_str_plain_k_str_plain_mask_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f3acb6cbe4bda7587a4b3adb6edc5a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_triu_indices, 896, const_tuple_str_plain_n_str_plain_k_str_plain_m_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3ae744f97c2fe7bcc2aa5cd40409a979 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_triu_indices_from, 978, const_tuple_str_plain_arr_str_plain_k_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_afe7e4878d88f80d42c599774e17ec2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_twodim_base, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_700ab8f97ec3f8dc210090b8f33c201a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vander, 490, const_tuple_c607e60b92ebf1c186bebd952bbfb316_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_keywords_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_10_triu( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_11_vander( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_12_histogram2d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_13_mask_indices( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_14_tril_indices( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_15_tril_indices_from( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_16_triu_indices( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_17_triu_indices_from( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_1__min_int(  );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_2_fliplr(  );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_3_flipud(  );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_4_rot90( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_5_eye( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_6_diag( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_7_diagflat( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_8_tri( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_9_tril( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$lib$twodim_base$$$function_1__min_int( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_low = python_pars[ 0 ];
    PyObject *par_high = python_pars[ 1 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_71201ff26b46c286f7c4ee8298cd72d2, module_numpy$lib$twodim_base );
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
    tmp_compexpr_left_1 = par_high;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i1 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i1 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "i1" );
        exception_tb = NULL;

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_max );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 26;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_2 = par_low;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i1 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i1 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "i1" );
        exception_tb = NULL;

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
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

        exception_lineno = 26;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int8 );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int8 );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int8" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compexpr_left_3 = par_high;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i2 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i2 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "i2" );
        exception_tb = NULL;

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_LE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 28;
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
    Py_DECREF( tmp_and_left_value_2 );
    tmp_compexpr_left_4 = par_low;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i2 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i2 );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "i2" );
        exception_tb = NULL;

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_min );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = RICH_COMPARE_GE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 28;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int16 );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int16 );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int16" );
        exception_tb = NULL;

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compexpr_left_5 = par_high;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i4 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i4 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "i4" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_max );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_3 = RICH_COMPARE_LE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 30;
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
    Py_DECREF( tmp_and_left_value_3 );
    tmp_compexpr_left_6 = par_low;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i4 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i4 );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "i4" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_min );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = RICH_COMPARE_GE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 30;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int32 );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int32 );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int32" );
        exception_tb = NULL;

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int64 );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int64 );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "int64" );
        exception_tb = NULL;

        exception_lineno = 32;
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
            if ( par_low )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_low,
                    par_low
                );

                assert( res == 0 );
            }

            if ( par_high )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_high,
                    par_high
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_1__min_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_low );
    Py_DECREF( par_low );
    par_low = NULL;

    CHECK_OBJECT( (PyObject *)par_high );
    Py_DECREF( par_high );
    par_high = NULL;

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

    CHECK_OBJECT( (PyObject *)par_low );
    Py_DECREF( par_low );
    par_low = NULL;

    CHECK_OBJECT( (PyObject *)par_high );
    Py_DECREF( par_high );
    par_high = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_1__min_int );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_2_fliplr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
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
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_66223ac2d494d4189321d5075b79c3b2, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_m;

    frame_function->f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_m;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 80;
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
    tmp_make_exception_arg_1 = const_str_digest_a1c8000f54775f3dfad5ba086cefac0e;
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
    branch_no_1:;
    tmp_subscribed_name_1 = par_m;

    tmp_subscript_name_1 = const_tuple_slice_none_none_none_slice_none_none_int_neg_1_tuple;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
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
            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_2_fliplr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_2_fliplr );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_3_flipud( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
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
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f809bf034a8276716d253c01b480771, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_m;

    frame_function->f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_m;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 134;
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
    tmp_make_exception_arg_1 = const_str_digest_f554be35602f73290d2e68f1670b1d90;
    frame_function->f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 135;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = par_m;

    tmp_subscript_name_1 = const_tuple_slice_none_none_int_neg_1_ellipsis_tuple;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
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
            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_3_flipud );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_3_flipud );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_4_rot90( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
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
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d373e5779f096ab7257a92aeac04713d, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_m;

    frame_function->f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_m;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 178;
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
    tmp_make_exception_arg_1 = const_str_digest_0923f4cba46c5531a4a01423f4d1e8f2;
    frame_function->f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 179;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = par_k;

    tmp_right_name_1 = const_int_pos_4;
    tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_compare_left_2 = par_k;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_m;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = par_k;

    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_fliplr );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fliplr );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fliplr" );
        exception_tb = NULL;

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_m;

    frame_function->f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_swapaxes );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 184;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_0_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_4 = par_k;

    tmp_compare_right_4 = const_int_pos_2;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_fliplr );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fliplr );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fliplr" );
        exception_tb = NULL;

        exception_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_flipud );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_flipud );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "flipud" );
        exception_tb = NULL;

        exception_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_m;

    frame_function->f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_fliplr );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fliplr );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fliplr" );
        exception_tb = NULL;

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_m;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_swapaxes );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 189;
    tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_int_0_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;

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
            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_4_rot90 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_4_rot90 );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_5_eye( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_N = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *par_dtype = python_pars[ 3 ];
    PyObject *var_m = NULL;
    PyObject *var_i = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_compare_left_1 = par_M;

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
    tmp_assign_source_1 = par_N;

    {
        PyObject *old = par_M;
        assert( old != NULL );
        par_M = tmp_assign_source_1;
        Py_INCREF( par_M );
        Py_DECREF( old );
    }

    branch_no_1:;
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_96a10eac246ab99316389084cb16ba12, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "zeros" );
        exception_tb = NULL;

        exception_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_N;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_M;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_dtype;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 233;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_2;

    tmp_compare_left_2 = par_k;

    tmp_compare_right_2 = par_M;

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = var_m;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = par_k;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = par_k;

    assert( var_i == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_i = tmp_assign_source_3;

    goto branch_end_3;
    branch_no_3:;
    tmp_operand_name_1 = par_k;

    tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_M;

    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    assert( var_i == NULL );
    var_i = tmp_assign_source_4;

    branch_end_3:;
    tmp_ass_subvalue_1 = const_int_pos_1;
    tmp_slice_source_1 = var_m;

    tmp_left_name_2 = par_M;

    tmp_right_name_2 = par_k;

    tmp_slice_upper_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_start_name_1 = var_i;

    tmp_stop_name_1 = Py_None;
    tmp_left_name_3 = par_M;

    tmp_right_name_3 = const_int_pos_1;
    tmp_step_name_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_step_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subscribed_1 );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_step_name_1 );
    assert( tmp_ass_subscript_1 != NULL );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
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
            if ( par_N )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_N,
                    par_N
                );

                assert( res == 0 );
            }

            if ( par_M )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_M,
                    par_M
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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

            if ( var_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    var_m
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

    tmp_return_value = var_m;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_5_eye );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_5_eye );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_6_diag( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *var_s = NULL;
    PyObject *var_n = NULL;
    PyObject *var_res = NULL;
    PyObject *var_i = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a34e3113f4547a9025e0b6e3af872a49, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 298;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_v;

    frame_function->f_lineno = 298;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_v;
        assert( old != NULL );
        par_v = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_v;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_2;

    tmp_len_arg_1 = var_s;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 300;
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
    tmp_subscribed_name_1 = var_s;

    tmp_subscript_name_1 = const_int_0;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = par_k;

    frame_function->f_lineno = 301;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 301;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_3;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_zeros );

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

        exception_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
    tmp_source_name_2 = par_v;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 302;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 302;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_4;

    tmp_compare_left_2 = par_k;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_5 = par_k;

    assert( var_i == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_i = tmp_assign_source_5;

    goto branch_end_2;
    branch_no_2:;
    tmp_operand_name_1 = par_k;

    tmp_left_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = var_n;

    tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    assert( var_i == NULL );
    var_i = tmp_assign_source_6;

    branch_end_2:;
    tmp_ass_subvalue_1 = par_v;

    tmp_slice_source_1 = var_res;

    tmp_left_name_3 = var_n;

    tmp_right_name_3 = par_k;

    tmp_slice_upper_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_flat );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_start_name_1 = var_i;

    tmp_stop_name_1 = Py_None;
    tmp_left_name_4 = var_n;

    tmp_right_name_4 = const_int_pos_1;
    tmp_step_name_1 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_step_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subscribed_1 );

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_step_name_1 );
    assert( tmp_ass_subscript_1 != NULL );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_2 = var_s;

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_2;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 309;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_diagonal );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diagonal );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diagonal" );
        exception_tb = NULL;

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_v;

    tmp_args_element_name_6 = par_k;

    frame_function->f_lineno = 310;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_make_exception_arg_1 = const_str_digest_c8ba90c2fb39c2041d5dff4748e8e593;
    frame_function->f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 312;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_3:;
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
            if ( par_v )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_v,
                    par_v
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_6_diag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_6_diag );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_7_diagflat( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *var_wrap = NULL;
    PyObject *var_s = NULL;
    PyObject *var_n = NULL;
    PyObject *var_res = NULL;
    PyObject *var_i = NULL;
    PyObject *var_fi = NULL;
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
    PyObject *tmp_args_element_name_9;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_len_arg_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_96ea0be6de47bfca2aea38b5ef135b68, module_numpy$lib$twodim_base );
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
    tmp_source_name_1 = par_v;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_wrap__ );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto try_except_handler_2;
    }
    assert( var_wrap == NULL );
    var_wrap = tmp_assign_source_1;

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


        exception_lineno = 356;
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
    tmp_assign_source_2 = Py_None;
    assert( var_wrap == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_wrap = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_7_diagflat );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 358;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_v;

    frame_function->f_lineno = 358;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ravel );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 358;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_v;
        assert( old != NULL );
        par_v = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_v;

    tmp_assign_source_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_4;

    tmp_left_name_1 = var_s;

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_2 = par_k;

    frame_function->f_lineno = 360;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_5;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "zeros" );
        exception_tb = NULL;

        exception_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = par_v;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 361;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 361;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_6;

    tmp_compare_left_2 = par_k;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 363;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = const_int_0;
    tmp_left_name_2 = var_n;

    tmp_right_name_2 = par_k;

    tmp_args_element_name_6 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 363;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        goto frame_exception_exit_1;
    }
    assert( var_i == NULL );
    var_i = tmp_assign_source_7;

    tmp_left_name_4 = var_i;

    tmp_right_name_3 = par_k;

    tmp_left_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = var_i;

    tmp_right_name_5 = var_n;

    tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    assert( var_fi == NULL );
    var_fi = tmp_assign_source_8;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 366;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = const_int_0;
    tmp_left_name_6 = var_n;

    tmp_right_name_6 = par_k;

    tmp_args_element_name_8 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 366;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto frame_exception_exit_1;
    }
    assert( var_i == NULL );
    var_i = tmp_assign_source_9;

    tmp_left_name_7 = var_i;

    tmp_left_name_9 = var_i;

    tmp_right_name_8 = par_k;

    tmp_left_name_8 = BINARY_OPERATION_SUB( tmp_left_name_9, tmp_right_name_8 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = var_n;

    tmp_right_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_8 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    assert( var_fi == NULL );
    var_fi = tmp_assign_source_10;

    branch_end_2:;
    tmp_ass_subvalue_1 = par_v;

    tmp_source_name_4 = var_res;

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_flat );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = var_fi;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = var_wrap;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrap" );
        exception_tb = NULL;

        exception_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_called_name_7 = var_wrap;

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrap" );
        exception_tb = NULL;

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_res;

    frame_function->f_lineno = 371;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
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
            if ( par_v )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_v,
                    par_v
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
                );

                assert( res == 0 );
            }

            if ( var_wrap )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrap,
                    var_wrap
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

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
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

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
                );

                assert( res == 0 );
            }

            if ( var_fi )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fi,
                    var_fi
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_7_diagflat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_wrap );
    var_wrap = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_fi );
    Py_DECREF( var_fi );
    var_fi = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_wrap );
    var_wrap = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_fi );
    var_fi = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_7_diagflat );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_8_tri( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_N = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *par_dtype = python_pars[ 3 ];
    PyObject *var_m = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_compare_left_1 = par_M;

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
    tmp_assign_source_1 = par_N;

    {
        PyObject *old = par_M;
        assert( old != NULL );
        par_M = tmp_assign_source_1;
        Py_INCREF( par_M );
        Py_DECREF( old );
    }

    branch_no_1:;
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_705226759249d96855498284e9928f57, module_numpy$lib$twodim_base );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_greater_equal );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_greater_equal );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "greater_equal" );
        exception_tb = NULL;

        exception_lineno = 414;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_outer );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 414;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_N;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain__min_int );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__min_int );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_min_int" );
        exception_tb = NULL;

        exception_lineno = 414;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_int_0;
    tmp_args_element_name_3 = par_N;

    frame_function->f_lineno = 414;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 414;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 414;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 414;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_operand_name_1 = par_k;

    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_left_name_1 = par_M;

    tmp_right_name_1 = par_k;

    tmp_tuple_element_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain__min_int );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__min_int );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_min_int" );
        exception_tb = NULL;

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_2 = par_k;

    tmp_args_element_name_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = par_M;

    tmp_right_name_2 = par_k;

    tmp_args_element_name_6 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 415;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 415;
    tmp_args_element_name_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 415;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_2;

    tmp_source_name_2 = var_m;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_astype );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_dtype;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 418;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_m;
        assert( old != NULL );
        var_m = tmp_assign_source_3;
        Py_DECREF( old );
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
            if ( par_N )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_N,
                    par_N
                );

                assert( res == 0 );
            }

            if ( par_M )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_M,
                    par_M
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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

            if ( var_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    var_m
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

    tmp_return_value = var_m;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_8_tri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_8_tri );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_9_tril( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *var_mask = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d16bd578c459d4e3265fc06676fde283, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_m;

    frame_function->f_lineno = 455;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tri );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tri );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tri" );
        exception_tb = NULL;

        exception_lineno = 456;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_k;

    tmp_dict_key_1 = const_str_plain_k;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = LOOKUP_BUILTIN( const_str_plain_bool );
    assert( tmp_dict_value_2 != NULL );
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_sliceslicedel_index_lower_1 = -2;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_1 = par_m;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 456;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg3_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_dircall_arg3_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 456;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_2 = impl___internal__$$$function_8_complex_call_helper_keywords_star_list( dir_call_args );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        goto frame_exception_exit_1;
    }
    assert( var_mask == NULL );
    var_mask = tmp_assign_source_2;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_where );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_where );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "where" );
        exception_tb = NULL;

        exception_lineno = 458;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_mask;

    tmp_args_element_name_3 = par_m;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_zeros );

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

        exception_lineno = 458;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = const_int_pos_1;
    tmp_source_name_2 = par_m;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 458;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 458;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
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
            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_9_tril );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_9_tril );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_10_triu( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *var_mask = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_247962001ef14f2e4f0b19c6fd181cbb, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 483;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_m;

    frame_function->f_lineno = 483;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tri );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tri );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tri" );
        exception_tb = NULL;

        exception_lineno = 484;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_left_name_1 = par_k;

    tmp_right_name_1 = const_int_pos_1;
    tmp_dict_value_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 484;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_k;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = LOOKUP_BUILTIN( const_str_plain_bool );
    assert( tmp_dict_value_2 != NULL );
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_sliceslicedel_index_lower_1 = -2;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_1 = par_m;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 484;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg3_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_dircall_arg3_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 484;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_2 = impl___internal__$$$function_8_complex_call_helper_keywords_star_list( dir_call_args );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 484;
        goto frame_exception_exit_1;
    }
    assert( var_mask == NULL );
    var_mask = tmp_assign_source_2;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_where );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_where );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "where" );
        exception_tb = NULL;

        exception_lineno = 486;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_mask;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_zeros );

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

        exception_lineno = 486;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = const_int_pos_1;
    tmp_source_name_2 = par_m;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 486;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_m;

    frame_function->f_lineno = 486;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;
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
            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_10_triu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_10_triu );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_11_vander( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_N = python_pars[ 1 ];
    PyObject *par_increasing = python_pars[ 2 ];
    PyObject *var_v = NULL;
    PyObject *var_tmp = NULL;
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
    PyObject *tmp_args_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_700ab8f97ec3f8dc210090b8f33c201a, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 562;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_x;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 563;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 563;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_885b311d1c2f49c5bf469abd4677324e;
    frame_function->f_lineno = 564;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 564;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_N;

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
    tmp_len_arg_1 = par_x;

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 566;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_N;
        assert( old != NULL );
        par_N = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "empty" );
        exception_tb = NULL;

        exception_lineno = 568;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_len_arg_2 = par_x;

    tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_N;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_promote_types );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_promote_types );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "promote_types" );
        exception_tb = NULL;

        exception_lineno = 568;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_x;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_args_element_name_3 != NULL );
    frame_function->f_lineno = 568;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 568;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    assert( var_v == NULL );
    var_v = tmp_assign_source_3;

    tmp_cond_value_1 = par_increasing;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_false_1;
    }
    else
    {
        goto condexpr_true_1;
    }
    condexpr_true_1:;
    tmp_subscribed_name_1 = var_v;

    tmp_subscript_name_1 = const_tuple_slice_none_none_none_slice_none_none_int_neg_1_tuple;
    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_4 = var_v;

    Py_INCREF( tmp_assign_source_4 );
    condexpr_end_1:;
    assert( var_tmp == NULL );
    var_tmp = tmp_assign_source_4;

    tmp_compare_left_3 = par_N;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_1 = const_int_pos_1;
    tmp_ass_subscribed_1 = var_tmp;

    tmp_ass_subscript_1 = const_tuple_slice_none_none_none_int_0_tuple;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 572;
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_compare_left_4 = par_N;

    tmp_compare_right_4 = const_int_pos_1;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 573;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_subscribed_name_2 = par_x;

    tmp_subscript_name_2 = const_tuple_slice_none_none_none_none_tuple;
    tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_tmp;

    tmp_ass_subscript_2 = const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_multiply );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_multiply );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "multiply" );
        exception_tb = NULL;

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_accumulate );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_subscribed_name_3 = var_tmp;

    tmp_subscript_name_3 = const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_subscribed_name_4 = var_tmp;

    tmp_subscript_name_4 = const_tuple_slice_none_none_none_slice_int_pos_1_none_none_tuple;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = const_int_pos_1;
    tmp_dict_key_3 = const_str_plain_axis;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 575;
    tmp_unused = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;

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
            if ( par_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
                );

                assert( res == 0 );
            }

            if ( par_N )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_N,
                    par_N
                );

                assert( res == 0 );
            }

            if ( par_increasing )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_increasing,
                    par_increasing
                );

                assert( res == 0 );
            }

            if ( var_v )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_v,
                    var_v
                );

                assert( res == 0 );
            }

            if ( var_tmp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tmp,
                    var_tmp
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

    tmp_return_value = var_v;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_11_vander );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)par_increasing );
    Py_DECREF( par_increasing );
    par_increasing = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_tmp );
    Py_DECREF( var_tmp );
    var_tmp = NULL;

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

    Py_XDECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)par_increasing );
    Py_DECREF( par_increasing );
    par_increasing = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_11_vander );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_12_histogram2d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_bins = python_pars[ 2 ];
    PyObject *par_range = python_pars[ 3 ];
    PyObject *par_normed = python_pars[ 4 ];
    PyObject *par_weights = python_pars[ 5 ];
    PyObject *var_histogramdd = NULL;
    PyObject *var_N = NULL;
    PyObject *var_xedges = NULL;
    PyObject *var_yedges = NULL;
    PyObject *var_hist = NULL;
    PyObject *var_edges = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9fae2987a293e1b4f5194b9d9a1fe615, module_numpy$lib$twodim_base );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_x )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_x,
            par_x
        );

        assert( res == 0 );
    }

    if ( par_y )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_y,
            par_y
        );

        assert( res == 0 );
    }

    if ( par_bins )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_bins,
            par_bins
        );

        assert( res == 0 );
    }

    if ( par_range )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_range,
            par_range
        );

        assert( res == 0 );
    }

    if ( par_normed )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_normed,
            par_normed
        );

        assert( res == 0 );
    }

    if ( par_weights )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_weights,
            par_weights
        );

        assert( res == 0 );
    }

    if ( var_histogramdd )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_histogramdd,
            var_histogramdd
        );

        assert( res == 0 );
    }

    if ( var_N )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_N,
            var_N
        );

        assert( res == 0 );
    }

    if ( var_xedges )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_xedges,
            var_xedges
        );

        assert( res == 0 );
    }

    if ( var_yedges )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_yedges,
            var_yedges
        );

        assert( res == 0 );
    }

    if ( var_hist )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_hist,
            var_hist
        );

        assert( res == 0 );
    }

    if ( var_edges )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_edges,
            var_edges
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 704;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_histogramdd_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 704;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_histogramdd );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 704;
        goto frame_exception_exit_1;
    }
    assert( var_histogramdd == NULL );
    var_histogramdd = tmp_assign_source_1;

    // Tried code:
    tmp_len_arg_1 = par_bins;

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        goto try_except_handler_2;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_2;

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
    tmp_compare_right_1 = PyExc_TypeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 708;
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
    tmp_assign_source_3 = const_int_pos_1;
    assert( var_N == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_N = tmp_assign_source_3;

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_12_histogram2d );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compexpr_left_1 = var_N;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "N" );
        exception_tb = NULL;

        exception_lineno = 711;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 711;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 711;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_2 = var_N;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "N" );
        exception_tb = NULL;

        exception_lineno = 711;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_int_pos_2;
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 711;
        goto frame_exception_exit_1;
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

        exception_lineno = 711;
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
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 712;
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = par_bins;

    tmp_args_element_name_2 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_args_element_name_2 != NULL );
    frame_function->f_lineno = 712;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 712;
        goto try_except_handler_3;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_4;

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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_5 = tmp_assign_unpack_1__assign_source;

    assert( var_xedges == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_xedges = tmp_assign_source_5;

    tmp_assign_source_6 = tmp_assign_unpack_1__assign_source;

    assert( var_yedges == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_yedges = tmp_assign_source_6;

    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_assign_source_7 = PyList_New( 2 );
    tmp_list_element_1 = var_xedges;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_7, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_yedges;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_7, 1, tmp_list_element_1 );
    {
        PyObject *old = par_bins;
        assert( old != NULL );
        par_bins = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_2:;
    // Tried code:
    tmp_called_name_2 = var_histogramdd;

    tmp_args_element_name_3 = PyList_New( 2 );
    tmp_list_element_2 = par_x;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_2 );
    tmp_list_element_2 = par_y;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_2 );
    tmp_args_element_name_4 = par_bins;

    tmp_args_element_name_5 = par_range;

    tmp_args_element_name_6 = par_normed;

    tmp_args_element_name_7 = par_weights;

    frame_function->f_lineno = 714;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 714;
        goto try_except_handler_4;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 714;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;

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


        exception_lineno = 714;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;

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


        exception_lineno = 714;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;

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
    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    assert( var_hist == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_hist = tmp_assign_source_11;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    assert( var_edges == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_edges = tmp_assign_source_12;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_hist;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_1 = var_edges;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 715;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_subscribed_name_2 = var_edges;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 715;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
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
            if ( par_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
                );

                assert( res == 0 );
            }

            if ( par_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    par_y
                );

                assert( res == 0 );
            }

            if ( par_bins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bins,
                    par_bins
                );

                assert( res == 0 );
            }

            if ( par_range )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_range,
                    par_range
                );

                assert( res == 0 );
            }

            if ( par_normed )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_normed,
                    par_normed
                );

                assert( res == 0 );
            }

            if ( par_weights )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_weights,
                    par_weights
                );

                assert( res == 0 );
            }

            if ( var_histogramdd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_histogramdd,
                    var_histogramdd
                );

                assert( res == 0 );
            }

            if ( var_N )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_N,
                    var_N
                );

                assert( res == 0 );
            }

            if ( var_xedges )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_xedges,
                    var_xedges
                );

                assert( res == 0 );
            }

            if ( var_yedges )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_yedges,
                    var_yedges
                );

                assert( res == 0 );
            }

            if ( var_hist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hist,
                    var_hist
                );

                assert( res == 0 );
            }

            if ( var_edges )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_edges,
                    var_edges
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_12_histogram2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_bins );
    Py_DECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    CHECK_OBJECT( (PyObject *)var_histogramdd );
    Py_DECREF( var_histogramdd );
    var_histogramdd = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_xedges );
    var_xedges = NULL;

    Py_XDECREF( var_yedges );
    var_yedges = NULL;

    CHECK_OBJECT( (PyObject *)var_hist );
    Py_DECREF( var_hist );
    var_hist = NULL;

    CHECK_OBJECT( (PyObject *)var_edges );
    Py_DECREF( var_edges );
    var_edges = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    Py_XDECREF( par_bins );
    par_bins = NULL;

    CHECK_OBJECT( (PyObject *)par_range );
    Py_DECREF( par_range );
    par_range = NULL;

    CHECK_OBJECT( (PyObject *)par_normed );
    Py_DECREF( par_normed );
    par_normed = NULL;

    CHECK_OBJECT( (PyObject *)par_weights );
    Py_DECREF( par_weights );
    par_weights = NULL;

    Py_XDECREF( var_histogramdd );
    var_histogramdd = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_xedges );
    var_xedges = NULL;

    Py_XDECREF( var_yedges );
    var_yedges = NULL;

    Py_XDECREF( var_hist );
    var_hist = NULL;

    Py_XDECREF( var_edges );
    var_edges = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_12_histogram2d );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_13_mask_indices( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_mask_func = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *var_m = NULL;
    PyObject *var_a = NULL;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_779a67812ff1b81eca6be99e71abbe47, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_ones );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ones );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ones" );
        exception_tb = NULL;

        exception_lineno = 783;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_args_element_name_2 != NULL );
    frame_function->f_lineno = 783;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 783;
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_1;

    tmp_called_name_2 = par_mask_func;

    tmp_args_element_name_3 = var_m;

    tmp_args_element_name_4 = par_k;

    frame_function->f_lineno = 784;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        goto frame_exception_exit_1;
    }
    assert( var_a == NULL );
    var_a = tmp_assign_source_2;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_where );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_where );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "where" );
        exception_tb = NULL;

        exception_lineno = 785;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = var_a;

    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_5 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 785;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
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
            if ( par_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    par_n
                );

                assert( res == 0 );
            }

            if ( par_mask_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mask_func,
                    par_mask_func
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
                );

                assert( res == 0 );
            }

            if ( var_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    var_m
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_13_mask_indices );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_mask_func );
    Py_DECREF( par_mask_func );
    par_mask_func = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_mask_func );
    Py_DECREF( par_mask_func );
    par_mask_func = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_13_mask_indices );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_14_tril_indices( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *par_m = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_196d5ca18e1faa4bcbabc87b4c3e7efd, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_where );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_where );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "where" );
        exception_tb = NULL;

        exception_lineno = 865;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tri );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tri );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tri" );
        exception_tb = NULL;

        exception_lineno = 865;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_m;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_k;

    tmp_dict_key_1 = const_str_plain_k;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = LOOKUP_BUILTIN( const_str_plain_bool );
    assert( tmp_dict_value_2 != NULL );
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 865;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 865;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 865;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 865;
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
            if ( par_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    par_n
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
                );

                assert( res == 0 );
            }

            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_14_tril_indices );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_14_tril_indices );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_15_tril_indices_from( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_33e83f91e422c141c1ecb48634687e29, module_numpy$lib$twodim_base );
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
    tmp_source_name_1 = par_arr;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 891;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 891;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_eb4014155cbc2dd5702b264661c1d3cc;
    frame_function->f_lineno = 892;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 892;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tril_indices );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tril_indices );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tril_indices" );
        exception_tb = NULL;

        exception_lineno = 893;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_2 = par_arr;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 893;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_neg_2;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 893;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_k;

    tmp_dict_key_1 = const_str_plain_k;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_3 = par_arr;

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 893;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_neg_1;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 893;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_m;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 893;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 893;
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
            if ( par_arr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arr,
                    par_arr
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_15_tril_indices_from );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_15_tril_indices_from );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_16_triu_indices( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *par_m = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f3acb6cbe4bda7587a4b3adb6edc5a5, module_numpy$lib$twodim_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_where );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_where );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "where" );
        exception_tb = NULL;

        exception_lineno = 975;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tri );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tri );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tri" );
        exception_tb = NULL;

        exception_lineno = 975;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_m;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_left_name_1 = par_k;

    tmp_right_name_1 = const_int_pos_1;
    tmp_dict_value_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 975;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_k;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = LOOKUP_BUILTIN( const_str_plain_bool );
    assert( tmp_dict_value_2 != NULL );
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 975;
    tmp_operand_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 975;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 975;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 975;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 975;
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
            if ( par_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    par_n
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
                );

                assert( res == 0 );
            }

            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_16_triu_indices );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_16_triu_indices );
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


static PyObject *impl_numpy$lib$twodim_base$$$function_17_triu_indices_from( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_k = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3ae744f97c2fe7bcc2aa5cd40409a979, module_numpy$lib$twodim_base );
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
    tmp_source_name_1 = par_arr;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1005;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1005;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_eb4014155cbc2dd5702b264661c1d3cc;
    frame_function->f_lineno = 1006;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1006;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_triu_indices );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_triu_indices );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "triu_indices" );
        exception_tb = NULL;

        exception_lineno = 1007;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_2 = par_arr;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 1007;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_neg_2;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 1007;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_k;

    tmp_dict_key_1 = const_str_plain_k;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_3 = par_arr;

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 1007;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_neg_1;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 1007;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_m;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 1007;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1007;
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
            if ( par_arr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arr,
                    par_arr
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_17_triu_indices_from );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$twodim_base$$$function_17_triu_indices_from );
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



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_10_triu( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_10_triu,
        const_str_plain_triu,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_247962001ef14f2e4f0b19c6fd181cbb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_cc6303726f55ab460dd88e247a539612
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_11_vander( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_11_vander,
        const_str_plain_vander,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_700ab8f97ec3f8dc210090b8f33c201a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_1ff58fa2c03e82b2c700a4f839185785
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_12_histogram2d( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_12_histogram2d,
        const_str_plain_histogram2d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9fae2987a293e1b4f5194b9d9a1fe615,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_6e306213669fa0ddc468fc2df65a334c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_13_mask_indices( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_13_mask_indices,
        const_str_plain_mask_indices,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_779a67812ff1b81eca6be99e71abbe47,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_b31c9a93a972930d3159d97af9da2764
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_14_tril_indices( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_14_tril_indices,
        const_str_plain_tril_indices,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_196d5ca18e1faa4bcbabc87b4c3e7efd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_8db7deb73518d5eb9428b5e789f98f81
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_15_tril_indices_from( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_15_tril_indices_from,
        const_str_plain_tril_indices_from,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_33e83f91e422c141c1ecb48634687e29,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_b873592a5374a505cacad96d2e4d5e42
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_16_triu_indices( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_16_triu_indices,
        const_str_plain_triu_indices,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f3acb6cbe4bda7587a4b3adb6edc5a5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_0211a23b139de09dee8b6a9b3989d52e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_17_triu_indices_from( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_17_triu_indices_from,
        const_str_plain_triu_indices_from,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3ae744f97c2fe7bcc2aa5cd40409a979,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_7dd65e6a290c972121c6fc07e4d2cce6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_1__min_int(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_1__min_int,
        const_str_plain__min_int,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_71201ff26b46c286f7c4ee8298cd72d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_92cf51be16d6040287733b53c7c5c077
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_2_fliplr(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_2_fliplr,
        const_str_plain_fliplr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_66223ac2d494d4189321d5075b79c3b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_5bb997ec596102019e0cf142d2253c7f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_3_flipud(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_3_flipud,
        const_str_plain_flipud,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f809bf034a8276716d253c01b480771,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_190674ab1b0b99a621e1d58e97ef6a4b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_4_rot90( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_4_rot90,
        const_str_plain_rot90,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d373e5779f096ab7257a92aeac04713d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_f5eca5122a41cbaf6abb2803de371c2e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_5_eye( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_5_eye,
        const_str_plain_eye,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_96a10eac246ab99316389084cb16ba12,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_7db8ae6f206bed689d3ca7f4f98b34b5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_6_diag( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_6_diag,
        const_str_plain_diag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a34e3113f4547a9025e0b6e3af872a49,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_e522dd1f79eb6d4a886c917f60259711
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_7_diagflat( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_7_diagflat,
        const_str_plain_diagflat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_96ea0be6de47bfca2aea38b5ef135b68,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_b0b889e3bdec64e5d710c2982d3c9612
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_8_tri( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_8_tri,
        const_str_plain_tri,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_705226759249d96855498284e9928f57,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_4f2f674019dc13ca45a44400ce8f4112
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$twodim_base$$$function_9_tril( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$twodim_base$$$function_9_tril,
        const_str_plain_tril,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d16bd578c459d4e3265fc06676fde283,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$twodim_base,
        const_str_digest_c0f60b876c7992a38ad195b64138caa9
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$twodim_base =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.twodim_base",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$twodim_base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$twodim_base );
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

    // puts( "in initnumpy$lib$twodim_base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$twodim_base = Py_InitModule4(
        "numpy.lib.twodim_base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$twodim_base = PyModule_Create( &mdef_numpy$lib$twodim_base );
#endif

    moduledict_numpy$lib$twodim_base = (PyDictObject *)((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;

    CHECK_OBJECT( module_numpy$lib$twodim_base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4dee642e949d4b9ad453719dec9278da, module_numpy$lib$twodim_base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$twodim_base );

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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_defaults_10;
    PyObject *tmp_defaults_11;
    PyObject *tmp_defaults_12;
    PyObject *tmp_defaults_13;
    PyObject *tmp_defaults_14;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_b1884aa3c33c7c5579d0253f1c770327;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e9231c485329377742d1fbf215226e45;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_afe7e4878d88f80d42c599774e17ec2e, module_numpy$lib$twodim_base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_1, tmp_import_globals_1, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_asanyarray );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_2, tmp_import_globals_2, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_arange );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_3, tmp_import_globals_3, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_zeros );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_4, tmp_import_globals_4, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_greater_equal );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_greater_equal, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_5, tmp_import_globals_5, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_multiply );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_multiply, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_6, tmp_import_globals_6, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ones );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_ones, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_7, tmp_import_globals_7, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_8, tmp_import_globals_8, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_where );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_where, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_9, tmp_import_globals_9, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_int8 );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int8, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_10, tmp_import_globals_10, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_int16 );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int16, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_11, tmp_import_globals_11, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_int32 );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int32, tmp_assign_source_16 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_12, tmp_import_globals_12, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_int64 );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int64, tmp_assign_source_17 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_13, tmp_import_globals_13, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_empty );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_18 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_14, tmp_import_globals_14, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_promote_types );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_promote_types, tmp_assign_source_19 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_15, tmp_import_globals_15, const_tuple_1d52c955a5be8eef041323d06326c517_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_diagonal );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_diagonal, tmp_assign_source_20 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$lib$twodim_base)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_iinfo_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_iinfo );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_iinfo, tmp_assign_source_21 );
    tmp_assign_source_22 = LIST_COPY( const_list_9682bd0fceceb984d4c7136d9fb7127b_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_iinfo );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "iinfo" );
        exception_tb = NULL;

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int8 );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int8 );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "int8" );
        exception_tb = NULL;

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i1, tmp_assign_source_23 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_iinfo );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "iinfo" );
        exception_tb = NULL;

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int16 );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int16 );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "int16" );
        exception_tb = NULL;

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i2, tmp_assign_source_24 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_iinfo );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "iinfo" );
        exception_tb = NULL;

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_int32 );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int32 );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "int32" );
        exception_tb = NULL;

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_i4, tmp_assign_source_25 );

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
    tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_1__min_int(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain__min_int, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_2_fliplr(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_fliplr, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_3_flipud(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_flipud, tmp_assign_source_28 );
    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_4_rot90( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_rot90, tmp_assign_source_29 );
    tmp_defaults_2 = PyTuple_New( 3 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_1 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_5_eye( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_30 );
    tmp_defaults_3 = const_tuple_int_0_tuple;
    tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_6_diag( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_diag, tmp_assign_source_31 );
    tmp_defaults_4 = const_tuple_int_0_tuple;
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_7_diagflat( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_diagflat, tmp_assign_source_32 );
    tmp_defaults_5 = PyTuple_New( 3 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_5, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_5, 2, tmp_tuple_element_2 );
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_8_tri( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tri, tmp_assign_source_33 );
    tmp_defaults_6 = const_tuple_int_0_tuple;
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_9_tril( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tril, tmp_assign_source_34 );
    tmp_defaults_7 = const_tuple_int_0_tuple;
    tmp_assign_source_35 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_10_triu( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_triu, tmp_assign_source_35 );
    tmp_defaults_8 = const_tuple_none_false_tuple;
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_11_vander( INCREASE_REFCOUNT( tmp_defaults_8 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_vander, tmp_assign_source_36 );
    tmp_defaults_9 = const_tuple_int_pos_10_none_false_none_tuple;
    tmp_assign_source_37 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_12_histogram2d( INCREASE_REFCOUNT( tmp_defaults_9 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_histogram2d, tmp_assign_source_37 );
    tmp_defaults_10 = const_tuple_int_0_tuple;
    tmp_assign_source_38 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_13_mask_indices( INCREASE_REFCOUNT( tmp_defaults_10 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_mask_indices, tmp_assign_source_38 );
    tmp_defaults_11 = const_tuple_int_0_none_tuple;
    tmp_assign_source_39 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_14_tril_indices( INCREASE_REFCOUNT( tmp_defaults_11 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tril_indices, tmp_assign_source_39 );
    tmp_defaults_12 = const_tuple_int_0_tuple;
    tmp_assign_source_40 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_15_tril_indices_from( INCREASE_REFCOUNT( tmp_defaults_12 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_tril_indices_from, tmp_assign_source_40 );
    tmp_defaults_13 = const_tuple_int_0_none_tuple;
    tmp_assign_source_41 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_16_triu_indices( INCREASE_REFCOUNT( tmp_defaults_13 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_triu_indices, tmp_assign_source_41 );
    tmp_defaults_14 = const_tuple_int_0_tuple;
    tmp_assign_source_42 = MAKE_FUNCTION_numpy$lib$twodim_base$$$function_17_triu_indices_from( INCREASE_REFCOUNT( tmp_defaults_14 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$twodim_base, (Nuitka_StringObject *)const_str_plain_triu_indices_from, tmp_assign_source_42 );

    return MOD_RETURN_VALUE( module_numpy$lib$twodim_base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
